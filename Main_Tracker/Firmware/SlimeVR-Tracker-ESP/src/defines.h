/*
    SlimeVR Code is placed under the MIT license
    Copyright (c) 2021 Eiren Rain

    Permission is hereby granted, free of charge, to any person obtaining a copy
    of this software and associated documentation files (the "Software"), to deal
    in the Software without restriction, including without limitation the rights
    to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
    copies of the Software, and to permit persons to whom the Software is
    furnished to do so, subject to the following conditions:

    The above copyright notice and this permission notice shall be included in
    all copies or substantial portions of the Software.

    THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
    IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
    FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
    AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
    LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
    OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
    THE SOFTWARE.
*/
// ================================================
// See docs for configuration options and examples:
// https://docs.slimevr.dev/configuring-project.html#configuring-definesh
// ================================================

// Set parameters of IMU and board used
#define IMU IMU_MPU6050
//#define SECOND_IMU IMU_MPU6050
#define BOARD BOARD_WEMOSD1MINI
#define IMU_ROTATION DEG_0
#define SECOND_IMU_ROTATION DEG_180

// Battery monitoring options (comment to disable):
// BAT_EXTERNAL for ADC pin, BAT_INTERNAL for internal - can detect only low battery, BAT_MCP3021 for external ADC
#define BATTERY_MONITOR BAT_EXTERNAL
#define BATTERY_SHIELD_RESISTANCE 220 //130k BatteryShield, 180k SlimeVR or fill in external resistor value in kOhm

#define PIN_IMU_SDA D2
#define PIN_IMU_SCL D1
#define PIN_IMU_INT D5
#define PIN_IMU_INT_2 D6
#define PIN_BATTERY_LEVEL A0