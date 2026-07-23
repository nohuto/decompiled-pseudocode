/*
 * XREFs of KeRemovePriQueue @ 0x1403EF700
 * Callers:
 *     ExpWorkerThread @ 0x1403EF030 (ExpWorkerThread.c)
 * Callees:
 *     KiRcuCheckQuiescent @ 0x1402237A0 (KiRcuCheckQuiescent.c)
 *     KiCommitThreadWait @ 0x140224340 (KiCommitThreadWait.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x1402249B0 (KiActivateWaiterQueueWithNoLocks.c)
 *     KiUpdateTotalCyclesCurrentThread @ 0x140228920 (KiUpdateTotalCyclesCurrentThread.c)
 *     KiQueryQuantumReset @ 0x14023B390 (KiQueryQuantumReset.c)
 *     KiComputeThreadPriority @ 0x14023B414 (KiComputeThreadPriority.c)
 *     KiProcessThreadWaitList @ 0x14023D710 (KiProcessThreadWaitList.c)
 *     KiDeliverApc @ 0x140245350 (KiDeliverApc.c)
 *     KiFastExitThreadWait @ 0x1402459A0 (KiFastExitThreadWait.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiAcquireKobjectLockSafe @ 0x140276CD0 (KiAcquireKobjectLockSafe.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiSetBasePriorityAndClearDecrement @ 0x140309580 (KiSetBasePriorityAndClearDecrement.c)
 *     KiProcessDeferredReadyList @ 0x14037E6D0 (KiProcessDeferredReadyList.c)
 *     KiSetPriorityThread @ 0x140381000 (KiSetPriorityThread.c)
 *     KiAttemptFastRemovePriQueue @ 0x1403F0270 (KiAttemptFastRemovePriQueue.c)
 *     KiAdjustRealtimePriorityFloor @ 0x1403F0430 (KiAdjustRealtimePriorityFloor.c)
 *     KiPerformWaitDeferredWork @ 0x1403F08D0 (KiPerformWaitDeferredWork.c)
 *     EtwTracePriQDequeueWork @ 0x1403F0A98 (EtwTracePriQDequeueWork.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140531F20 (KiRemoveSystemWorkPriorityKick.c)
 */

__int64 __fastcall KeRemovePriQueue(ULONG_PTR a1, char a2, char a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v5; // ebx
  char v7; // r14
  __int64 v8; // r8
  __int64 v9; // r12
  unsigned __int64 WaitIrql; // rbp
  char v11; // r15
  unsigned int v12; // esi
  __int64 v13; // rcx
  __int64 v14; // r12
  int v15; // r13d
  __int64 v16; // rsi
  int v17; // eax
  __int64 v18; // r9
  int v19; // eax
  unsigned __int64 Queue; // rdx
  _LIST_ENTRY *p_QueueListEntry; // rsi
  __int64 BasePriority; // rax
  struct _LIST_ENTRY *v23; // rcx
  unsigned __int64 v24; // r12
  unsigned __int8 CurrentIrql; // bp
  int Alerted; // ecx
  __int64 v27; // rax
  __int64 v28; // rdx
  unsigned __int8 v30; // si
  $08E725EC6134F01F525383E5528526A8 *v31; // rbp
  __int64 v32; // r9
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rcx
  unsigned int v35; // esi
  __int64 v36; // rcx
  struct _LIST_ENTRY *v37; // rax
  struct _LIST_ENTRY *v38; // rcx
  __int64 ThreadTimerDelay; // rdx
  __int64 v40; // r14
  __int64 QueuePriority; // rax
  unsigned int v42; // esi
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned __int64 updated; // rax
  __int64 v45; // r9
  struct _KPRCB *v46; // rcx
  unsigned __int64 CycleTime; // rbp
  unsigned __int32 *SchedulerAssist; // r8
  unsigned __int64 v49; // rcx
  struct _KPRCB *v50; // rsi
  int v51; // edx
  unsigned __int32 v52; // eax
  __int64 v53; // rdx
  unsigned __int32 v54; // ett
  _DISPATCHER_HEADER *volatile v55; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rcx
  int v58; // [rsp+30h] [rbp-68h] BYREF
  struct _SINGLE_LIST_ENTRY v59; // [rsp+38h] [rbp-60h] BYREF
  __int64 v60; // [rsp+40h] [rbp-58h]
  int v62; // [rsp+A8h] [rbp+10h] BYREF
  char v63; // [rsp+B0h] [rbp+18h]
  int v64; // [rsp+B8h] [rbp+20h]

  v63 = a3;
  LOBYTE(v62) = a2;
  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  v60 = 0LL;
  v58 = 0;
  v7 = a2;
  if ( _bittestandreset((signed __int32 *)&CurrentThread->116, 2u) )
  {
    v5 = (2 * _bittestandreset((signed __int32 *)&CurrentThread->116, 0x10u)) | 1;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    CurrentThread->WaitIrql = CurrentIrql;
  }
  KiRcuCheckQuiescent((__int64)KeGetCurrentPrcb());
  if ( a4 )
  {
    if ( *(int *)(a4 + 4) < 0 )
    {
      v24 = MEMORY[0xFFFFF78000000008] - CurrentThread->RelativeTimerBias - MEMORY[0xFFFFF780000003B0];
      v64 = 2;
      v9 = v24 - *(_QWORD *)a4;
    }
    else
    {
      v9 = *(_QWORD *)a4;
      v64 = 1;
    }
    v60 = v9;
  }
  else
  {
    v64 = 0;
  }
  while ( 1 )
  {
    WaitIrql = CurrentThread->WaitIrql;
    v11 = v63;
    v59.Next = 0LL;
    while ( 1 )
    {
      CurrentThread->MiscFlags &= ~0x10u;
      CurrentThread->WaitRegister.Flags = 0;
      CurrentThread->WaitMode = v7;
      if ( v11 )
        CurrentThread->MiscFlags |= 0x10u;
      v12 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
        {
          if ( (++v12 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v12);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( CurrentThread->ThreadLock );
      }
      if ( !CurrentThread->ApcState.KernelApcPending || CurrentThread->SpecialApcDisable || (_BYTE)WaitIrql )
        break;
      CurrentThread->ThreadLock = 0LL;
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), 1u);
      __writecr8(1uLL);
      KiDeliverApc(0, 0LL, 0LL);
      v13 = KeGetCurrentIrql();
      if ( (_BYTE)v13 != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(v13, 2LL);
      CurrentThread->WaitIrql = 0;
    }
    v14 = v60;
    v15 = v64;
    if ( v11 )
    {
      Alerted = CurrentThread->Alerted;
      if ( _bittest(&Alerted, v7) )
      {
        v19 = 257;
        CurrentThread->Alerted = Alerted & ~(1 << v7);
        v16 = 257LL;
      }
      else if ( !v7
             || (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink == &CurrentThread->ApcStateFill[16] )
      {
        if ( (Alerted & 1) != 0 )
        {
          v19 = 257;
          CurrentThread->Alerted = Alerted & 0xFE;
          v16 = 257LL;
        }
        else
        {
          v19 = 0;
          v16 = 0LL;
        }
      }
      else
      {
        CurrentThread->ApcState.UserApcPendingAll |= 2u;
        v19 = 192;
        v16 = 192LL;
      }
      if ( !v19 )
      {
LABEL_39:
        CurrentThread->WaitBlockFill6[68] = 5;
        CurrentThread->WaitReason = 15;
        v7 = v62;
        CurrentThread->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
        CurrentThread->ThreadLock = 0LL;
        goto LABEL_40;
      }
    }
    else
    {
      if ( (CurrentThread->ApcState.UserApcPendingAll & 2) == 0 || !v7 )
        goto LABEL_39;
      v16 = 192LL;
    }
    v59.Next = 0LL;
    v17 = KiPerformWaitDeferredWork((ULONG_PTR)CurrentThread);
    CurrentThread->ThreadLock = 0LL;
    if ( v17 )
    {
      KiProcessDeferredReadyList(KeGetCurrentPrcb(), &v59, (unsigned __int8)WaitIrql, v18);
    }
    else
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), WaitIrql);
      __writecr8(WaitIrql);
    }
    if ( v16 )
    {
LABEL_64:
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
        EtwTracePriQDequeueWork(CurrentThread, v16);
      return v16;
    }
LABEL_40:
    Queue = (unsigned __int64)CurrentThread->Queue;
    if ( a1 != Queue )
    {
      p_QueueListEntry = &CurrentThread->QueueListEntry;
      if ( Queue )
        KiActivateWaiterQueueWithNoLocks((__int64)CurrentThread, Queue, &CurrentThread->QueueListEntry.Flink);
      KiAcquireKobjectLockSafe((volatile signed __int32 *)a1, Queue, v8);
      LODWORD(v59.Next) = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v59);
        while ( CurrentThread->ThreadLock );
      }
      CurrentThread->Queue = (_DISPATCHER_HEADER *volatile)a1;
      BasePriority = CurrentThread->BasePriority;
      CurrentThread->QueuePriority = BasePriority;
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 4 * BasePriority + 536));
      CurrentThread->ThreadLock = 0LL;
      v23 = *(struct _LIST_ENTRY **)(a1 + 680);
      if ( v23->Flink != (struct _LIST_ENTRY *)(a1 + 672) )
        goto LABEL_48;
      p_QueueListEntry->Flink = (struct _LIST_ENTRY *)(a1 + 672);
      CurrentThread->QueueListEntry.Blink = v23;
      v23->Flink = p_QueueListEntry;
      *(_QWORD *)(a1 + 680) = p_QueueListEntry;
      _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    }
    v31 = &CurrentThread->320;
    CurrentThread->WaitBlock[0].WaitType = 3;
    CurrentThread->WaitBlockFill4[17] = 4;
    CurrentThread->WaitBlock[0].WaitKey = 128;
    CurrentThread->WaitBlock[0].Object = (PVOID)a1;
    KiAcquireKobjectLockSafe((volatile signed __int32 *)a1, Queue, v8);
    if ( *(_DWORD *)(a1 + 4) )
    {
      LODWORD(v59.Next) = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v59);
        while ( CurrentThread->ThreadLock );
      }
      v40 = KiAttemptFastRemovePriQueue(a1);
      if ( v40 )
      {
        QueuePriority = (unsigned __int8)CurrentThread->QueuePriority;
        if ( (_DWORD)QueuePriority != v58 )
        {
          v51 = CurrentThread->QueuePriority & 0x100;
          if ( !v51 )
          {
            v55 = CurrentThread->Queue;
            _InterlockedDecrement((volatile signed __int32 *)&v55[22].WaitListHead + QueuePriority);
            _InterlockedIncrement((volatile signed __int32 *)&v55[22].WaitListHead + v58);
          }
          CurrentThread->QueuePriority = v51 | (unsigned __int8)v58;
        }
        CurrentThread->Saturation = 0;
        KiSetBasePriorityAndClearDecrement((__int64)CurrentThread, (char *)&v58);
        KiAdjustRealtimePriorityFloor((ULONG_PTR)CurrentThread);
        v42 = KiComputeThreadPriority(CurrentThread, 0, 0);
        if ( v42 != CurrentThread->Priority )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          if ( CurrentPrcb->NestingLevel )
          {
            CycleTime = CurrentThread->CycleTime;
          }
          else
          {
            _disable();
            updated = KiUpdateTotalCyclesCurrentThread((__int64)CurrentPrcb, (__int64)CurrentThread, 0LL);
            v46 = KeGetCurrentPrcb();
            CycleTime = updated;
            SchedulerAssist = (unsigned __int32 *)v46->SchedulerAssist;
            if ( SchedulerAssist )
            {
              _m_prefetchw(SchedulerAssist);
              v52 = *SchedulerAssist;
              do
              {
                v53 = v52;
                LODWORD(v53) = v52 & 0xFFDFFFFF;
                v54 = v52;
                v52 = _InterlockedCompareExchange((volatile signed __int32 *)SchedulerAssist, v52 & 0xFFDFFFFF, v52);
              }
              while ( v54 != v52 );
              if ( (v52 & 0x200000) != 0 )
                KiRemoveSystemWorkPriorityKick(v46, v53, SchedulerAssist, v45);
            }
            _enable();
          }
          v49 = CycleTime + KiCyclesPerClockQuantum * (unsigned int)KiQueryQuantumReset((__int64)CurrentThread);
          if ( (*((_DWORD *)&CurrentThread->0 + 1) & 0x20) != 0 )
            _interlockedbittestandreset((volatile signed __int32 *)&CurrentThread->116 + 1, 5u);
          CurrentThread->QuantumTarget = v49;
          KiSetPriorityThread((unsigned __int64)CurrentThread, 0LL, (unsigned __int64 *)v42);
        }
        CurrentThread->ThreadLock = 0LL;
        goto LABEL_112;
      }
      v7 = v62;
      CurrentThread->ThreadLock = 0LL;
    }
    if ( (*(_BYTE *)(a1 + 1) & 1) != 0 )
      break;
    v33 = v14;
    if ( v15 == 2 )
    {
      ThreadTimerDelay = CurrentThread->ThreadTimerDelay;
      v34 = MEMORY[0xFFFFF78000000008] - CurrentThread->RelativeTimerBias - MEMORY[0xFFFFF780000003B0];
      v33 = v14;
      if ( CurrentThread->WaitMode
        && !CurrentThread->WaitBlock[3].SpareLong
        && !CurrentThread->WaitIrql
        && !CurrentThread->ApcState.InProgressFlags
        && (_DWORD)ThreadTimerDelay )
      {
        v33 = v14 + ThreadTimerDelay;
      }
    }
    else
    {
      if ( !v15 )
        goto LABEL_81;
      if ( !v14 )
        goto LABEL_133;
      v34 = MEMORY[0xFFFFF78000000014];
    }
    if ( v34 > v33 )
    {
LABEL_133:
      v40 = 258LL;
      goto LABEL_112;
    }
LABEL_81:
    v35 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      do
      {
        if ( (++v35 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v35);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( CurrentThread->ThreadLock );
    }
    v36 = (unsigned __int8)CurrentThread->QueuePriority;
    CurrentThread->QueuePriority = v36 | 0x100;
    v37 = (struct _LIST_ENTRY *)(a1 + 8);
    _InterlockedDecrement((volatile signed __int32 *)(a1 + 4 * v36 + 536));
    CurrentThread->ThreadLock = 0LL;
    v38 = *(struct _LIST_ENTRY **)(a1 + 8);
    if ( v38->Blink != (struct _LIST_ENTRY *)(a1 + 8) )
      goto LABEL_48;
    v31->WaitBlock[0].WaitListEntry.Flink = v38;
    CurrentThread->WaitBlock[0].WaitListEntry.Blink = v37;
    v38->Blink = (struct _LIST_ENTRY *)v31;
    v37->Flink = (struct _LIST_ENTRY *)v31;
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    CurrentThread->WaitBlockCount = 1;
    v27 = KiCommitThreadWait((LegacyAutoBoost *)CurrentThread, (__int64 *)&CurrentThread->320, v15, v14, v5, 0LL);
    v5 = 0;
    v16 = v27;
    CurrentThread->WaitReason = 0;
    if ( v27 != 256 )
      goto LABEL_64;
    v30 = KeGetCurrentIrql();
    if ( v30 != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(v28) = 2;
      KiRaiseIrqlProcessIrqlFlags(v30, v28);
    }
    CurrentThread->WaitIrql = v30;
  }
  v62 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
  {
    do
      KeYieldProcessorEx(&v62);
    while ( CurrentThread->ThreadLock );
  }
  if ( CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)a1 )
  {
    CurrentThread->Queue = 0LL;
    Flink = CurrentThread->QueueListEntry.Flink;
    Blink = CurrentThread->QueueListEntry.Blink;
    if ( Flink->Blink != &CurrentThread->QueueListEntry || Blink->Flink != &CurrentThread->QueueListEntry )
LABEL_48:
      __fastfail(3u);
    Blink->Flink = Flink;
    Flink->Blink = Blink;
  }
  CurrentThread->ThreadLock = 0LL;
  v40 = 128LL;
LABEL_112:
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  CurrentThread->WaitReason = 0;
  v50 = KeGetCurrentPrcb();
  if ( v50->DeferredReadyListHead.Next )
    KiProcessThreadWaitList((struct _SINGLE_LIST_ENTRY *)v50, 1LL, 0LL, 2);
  KiFastExitThreadWait(v50, (ULONG_PTR)CurrentThread, v5, v32);
  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
    EtwTracePriQDequeueWork(CurrentThread, v40);
  return v40;
}
