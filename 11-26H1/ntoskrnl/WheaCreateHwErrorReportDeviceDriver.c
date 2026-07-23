/*
 * XREFs of WheaCreateHwErrorReportDeviceDriver @ 0x1406D9140
 * Callers:
 *     WheaReportFatalHwErrorDeviceDriverEx @ 0x1406D9430 (WheaReportFatalHwErrorDeviceDriverEx.c)
 *     WheaReportHwErrorDeviceDriverEx @ 0x1406D9550 (WheaReportHwErrorDeviceDriverEx.c)
 * Callees:
 *     WheapInitErrorReportDeviceDriver @ 0x1406D98F4 (WheapInitErrorReportDeviceDriver.c)
 */

__int64 __fastcall WheaCreateHwErrorReportDeviceDriver(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // [rsp+40h] [rbp+18h] BYREF

  v1 = 0LL;
  v3 = 0LL;
  if ( (int)WheapInitErrorReportDeviceDriver(a1, &v3) >= 0 )
    return v3;
  return v1;
}
