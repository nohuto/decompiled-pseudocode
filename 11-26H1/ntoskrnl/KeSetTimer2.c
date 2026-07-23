/*
 * XREFs of KeSetTimer2 @ 0x14037C2B0
 * Callers:
 *     ?SmHighMemPriorityTimerStart@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14028050C (-SmHighMemPriorityTimerStart@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     RtlpHpEnvCompactionSchedule @ 0x14034F6D0 (RtlpHpEnvCompactionSchedule.c)
 *     ExSetTimer @ 0x14037C1D0 (ExSetTimer.c)
 *     ExpSetTimerObject2 @ 0x1403B3598 (ExpSetTimerObject2.c)
 *     WdtpArmTimer @ 0x1403B3C4C (WdtpArmTimer.c)
 *     NtSetInformationWorkerFactory @ 0x1403E1B50 (NtSetInformationWorkerFactory.c)
 *     MiStoreEvictThread @ 0x1404A9A20 (MiStoreEvictThread.c)
 *     PpmCheckArmPeriod @ 0x1404DF800 (PpmCheckArmPeriod.c)
 *     KiProcessPendingForegroundBoosts @ 0x1404F7DD0 (KiProcessPendingForegroundBoosts.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x1405086E0 (PopIdleArmAoAcDozeS4Timer.c)
 *     PopThermalEventTransitionDisableDeepSleep @ 0x14050BBE0 (PopThermalEventTransitionDisableDeepSleep.c)
 *     KiInitializeIdealProcessorRebalancer @ 0x1405F7538 (KiInitializeIdealProcessorRebalancer.c)
 *     KiTriggerForegroundBoostDpc @ 0x1405F95D0 (KiTriggerForegroundBoostDpc.c)
 *     KiForceParkDutyCycleDpcCallback @ 0x1405FB3A0 (KiForceParkDutyCycleDpcCallback.c)
 *     PopDirectedDripsStartDisengageTimer @ 0x140606610 (PopDirectedDripsStartDisengageTimer.c)
 *     PopThermalUpdateTelemetryClientCount @ 0x14060A834 (PopThermalUpdateTelemetryClientCount.c)
 *     PopCheckPowerSourceAfterRtcWakeSet @ 0x14060AA0C (PopCheckPowerSourceAfterRtcWakeSet.c)
 *     PopPowerButtonWorkCallback @ 0x14060FE80 (PopPowerButtonWorkCallback.c)
 *     DifKeSetTimer2Wrapper @ 0x1406680A0 (DifKeSetTimer2Wrapper.c)
 *     EtwpCoverageEnsureContext @ 0x140778B18 (EtwpCoverageEnsureContext.c)
 *     PopPowerRequestDebounceTimerWorker @ 0x1407CC4F0 (PopPowerRequestDebounceTimerWorker.c)
 *     PpmRegisterPerfStates @ 0x1407D13F8 (PpmRegisterPerfStates.c)
 *     PopUserShutdownScenarioNotifyWinlogonCallout @ 0x1407D4888 (PopUserShutdownScenarioNotifyWinlogonCallout.c)
 *     PopPowerAggregatorDozeTimerArm @ 0x1407D9768 (PopPowerAggregatorDozeTimerArm.c)
 *     PopPowerAggregatorSessionSwitchWorker @ 0x1407D9FE0 (PopPowerAggregatorSessionSwitchWorker.c)
 *     PopNetArmRefreshTimer @ 0x1407DE2B8 (PopNetArmRefreshTimer.c)
 *     PopNetResiliencyPhaseStateChanged @ 0x1407DE7B0 (PopNetResiliencyPhaseStateChanged.c)
 *     PopAdaptiveStandbySetPolicyTimer @ 0x1407E5600 (PopAdaptiveStandbySetPolicyTimer.c)
 *     ExStartStopWorkQueueProvider @ 0x1408458FC (ExStartStopWorkQueueProvider.c)
 *     PopSleepstudyStartNextSession @ 0x1409F4CE0 (PopSleepstudyStartNextSession.c)
 *     PopPowerRequestSetExecutionRequiredTimeoutTimer @ 0x1409F69C0 (PopPowerRequestSetExecutionRequiredTimeoutTimer.c)
 *     PopDripsWatchdogScheduleNextTimer @ 0x1409F8238 (PopDripsWatchdogScheduleNextTimer.c)
 *     EtwpEnableKernelTrace @ 0x140A00560 (EtwpEnableKernelTrace.c)
 *     ExpWorkQueueManagerThread @ 0x140A77D60 (ExpWorkQueueManagerThread.c)
 *     NtCreateWorkerFactory @ 0x140A95E40 (NtCreateWorkerFactory.c)
 *     PopThermalWorker @ 0x140AC58C0 (PopThermalWorker.c)
 *     PopPowerRequestHandleRequestUpdate @ 0x140AE4F44 (PopPowerRequestHandleRequestUpdate.c)
 *     EtwpCoverageRecord @ 0x140B0FA48 (EtwpCoverageRecord.c)
 *     ExpTimeRefreshWork @ 0x140C05510 (ExpTimeRefreshWork.c)
 *     HalpBlkInitSystem @ 0x140CBA568 (HalpBlkInitSystem.c)
 *     ExInitializeTimeRefresh @ 0x140CEA100 (ExInitializeTimeRefresh.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1402081F0 (RtlGetInterruptTimePrecise.c)
 *     RtlGetSystemTimePrecise @ 0x14021E1C0 (RtlGetSystemTimePrecise.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiReleaseSpinLockInstrumented @ 0x140308CAC (KiReleaseSpinLockInstrumented.c)
 *     KiAcquireSpinLockInstrumented @ 0x1403313B0 (KiAcquireSpinLockInstrumented.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1403314C0 (KxWaitForSpinLockAndAcquire.c)
 *     KiInsertTimer2WithCollectionLockHeld @ 0x14037A770 (KiInsertTimer2WithCollectionLockHeld.c)
 *     KiRemoveTimer2 @ 0x14037AC60 (KiRemoveTimer2.c)
 *     KiSendClockInterruptToTargetProcessor @ 0x14037B19C (KiSendClockInterruptToTargetProcessor.c)
 *     KiAcquireTimer2LockUnlessDisabled @ 0x14037C760 (KiAcquireTimer2LockUnlessDisabled.c)
 *     KiAcquireTimer2CollectionLockIfInserted @ 0x14037C7E0 (KiAcquireTimer2CollectionLockIfInserted.c)
 *     KiTraceSetTimer2 @ 0x1403B3624 (KiTraceSetTimer2.c)
 *     KiRequestTimer2Expiration @ 0x1404475C4 (KiRequestTimer2Expiration.c)
 *     PsTimerResolutionActive @ 0x14044E890 (PsTimerResolutionActive.c)
 *     KiHvEnlightenedGuestPriorityKick @ 0x140460D40 (KiHvEnlightenedGuestPriorityKick.c)
 *     KiUpdateTimer2Collections @ 0x1404B9030 (KiUpdateTimer2Collections.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KeSetTimer2(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // r12
  __int64 v8; // rdx
  unsigned __int8 CurrentIrql; // bp
  char v10; // r13
  LARGE_INTEGER InterruptTimePrecise; // rax
  unsigned __int64 v12; // rdi
  __int64 v13; // rsi
  char v14; // r15
  unsigned int v15; // r14d
  char v16; // dl
  char LowPart; // si
  __int64 v18; // r8
  unsigned __int8 v19; // r14
  __int64 v20; // rax
  char v21; // al
  int v22; // eax
  char v24; // r8
  char v25; // dl
  bool v26; // zf
  LARGE_INTEGER v27; // r8
  __int64 v28; // rax
  LARGE_INTEGER SystemTimePrecise; // rax
  volatile signed __int32 v30; // edx
  signed __int32 v31; // eax
  signed __int32 v32; // edx
  __int64 retaddr; // [rsp+68h] [rbp+0h]
  char v34; // [rsp+70h] [rbp+8h]
  LARGE_INTEGER PerformanceCounter; // [rsp+78h] [rbp+10h] BYREF
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
      v27.QuadPart = MEMORY[0xFFFFF78000000014];
    }
    v28 = 0LL;
    if ( a2 > v27.QuadPart )
      v28 = v27.QuadPart - a2;
    a2 = v28;
  }
  if ( (v8 & 4) != 0 )
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
  else
    InterruptTimePrecise.QuadPart = MEMORY[0xFFFFF78000000008];
  v12 = InterruptTimePrecise.QuadPart - a2;
  if ( InterruptTimePrecise.QuadPart >= (unsigned __int64)a2 || v12 == -1LL )
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
    if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
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
  LowPart = 0;
  LOBYTE(PerformanceCounter.LowPart) = 0;
  if ( v15 == 1 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      if ( _interlockedbittestandset64((volatile signed __int32 *)&KiTimer2CollectionLock, 0LL) )
        KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&KiTimer2CollectionLock);
    }
    else
    {
      KiAcquireSpinLockInstrumented((volatile signed __int32 *)&KiTimer2CollectionLock);
    }
    KiInsertTimer2WithCollectionLockHeld(a1, 1, &v36, (bool *)&PerformanceCounter);
    LowPart = PerformanceCounter.LowPart;
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
      if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
        _InterlockedAnd64((volatile signed __int64 *)&KiTimer2CollectionLock, 0LL);
      else
        KiReleaseSpinLockInstrumented((volatile signed __int64 *)&KiTimer2CollectionLock, retaddr);
    }
    v19 = v37;
  }
  if ( LowPart )
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
           && v12 < MEMORY[0xFFFFF78000000008] + (unsigned __int64)KeMaximumIncrement
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
