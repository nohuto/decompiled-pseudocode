/*
 * XREFs of KiExitDispatcher @ 0x140246C20
 * Callers:
 *     KeForceResumeProcess @ 0x140203144 (KeForceResumeProcess.c)
 *     KeSuspendThread @ 0x140208D48 (KeSuspendThread.c)
 *     KeFreezeProcess @ 0x140208E90 (KeFreezeProcess.c)
 *     KeInsertQueueApc @ 0x14020AD90 (KeInsertQueueApc.c)
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
 *     ExReleaseFastMutexUnsafe @ 0x140276140 (ExReleaseFastMutexUnsafe.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     FsRtlReleaseHeaderMutex @ 0x14027C200 (FsRtlReleaseHeaderMutex.c)
 *     NtReleaseWorkerFactoryWorker @ 0x1402C2440 (NtReleaseWorkerFactoryWorker.c)
 *     KeRequestTerminationThread @ 0x1402C5B58 (KeRequestTerminationThread.c)
 *     KeAlertThread @ 0x1402C5C40 (KeAlertThread.c)
 *     KeThawMultiProcess @ 0x1402C5CF8 (KeThawMultiProcess.c)
 *     KeForceResumeThread @ 0x1402C5E5C (KeForceResumeThread.c)
 *     KeResumeThread @ 0x1402C5F30 (KeResumeThread.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     KeAlertThreadByThreadIdEx @ 0x140381260 (KeAlertThreadByThreadIdEx.c)
 *     KeInsertPriQueue @ 0x1403814C0 (KeInsertPriQueue.c)
 *     KiSetTimerEx @ 0x1403ABF20 (KiSetTimerEx.c)
 *     KeSetTimerEx @ 0x1403AC190 (KeSetTimerEx.c)
 *     KeSetTimer @ 0x1403AC590 (KeSetTimer.c)
 *     KeReleaseSemaphore @ 0x1403B1D20 (KeReleaseSemaphore.c)
 *     KeSignalGate @ 0x1403C2AD0 (KeSignalGate.c)
 *     KeRundownQueueEx @ 0x1403DC2B8 (KeRundownQueueEx.c)
 *     KeDeleteMutant @ 0x1403DC828 (KeDeleteMutant.c)
 *     KeReleaseMutantEx @ 0x1403DD130 (KeReleaseMutantEx.c)
 *     ExpTryEnterWorkerFactoryAwayMode @ 0x1403DF6B0 (ExpTryEnterWorkerFactoryAwayMode.c)
 *     KeRegisterObjectNotification @ 0x1403DF824 (KeRegisterObjectNotification.c)
 *     KeTimeOutQueueWaiters @ 0x1403E00A8 (KeTimeOutQueueWaiters.c)
 *     KiSetSystemTimeDpc @ 0x1403E4EA0 (KiSetSystemTimeDpc.c)
 *     KeInsertQueue @ 0x1403F6B50 (KeInsertQueue.c)
 *     IopPassiveInterruptDpc @ 0x1403F6CA0 (IopPassiveInterruptDpc.c)
 *     KeSetEventBoostPriorityEx @ 0x140421E18 (KeSetEventBoostPriorityEx.c)
 *     KeReleaseSemaphoreEx @ 0x1404396D0 (KeReleaseSemaphoreEx.c)
 *     KiSchedulerApc @ 0x1404A1BE0 (KiSchedulerApc.c)
 *     KiRundownMutants @ 0x1404B1F80 (KiRundownMutants.c)
 *     KePulseEvent @ 0x1404C7410 (KePulseEvent.c)
 *     KeSetProcess @ 0x1404D0E9C (KeSetProcess.c)
 *     FsRtlpPostStackOverflow @ 0x1405B8130 (FsRtlpPostStackOverflow.c)
 *     KeRegisterObjectDpc @ 0x1405E55DC (KeRegisterObjectDpc.c)
 *     KeAdjustTimerDelayProcess @ 0x1405E56FC (KeAdjustTimerDelayProcess.c)
 *     KeAlertMultipleThreadByThreadId @ 0x1405EBEAC (KeAlertMultipleThreadByThreadId.c)
 *     KeInsertHeadQueue @ 0x1405F1610 (KeInsertHeadQueue.c)
 *     KeRundownPriQueue @ 0x1405F9688 (KeRundownPriQueue.c)
 *     ?KiAbpCrossThreadDelete@AutoBoost@@YAXPEAXPEAU_KTHREAD@@@Z @ 0x1405FDDA8 (-KiAbpCrossThreadDelete@AutoBoost@@YAXPEAXPEAU_KTHREAD@@@Z.c)
 * Callees:
 *     KiQueueReadyThread @ 0x140223650 (KiQueueReadyThread.c)
 *     KiCaptureTotalCyclesCurrentThread @ 0x140225340 (KiCaptureTotalCyclesCurrentThread.c)
 *     HalpInterruptSendIpi @ 0x140230DF0 (HalpInterruptSendIpi.c)
 *     KiDirectSwitchThread @ 0x140239BE0 (KiDirectSwitchThread.c)
 *     KiAbProcessPostContextSwitch @ 0x14023BA80 (KiAbProcessPostContextSwitch.c)
 *     KiProcessThreadWaitList @ 0x14023BDB0 (KiProcessThreadWaitList.c)
 *     KiAbProcessPreContextSwitch @ 0x14023DEB0 (KiAbProcessPreContextSwitch.c)
 *     KiDeliverApc @ 0x1402439F0 (KiDeliverApc.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     HalpDisableInterrupts @ 0x1402C7D00 (HalpDisableInterrupts.c)
 *     KiUpdatePriorityMatrixForRunningTransition @ 0x1402C7F20 (KiUpdatePriorityMatrixForRunningTransition.c)
 *     KiAcquireMultiplePrcbLocks @ 0x14032F4F0 (KiAcquireMultiplePrcbLocks.c)
 *     KiSwapContext @ 0x14072FED0 (KiSwapContext.c)
 */

void __fastcall KiExitDispatcher(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, unsigned __int8 a5)
{
  char v6; // bl
  unsigned __int64 v9; // rdi
  _KTHREAD *v10; // rax
  __int64 v11; // rbp
  _KTHREAD *v12; // rcx
  unsigned __int8 v13; // al
  _KTHREAD *v14; // rbx
  __int64 v15; // r8
  unsigned __int64 v16; // r9
  struct _KTHREAD *v17; // rdx
  char v18; // al
  __int64 v19; // r8
  int v20; // edx
  char v21; // r9
  unsigned __int64 v22; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v23; // [rsp+28h] [rbp-30h] BYREF
  __int128 v24; // [rsp+2Ch] [rbp-2Ch]
  __int64 v25; // [rsp+60h] [rbp+8h] BYREF

  v6 = a2 & 1;
  if ( *(_QWORD *)(a1 + 11528)
    && (!v6 && (a2 & 4) == 0 || !KiDirectSwitchThread((struct _KPRCB *)a1, a4, (a2 & 2) != 0)) )
  {
    KiProcessThreadWaitList((struct _SINGLE_LIST_ENTRY *)a1, a3, a4, 0);
  }
  if ( v6 )
  {
    v12 = *(_KTHREAD **)(a1 + 8);
    v13 = a5;
    v12->MiscFlags |= 4u;
    v12->WaitIrql = v13;
    return;
  }
  v9 = a5;
  v10 = *(_KTHREAD **)(a1 + 16);
  if ( a5 < 2u )
  {
    v11 = *(_QWORD *)(a1 + 8);
    if ( v10 )
    {
      KiAbProcessPreContextSwitch((struct _KLOCK_ENTRY *)v11, a2);
      v25 = a1;
      v22 = a1 & 0xFFFFFFFFFFFFFFFEuLL;
      KiAcquireMultiplePrcbLocks(&v25, 1LL);
      v14 = *(_KTHREAD **)(a1 + 16);
      *(_QWORD *)(a1 + 16) = 0LL;
      KiCaptureTotalCyclesCurrentThread(a1, v11, v15, v16);
      KiUpdatePriorityMatrixForRunningTransition(a1, v14);
      *(_BYTE *)(v11 + 643) = 32;
      *(_BYTE *)(v11 + 390) = v9;
      KiQueueReadyThread((struct _KPRCB *)a1, (unsigned __int64)&v22, v11, 0);
      LOBYTE(v14) = KiSwapContext(v11, v14, (unsigned __int8)v9);
      KiAbProcessPostContextSwitch(v11, v17);
      if ( !(_BYTE)v14 )
        goto LABEL_12;
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), 1u);
    }
    else
    {
      if ( (*(_DWORD *)(v11 + 116) & 0x40) == 0 )
      {
LABEL_12:
        if ( KiIrqlFlags )
          KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v9);
        __writecr8(v9);
        return;
      }
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), 1u);
    }
    __writecr8(1uLL);
    *(_DWORD *)(v11 + 116) &= ~0x40u;
    KiDeliverApc(0, 0LL, 0LL);
    goto LABEL_12;
  }
  if ( v10 && !*(_BYTE *)(a1 + 14522) )
  {
    if ( *(_BYTE *)(a1 + 32) )
    {
      *(_BYTE *)(a1 + 6) = 1;
    }
    else
    {
      v24 = 0LL;
      if ( (KiTrapFeatures & 0x10) != 0 )
      {
        v18 = HalpDisableInterrupts(a1, a2, KeGetCurrentPrcb());
        v20 = *(_DWORD *)(v19 + 168);
        v21 = v18;
        *(_DWORD *)(v19 + 168) = v20 | 4;
        if ( !v20 )
          __writemsr(0xC0010015, __readmsr(0xC0010015) | 0x100000000LL);
        if ( v21 )
          _enable();
      }
      v23 = 5;
      HalpInterruptSendIpi(&v23, 0x2Fu);
    }
  }
}
