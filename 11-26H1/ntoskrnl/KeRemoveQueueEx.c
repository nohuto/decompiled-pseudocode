/*
 * XREFs of KeRemoveQueueEx @ 0x1402224F0
 * Callers:
 *     IoRemoveIoCompletion @ 0x140222160 (IoRemoveIoCompletion.c)
 *     KeRemoveQueue @ 0x14048B120 (KeRemoveQueue.c)
 *     FsRtlWorkerThread @ 0x1405BA900 (FsRtlWorkerThread.c)
 *     IopPassiveInterruptRealtimeWorker @ 0x1405DC630 (IopPassiveInterruptRealtimeWorker.c)
 *     ExpWorkerFactoryManagerThread @ 0x1406D73E0 (ExpWorkerFactoryManagerThread.c)
 *     EtwpReceiveReplyDataBlock @ 0x140B0F318 (EtwpReceiveReplyDataBlock.c)
 * Callees:
 *     KiRcuCheckQuiescent @ 0x1402237A0 (KiRcuCheckQuiescent.c)
 *     KiCommitThreadWait @ 0x140224340 (KiCommitThreadWait.c)
 *     KiActivateWaiterQueueWithNoLocks @ 0x1402249B0 (KiActivateWaiterQueueWithNoLocks.c)
 *     KiProcessThreadWaitList @ 0x14023D710 (KiProcessThreadWaitList.c)
 *     KiDeliverApc @ 0x140245350 (KiDeliverApc.c)
 *     KiFastExitThreadWait @ 0x1402459A0 (KiFastExitThreadWait.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiAcquireKobjectLockSafe @ 0x140276CD0 (KiAcquireKobjectLockSafe.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiProcessDeferredReadyList @ 0x14037E6D0 (KiProcessDeferredReadyList.c)
 *     KiClearPriorityFloor @ 0x1403823E0 (KiClearPriorityFloor.c)
 *     KiPerformWaitDeferredWork @ 0x1403F08D0 (KiPerformWaitDeferredWork.c)
 *     KiAttemptFastRemoveQueue @ 0x140469D70 (KiAttemptFastRemoveQueue.c)
 *     EtwTraceDequeueWork @ 0x1404EDEA8 (EtwTraceDequeueWork.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

ULONG __stdcall KeRemoveQueueEx(
        PKQUEUE Queue,
        KPROCESSOR_MODE WaitMode,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout,
        PLIST_ENTRY *EntryArray,
        ULONG Count)
{
  ULONG v6; // ebp
  unsigned int v7; // r13d
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v12; // ebx
  LIST_ENTRY *p_EntryListHead; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  LONGLONG QuadPart; // r15
  unsigned __int64 v18; // r14
  KPROCESSOR_MODE v19; // r13
  ULONG_PTR v20; // rsi
  LONGLONG v21; // r15
  __int64 v22; // rbp
  int v23; // eax
  PLIST_ENTRY *v24; // rax
  PLIST_ENTRY *v25; // rdx
  int v26; // eax
  _DISPATCHER_HEADER *volatile v27; // rdx
  _LIST_ENTRY *p_QueueListEntry; // r14
  PLIST_ENTRY *v29; // r14
  __int64 v30; // r9
  struct _LIST_ENTRY *v31; // rax
  struct _LIST_ENTRY *Blink; // rcx
  __int64 v33; // rax
  unsigned __int64 WaitIrql; // rbx
  unsigned int v35; // esi
  int Alerted; // ecx
  char v37; // al
  __int64 v38; // r13
  PLIST_ENTRY *v39; // rsi
  unsigned __int64 v40; // rbx
  unsigned __int8 CurrentIrql; // bp
  PLIST_ENTRY *v42; // rdx
  unsigned __int8 v44; // bl
  __int64 v45; // r9
  $08E725EC6134F01F525383E5528526A8 *v46; // r14
  unsigned int v47; // ebp
  unsigned __int64 v48; // rax
  unsigned __int64 v49; // rcx
  __int64 ThreadTimerDelay; // rdx
  struct _LIST_ENTRY *v51; // rax
  struct _LIST_ENTRY *v52; // rcx
  _LIST_ENTRY *v53; // rax
  PLIST_ENTRY *v54; // r14
  ULONG v55; // ebp
  struct _KPRCB *CurrentPrcb; // rsi
  unsigned __int8 v57; // bp
  struct _LIST_ENTRY *v58; // rdx
  struct _LIST_ENTRY *v59; // rcx
  unsigned int v60; // [rsp+30h] [rbp-68h] BYREF
  __int64 v61; // [rsp+38h] [rbp-60h] BYREF
  LONGLONG v62; // [rsp+40h] [rbp-58h]
  __int64 v63; // [rsp+48h] [rbp-50h] BYREF
  __int64 v64; // [rsp+50h] [rbp-48h]
  ULONG_PTR BugCheckParameter2; // [rsp+A0h] [rbp+8h] BYREF
  KPROCESSOR_MODE v66; // [rsp+A8h] [rbp+10h]
  int v67; // [rsp+B8h] [rbp+20h]

  v66 = WaitMode;
  BugCheckParameter2 = (ULONG_PTR)Queue;
  v6 = 0;
  v7 = WaitMode;
  v61 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v62 = 0LL;
  v12 = 0;
  if ( _bittestandreset((signed __int32 *)&CurrentThread->116, 2u) )
  {
    v12 = (2 * _bittestandreset((signed __int32 *)&CurrentThread->116, 0x10u)) | 1;
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
    CurrentThread->WaitIrql = CurrentIrql;
    v6 = 0;
  }
  KiRcuCheckQuiescent(KeGetCurrentPrcb());
  v15 = 0xFFFFF780000003B0uLL;
  v64 = 1LL;
  Flink = (struct _LIST_ENTRY *)0xFFFFF78000000008LL;
  if ( Timeout )
  {
    if ( Timeout->HighPart < 0 )
    {
      QuadPart = MEMORY[0xFFFFF78000000008]
               - CurrentThread->RelativeTimerBias
               - Timeout->QuadPart
               - MEMORY[0xFFFFF780000003B0];
      v67 = 2;
    }
    else
    {
      QuadPart = Timeout->QuadPart;
      v67 = 1;
    }
    v62 = QuadPart;
  }
  else
  {
    v67 = 0;
  }
  if ( (PKQUEUE)CurrentThread->Queue == Queue )
  {
    if ( Queue->Header.SignalState && Queue->CurrentCount <= Queue->MaximumCount )
    {
      v60 = 0;
      while ( _interlockedbittestandset(&Queue->Header.Lock, 7u) )
      {
        do
          KeYieldProcessorEx(&v60);
        while ( (Queue->Header.LockNV & 0x80u) != 0 );
      }
      if ( Queue->Header.SignalState && Queue->CurrentCount <= Queue->MaximumCount )
      {
        Flink = Queue->EntryListHead.Flink;
        p_EntryListHead = &Queue->EntryListHead;
        v29 = EntryArray;
        v30 = Count;
        do
        {
          v31 = Flink->Flink;
          if ( !Flink->Flink )
            KeBugCheckEx(
              0x96u,
              (ULONG_PTR)Flink,
              (ULONG_PTR)Queue,
              *(ULONG_PTR *)&ExSaPageGroupDescriptorArrayLock.WaitBlockFill11[64],
              (ULONG_PTR)Flink[1].Flink);
          Blink = Flink->Blink;
          if ( v31->Blink != Flink || Blink->Flink != Flink )
            goto LABEL_48;
          Blink->Flink = v31;
          v31->Blink = Blink;
          v15 = 0LL;
          v33 = v6++;
          Flink->Flink = 0LL;
          v29[v33] = Flink;
          Flink = p_EntryListHead->Flink;
        }
        while ( p_EntryListHead->Flink != p_EntryListHead && v6 < (unsigned int)v30 );
        Queue->Header.SignalState -= v6;
        if ( v6 )
        {
          _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
          if ( v12 >= 2 )
          {
            LODWORD(BugCheckParameter2) = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
            {
              do
                KeYieldProcessorEx(&BugCheckParameter2);
              while ( CurrentThread->ThreadLock );
            }
            KiClearPriorityFloor((ULONG_PTR)CurrentThread);
            CurrentThread->WobPriority = 32;
            CurrentThread->ThreadLock = 0LL;
          }
          if ( (v12 & 1) != 0 )
          {
            KiProcessDeferredReadyList(KeGetCurrentPrcb(), &v61, CurrentThread->WaitIrql);
          }
          else
          {
            WaitIrql = CurrentThread->WaitIrql;
            if ( KiIrqlFlags )
              KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)WaitIrql);
            __writecr8(WaitIrql);
          }
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            v42 = v29;
            goto LABEL_123;
          }
          return v6;
        }
        v6 = 0;
      }
      _InterlockedAnd(&Queue->Header.Lock, 0xFFFFFF7F);
      goto LABEL_10;
    }
    if ( Timeout && !Timeout->QuadPart )
    {
      if ( (Queue->Header.Signalling & 1) != 0 )
      {
        v39 = EntryArray;
        *EntryArray = (PLIST_ENTRY)128;
      }
      else
      {
        if ( Alertable )
        {
          v35 = 0;
          while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
          {
            do
            {
              if ( (++v35 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v15, Flink, p_EntryListHead) )
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
          Alerted = CurrentThread->Alerted;
          v37 = v7;
          if ( _bittest(&Alerted, v7) )
          {
            v38 = 257LL;
            CurrentThread->Alerted = Alerted & ~(1 << v37);
          }
          else if ( (_BYTE)v7
                 && (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
          {
            CurrentThread->ApcState.UserApcPendingAll |= 2u;
            v38 = 192LL;
          }
          else if ( (Alerted & 1) != 0 )
          {
            v38 = 257LL;
            CurrentThread->Alerted = Alerted & 0xFE;
          }
          else
          {
            v38 = 0LL;
          }
          if ( v38 )
          {
LABEL_81:
            v39 = EntryArray;
            *EntryArray = (PLIST_ENTRY)v38;
            if ( Alertable )
              CurrentThread->ThreadLock = 0LL;
            goto LABEL_83;
          }
LABEL_80:
          v38 = 258LL;
          goto LABEL_81;
        }
        if ( (CurrentThread->ApcState.UserApcPendingAll & 2) == 0 || !(_BYTE)v7 )
          goto LABEL_80;
        v39 = EntryArray;
        *EntryArray = (PLIST_ENTRY)192;
      }
LABEL_83:
      if ( v12 >= 2 )
      {
        LODWORD(BugCheckParameter2) = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
        {
          do
            KeYieldProcessorEx(&BugCheckParameter2);
          while ( CurrentThread->ThreadLock );
        }
        KiClearPriorityFloor((ULONG_PTR)CurrentThread);
        CurrentThread->WobPriority = 32;
        CurrentThread->ThreadLock = 0LL;
      }
      if ( (v12 & 1) != 0 )
      {
        KiProcessDeferredReadyList(KeGetCurrentPrcb(), &v61, CurrentThread->WaitIrql);
      }
      else
      {
        v40 = CurrentThread->WaitIrql;
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v40);
        __writecr8(v40);
      }
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) == 0 )
        return 1;
      v25 = v39;
      goto LABEL_138;
    }
  }
LABEL_10:
  v60 = v7;
  while ( 1 )
  {
    v18 = CurrentThread->WaitIrql;
    v19 = v66;
    v63 = 0LL;
    while ( 1 )
    {
      CurrentThread->MiscFlags &= ~0x10u;
      CurrentThread->WaitRegister.Flags = 0;
      CurrentThread->WaitMode = v19;
      if ( Alertable )
        CurrentThread->MiscFlags |= 0x10u;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
        {
          if ( (++v6 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v15, Flink, p_EntryListHead) )
          {
            HvlNotifyLongSpinWait(v6);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( CurrentThread->ThreadLock );
      }
      if ( !CurrentThread->ApcState.KernelApcPending || CurrentThread->SpecialApcDisable || (_BYTE)v18 )
        break;
      v6 = 0;
      CurrentThread->ThreadLock = 0LL;
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), 1LL);
      __writecr8(1uLL);
      KiDeliverApc(0LL, 0LL, 0LL);
      v15 = KeGetCurrentIrql();
      if ( (_BYTE)v15 != 2 )
        __writecr8(2uLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(v15, 2LL);
      CurrentThread->WaitIrql = 0;
    }
    v20 = BugCheckParameter2;
    v21 = v62;
    if ( Alertable )
    {
      v15 = CurrentThread->Alerted;
      if ( _bittest((const int *)&v15, v60) )
      {
        LODWORD(v15) = v15 & ~(1 << v60);
        v26 = 257;
        CurrentThread->Alerted = v15;
        v22 = 257LL;
      }
      else if ( !v66
             || (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink == &CurrentThread->ApcStateFill[16] )
      {
        if ( (v15 & 1) != 0 )
        {
          LOBYTE(v15) = v15 & 0xFE;
          v26 = 257;
          CurrentThread->Alerted = v15;
          v22 = 257LL;
        }
        else
        {
          v26 = 0;
          v22 = 0LL;
        }
      }
      else
      {
        CurrentThread->ApcState.UserApcPendingAll |= 2u;
        v26 = 192;
        v22 = 192LL;
      }
      if ( !v26 )
      {
LABEL_43:
        CurrentThread->WaitBlockFill6[68] = 5;
        CurrentThread->WaitReason = 15;
        v20 = BugCheckParameter2;
        CurrentThread->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
        CurrentThread->ThreadLock = 0LL;
        goto LABEL_44;
      }
    }
    else
    {
      if ( (CurrentThread->ApcState.UserApcPendingAll & 2) == 0 || !v66 )
        goto LABEL_43;
      v22 = 192LL;
    }
    v63 = 0LL;
    v23 = KiPerformWaitDeferredWork((ULONG_PTR)CurrentThread);
    CurrentThread->ThreadLock = 0LL;
    if ( v23 )
    {
      KiProcessDeferredReadyList(KeGetCurrentPrcb(), &v63, (unsigned __int8)v18);
    }
    else
    {
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), (unsigned __int8)v18);
      __writecr8(v18);
    }
    if ( v22 )
    {
      v24 = EntryArray;
      *EntryArray = (PLIST_ENTRY)v22;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) == 0 )
        return 1;
      v25 = v24;
LABEL_138:
      EtwTraceDequeueWork(CurrentThread, v25, 1LL, v14);
      return 1;
    }
LABEL_44:
    v27 = CurrentThread->Queue;
    if ( (_DISPATCHER_HEADER *volatile)v20 != v27 )
    {
      p_QueueListEntry = &CurrentThread->QueueListEntry;
      if ( v27 )
        KiActivateWaiterQueueWithNoLocks(CurrentThread, v27, &CurrentThread->QueueListEntry);
      CurrentThread->Queue = (_DISPATCHER_HEADER *volatile)v20;
      _InterlockedIncrement((volatile signed __int32 *)(v20 + 40));
      KiAcquireKobjectLockSafe(v20);
      v15 = *(_QWORD *)(v20 + 56);
      if ( *(_QWORD *)v15 != v20 + 48 )
        goto LABEL_48;
      p_QueueListEntry->Flink = (struct _LIST_ENTRY *)(v20 + 48);
      CurrentThread->QueueListEntry.Blink = (struct _LIST_ENTRY *)v15;
      *(_QWORD *)v15 = p_QueueListEntry;
      *(_QWORD *)(v20 + 56) = p_QueueListEntry;
      _InterlockedAnd((volatile signed __int32 *)v20, 0xFFFFFF7F);
    }
    v46 = &CurrentThread->320;
    v47 = 0;
    CurrentThread->WaitBlock[0].WaitType = 3;
    CurrentThread->WaitBlockFill4[17] = 4;
    CurrentThread->WaitBlock[0].WaitKey = 128;
    CurrentThread->WaitBlock[0].Object = (PVOID)v20;
    if ( _interlockedbittestandset((volatile signed __int32 *)v20, 7u) )
    {
      do
      {
        if ( (++v47 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v15, v27, p_EntryListHead) )
        {
          HvlNotifyLongSpinWait(v47);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( (*(_DWORD *)v20 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)v20, 7u) );
    }
    if ( *(_DWORD *)(v20 + 4) )
    {
      if ( *(_DWORD *)(v20 + 40) <= *(_DWORD *)(v20 + 44) )
      {
        v6 = KiAttemptFastRemoveQueue(v20);
        if ( v6 )
        {
          _InterlockedAnd((volatile signed __int32 *)v20, 0xFFFFFF7F);
          goto LABEL_171;
        }
      }
    }
    if ( (*(_BYTE *)(v20 + 1) & 1) != 0 )
      break;
    v48 = v21;
    if ( v67 == 2 )
    {
      ThreadTimerDelay = CurrentThread->ThreadTimerDelay;
      v49 = MEMORY[0xFFFFF78000000008] - CurrentThread->RelativeTimerBias - MEMORY[0xFFFFF780000003B0];
      v48 = v21;
      if ( CurrentThread->WaitMode
        && !CurrentThread->WaitBlock[3].SpareLong
        && !CurrentThread->WaitIrql
        && !CurrentThread->ApcState.InProgressFlags
        && (_DWORD)ThreadTimerDelay )
      {
        v48 = v21 + ThreadTimerDelay;
      }
    }
    else
    {
      if ( !v67 )
        goto LABEL_164;
      if ( !v21 )
        goto LABEL_175;
      v49 = MEMORY[0xFFFFF78000000014];
    }
    if ( v49 > v48 )
    {
LABEL_175:
      _InterlockedAnd((volatile signed __int32 *)v20, 0xFFFFFF7F);
      *EntryArray = (PLIST_ENTRY)258;
      goto LABEL_176;
    }
LABEL_164:
    _InterlockedDecrement((volatile signed __int32 *)(v20 + 40));
    v51 = (struct _LIST_ENTRY *)(v20 + 8);
    v52 = *(struct _LIST_ENTRY **)(v20 + 8);
    if ( v52->Blink != (struct _LIST_ENTRY *)(v20 + 8) )
      goto LABEL_48;
    v46->WaitBlock[0].WaitListEntry.Flink = v52;
    CurrentThread->WaitBlock[0].WaitListEntry.Blink = v51;
    v52->Blink = (struct _LIST_ENTRY *)v46;
    v51->Flink = (struct _LIST_ENTRY *)v46;
    _InterlockedAnd((volatile signed __int32 *)v20, 0xFFFFFF7F);
    CurrentThread->WaitBlockCount = 1;
    v53 = (_LIST_ENTRY *)KiCommitThreadWait((LegacyAutoBoost *)CurrentThread, v12, 0LL);
    v12 = 0;
    CurrentThread->WaitReason = 0;
    if ( v53 != (_LIST_ENTRY *)256 )
    {
      v54 = EntryArray;
      v55 = Count;
      *EntryArray = v53;
      if ( v55 > 1
        && v53 != (_LIST_ENTRY *)128
        && v53 != (_LIST_ENTRY *)192
        && (unsigned __int64)&v53[-17].Blink + 7 > 1
        && *(_DWORD *)(v20 + 4) )
      {
        v44 = KeGetCurrentIrql();
        if ( v44 != 2 )
          __writecr8(2uLL);
        if ( KiIrqlFlags )
        {
          LOBYTE(Flink) = 2;
          KiRaiseIrqlProcessIrqlFlags(v44, Flink);
        }
        KiAcquireKobjectLockSafe(v20);
        if ( *(_DWORD *)(v20 + 4) )
          LODWORD(v64) = KiAttemptFastRemoveQueue(v20) + 1;
        _InterlockedAnd((volatile signed __int32 *)v20, 0xFFFFFF7F);
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v44);
        __writecr8(v44);
      }
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
        EtwTraceDequeueWork(CurrentThread, v54, (unsigned int)v64, v45);
      return v64;
    }
    v57 = KeGetCurrentIrql();
    if ( v57 != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(Flink) = 2;
      KiRaiseIrqlProcessIrqlFlags(v57, Flink);
    }
    CurrentThread->WaitIrql = v57;
    v6 = 0;
  }
  if ( !CurrentThread->Queue )
    goto LABEL_197;
  v58 = CurrentThread->QueueListEntry.Flink;
  v59 = CurrentThread->QueueListEntry.Blink;
  if ( v58->Blink != &CurrentThread->QueueListEntry || v59->Flink != &CurrentThread->QueueListEntry )
LABEL_48:
    __fastfail(3u);
  v59->Flink = v58;
  v58->Blink = v59;
  CurrentThread->Queue = 0LL;
LABEL_197:
  _InterlockedAnd((volatile signed __int32 *)v20, 0xFFFFFF7F);
  *EntryArray = (PLIST_ENTRY)128;
LABEL_176:
  v6 = 1;
LABEL_171:
  CurrentThread->WaitReason = 0;
  CurrentPrcb = KeGetCurrentPrcb();
  if ( CurrentPrcb->DeferredReadyListHead.Next )
    KiProcessThreadWaitList(CurrentPrcb, 1LL, 0LL);
  KiFastExitThreadWait(CurrentPrcb, (ULONG_PTR)CurrentThread);
  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
  {
    v42 = EntryArray;
LABEL_123:
    EtwTraceDequeueWork(CurrentThread, v42, v6, v30);
  }
  return v6;
}
