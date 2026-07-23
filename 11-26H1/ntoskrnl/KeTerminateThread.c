/*
 * XREFs of KeTerminateThread @ 0x140203468
 * Callers:
 *     PspExitThread @ 0x14094B14C (PspExitThread.c)
 * Callees:
 *     KiAcquireProcessLockExclusive @ 0x140203770 (KiAcquireProcessLockExclusive.c)
 *     KiSetThreadSchedulingGroup @ 0x140203854 (KiSetThreadSchedulingGroup.c)
 *     KiCheckIfStackExpandCalloutActive @ 0x140203990 (KiCheckIfStackExpandCalloutActive.c)
 *     ?KiAbpPreCleanupThreadState@AutoBoost@@YAXPEAU_KTHREAD@@@Z @ 0x1402039C4 (-KiAbpPreCleanupThreadState@AutoBoost@@YAXPEAU_KTHREAD@@@Z.c)
 *     ExQueueWorkItemEx @ 0x140203FD0 (ExQueueWorkItemEx.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x1402249B0 (KiActivateWaiterQueueWithNoLocks.c)
 *     KiProcessThreadWaitList @ 0x14023D710 (KiProcessThreadWaitList.c)
 *     KiSwapThread @ 0x14023DA00 (KiSwapThread.c)
 *     KiTryUnwaitThread @ 0x140272B24 (KiTryUnwaitThread.c)
 *     KiInsertQueueInternal @ 0x1402743F0 (KiInsertQueueInternal.c)
 *     KiAcquireKobjectLockSafe @ 0x140276CD0 (KiAcquireKobjectLockSafe.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1402FF4B0 (KxAcquireQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     KeDisableProfiling @ 0x14050E830 (KeDisableProfiling.c)
 */

__int64 __fastcall KeTerminateThread(LegacyAutoBoost *this)
{
  __int64 v2; // rdx
  __int64 v3; // rdi
  char *v4; // rsi
  __int64 v5; // rdx
  _QWORD *v6; // rax
  __int64 v7; // rcx
  char **v8; // rax
  __int64 v9; // rdx
  struct _KPRCB *CurrentPrcb; // rsi
  struct _KTHREAD *v11; // rdx
  _QWORD *v12; // rdi
  _QWORD *v13; // r14
  _QWORD *v14; // rax
  char v15; // cl
  __int64 v16; // r8
  struct _LIST_ENTRY **v17; // r8
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *v19; // rcx
  __int64 v20; // r8
  signed __int32 v22[8]; // [rsp+0h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF
  int v24; // [rsp+60h] [rbp+8h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  LOBYTE(v24) = 0;
  KiCheckIfStackExpandCalloutActive((ULONG_PTR)this);
  v2 = *((_QWORD *)this + 45);
  if ( v2 )
    KeDisableProfiling(this, *(_QWORD *)(v2 + 8));
  v3 = *((_QWORD *)this + 68);
  *((_BYTE *)this + 643) = 22;
  KiAcquireProcessLockExclusive(v3, &v24);
  v4 = (char *)this + 760;
  if ( *((_QWORD *)this + 95) == *((_QWORD *)this + 96) )
  {
    LockHandle.LockQueue.Next = 0LL;
    LockHandle.LockQueue.Lock = &KiProcessListLock;
    KxAcquireQueuedSpinLock(&LockHandle);
    v5 = *(_QWORD *)(v3 + 272);
    v6 = *(_QWORD **)(v3 + 280);
    if ( *(_QWORD *)(v5 + 8) != v3 + 272 || *v6 != v3 + 272 )
LABEL_18:
      __fastfail(3u);
    *v6 = v5;
    *(_QWORD *)(v5 + 8) = v6;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  }
  KiAcquireKobjectLockSafe(v3);
  v7 = *(_QWORD *)v4;
  v8 = (char **)*((_QWORD *)this + 96);
  if ( *(char **)(*(_QWORD *)v4 + 8LL) != v4 || *v8 != v4 )
    goto LABEL_18;
  *v8 = (char *)v7;
  *(_QWORD *)(v7 + 8) = v8;
  _InterlockedAnd((volatile signed __int32 *)v3, 0xFFFFFF7F);
  if ( *((_QWORD *)this + 13) )
    KiSetThreadSchedulingGroup((struct _KTHREAD *)this, 0LL);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + 64));
  v9 = *((_QWORD *)this + 29);
  if ( v9 )
    KiActivateWaiterQueueWithNoLocks(this, v9, (char *)this + 520);
  CurrentPrcb = KeGetCurrentPrcb();
  KiAcquireKobjectLockSafe(this);
  v12 = (_QWORD *)((char *)this + 8);
  *((_DWORD *)this + 1) = 1;
  v13 = (_QWORD *)*((_QWORD *)this + 1);
  while ( v13 != v12 )
  {
    v14 = v13;
    v13 = (_QWORD *)*v13;
    v15 = *((_BYTE *)v14 + 16);
    switch ( v15 )
    {
      case 1:
        v16 = *((unsigned __int16 *)v14 + 9);
        goto LABEL_17;
      case 2:
        *((_BYTE *)v14 + 17) = 5;
        KiInsertQueueInternal(v14[3], v14);
        break;
      case 4:
        *((_BYTE *)v14 + 17) = 5;
        *((_DWORD *)this + 1) = 0;
        KiInsertQueueDpc(v14[3], 0);
        break;
      default:
        v16 = 256LL;
LABEL_17:
        KiTryUnwaitThread(CurrentPrcb, v14, v16, 0LL);
        break;
    }
  }
  *((_QWORD *)this + 2) = (char *)this + 8;
  *v12 = v12;
  _InterlockedAnd((volatile signed __int32 *)this, 0xFFFFFF7F);
  *((_BYTE *)this + 388) = 4;
  if ( CurrentPrcb->DeferredReadyListHead.Next )
    KiProcessThreadWaitList(CurrentPrcb, 1LL, 0LL);
  v17 = (struct _LIST_ENTRY **)((char *)this + 1256);
  _m_prefetchw(&PsAltSystemCallRegistrationLock.WaitBlockFill11[144]);
  Flink = PsAltSystemCallRegistrationLock.WaitBlock[3].WaitListEntry.Flink;
  do
  {
    *v17 = Flink;
    v19 = Flink;
    Flink = (struct _LIST_ENTRY *)_InterlockedCompareExchange64(
                                    (volatile signed __int64 *)&PsAltSystemCallRegistrationLock.WaitBlock[3].WaitListEntry.Flink,
                                    (signed __int64)v17,
                                    (signed __int64)Flink);
  }
  while ( Flink != v19 );
  if ( Flink )
  {
    if ( PsAltSystemCallRegistrationLock.WaitBlock[2].SparePtr
      && _interlockedbittestandreset(
           (volatile signed __int32 *)&PsAltSystemCallRegistrationLock.WaitBlockFill11[136],
           0) )
    {
      v20 = 0xFFFFLL;
      goto LABEL_25;
    }
  }
  else
  {
    v20 = 0xFFFFFFFFLL;
LABEL_25:
    if ( !(unsigned __int8)ExQueueWorkItemEx(&PsAltSystemCallRegistrationLock.WaitBlockFill11[112], 2LL, v20) )
      _interlockedbittestandset((volatile signed __int32 *)&PsAltSystemCallRegistrationLock.WaitBlockFill11[136], 0);
  }
  if ( (KiAbpGlobalState & 1) != 0 )
    AutoBoost::KiAbpPreCleanupThreadState(this, v11);
  _InterlockedOr(v22, 0);
  if ( *((_QWORD *)this + 8) )
  {
    v24 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)this + 16, 0LL) )
    {
      do
        KeYieldProcessorEx(&v24);
      while ( *((_QWORD *)this + 8) );
    }
    *((_QWORD *)this + 8) = 0LL;
  }
  return KiSwapThread(this, CurrentPrcb);
}
