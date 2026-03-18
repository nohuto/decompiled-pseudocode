/*
 * XREFs of WheapErrorHandleIsValid @ 0x1406D567C
 * Callers:
 *     WheaAddHwErrorReportSectionDeviceDriver @ 0x1406D4F60 (WheaAddHwErrorReportSectionDeviceDriver.c)
 *     WheaHwErrorReportAbandonDeviceDriver @ 0x1406D5090 (WheaHwErrorReportAbandonDeviceDriver.c)
 *     WheaHwErrorReportGetLogDataBufferDeviceDriver @ 0x1406D50C0 (WheaHwErrorReportGetLogDataBufferDeviceDriver.c)
 *     WheaHwErrorReportMarkAsCriticalDeviceDriver @ 0x1406D5110 (WheaHwErrorReportMarkAsCriticalDeviceDriver.c)
 *     WheaHwErrorReportSetFatalSeverityDeviceDriver @ 0x1406D5140 (WheaHwErrorReportSetFatalSeverityDeviceDriver.c)
 *     WheaHwErrorReportSetSeverityDeviceDriver @ 0x1406D51F0 (WheaHwErrorReportSetSeverityDeviceDriver.c)
 *     WheaHwErrorReportSubmitDeviceDriver @ 0x1406D5230 (WheaHwErrorReportSubmitDeviceDriver.c)
 * Callees:
 *     <none>
 */

bool __fastcall WheapErrorHandleIsValid(_DWORD *a1)
{
  return a1 && *a1 == 1095059543;
}
