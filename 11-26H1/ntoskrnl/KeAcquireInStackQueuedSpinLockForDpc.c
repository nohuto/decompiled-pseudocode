/*
 * XREFs of KeAcquireInStackQueuedSpinLockForDpc @ 0x140479710
 * Callers:
 *     KeRemoveByKeyDeviceQueue @ 0x140479270 (KeRemoveByKeyDeviceQueue.c)
 *     KeRemoveByKeyDeviceQueueIfBusy @ 0x140479370 (KeRemoveByKeyDeviceQueueIfBusy.c)
 *     KeInsertByKeyDeviceQueue @ 0x140479630 (KeInsertByKeyDeviceQueue.c)
 *     DifKeAcquireInStackQueuedSpinLockForDpcWrapper @ 0x14065FC90 (DifKeAcquireInStackQueuedSpinLockForDpcWrapper.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x1402B29C0 (KxWaitForLockOwnerShip.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402B4730 (KeAcquireInStackQueuedSpinLock.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402B4830 (KiAcquireQueuedSpinLockInstrumented.c)
 */

void __stdcall KeAcquireInStackQueuedSpinLockForDpc(PKSPIN_LOCK SpinLock, PKLOCK_QUEUE_HANDLE LockHandle)
{
  __int64 DpcRequestSummary; // r8
  __int64 v4; // rdx

  DpcRequestSummary = (unsigned int)KeGetCurrentPrcb()->DpcRequestSummary;
  if ( (DpcRequestSummary & 0x10000) != 0 )
  {
    KeAcquireInStackQueuedSpinLock(SpinLock, LockHandle);
  }
  else
  {
    LockHandle->LockQueue.Lock = SpinLock;
    LockHandle->LockQueue.Next = 0LL;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
    {
      v4 = _InterlockedExchange64((volatile __int64 *)SpinLock, (__int64)LockHandle);
      if ( v4 )
        KxWaitForLockOwnerShip((volatile signed __int64)LockHandle, v4, DpcRequestSummary);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented((__int64)LockHandle, (volatile __int64 *)SpinLock);
    }
  }
}
