/*
 * XREFs of RaidAdapterAcquireStartIoLock @ 0x14000ECB0
 * Callers:
 *     StorAcquireSpinLockEx @ 0x140001700 (StorAcquireSpinLockEx.c)
 *     StorPortNotification @ 0x14000DE70 (StorPortNotification.c)
 *     RaidAdapterResetBus @ 0x1400349BC (RaidAdapterResetBus.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1400364C4 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     RaidInitializePerfOptsPassive @ 0x140054268 (RaidInitializePerfOptsPassive.c)
 * Callees:
 *     RaidAdapterAcquireInterruptLock @ 0x14000CD40 (RaidAdapterAcquireInterruptLock.c)
 */

void __fastcall RaidAdapterAcquireStartIoLock(__int64 a1, struct _KLOCK_QUEUE_HANDLE *a2)
{
  if ( *(_DWORD *)(a1 + 888) )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 880), a2);
  else
    LOBYTE(a2->LockQueue.Next) = RaidAdapterAcquireInterruptLock(a1);
}
