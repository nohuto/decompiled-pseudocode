/*
 * XREFs of KiExitDispatcher @ 0x140248580
 * Callers:
 *     KeForceResumeProcess @ 0x140203224 (KeForceResumeProcess.c)
 *     KeSuspendThread @ 0x140208E28 (KeSuspendThread.c)
 *     KeFreezeProcess @ 0x140208F70 (KeFreezeProcess.c)
 *     KeInsertQueueApc @ 0x14020AE70 (KeInsertQueueApc.c)
 *     IoSetIoCompletionEx3 @ 0x1402659C0 (IoSetIoCompletionEx3.c)
 *     KeInsertQueueEx @ 0x140265E10 (KeInsertQueueEx.c)
 *     IopCompleteIrpInFileObjectList @ 0x1402661D0 (IopCompleteIrpInFileObjectList.c)
 *     IoSetIoCompletionEx2 @ 0x140266A90 (IoSetIoCompletionEx2.c)
 *     IoSetIoCompletionEx @ 0x140266E50 (IoSetIoCompletionEx.c)
 *     KiInsertQueue @ 0x140267210 (KiInsertQueue.c)
 *     AlpcpQueueIoCompletionPort @ 0x140267FE0 (AlpcpQueueIoCompletionPort.c)
 *     AlpcpQueueIoCompletion @ 0x1402686B0 (AlpcpQueueIoCompletion.c)
 *     IopReleaseFileObjectLock @ 0x140269430 (IopReleaseFileObjectLock.c)
 *     ExpReleaseFastResourceExclusiveSlow @ 0x140270060 (ExpReleaseFastResourceExclusiveSlow.c)
 *     MiReleaseControlAreaWaiters @ 0x140272950 (MiReleaseControlAreaWaiters.c)
 *     KeWakeWaitChain @ 0x140272C70 (KeWakeWaitChain.c)
 *     ExpCommitWakeFastResource @ 0x140273060 (ExpCommitWakeFastResource.c)
 *     ExpCommitWakeResourceShared @ 0x140273420 (ExpCommitWakeResourceShared.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402756B0 (ExReleaseFastMutexUnsafe.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     FsRtlReleaseHeaderMutex @ 0x14027B770 (FsRtlReleaseHeaderMutex.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     NtReleaseWorkerFactoryWorker @ 0x14030D100 (NtReleaseWorkerFactoryWorker.c)
 *     KeRequestTerminationThread @ 0x1403107F4 (KeRequestTerminationThread.c)
 *     KeAlertThread @ 0x1403108E0 (KeAlertThread.c)
 *     KeThawMultiProcess @ 0x140310998 (KeThawMultiProcess.c)
 *     KeForceResumeThread @ 0x140310AFC (KeForceResumeThread.c)
 *     KeResumeThread @ 0x140310BD0 (KeResumeThread.c)
 *     KeAlertThreadByThreadIdEx @ 0x140383010 (KeAlertThreadByThreadIdEx.c)
 *     KeInsertPriQueue @ 0x140383270 (KeInsertPriQueue.c)
 *     KiSetTimerEx @ 0x1403B5C30 (KiSetTimerEx.c)
 *     KeSetTimerEx @ 0x1403B5EA0 (KeSetTimerEx.c)
 *     KeSetTimer @ 0x1403B62A0 (KeSetTimer.c)
 *     KeReleaseSemaphore @ 0x1403BBA30 (KeReleaseSemaphore.c)
 *     KeSignalGate @ 0x1403CC9D0 (KeSignalGate.c)
 *     KeRundownQueueEx @ 0x1403DF4A8 (KeRundownQueueEx.c)
 *     KeDeleteMutant @ 0x1403DFA18 (KeDeleteMutant.c)
 *     KeReleaseMutantEx @ 0x1403E0320 (KeReleaseMutantEx.c)
 *     ExpTryEnterWorkerFactoryAwayMode @ 0x1403E28A0 (ExpTryEnterWorkerFactoryAwayMode.c)
 *     KeRegisterObjectNotification @ 0x1403E2A14 (KeRegisterObjectNotification.c)
 *     KeTimeOutQueueWaiters @ 0x1403E3298 (KeTimeOutQueueWaiters.c)
 *     KiSetSystemTimeDpc @ 0x1403E8090 (KiSetSystemTimeDpc.c)
 *     KeInsertQueue @ 0x1403F0500 (KeInsertQueue.c)
 *     IopPassiveInterruptDpc @ 0x1403F0650 (IopPassiveInterruptDpc.c)
 *     KeSetEventBoostPriorityEx @ 0x140419658 (KeSetEventBoostPriorityEx.c)
 *     KeReleaseSemaphoreEx @ 0x14042BF80 (KeReleaseSemaphoreEx.c)
 *     KiSchedulerApc @ 0x14049B710 (KiSchedulerApc.c)
 *     KiRundownMutants @ 0x1404AB48C (KiRundownMutants.c)
 *     KePulseEvent @ 0x1404C0CC0 (KePulseEvent.c)
 *     KeSetProcess @ 0x1404CA8CC (KeSetProcess.c)
 *     FsRtlpPostStackOverflow @ 0x1405BA9A0 (FsRtlpPostStackOverflow.c)
 *     KeRegisterObjectDpc @ 0x1405E7F4C (KeRegisterObjectDpc.c)
 *     KeAdjustTimerDelayProcess @ 0x1405E806C (KeAdjustTimerDelayProcess.c)
 *     KeAlertMultipleThreadByThreadId @ 0x1405EE81C (KeAlertMultipleThreadByThreadId.c)
 *     KeInsertHeadQueue @ 0x1405F3FD0 (KeInsertHeadQueue.c)
 *     KeRundownPriQueue @ 0x1405FC0A8 (KeRundownPriQueue.c)
 *     ?KiAbpCrossThreadDelete@AutoBoost@@YAXPEAXPEAU_KTHREAD@@@Z @ 0x1406007F8 (-KiAbpCrossThreadDelete@AutoBoost@@YAXPEAXPEAU_KTHREAD@@@Z.c)
 * Callees:
 *     KiQueueReadyThread @ 0x140224FE0 (KiQueueReadyThread.c)
 *     KiCaptureTotalCyclesCurrentThread @ 0x140226CD0 (KiCaptureTotalCyclesCurrentThread.c)
 *     HalpInterruptSendIpi @ 0x140232750 (HalpInterruptSendIpi.c)
 *     KiDirectSwitchThread @ 0x14023B540 (KiDirectSwitchThread.c)
 *     KiAbProcessPostContextSwitch @ 0x14023D3E0 (KiAbProcessPostContextSwitch.c)
 *     KiProcessThreadWaitList @ 0x14023D710 (KiProcessThreadWaitList.c)
 *     KiAbProcessPreContextSwitch @ 0x14023F810 (KiAbProcessPreContextSwitch.c)
 *     KiDeliverApc @ 0x140245350 (KiDeliverApc.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     HalpDisableInterrupts @ 0x1403129A0 (HalpDisableInterrupts.c)
 *     KiUpdatePriorityMatrixForRunningTransition @ 0x140312BC0 (KiUpdatePriorityMatrixForRunningTransition.c)
 *     KiAcquireMultiplePrcbLocks @ 0x140331520 (KiAcquireMultiplePrcbLocks.c)
 *     KiSwapContext @ 0x140734AA0 (KiSwapContext.c)
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
