/*
 * XREFs of PopReleaseWakeSourceSpinLock @ 0x1404FF4EC
 * Callers:
 *     PopHandleWakeSources @ 0x140BF952C (PopHandleWakeSources.c)
 *     PopProcessDeviceWakeSource @ 0x140BF97FC (PopProcessDeviceWakeSource.c)
 *     PopNewWakeInfo @ 0x140C09008 (PopNewWakeInfo.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1402B98C0 (KeReleaseInStackQueuedSpinLock.c)
 */

void __fastcall PopReleaseWakeSourceSpinLock(struct _KLOCK_QUEUE_HANDLE *a1)
{
  KeReleaseInStackQueuedSpinLock(a1);
}
