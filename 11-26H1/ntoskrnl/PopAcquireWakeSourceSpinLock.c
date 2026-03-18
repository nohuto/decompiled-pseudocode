/*
 * XREFs of PopAcquireWakeSourceSpinLock @ 0x1404F94F8
 * Callers:
 *     PopHandleWakeSources @ 0x140BF952C (PopHandleWakeSources.c)
 *     PopProcessDeviceWakeSource @ 0x140BF97FC (PopProcessDeviceWakeSource.c)
 *     PopNewWakeInfo @ 0x140C09008 (PopNewWakeInfo.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1402B4730 (KeAcquireInStackQueuedSpinLock.c)
 */

void __fastcall PopAcquireWakeSourceSpinLock(PKLOCK_QUEUE_HANDLE LockHandle)
{
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)&stru_140F11D08.Teb, LockHandle);
}
