/*
 * XREFs of KiInsertQueueInternal @ 0x140274E80
 * Callers:
 *     KeTerminateThread @ 0x140203388 (KeTerminateThread.c)
 *     IoSetIoCompletionEx3 @ 0x140266450 (IoSetIoCompletionEx3.c)
 *     KeInsertQueueEx @ 0x1402668A0 (KeInsertQueueEx.c)
 *     IopCompleteIrpInFileObjectList @ 0x140266C60 (IopCompleteIrpInFileObjectList.c)
 *     IoSetIoCompletionEx2 @ 0x140267520 (IoSetIoCompletionEx2.c)
 *     IoSetIoCompletionEx @ 0x1402678E0 (IoSetIoCompletionEx.c)
 *     KiInsertQueue @ 0x140267CA0 (KiInsertQueue.c)
 *     AlpcpQueueIoCompletionPort @ 0x140268A70 (AlpcpQueueIoCompletionPort.c)
 *     AlpcpQueueIoCompletion @ 0x140269140 (AlpcpQueueIoCompletion.c)
 *     IopReleaseFileObjectLock @ 0x140269EC0 (IopReleaseFileObjectLock.c)
 *     ExpReleaseFastResourceExclusiveSlow @ 0x140270AF0 (ExpReleaseFastResourceExclusiveSlow.c)
 *     MiReleaseControlAreaWaiters @ 0x1402733E0 (MiReleaseControlAreaWaiters.c)
 *     KeWakeWaitChain @ 0x140273700 (KeWakeWaitChain.c)
 *     ExpCommitWakeFastResource @ 0x140273AF0 (ExpCommitWakeFastResource.c)
 *     ExpCommitWakeResourceShared @ 0x140273EB0 (ExpCommitWakeResourceShared.c)
 *     KiInsertQueueInternal @ 0x140274E80 (KiInsertQueueInternal.c)
 *     ExReleaseFastMutexUnsafe @ 0x140276140 (ExReleaseFastMutexUnsafe.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     FsRtlReleaseHeaderMutex @ 0x14027C200 (FsRtlReleaseHeaderMutex.c)
 *     KiWakeOtherQueueWaiters @ 0x1402C2F00 (KiWakeOtherQueueWaiters.c)
 *     KiResumeThread @ 0x1402C60D8 (KiResumeThread.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     KiExpireTimer2 @ 0x140336F08 (KiExpireTimer2.c)
 *     KiTimerWaitTest @ 0x1403ACF4C (KiTimerWaitTest.c)
 *     KeReleaseSemaphore @ 0x1403B1D20 (KeReleaseSemaphore.c)
 *     KeSignalGate @ 0x1403C2AD0 (KeSignalGate.c)
 *     KeDeleteMutant @ 0x1403DC828 (KeDeleteMutant.c)
 *     KeReleaseMutantEx @ 0x1403DD130 (KeReleaseMutantEx.c)
 *     KeRundownQueueCommon @ 0x1403DD884 (KeRundownQueueCommon.c)
 *     ExpTryEnterWorkerFactoryAwayMode @ 0x1403DF6B0 (ExpTryEnterWorkerFactoryAwayMode.c)
 *     KeRegisterObjectNotification @ 0x1403DF824 (KeRegisterObjectNotification.c)
 *     KeSetEventBoostPriorityEx @ 0x140421E18 (KeSetEventBoostPriorityEx.c)
 *     KeReleaseSemaphoreEx @ 0x1404396D0 (KeReleaseSemaphoreEx.c)
 *     KiRundownMutants @ 0x1404B1F80 (KiRundownMutants.c)
 *     KePulseEvent @ 0x1404C7410 (KePulseEvent.c)
 *     KeSetProcess @ 0x1404D0E9C (KeSetProcess.c)
 * Callees:
 *     EtwTraceEnqueueWork @ 0x140268108 (EtwTraceEnqueueWork.c)
 *     KiInsertQueueInternal @ 0x140274E80 (KiInsertQueueInternal.c)
 *     KiSignalThread @ 0x14027C940 (KiSignalThread.c)
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

char __fastcall KiInsertQueueInternal(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned int v3; // ebp
  _QWORD *v4; // r12
  _QWORD *v5; // r15
  __int64 CurrentIrql; // rcx
  struct _KPRCB *CurrentPrcb; // r13
  _KTHREAD *CurrentThread; // rdi
  char v10; // r8
  unsigned int v11; // esi
  _QWORD *v12; // r14
  _QWORD *v13; // rsi
  _QWORD *v14; // rax
  char v15; // r13
  __int64 v16; // rdi
  __int64 v17; // rax
  __int64 v18; // rdx
  _QWORD *v19; // rcx
  _QWORD *v20; // r15
  _QWORD *v21; // r14
  __int64 v22; // rax
  unsigned int v23; // esi
  __int64 v24; // rbp
  __int64 v25; // rdi
  __int64 v26; // rax
  struct _KPRCB *v28; // [rsp+50h] [rbp+8h]

  v3 = 0;
  v4 = (_QWORD *)(a1 + 8);
  *a2 = 0LL;
  v5 = a2;
  CurrentIrql = KeGetCurrentIrql();
  if ( (_BYTE)CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v28 = CurrentPrcb;
  CurrentThread = CurrentPrcb->CurrentThread;
  if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
  {
    v10 = CurrentThread->WaitBlockFill6[68] == 2 && CurrentThread->NextProcessor == KeGetPcr()->Prcb.Number;
    EtwTraceEnqueueWork((__int64)CurrentPrcb->CurrentThread, (__int64)v5, v10);
  }
  v11 = 0;
  if ( _interlockedbittestandset((volatile signed __int32 *)a1, 7u) )
  {
    do
    {
      if ( (++v11 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(CurrentIrql, a2, a3) )
      {
        HvlNotifyLongSpinWait(v11);
      }
      else
      {
        _mm_pause();
      }
    }
    while ( (*(_DWORD *)a1 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)a1, 7u) );
  }
  if ( (_QWORD *)*v4 == v4
    || *(_DWORD *)(a1 + 40) >= *(_DWORD *)(a1 + 44)
    || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)a1 && CurrentThread->WaitReason == 15 )
  {
LABEL_24:
    v18 = *(unsigned int *)(a1 + 4);
    *(_DWORD *)(a1 + 4) = v18 + 1;
    v17 = a1 + 24;
    v19 = *(_QWORD **)(a1 + 32);
    if ( *v19 != a1 + 24 )
LABEL_25:
      __fastfail(3u);
    *v5 = v17;
    v5[1] = v19;
    *v19 = v5;
    *(_QWORD *)(a1 + 32) = v5;
    if ( !(_DWORD)v18 && (_QWORD *)*v4 != v4 )
    {
      v20 = *(_QWORD **)(a1 + 16);
      do
      {
        v21 = v20;
        v20 = (_QWORD *)v20[1];
        LOBYTE(v17) = *((_BYTE *)v21 + 16);
        if ( (_BYTE)v17 == 2 )
        {
          v26 = *v21;
          if ( *(_QWORD **)(*v21 + 8LL) != v21 || (_QWORD *)*v20 != v21 )
            goto LABEL_25;
          *v20 = v26;
          *(_QWORD *)(v26 + 8) = v20;
          *((_BYTE *)v21 + 17) = 5;
          LOBYTE(v17) = KiInsertQueueInternal(v21[3], v21);
        }
        else
        {
          if ( (_BYTE)v17 != 1 )
            break;
          v22 = *v21;
          if ( *(_QWORD **)(*v21 + 8LL) != v21 || (_QWORD *)*v20 != v21 )
            goto LABEL_25;
          *v20 = v22;
          v23 = 0;
          *(_QWORD *)(v22 + 8) = v20;
          v24 = *((unsigned __int16 *)v21 + 9);
          v25 = v21[3];
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v25 + 64), 0LL) )
          {
            do
            {
              if ( (++v23 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v19, v18, a3) )
              {
                HvlNotifyLongSpinWait(v23);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *(_QWORD *)(v25 + 64) );
          }
          if ( *(_BYTE *)(v25 + 388) == 5 )
            KiSignalThread(CurrentPrcb, v25, v24, v21);
          *(_QWORD *)(v25 + 64) = 0LL;
          LOBYTE(v17) = *((_BYTE *)v21 + 17) + 1;
          *((_BYTE *)v21 + 17) = v17;
        }
      }
      while ( v20 != v4 );
    }
  }
  else
  {
    v12 = (_QWORD *)*v4;
    while ( 1 )
    {
      v13 = v12;
      v12 = (_QWORD *)*v12;
      if ( *((_BYTE *)v13 + 16) != 3 )
      {
LABEL_23:
        CurrentPrcb = v28;
        goto LABEL_24;
      }
      v14 = (_QWORD *)v13[1];
      if ( (_QWORD *)v12[1] != v13 || (_QWORD *)*v14 != v13 )
        goto LABEL_25;
      *v14 = v12;
      v15 = 0;
      v12[1] = v14;
      v16 = v13[3];
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 64), 0LL) )
      {
        do
        {
          if ( (++v3 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(CurrentIrql, a2, a3) )
          {
            HvlNotifyLongSpinWait(v3);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *(_QWORD *)(v16 + 64) );
      }
      LOBYTE(v17) = *(_BYTE *)(v16 + 388);
      if ( (_BYTE)v17 == 5 )
      {
        LOBYTE(v17) = KiSignalThread(v28, v16, v5, v13);
        v15 = v17;
      }
      v3 = 0;
      *(_QWORD *)(v16 + 64) = 0LL;
      CurrentIrql = *((unsigned __int8 *)v13 + 17);
      LOBYTE(CurrentIrql) = CurrentIrql + 1;
      *((_BYTE *)v13 + 17) = CurrentIrql;
      if ( v15 )
        break;
      if ( v12 == v4 )
        goto LABEL_23;
    }
    *v5 = 0LL;
  }
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  return v17;
}
