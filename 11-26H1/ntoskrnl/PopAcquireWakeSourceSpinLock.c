/*
 * XREFs of PopAcquireWakeSourceSpinLock @ 0x1404F2B08
 * Callers:
 *     PopHandleWakeSources @ 0x140BFF52C (PopHandleWakeSources.c)
 *     PopProcessDeviceWakeSource @ 0x140BFF7FC (PopProcessDeviceWakeSource.c)
 *     PopNewWakeInfo @ 0x140C0F218 (PopNewWakeInfo.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 */

void __fastcall PopAcquireWakeSourceSpinLock(PKLOCK_QUEUE_HANDLE LockHandle)
{
  KeAcquireInStackQueuedSpinLock(&PopWakeSourceLock, LockHandle);
}
