/*
 * XREFs of KeSetTimer2 @ 0x14037A500
 * Callers:
 *     ?SmHighMemPriorityTimerStart@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140280F9C (-SmHighMemPriorityTimerStart@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     RtlpHpEnvCompactionSchedule @ 0x14034D650 (RtlpHpEnvCompactionSchedule.c)
 *     ExSetTimer @ 0x14037A420 (ExSetTimer.c)
 *     ExpSetTimerObject2 @ 0x1403A9988 (ExpSetTimerObject2.c)
 *     WdtpArmTimer @ 0x1403AA03C (WdtpArmTimer.c)
 *     NtSetInformationWorkerFactory @ 0x1403DE960 (NtSetInformationWorkerFactory.c)
 *     MiStoreEvictThread @ 0x1404B0390 (MiStoreEvictThread.c)
 *     PpmCheckArmPeriod @ 0x1404E6260 (PpmCheckArmPeriod.c)
 *     KiProcessPendingForegroundBoosts @ 0x1404FE820 (KiProcessPendingForegroundBoosts.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x14050EC70 (PopIdleArmAoAcDozeS4Timer.c)
 *     PopThermalEventTransitionDisableDeepSleep @ 0x140512170 (PopThermalEventTransitionDisableDeepSleep.c)
 *     KiInitializeIdealProcessorRebalancer @ 0x1405F4B78 (KiInitializeIdealProcessorRebalancer.c)
 *     KiTriggerForegroundBoostDpc @ 0x1405F6C10 (KiTriggerForegroundBoostDpc.c)
 *     KiForceParkDutyCycleDpcCallback @ 0x1405F8980 (KiForceParkDutyCycleDpcCallback.c)
 *     PopDirectedDripsStartDisengageTimer @ 0x140603B60 (PopDirectedDripsStartDisengageTimer.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x140607C84 (PopThermalUpdateTelemetryClientCount.c)
 *     PopCheckPowerSourceAfterRtcWakeSet @ 0x140607E5C (PopCheckPowerSourceAfterRtcWakeSet.c)
 *     PopPowerButtonWorkCallback @ 0x14060CD70 (PopPowerButtonWorkCallback.c)
 *     DifKeSetTimer2Wrapper @ 0x1406644C0 (DifKeSetTimer2Wrapper.c)
 *     EtwpCoverageEnsureContext @ 0x140775C70 (EtwpCoverageEnsureContext.c)
 *     PopPowerRequestDebounceTimerWorker @ 0x1407C9450 (PopPowerRequestDebounceTimerWorker.c)
 *     PpmRegisterPerfStates @ 0x1407CE358 (PpmRegisterPerfStates.c)
 *     PopUserShutdownScenarioNotifyWinlogonCallout @ 0x1407D17E8 (PopUserShutdownScenarioNotifyWinlogonCallout.c)
 *     PopPowerAggregatorDozeTimerArm @ 0x1407D65DC (PopPowerAggregatorDozeTimerArm.c)
 *     PopPowerAggregatorSessionSwitchWorker @ 0x1407D6EB0 (PopPowerAggregatorSessionSwitchWorker.c)
 *     PopNetArmRefreshTimer @ 0x1407DA3D0 (PopNetArmRefreshTimer.c)
 *     PopNetResiliencyPhaseStateChanged @ 0x1407DA8C0 (PopNetResiliencyPhaseStateChanged.c)
 *     PopAdaptiveStandbySetPolicyTimer @ 0x1407E07A4 (PopAdaptiveStandbySetPolicyTimer.c)
 *     ExStartStopWorkQueueProvider @ 0x14083F6BC (ExStartStopWorkQueueProvider.c)
 *     EtwpEnableKernelTrace @ 0x14095ACA0 (EtwpEnableKernelTrace.c)
 *     ExpWorkQueueManagerThread @ 0x140A039A0 (ExpWorkQueueManagerThread.c)
 *     PopSleepstudyStartNextSession @ 0x140A39120 (PopSleepstudyStartNextSession.c)
 *     PopPowerRequestSetExecutionRequiredTimeoutTimer @ 0x140A3ADC0 (PopPowerRequestSetExecutionRequiredTimeoutTimer.c)
 *     PopDripsWatchdogScheduleNextTimer @ 0x140A3C818 (PopDripsWatchdogScheduleNextTimer.c)
 *     NtCreateWorkerFactory @ 0x140A912F0 (NtCreateWorkerFactory.c)
 *     PopThermalWorker @ 0x140AC3C50 (PopThermalWorker.c)
 *     PopPowerRequestHandleRequestUpdate @ 0x140AE70C8 (PopPowerRequestHandleRequestUpdate.c)
 *     EtwpCoverageRecord @ 0x140B0E2F8 (EtwpCoverageRecord.c)
 *     ExpTimeRefreshWork @ 0x140BFF300 (ExpTimeRefreshWork.c)
 *     HalpBlkInitSystem @ 0x140CB4528 (HalpBlkInitSystem.c)
 *     ExInitializeTimeRefresh @ 0x140CE3D60 (ExInitializeTimeRefresh.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x140208110 (RtlGetInterruptTimePrecise.c)
 *     RtlGetSystemTimePrecise @ 0x14021C830 (RtlGetSystemTimePrecise.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402BDFEC (KiReleaseSpinLockInstrumented.c)
 *     KiAcquireSpinLockInstrumented @ 0x14032F380 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x14032F490 (KxWaitForSpinLockAndAcquire.c)
 *     KiInsertTimer2WithCollectionLockHeld @ 0x1403789C0 (KiInsertTimer2WithCollectionLockHeld.c)
 *     KiRemoveTimer2 @ 0x140378EB0 (KiRemoveTimer2.c)
 *     KiSendClockInterruptToTargetProcessor @ 0x1403793EC (KiSendClockInterruptToTargetProcessor.c)
 *     KiAcquireTimer2LockUnlessDisabled @ 0x14037A9B0 (KiAcquireTimer2LockUnlessDisabled.c)
 *     KiAcquireTimer2CollectionLockIfInserted @ 0x14037AA30 (KiAcquireTimer2CollectionLockIfInserted.c)
 *     KiTraceSetTimer2 @ 0x1403A9A14 (KiTraceSetTimer2.c)
 *     KiRequestTimer2Expiration @ 0x14044F494 (KiRequestTimer2Expiration.c)
 *     PsTimerResolutionActive @ 0x140457020 (PsTimerResolutionActive.c)
 *     KiHvEnlightenedGuestPriorityKick @ 0x1404675F0 (KiHvEnlightenedGuestPriorityKick.c)
 *     KiUpdateTimer2Collections @ 0x1404BF7E0 (KiUpdateTimer2Collections.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeSetTimer2(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r12
  __int64 v8; // rdx
  unsigned __int8 CurrentIrql; // bp
  char v10; // r13
  unsigned __int64 InterruptTimePrecise; // rax
  unsigned __int64 v12; // rdi
  __int64 v13; // rsi
  char v14; // r15
  unsigned int v15; // r14d
  char v16; // dl
  char v17; // si
  __int64 v18; // r8
  unsigned __int8 v19; // r14
  __int64 v20; // rax
  char v21; // al
  int v22; // eax
  char v24; // r8
  char v25; // dl
  bool v26; // zf
  __int64 v27; // r8
  __int64 v28; // rax
  __int64 SystemTimePrecise; // rax
  volatile signed __int32 v30; // edx
  signed __int32 v31; // eax
  signed __int32 v32; // edx
  __int64 retaddr; // [rsp+68h] [rbp+0h]
  char v34; // [rsp+70h] [rbp+8h]
  unsigned __int64 v35; // [rsp+78h] [rbp+10h] BYREF
  char v36; // [rsp+80h] [rbp+18h] BYREF
  int v37; // [rsp+88h] [rbp+20h]

  v5 = a3;
  if ( a3 && a3 < (unsigned int)KeMinimumIncrement )
    v5 = (unsigned int)KeMinimumIncrement;
  v8 = *(unsigned __int8 *)(a1 + 129);
  v34 = *(_BYTE *)(a1 + 129);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v8) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, v8);
    LOBYTE(v8) = v34;
  }
  v10 = 0;
  if ( a2 > 0 )
  {
    v10 = 1;
    if ( (v8 & 4) != 0 )
    {
      SystemTimePrecise = RtlGetSystemTimePrecise();
      LOBYTE(v8) = v34;
      v27 = SystemTimePrecise;
    }
    else
    {
      v27 = MEMORY[0xFFFFF78000000014];
    }
    v28 = 0LL;
    if ( a2 > v27 )
      v28 = v27 - a2;
    a2 = v28;
  }
  if ( (v8 & 4) != 0 )
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&v35);
  else
    InterruptTimePrecise = MEMORY[0xFFFFF78000000008];
  v12 = InterruptTimePrecise - a2;
  if ( InterruptTimePrecise >= a2 || v12 == -1LL )
    v12 = -2LL;
  v13 = v12;
  if ( a4 && *(_BYTE *)(a1 + 130) != 23 )
  {
    v20 = *(_QWORD *)(a4 + 8);
    if ( v20 == -1 )
    {
      v13 = -1LL;
    }
    else
    {
      v13 = v20 + v12;
      if ( v20 + v12 < v12 || v13 == -1 )
        v13 = -2LL;
    }
  }
  v14 = 0;
  LOBYTE(v37) = 0;
  v36 = 0;
  v15 = 1;
  if ( (unsigned __int8)KiAcquireTimer2LockUnlessDisabled(a1) )
  {
    v19 = v37;
    goto LABEL_54;
  }
  if ( (unsigned __int8)KiAcquireTimer2CollectionLockIfInserted(a1) )
  {
    KiRemoveTimer2(a1);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
      _InterlockedAnd64((volatile signed __int64 *)&KiTimer2CollectionLock, 0LL);
    else
      KiReleaseSpinLockInstrumented((volatile signed __int64 *)&KiTimer2CollectionLock, retaddr);
    LOBYTE(v37) = 1;
  }
  else
  {
    v21 = *(_BYTE *)(a1 + 1);
    if ( (v21 & 0xF) != 0 )
    {
      v26 = (v21 & 4) == 0;
      v15 = 8;
      v22 = (unsigned __int8)v37;
      if ( v26 )
        v22 = 1;
      v37 = v22;
    }
  }
  *(_DWORD *)(a1 + 4) = 0;
  *(_QWORD *)(a1 + 72) = v12;
  *(_QWORD *)(a1 + 80) = v13;
  v16 = *(_BYTE *)(a1 + 129);
  *(_QWORD *)(a1 + 88) = v5;
  *(_BYTE *)(a1 + 128) = v10;
  if ( KiGlobalTimerResolutionRequests )
  {
    v26 = (v16 & 0x10) == 0;
    goto LABEL_64;
  }
  if ( (v16 & 0x2E) == 0 )
  {
    if ( !(unsigned __int8)PsTimerResolutionActive(KeGetCurrentThread()->ApcState.Process) )
    {
      if ( !v24 )
        goto LABEL_19;
      v25 = v16 & 0xEF;
LABEL_66:
      *(_BYTE *)(a1 + 129) = v25;
      KiUpdateTimer2Collections(a1);
      goto LABEL_19;
    }
    v26 = v24 == 0;
LABEL_64:
    if ( !v26 )
      goto LABEL_19;
    v25 = v16 | 0x10;
    goto LABEL_66;
  }
LABEL_19:
  v17 = 0;
  LOBYTE(v35) = 0;
  if ( v15 == 1 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
    {
      if ( _interlockedbittestandset64((volatile signed __int32 *)&KiTimer2CollectionLock, 0LL) )
        KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&KiTimer2CollectionLock);
    }
    else
    {
      KiAcquireSpinLockInstrumented((volatile signed __int32 *)&KiTimer2CollectionLock);
    }
    KiInsertTimer2WithCollectionLockHeld(a1, 1, &v36, (bool *)&v35);
    v17 = v35;
    v14 = v36;
  }
  v18 = v15;
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
  {
    v19 = v37;
    KiTraceSetTimer2(a1, (unsigned __int8)v37, v18);
  }
  else
  {
    v30 = *(_DWORD *)a1;
    v31 = _InterlockedCompareExchange(
            (volatile signed __int32 *)a1,
            (v15 << 8) | *(_DWORD *)a1 & 0xFFFFF07F,
            *(_DWORD *)a1);
    if ( v30 != v31 )
    {
      do
      {
        v32 = v31;
        v31 = _InterlockedCompareExchange((volatile signed __int32 *)a1, (v15 << 8) | v31 & 0xFFFFF07F, v31);
      }
      while ( v32 != v31 );
    }
    if ( v15 == 1 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
        _InterlockedAnd64((volatile signed __int64 *)&KiTimer2CollectionLock, 0LL);
      else
        KiReleaseSpinLockInstrumented((volatile signed __int64 *)&KiTimer2CollectionLock, retaddr);
    }
    v19 = v37;
  }
  if ( v17 )
    KiHvEnlightenedGuestPriorityKick(
      KeGetCurrentPrcb(),
      KiProcessorBlock[(unsigned int)KiClockTimerOwner],
      (unsigned int)KiVpThreadSystemWorkPriority);
  if ( KiForceIdleDisabled || KiForceIdleState != 4 )
  {
    if ( v14 )
    {
      KiRequestTimer2Expiration();
    }
    else if ( (v34 & 4) != 0
           && v12 < MEMORY[0xFFFFF78000000008] + (unsigned __int64)(unsigned int)KeMaximumIncrement
           && (!KiClockOwnerOneShotRequest
            || v12 < KiClockOwnerOneShotRequest && KiClockOwnerOneShotRequest - v12 > (unsigned int)KeMinimumIncrement) )
    {
      KiSendClockInterruptToTargetProcessor(KiClockTimerOwner);
    }
  }
LABEL_54:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return v19;
}
