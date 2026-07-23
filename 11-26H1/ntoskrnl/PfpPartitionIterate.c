/*
 * XREFs of PfpPartitionIterate @ 0x1403843E0
 * Callers:
 *     PfFileInfoNotify @ 0x140303740 (PfFileInfoNotify.c)
 *     PfpPartitionIterateAndCheckCanAnyDoAccessLogging @ 0x140602D74 (PfpPartitionIterateAndCheckCanAnyDoAccessLogging.c)
 *     PfpProcessScenarioPhase @ 0x140B1F0C8 (PfpProcessScenarioPhase.c)
 *     PfPowerActionNotify @ 0x140C0D3C0 (PfPowerActionNotify.c)
 * Callees:
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     ExAcquireRundownProtectionCacheAware @ 0x1402D25C0 (ExAcquireRundownProtectionCacheAware.c)
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402FF500 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     PsDereferencePartition @ 0x1403836F0 (PsDereferencePartition.c)
 *     PfpPartitionGetNext @ 0x140384620 (PfpPartitionGetNext.c)
 *     PfpPartitionReferenceParentSafe @ 0x140384710 (PfpPartitionReferenceParentSafe.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall PfpPartitionIterate(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // edi
  char v5; // r15
  unsigned __int8 CurrentIrql; // bl
  __int64 v7; // rdx
  struct _KTHREAD *i; // rsi
  __int64 Next; // rbx
  __int64 v11; // r9
  signed __int64 *v12; // r8
  signed __int64 v13; // rdx
  unsigned __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r14
  int v17; // ebp
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  v3 = 0;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)&stru_140E67200.InitialStack;
  v5 = a2;
  LockHandle.LockQueue.Next = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
  }
  LockHandle.OldIrql = CurrentIrql;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v7 = _InterlockedExchange64((volatile __int64 *)&stru_140E67200.InitialStack, (__int64)&LockHandle);
    if ( v7 )
      KxWaitForLockOwnerShip((volatile signed __int64)&LockHandle, v7, a3);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, (volatile __int64 *)&stru_140E67200.InitialStack);
  }
  for ( i = (struct _KTHREAD *)stru_140E67200.StackLimit; ; i = *(struct _KTHREAD **)&i->Header.Lock )
  {
    if ( i == (struct _KTHREAD *)&stru_140E67200.StackLimit )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      return 0LL;
    }
    Next = (__int64)&i[-1].Padding[2];
    if ( ExAcquireRundownProtectionCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)i[-1].Padding[4]) )
      break;
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( i == (struct _KTHREAD *)24 )
    return 0LL;
  while ( 1 )
  {
    if ( ((v5 & 1) == 0 || *(_DWORD *)(Next + 600) < *(_DWORD *)(Next + 604))
      && ((v5 & 2) == 0 || *(_DWORD *)(Next + 608) < *(_DWORD *)(Next + 612))
      && ((v5 & 4) == 0 || (*(_DWORD *)(Next + 76) & 1) == 0) )
    {
      v16 = PfpPartitionReferenceParentSafe(Next);
      if ( v16 )
      {
        v17 = guard_dispatch_icall_no_overrides(Next, a3, v15);
        PsDereferencePartition(v16);
        if ( v17 < 0 && (v3 & 0x80000000) == 0 )
          v3 = v17;
        if ( (v5 & 8) != 0 && v17 >= 0 )
          break;
      }
    }
    Next = PfpPartitionGetNext(Next);
    if ( !Next )
      return v3;
  }
  if ( Next )
  {
    v11 = *(_QWORD *)(Next + 16);
    v12 = (signed __int64 *)(*(_QWORD *)v11 + *(_DWORD *)(v11 + 16) * (KeGetPcr()->Prcb.Number % *(_DWORD *)(v11 + 20)));
    _m_prefetchw(v12);
    while ( 1 )
    {
      while ( 1 )
      {
        v13 = *v12;
        if ( (*v12 & 1) != 0 )
          break;
        if ( v13 == _InterlockedCompareExchange64(v12, v13 - 2, v13) )
          return v3;
      }
      if ( v13 != 1 )
        break;
      v12 = *(signed __int64 **)v11;
    }
    v14 = v13 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( _InterlockedExchangeAdd64((volatile signed __int64 *)v14, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
      KeSetEvent((PRKEVENT)(v14 + 8), 0, 0);
  }
  return v3;
}
