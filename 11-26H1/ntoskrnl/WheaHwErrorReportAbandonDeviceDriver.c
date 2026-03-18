/*
 * XREFs of WheaHwErrorReportAbandonDeviceDriver @ 0x1406D5090
 * Callers:
 *     WheaReportFatalHwErrorDeviceDriverEx @ 0x1406D5350 (WheaReportFatalHwErrorDeviceDriverEx.c)
 *     WheaReportHwErrorDeviceDriverEx @ 0x1406D5470 (WheaReportHwErrorDeviceDriverEx.c)
 * Callees:
 *     WheapErrorHandleIsValid @ 0x1406D567C (WheapErrorHandleIsValid.c)
 *     WheapFreeDriverPacketBuffer @ 0x1406D5698 (WheapFreeDriverPacketBuffer.c)
 */

__int64 WheaHwErrorReportAbandonDeviceDriver()
{
  void *v0; // rcx

  if ( !(unsigned __int8)WheapErrorHandleIsValid() )
    return 3221225480LL;
  WheapFreeDriverPacketBuffer(v0);
  return 0LL;
}
