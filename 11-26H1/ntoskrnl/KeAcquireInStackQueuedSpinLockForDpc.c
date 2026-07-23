/*
 * XREFs of KeAcquireInStackQueuedSpinLockForDpc @ 0x140473070
 * Callers:
 *     KeRemoveByKeyDeviceQueue @ 0x140472BD0 (KeRemoveByKeyDeviceQueue.c)
 *     KeRemoveByKeyDeviceQueueIfBusy @ 0x140472CD0 (KeRemoveByKeyDeviceQueueIfBusy.c)
 *     KeInsertByKeyDeviceQueue @ 0x140472F90 (KeInsertByKeyDeviceQueue.c)
 *     DifKeAcquireInStackQueuedSpinLockForDpcWrapper @ 0x140663870 (DifKeAcquireInStackQueuedSpinLockForDpcWrapper.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1402FF400 (KeAcquireInStackQueuedSpinLock.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402FF500 (KiAcquireQueuedSpinLockInstrumented.c)
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
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
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
