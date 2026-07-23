/*
 * XREFs of CcCachemapUninitWorkerThread @ 0x140386E50
 * Callers:
 *     <none>
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402FF500 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     CcWriteBehind @ 0x14038513C (CcWriteBehind.c)
 *     CcFreeWorkQueueEntry @ 0x1403853FC (CcFreeWorkQueueEntry.c)
 *     CcFindNextWorkQueueEntry @ 0x1403870A0 (CcFindNextWorkQueueEntry.c)
 *     CcDereferencePartitionAndPrivateVolumeCacheMap @ 0x14039DEC0 (CcDereferencePartitionAndPrivateVolumeCacheMap.c)
 *     CcPerfLogWorkItemDequeue @ 0x1404B8D3C (CcPerfLogWorkItemDequeue.c)
 *     CcPerfLogWorkItemComplete @ 0x1404BBC30 (CcPerfLogWorkItemComplete.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     CcDebugExceptionFilter @ 0x1405B3524 (CcDebugExceptionFilter.c)
 */

__int64 __fastcall CcCachemapUninitWorkerThread(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rdi
  __int64 v4; // r13
  __int64 v5; // r15
  __int64 v6; // r14
  unsigned __int64 *v7; // r15
  unsigned __int8 CurrentIrql; // si
  __int64 v9; // rdx
  __int64 NextWorkQueueEntry; // rsi
  _QWORD *v11; // rcx
  __int64 v13; // [rsp+58h] [rbp-60h] BYREF
  __int64 v14; // [rsp+60h] [rbp-58h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-50h] BYREF
  __int64 v16; // [rsp+C0h] [rbp+8h]
  __int64 v17; // [rsp+C8h] [rbp+10h]

  v3 = (_QWORD *)a1;
  v13 = 0LL;
  v4 = a1;
  *(_QWORD *)&LockHandle.OldIrql = 0LL;
  v14 = 0LL;
  if ( *(_DWORD *)(a1 + 32) != 5 )
    KeBugCheckEx(0x34u, 0x1CF2uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v5 = *(_QWORD *)(a1 + 56);
  v16 = v5;
  v6 = *(_QWORD *)(a1 + 72);
  v17 = *(_QWORD *)(a1 + 64);
  while ( 1 )
  {
    v7 = (unsigned __int64 *)(v5 + 832);
    LockHandle.LockQueue.Lock = v7;
    LockHandle.LockQueue.Next = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = 2;
      LOBYTE(a1) = CurrentIrql;
      KiRaiseIrqlProcessIrqlFlags(a1, a2);
    }
    LockHandle.OldIrql = CurrentIrql;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      v9 = _InterlockedExchange64((volatile __int64 *)v7, (__int64)&LockHandle);
      if ( v9 )
        KxWaitForLockOwnerShip((volatile signed __int64)&LockHandle, v9, a3);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, (volatile __int64 *)v7);
    }
    NextWorkQueueEntry = CcFindNextWorkQueueEntry(a1, v6, v6 + 120);
    if ( !NextWorkQueueEntry )
      break;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( (xmmword_140FC0C10 & 0x20000) != 0 )
      CcPerfLogWorkItemDequeue(NextWorkQueueEntry);
    if ( *(_DWORD *)(NextWorkQueueEntry + 128) == 2 )
    {
      v14 = NextWorkQueueEntry;
      CcWriteBehind(*(_QWORD *)(NextWorkQueueEntry + 16), (__int64)&v13, v6);
    }
    v5 = v16;
    if ( (xmmword_140FC0C10 & 0x20000) != 0 )
      CcPerfLogWorkItemComplete(NextWorkQueueEntry);
    CcFreeWorkQueueEntry((PSLIST_ENTRY)NextWorkQueueEntry);
  }
  v11 = *(_QWORD **)(v6 + 168);
  if ( *v11 != v6 + 160 )
    __fastfail(3u);
  *v3 = v6 + 160;
  *(_QWORD *)(v4 + 8) = v11;
  *v11 = v4;
  *(_QWORD *)(v6 + 168) = v4;
  --*(_DWORD *)(v6 + 176);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return CcDereferencePartitionAndPrivateVolumeCacheMap(v16, v17);
}
