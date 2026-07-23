/*
 * XREFs of ExpRemovePoolTrackerExpansion @ 0x140347130
 * Callers:
 *     ExRemovePoolTag @ 0x140346850 (ExRemovePoolTag.c)
 *     ExpFreeHeapSpecialPool @ 0x140347BA8 (ExpFreeHeapSpecialPool.c)
 *     ExInsertPoolTag @ 0x14034CE1C (ExInsertPoolTag.c)
 *     ExFreeHeapPool @ 0x1403A9910 (ExFreeHeapPool.c)
 *     ExPoolCleanupExpansionTable @ 0x140524D04 (ExPoolCleanupExpansionTable.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402FF500 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall ExpRemovePoolTrackerExpansion(int a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  __int16 v4; // bp
  __int64 v5; // r14
  unsigned __int8 CurrentIrql; // di
  __int64 v8; // rdx
  unsigned int i; // edx
  ULONG_PTR v10; // r8
  int v11; // ebp
  __int64 v12; // rdx
  __int64 v13; // rax
  signed __int64 v14; // r9
  unsigned __int64 v15; // r14
  volatile signed __int64 *v16; // rax
  signed __int64 v17; // rax
  unsigned __int64 v18; // r10
  signed __int64 v19; // rcx
  signed __int64 v20; // rtt
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v3 = 0LL;
  LockHandle.LockQueue.Lock = &ExpTaggedPoolLock;
  LockHandle.LockQueue.Next = 0LL;
  v4 = a3;
  v5 = a2;
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
    v8 = _InterlockedExchange64((volatile __int64 *)&ExpTaggedPoolLock, (__int64)&LockHandle);
    if ( v8 )
      KxWaitForLockOwnerShip((volatile signed __int64)&LockHandle, v8, a3);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, (volatile __int64 *)&ExpTaggedPoolLock);
  }
  for ( i = 0; ; ++i )
  {
    if ( i >= (unsigned __int64)PoolTrackTableExpansionSize )
    {
LABEL_21:
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v15 = -v5;
      v16 = (volatile signed __int64 *)(*(&stru_140EFF2C0.ThreadLock + KeGetPcr()->Prcb.Number)
                                      + 80LL * (unsigned int)(LODWORD(stru_140EFF2C0.StackLimit) - 1));
      if ( (v4 & 0x100) != 0 )
      {
        _InterlockedIncrement64(v16 + 6);
        _InterlockedAdd64(v16 + 4, v15);
      }
      else
      {
        _InterlockedIncrement64(v16 + 3);
        _InterlockedAdd64(v16 + 1, v15);
      }
      return;
    }
    v10 = PoolTrackTableExpansion + 80LL * i;
    if ( *(_DWORD *)v10 == a1 )
      break;
    if ( !*(_DWORD *)v10 )
      goto LABEL_21;
  }
  v11 = v4 & 0x100;
  v12 = 8LL;
  if ( v11 )
    v12 = 32LL;
  v13 = 24LL;
  if ( v11 )
    v13 = 48LL;
  _InterlockedIncrement64((volatile signed __int64 *)(v13 + v10));
  v14 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v12 + v10), -v5);
  if ( *(_QWORD *)(v10 + 72) )
  {
    LOBYTE(v3) = v11 == 0LL;
    if ( (*(_BYTE *)(v10 + 8 * v3 + 56) & 1) == 0 )
    {
      v17 = *(_QWORD *)(v10 + 8 * v3 + 56);
      v18 = 128LL;
      if ( ((4 * v5 + 63) & 0xFFFFFFFFFFFFFFC0uLL) != 0x40 )
        v18 = (4 * v5 + 63) & 0xFFFFFFFFFFFFFFC0uLL;
      while ( 1 )
      {
        v19 = v18 + v14;
        if ( v14 >= v17 || v19 >= v17 )
          break;
        v20 = v17;
        v17 = _InterlockedCompareExchange64((volatile signed __int64 *)(v10 + 8 * v3 + 56), v19, v17);
        if ( v20 == v17 )
        {
          v21 = v17 - v19;
          v22 = -v21;
          if ( v21 > 0 )
            v22 = v21;
          v23 = *(_QWORD *)(v10 + 72) + 24 * v3;
          if ( *(_QWORD *)(v23 + 16) || *(_QWORD *)(v23 + 24) )
            _InterlockedAdd64((volatile signed __int64 *)(v23 + 32), -v22);
          break;
        }
        v14 = *(_QWORD *)(v12 + v10);
      }
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
}
