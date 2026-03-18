/*
 * XREFs of XilCommonBuffer_ReleaseBuffer @ 0x140036CA0
 * Callers:
 *     Controller_WdfEvtDeviceSelfManagedIoCleanup @ 0x1400796B0 (Controller_WdfEvtDeviceSelfManagedIoCleanup.c)
 *     Interrupter_PrepareInterrupter @ 0x14007BEE4 (Interrupter_PrepareInterrupter.c)
 *     Interrupter_ReleaseInterrupter @ 0x14007C448 (Interrupter_ReleaseInterrupter.c)
 * Callees:
 *     CommonBuffer_ReleaseBuffer @ 0x14003D258 (CommonBuffer_ReleaseBuffer.c)
 */

__int64 __fastcall XilCommonBuffer_ReleaseBuffer(__int64 a1)
{
  return CommonBuffer_ReleaseBuffer(a1);
}
