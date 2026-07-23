/*
 * XREFs of PopReleaseWakeSourceSpinLock @ 0x1404F8CDC
 * Callers:
 *     PopHandleWakeSources @ 0x140BFF52C (PopHandleWakeSources.c)
 *     PopProcessDeviceWakeSource @ 0x140BFF7FC (PopProcessDeviceWakeSource.c)
 *     PopNewWakeInfo @ 0x140C0F218 (PopNewWakeInfo.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 */

void __fastcall PopReleaseWakeSourceSpinLock(struct _KLOCK_QUEUE_HANDLE *a1)
{
  KeReleaseInStackQueuedSpinLock(a1);
}
