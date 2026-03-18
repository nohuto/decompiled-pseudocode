/*
 * XREFs of WheapErrorHandleIsValid @ 0x14065076C
 * Callers:
 *     WheaAddHwErrorReportSectionDeviceDriver @ 0x140650040 (WheaAddHwErrorReportSectionDeviceDriver.c)
 *     WheaHwErrorReportAbandonDeviceDriver @ 0x140650180 (WheaHwErrorReportAbandonDeviceDriver.c)
 *     WheaHwErrorReportGetLogDataBufferDeviceDriver @ 0x1406501B0 (WheaHwErrorReportGetLogDataBufferDeviceDriver.c)
 *     WheaHwErrorReportMarkAsCriticalDeviceDriver @ 0x140650200 (WheaHwErrorReportMarkAsCriticalDeviceDriver.c)
 *     WheaHwErrorReportSetFatalSeverityDeviceDriver @ 0x140650230 (WheaHwErrorReportSetFatalSeverityDeviceDriver.c)
 *     WheaHwErrorReportSetSeverityDeviceDriver @ 0x1406502E0 (WheaHwErrorReportSetSeverityDeviceDriver.c)
 *     WheaHwErrorReportSubmitDeviceDriver @ 0x140650320 (WheaHwErrorReportSubmitDeviceDriver.c)
 * Callees:
 *     <none>
 */

bool __fastcall WheapErrorHandleIsValid(_DWORD *a1)
{
  return a1 && *a1 == 1095059543;
}
