/*
 * XREFs of PfpPartitionGetNext @ 0x140384620
 * Callers:
 *     PfFileInfoNotify @ 0x140303740 (PfFileInfoNotify.c)
 *     PfpPartitionIterate @ 0x1403843E0 (PfpPartitionIterate.c)
 * Callees:
 *     ExAcquireRundownProtectionCacheAware @ 0x1402D25C0 (ExAcquireRundownProtectionCacheAware.c)
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402FF500 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     ExReleaseRundownProtectionCacheAware @ 0x140447B00 (ExReleaseRundownProtectionCacheAware.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

unsigned __int64 *__fastcall PfpPartitionGetNext(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 *v3; // rdi
  __int64 v4; // rsi
  unsigned __int8 CurrentIrql; // bl
  __int64 v6; // rdx
  unsigned __int64 *v7; // rbx
  unsigned __int64 *v8; // rbp
  unsigned __int64 *v9; // rdi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v3 = (unsigned __int64 *)(*(_QWORD *)(a1 + 8) + 888LL);
  LockHandle.LockQueue.Lock = v3;
  v4 = a1;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  LockHandle.LockQueue.Next = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  LockHandle.OldIrql = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v6 = _InterlockedExchange64((volatile __int64 *)v3, (__int64)&LockHandle);
    if ( v6 )
      KxWaitForLockOwnerShip((volatile signed __int64)&LockHandle, v6, a3);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, (volatile __int64 *)v3);
  }
  v7 = *(unsigned __int64 **)(v4 + 24);
  v8 = v3 + 1;
  while ( v7 != v8 )
  {
    v9 = v7 - 3;
    if ( ExAcquireRundownProtectionCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)*(v7 - 1)) )
      goto LABEL_11;
    v7 = (unsigned __int64 *)*v7;
  }
  v9 = 0LL;
LABEL_11:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v4 + 16));
  return v9;
}
