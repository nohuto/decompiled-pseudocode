/*
 * XREFs of WheaHwErrorReportAbandonDeviceDriver @ 0x140650180
 * Callers:
 *     WheaReportFatalHwErrorDeviceDriverEx @ 0x140650440 (WheaReportFatalHwErrorDeviceDriverEx.c)
 *     WheaReportHwErrorDeviceDriverEx @ 0x140650560 (WheaReportHwErrorDeviceDriverEx.c)
 * Callees:
 *     WheapErrorHandleIsValid @ 0x14065076C (WheapErrorHandleIsValid.c)
 *     WheapFreeDriverPacketBuffer @ 0x140650788 (WheapFreeDriverPacketBuffer.c)
 */

__int64 WheaHwErrorReportAbandonDeviceDriver()
{
  void *v0; // rcx

  if ( !(unsigned __int8)WheapErrorHandleIsValid() )
    return 3221225480LL;
  WheapFreeDriverPacketBuffer(v0);
  return 0LL;
}
