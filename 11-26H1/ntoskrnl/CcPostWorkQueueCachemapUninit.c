/*
 * XREFs of CcPostWorkQueueCachemapUninit @ 0x140384FA0
 * Callers:
 *     CcPostWorkQueue @ 0x1403881A0 (CcPostWorkQueue.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402FF500 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140304580 (KeReleaseInStackQueuedSpinLock.c)
 *     ExQueueWorkItemToPartition @ 0x140384E80 (ExQueueWorkItemToPartition.c)
 *     CcReferencePrivateVolumeCacheMap @ 0x1403853D0 (CcReferencePrivateVolumeCacheMap.c)
 *     CcPerfLogWorkItemEnqueue @ 0x14038B878 (CcPerfLogWorkItemEnqueue.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall CcPostWorkQueueCachemapUninit(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r15
  __int64 v5; // r13
  _QWORD *v6; // rdi
  __int64 v7; // r12
  _QWORD *v9; // rbx
  unsigned __int8 CurrentIrql; // bp
  __int64 v11; // rdx
  _QWORD *v12; // rax
  _QWORD *v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  v4 = a1[17];
  v5 = a1[19];
  v6 = 0LL;
  v7 = a1[18];
  memset(&LockHandle, 0, sizeof(LockHandle));
  v9 = a1;
  if ( (xmmword_140FC0C10 & 0x20000) != 0 )
  {
    LOBYTE(a4) = 1;
    CcPerfLogWorkItemEnqueue(
      a2,
      a1,
      0LL,
      a4,
      LockHandle.LockQueue.Next,
      LockHandle.LockQueue.Lock,
      *(_QWORD *)&LockHandle.OldIrql);
  }
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v4 + 832);
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
    v11 = _InterlockedExchange64((volatile __int64 *)(v4 + 832), (__int64)&LockHandle);
    if ( v11 )
      KxWaitForLockOwnerShip((volatile signed __int64)&LockHandle, v11, a3);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, (volatile __int64 *)(v4 + 832));
  }
  v12 = *(_QWORD **)(a2 + 8);
  if ( *v12 != a2 )
LABEL_11:
    __fastfail(3u);
  *v9 = a2;
  v13 = (_QWORD *)(v5 + 160);
  v9[1] = v12;
  *v12 = v9;
  *(_QWORD *)(a2 + 8) = v9;
  v14 = *(_QWORD **)(v5 + 160);
  if ( v14 != (_QWORD *)(v5 + 160) )
  {
    if ( (_QWORD *)v14[1] != v13 )
      goto LABEL_11;
    v15 = *v14;
    if ( *(_QWORD **)(*v14 + 8LL) != v14 )
      goto LABEL_11;
    *v13 = v15;
    v6 = v14;
    *(_QWORD *)(v15 + 8) = v13;
    ++*(_DWORD *)(v5 + 176);
    if ( _InterlockedIncrement64((volatile signed __int64 *)(v4 + 1296)) <= 1 )
      __fastfail(0xEu);
    CcReferencePrivateVolumeCacheMap(v7);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v6 )
  {
    *v6 = 0LL;
    ExQueueWorkItemToPartition(v6, 0, *(_DWORD *)(v5 + 24));
  }
}
