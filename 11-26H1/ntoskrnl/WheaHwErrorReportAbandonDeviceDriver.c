/*
 * XREFs of WheaHwErrorReportAbandonDeviceDriver @ 0x1406D9170
 * Callers:
 *     WheaReportFatalHwErrorDeviceDriverEx @ 0x1406D9430 (WheaReportFatalHwErrorDeviceDriverEx.c)
 *     WheaReportHwErrorDeviceDriverEx @ 0x1406D9550 (WheaReportHwErrorDeviceDriverEx.c)
 * Callees:
 *     WheapErrorHandleIsValid @ 0x1406D975C (WheapErrorHandleIsValid.c)
 *     WheapFreeDriverPacketBuffer @ 0x1406D9778 (WheapFreeDriverPacketBuffer.c)
 */

__int64 WheaHwErrorReportAbandonDeviceDriver()
{
  void *v0; // rcx

  if ( !(unsigned __int8)WheapErrorHandleIsValid() )
    return 3221225480LL;
  WheapFreeDriverPacketBuffer(v0);
  return 0LL;
}
