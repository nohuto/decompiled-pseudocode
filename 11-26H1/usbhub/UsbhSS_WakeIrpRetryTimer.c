/*
 * XREFs of UsbhSS_WakeIrpRetryTimer @ 0x14005E6A0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhQueueWorkItemWithRetry @ 0x14000FB5C (UsbhQueueWorkItemWithRetry.c)
 */

__int64 __fastcall UsbhSS_WakeIrpRetryTimer(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  return UsbhQueueWorkItemWithRetry(a2, 0LL, (__int64)UsbhSS_PdoWakeWorker, 0LL, a4, 0, 0x77505353u);
}
