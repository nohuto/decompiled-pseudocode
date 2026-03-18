/*
 * XREFs of PoInitSystem @ 0x140CCE870
 * Callers:
 *     Phase1InitializationDiscard @ 0x140CABD00 (Phase1InitializationDiscard.c)
 *     Phase1InitializationIoReady @ 0x140CAD020 (Phase1InitializationIoReady.c)
 *     IoInitSystemPreDrivers @ 0x140CBACA0 (IoInitSystemPreDrivers.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021C3F0 (KeQueryPerformanceCounter.c)
 *     MmDeterminePoolType @ 0x1402609A0 (MmDeterminePoolType.c)
 *     ExpAddResourceToSystemResourceList @ 0x140260A5C (ExpAddResourceToSystemResourceList.c)
 *     RtlStdLogStackTrace @ 0x140260BE8 (RtlStdLogStackTrace.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x140260C74 (RtlpStdGetRecordedStackTraceIndex.c)
 *     RtlStdReleaseStackTrace @ 0x140260D48 (RtlStdReleaseStackTrace.c)
 *     PpmReleaseLock @ 0x14037AFBC (PpmReleaseLock.c)
 *     PoFxSendSystemLatencyUpdate @ 0x140394368 (PoFxSendSystemLatencyUpdate.c)
 *     PpmAcquireLock @ 0x140394F80 (PpmAcquireLock.c)
 *     PopInitilizeAcDcSettings @ 0x140438218 (PopInitilizeAcDcSettings.c)
 *     IoAddTriageDumpDataBlock @ 0x14044AB54 (IoAddTriageDumpDataBlock.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x140498C60 (ExInitializeNPagedLookasideListInternal.c)
 *     PopBatteryQueueWork @ 0x1404E0BBC (PopBatteryQueueWork.c)
 *     HviIsAnyHypervisorPresent @ 0x1404E63D0 (HviIsAnyHypervisorPresent.c)
 *     PerfLogExecutiveResourceInitialize @ 0x1405263E4 (PerfLogExecutiveResourceInitialize.c)
 *     PopComputeCounterShifts @ 0x140527818 (PopComputeCounterShifts.c)
 *     ExpTraceLogBadResourceAddress @ 0x14052D790 (ExpTraceLogBadResourceAddress.c)
 *     HalGetInterruptTargetInformation @ 0x14057CF90 (HalGetInterruptTargetInformation.c)
 *     Feature_UnifiedMsNotification__private_IsEnabledDeviceUsageNoInline @ 0x14060052C (Feature_UnifiedMsNotification__private_IsEnabledDeviceUsageNoInline.c)
 *     PpmInitIllegalThrottleLogging @ 0x140600588 (PpmInitIllegalThrottleLogging.c)
 *     PopLidReliabilityInit @ 0x14060799C (PopLidReliabilityInit.c)
 *     PopCheckPowerSourceAfterRtcWakeInitialize @ 0x140607DF4 (PopCheckPowerSourceAfterRtcWakeInitialize.c)
 *     PopDiagTraceAbnormalReset @ 0x140608034 (PopDiagTraceAbnormalReset.c)
 *     PpmHeteroHgsDetectContainmentPresence @ 0x14060ACD4 (PpmHeteroHgsDetectContainmentPresence.c)
 *     ZwUpdateWnfStateData @ 0x140727030 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PopResetActionDefaults @ 0x14077C7B8 (PopResetActionDefaults.c)
 *     KeRegisterProcessorChangeCallback @ 0x1407BA2D0 (KeRegisterProcessorChangeCallback.c)
 *     PopCheckSkipTick @ 0x1407C846C (PopCheckSkipTick.c)
 *     PopDefaultPolicy @ 0x1407C84C8 (PopDefaultPolicy.c)
 *     PopSetupAirplaneModeNotification @ 0x1407C8590 (PopSetupAirplaneModeNotification.c)
 *     PopSetupAudioEventNotification @ 0x1407C85D0 (PopSetupAudioEventNotification.c)
 *     PopSetupBluetoothChargingNotification @ 0x1407C8610 (PopSetupBluetoothChargingNotification.c)
 *     PopSetupFullScrenVideoNotification @ 0x1407C8650 (PopSetupFullScrenVideoNotification.c)
 *     PopSetupHighPerfPowerRequest @ 0x1407C8690 (PopSetupHighPerfPowerRequest.c)
 *     PopSetupMixedRealitytNotification @ 0x1407C86CC (PopSetupMixedRealitytNotification.c)
 *     PopSetupMobileHotspotNotification @ 0x1407C875C (PopSetupMobileHotspotNotification.c)
 *     PopSetupSprActiveSessionChangeNotification @ 0x1407C879C (PopSetupSprActiveSessionChangeNotification.c)
 *     PopSetupUserPresencePredictionNotification @ 0x1407C87DC (PopSetupUserPresencePredictionNotification.c)
 *     PopInitializeWorkItem @ 0x1407C8C6C (PopInitializeWorkItem.c)
 *     PopUpdateUpgradeInProgress @ 0x1407C9270 (PopUpdateUpgradeInProgress.c)
 *     PpmIdleRegisterDefaultStates @ 0x1407C9A54 (PpmIdleRegisterDefaultStates.c)
 *     PopUpdateBackgroundCoolingStatus @ 0x1407CC03C (PopUpdateBackgroundCoolingStatus.c)
 *     PopThermalHandlePreviousShutdown @ 0x1407D1870 (PopThermalHandlePreviousShutdown.c)
 *     PopDiagTraceSkipTick @ 0x1407D4C10 (PopDiagTraceSkipTick.c)
 *     PpmEnableWmiInterface @ 0x1407D9F28 (PpmEnableWmiInterface.c)
 *     PopIdleInitAoAcDozeS4Timer @ 0x1407DA2F0 (PopIdleInitAoAcDozeS4Timer.c)
 *     PopSendFanNoiseChangeWnf @ 0x1407DB4FC (PopSendFanNoiseChangeWnf.c)
 *     PopIdleWakeInitialize @ 0x1407DD914 (PopIdleWakeInitialize.c)
 *     TtmInit @ 0x1407E63A8 (TtmInit.c)
 *     PopResetCurrentPolicies @ 0x140943130 (PopResetCurrentPolicies.c)
 *     PopLogSleepDisabled @ 0x140945880 (PopLogSleepDisabled.c)
 *     PopUpdateConsoleDisplayState @ 0x140A3CD5C (PopUpdateConsoleDisplayState.c)
 *     PpmCheckInitProcessors @ 0x140A9CBF0 (PpmCheckInitProcessors.c)
 *     PopInitializeHeteroProcessors @ 0x140A9DA10 (PopInitializeHeteroProcessors.c)
 *     PopInitializePowerPolicySimulate @ 0x140B2CC10 (PopInitializePowerPolicySimulate.c)
 *     EmpProviderRegister @ 0x140B58860 (EmpProviderRegister.c)
 *     EmClientQueryRuleState @ 0x140C03950 (EmClientQueryRuleState.c)
 *     PopAcquirePolicyLock @ 0x140C04BF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C04C40 (PopReleasePolicyLock.c)
 *     HalReportResourceUsage @ 0x140CAD650 (HalReportResourceUsage.c)
 *     PopCreateTimebrokerServiceSid @ 0x140CCF81C (PopCreateTimebrokerServiceSid.c)
 *     PopInitDripsWakeAccounting @ 0x140CCF8CC (PopInitDripsWakeAccounting.c)
 *     PopInitVideoWnfState @ 0x140CCFBE8 (PopInitVideoWnfState.c)
 *     PopInitializeHighPerfPowerRequest @ 0x140CCFC98 (PopInitializeHighPerfPowerRequest.c)
 *     PpmInitCoreParkingPolicy @ 0x140CCFDD0 (PpmInitCoreParkingPolicy.c)
 *     PpmInitIdlePolicy @ 0x140CCFE78 (PpmInitIdlePolicy.c)
 *     PopCheckAndClearBootError @ 0x140CCFFDC (PopCheckAndClearBootError.c)
 *     PopCheckShutdownMarker @ 0x140CD0064 (PopCheckShutdownMarker.c)
 *     PopRecordFirmwareResetReason @ 0x140CD0800 (PopRecordFirmwareResetReason.c)
 *     PopPowerRequestInitialize @ 0x140CD0850 (PopPowerRequestInitialize.c)
 *     PopInitializeDirectedDrips @ 0x140CD0CA8 (PopInitializeDirectedDrips.c)
 *     PopInitializePowerSettingCallbacks @ 0x140CD0CDC (PopInitializePowerSettingCallbacks.c)
 *     PopInitializeWin32kActivator @ 0x140CD0DC4 (PopInitializeWin32kActivator.c)
 *     PoFxInitPowerManagement @ 0x140CD0E44 (PoFxInitPowerManagement.c)
 *     PpmPerfInitialize @ 0x140CD1148 (PpmPerfInitialize.c)
 *     PopInitShutdownList @ 0x140CD133C (PopInitShutdownList.c)
 *     PopCoalescingInitialize @ 0x140CD13D8 (PopCoalescingInitialize.c)
 *     PopInitializePowerSettings @ 0x140CD149C (PopInitializePowerSettings.c)
 *     PopHiberEvaluateSkippingMemoryMapValidation @ 0x140CD1560 (PopHiberEvaluateSkippingMemoryMapValidation.c)
 *     PopInitializeBlameStack @ 0x140CD15BC (PopInitializeBlameStack.c)
 *     PopUserShutdownScenarioInitialize @ 0x140CD1748 (PopUserShutdownScenarioInitialize.c)
 *     PopThermalInit @ 0x140CD17AC (PopThermalInit.c)
 *     PopSetupKsrCallbacks @ 0x140CD18A4 (PopSetupKsrCallbacks.c)
 *     PopDiagInitialize @ 0x140CD1950 (PopDiagInitialize.c)
 *     PopTriggerDiagTraceAoAcCapability @ 0x140CD2B5C (PopTriggerDiagTraceAoAcCapability.c)
 *     PpmCheckInit @ 0x140CD2C04 (PpmCheckInit.c)
 *     PpmInitPolicyConfiguration @ 0x140CD2D80 (PpmInitPolicyConfiguration.c)
 *     PopInitializeSystemIdleDetection @ 0x140CD2F58 (PopInitializeSystemIdleDetection.c)
 *     PopDeepSleepInitialize @ 0x140CD3040 (PopDeepSleepInitialize.c)
 *     PopEvaluateInputSuppressionRequired @ 0x140CD308C (PopEvaluateInputSuppressionRequired.c)
 *     PopPowerButtonSuppressionInit @ 0x140CD317C (PopPowerButtonSuppressionInit.c)
 *     PopInitializeIrpWorkers @ 0x140CD3300 (PopInitializeIrpWorkers.c)
 *     PopDetectSimulatedHeteroProcessors @ 0x140CD3474 (PopDetectSimulatedHeteroProcessors.c)
 *     PpmInitHeteroPolicy @ 0x140CD46B4 (PpmInitHeteroPolicy.c)
 *     PopBatteryInit @ 0x140CD4A1C (PopBatteryInit.c)
 *     PopBatteryInitPhaseTwo @ 0x140CD4C90 (PopBatteryInitPhaseTwo.c)
 *     PopSmartSuspendInit @ 0x140CD4DE4 (PopSmartSuspendInit.c)
 *     PopNetInitialize @ 0x140CD4E38 (PopNetInitialize.c)
 *     PopInitializePowerButtonHold @ 0x140CD502C (PopInitializePowerButtonHold.c)
 *     PopRecorderInit @ 0x140CD52A4 (PopRecorderInit.c)
 *     PopFanReportBootStartDevices @ 0x140CD5320 (PopFanReportBootStartDevices.c)
 *     PopUmpoInitializeChannel @ 0x140CD5374 (PopUmpoInitializeChannel.c)
 *     PopUmpoInitializeMonitorChannel @ 0x140CD55F0 (PopUmpoInitializeMonitorChannel.c)
 *     PoInitializePdc @ 0x140CD57A4 (PoInitializePdc.c)
 *     PopCreateIdlePhaseWatchdog @ 0x140CD57F0 (PopCreateIdlePhaseWatchdog.c)
 *     PopPdcCsCheckSystemVolumeDevice @ 0x140CD5870 (PopPdcCsCheckSystemVolumeDevice.c)
 *     PopEsInit @ 0x140CD59F4 (PopEsInit.c)
 *     PopEtInit @ 0x140CD5AFC (PopEtInit.c)
 *     PopWatchdogInit @ 0x140CD5E24 (PopWatchdogInit.c)
 *     PopBSDiagInitialize @ 0x140CD5F20 (PopBSDiagInitialize.c)
 *     PopReadErrataForIncorrectLidNotification @ 0x140CD5FE0 (PopReadErrataForIncorrectLidNotification.c)
 *     PopReadErrataSkipMemoryOverwriteRequestControlLockAction @ 0x140CD602C (PopReadErrataSkipMemoryOverwriteRequestControlLockAction.c)
 *     PoFxRegisterDebugger @ 0x140CD6094 (PoFxRegisterDebugger.c)
 *     PpmEventInitialize @ 0x140CD6358 (PpmEventInitialize.c)
 *     PpmParkInitialize @ 0x140CD63E8 (PpmParkInitialize.c)
 *     PopModernStandbyNotificationInit @ 0x140CD6534 (PopModernStandbyNotificationInit.c)
 *     PopInitializeAdpm @ 0x140CD671C (PopInitializeAdpm.c)
 *     PopDripsWatchdogInitialize @ 0x140CD68EC (PopDripsWatchdogInitialize.c)
 *     SshInitialize @ 0x140CD7428 (SshInitialize.c)
 *     PopSleepstudyInitialize @ 0x140D09A38 (PopSleepstudyInitialize.c)
 *     PopPowerAggregatorInitialize @ 0x140D0B4DC (PopPowerAggregatorInitialize.c)
 */

bool __fastcall PoInitSystem(int a1, __int64 a2)
{
  int TimebrokerServiceSid; // eax
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // r8
  __int64 v8; // r8
  unsigned int v9; // ecx
  KSPIN_LOCK *p_Policy; // rbx
  unsigned __int16 v11; // di
  unsigned __int16 *v12; // rax
  __int64 *v13; // rsi
  int RecordedStackTraceIndex; // eax
  __int64 v15; // rdx
  unsigned int v16; // r8d
  __int64 v17; // rdx
  unsigned int v18; // r8d
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  struct _KLOCK_ENTRIES *v22; // r9
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // rcx
  int v27; // edi
  unsigned __int8 v28; // si
  int v29; // eax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  struct _SINGLE_LIST_ENTRY *v35; // r9
  int v36; // edx
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // rdx
  unsigned int v45; // r8d
  __int64 v46; // rcx
  __int64 v47; // r8
  struct _SINGLE_LIST_ENTRY *v48; // r9
  __int64 v49; // rdx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // r8
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // r8
  __int64 v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // r8
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  __int64 v66; // rdx
  __int64 v67; // rcx
  __int64 v68; // r8
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r8
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  __int128 v76; // [rsp+40h] [rbp-20h] BYREF
  __int64 v77; // [rsp+50h] [rbp-10h]
  int v78; // [rsp+58h] [rbp-8h]
  unsigned __int64 retaddr; // [rsp+98h] [rbp+38h]
  int v80; // [rsp+A0h] [rbp+40h] BYREF
  int v81; // [rsp+B0h] [rbp+50h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+B8h] [rbp+58h] BYREF

  HIDWORD(stru_140F10070.Spare35[0]) = a1;
  PerformanceFrequency.QuadPart = 0LL;
  v77 = 0LL;
  v78 = 0;
  v76 = 0LL;
  if ( !a1 )
  {
    KeQueryPerformanceCounter(&PerformanceFrequency);
    PopQpcFrequency = PerformanceFrequency.QuadPart;
    PopComputeCounterShifts(
      PerformanceFrequency.QuadPart,
      &PpmPerformanceDistributionShift,
      &PpmPerformanceCounterShift);
    PopComputeCounterShifts(0x989680uLL, &PpmHvPerformanceDistributionShift, &PpmHvPerformanceCounterShift);
    stru_140F10070.Spare35[1] = 0LL;
    PopSleepstudyInitialize(0LL);
    TimebrokerServiceSid = PopPowerAggregatorInitialize(0LL);
    if ( TimebrokerServiceSid >= 0 )
    {
      PopIdleLoopExecuted.Header.WaitListHead.Blink = &PopIdleLoopExecuted.Header.WaitListHead;
      PopIdleLoopExecuted.Header.WaitListHead.Flink = &PopIdleLoopExecuted.Header.WaitListHead;
      qword_140F10558 = (__int64)&qword_140F10550;
      qword_140F10550 = (__int64)&qword_140F10550;
      qword_140F10568 = (__int64)&qword_140F10560;
      qword_140F10560 = (__int64)&qword_140F10560;
      PopWeakChargerLock.ReadTransferCount = 0LL;
      PopWeakChargerLock.OtherOperationCount = 0LL;
      PopWeakChargerLock.SuspendEvent.Header.WaitListHead.Flink = 0LL;
      *(_QWORD *)&PopWeakChargerLock.SuspendEvent.Header.Lock = 0LL;
      stru_140F11D08.Affinity = 0LL;
      stru_140F11D08.AffinityVersion = 0LL;
      LOWORD(PopIdleLoopExecuted.Header.Lock) = 0;
      PopIdleLoopExecuted.Header.Size = 6;
      PopIdleLoopExecuted.Header.SignalState = 0;
      PopWeakChargerLock.SchedulerApc.Thread = 0LL;
      qword_140F10540[0] = 0LL;
      ExInitializeNPagedLookasideListInternal((__int64)&PopIrpDataLookaside, 0LL, 0LL, 512, 312, 1917415248, 0, 0);
      PopWeakChargerLock.SavedApcState.Process = 0LL;
      *(_QWORD *)&PopWeakChargerLock.SchedulerApc.Type = &PopWeakChargerLock.SavedApcStateFill[40];
      *(_QWORD *)&PopWeakChargerLock.SavedApcStateFill[40] = &PopWeakChargerLock.SavedApcStateFill[40];
      PopInitializeBlameStack();
      qword_140F10570 = 0LL;
      qword_140F10590 = (__int64)PopDevicePowerTransitionInProgressWorker;
      qword_140F10598 = 0LL;
      LOBYTE(NormalizationListLock.StateSaveArea) = (ExpSysDbgLock.SchedulerApcFill5[72] & 4) != 0;
      stru_140F12D20.GlobalUpdateVpThreadPriorityListEntry.Flink = (struct _LIST_ENTRY *)&stru_140F12D20.UserWaitTime;
      stru_140F12D20.UserWaitTime = (unsigned __int64)&stru_140F12D20.UserWaitTime;
      qword_140F10580.List.Flink = 0LL;
      NormalizationListLock.CycleTime = 0LL;
      LOWORD(NormalizationListLock.CurrentRunTime) = 0;
      NormalizationListLock.KernelStack = 0LL;
      LOBYTE(stru_140F12D20.SchedulerAssist) = 0;
      *(_QWORD *)&stru_140F12D20.ReservedPreviousReadyTimeValue = 0LL;
      stru_140F12D20.AbWaitObject = 0LL;
      LOWORD(stru_140F12D20.KernelWaitTime) = 1;
      BYTE2(stru_140F12D20.KernelWaitTime) = 6;
      HIDWORD(stru_140F12D20.KernelWaitTime) = 1;
      PopInitializeWorkItem(
        (__int64)&stru_140F12D20.SchedulerAssistPriorityFloor,
        (__int64)PopSetUserShutdownMarkerWorker,
        0LL);
      PopInitializeWorkItem((__int64)&stru_140F12D20.Spare35[1], (__int64)PopClearUserShutdownMarkerWorker, v4);
      PopInitializeWorkItem((__int64)&stru_140F12D20.AbCompletedIoQoSBoostCount, (__int64)PopBsdFlushWorker, v5);
      PopInitializeWorkItem((__int64)&stru_140F12D20.WriteTransferCount, (__int64)PopBsdUpdateWorker, v6);
      *(_QWORD *)&PopSleepstudySessionLock.PriorityFloorSummary = 0LL;
      *(_QWORD *)&PopSleepstudySessionLock.PriorityFloorCounts[24] = &GUID_SPM_DEFAULT;
      PopInitializeWorkItem((__int64)&PopWeakChargerLock.NpxState, (__int64)PopExternalMonitorUpdatedWorker, v7);
      PopInitializeWorkItem((__int64)&stru_140F12420.ReadOperationCount, (__int64)PopRecordLidStateWorker, v8);
      PopWeakChargerLock.AffinityVersion = 0LL;
      *(_QWORD *)&PopWeakChargerLock.UserAffinityPrimaryGroup = 0LL;
      PopWeakChargerLock.UserAffinity = 0LL;
      PopWeakChargerLock.Process = 0LL;
      *(_QWORD *)&stru_140F12D20.SchedulerApcFill5[80] = &stru_140F12D20.SchedulerApc.SystemArgument2;
      stru_140F12D20.SchedulerApc.SystemArgument2 = &stru_140F12D20.SchedulerApcFill5[72];
      *(_QWORD *)&stru_140F12D20.PriorityFloorCounts[16] = 0LL;
      *(_QWORD *)&stru_140F12D20.PriorityFloorCounts[8] = 0LL;
      LOBYTE(stru_140F12420.OtherTransferCount) = 0;
      PpmCheckInit();
      TimebrokerServiceSid = PopInitializeIrpWorkers();
      if ( TimebrokerServiceSid >= 0 )
      {
        *(_QWORD *)&stru_140F10070.ResourceIndex = 0LL;
        stru_140F10070.Padding[2] = (unsigned __int64)&stru_140F10070.Padding[1];
        stru_140F10070.Padding[1] = (unsigned __int64)&stru_140F10070.Padding[1];
        stru_140F10070.Padding[4] = (unsigned __int64)&stru_140F10070.Padding[3];
        stru_140F10070.Padding[3] = (unsigned __int64)&stru_140F10070.Padding[3];
        qword_140F10538 = (__int64)&qword_140F10530;
        qword_140F10530 = (__int64)&qword_140F10530;
        qword_140F0F610 = (__int64)&qword_140F0F608;
        qword_140F0F608 = (__int64)&qword_140F0F608;
        stru_140F10070.IptSaveArea = &stru_140F10070.SystemAffinityTokenListHead;
        stru_140F10070.SystemAffinityTokenListHead.Next = &stru_140F10070.SystemAffinityTokenListHead;
        stru_140F12420.UserWaitTime = (unsigned __int64)&stru_140F12420.KernelWaitTime;
        stru_140F12420.KernelWaitTime = (unsigned __int64)&stru_140F12420.KernelWaitTime;
        *(_QWORD *)&stru_140F12420.ThreadTimerDelay = &stru_140F12420.QueuedScb;
        stru_140F12420.QueuedScb = (_KSCB *)&stru_140F12420.QueuedScb;
        stru_140F10070.Spare32 = 0LL;
        stru_140F10070.AutoBoostThreadState = 0LL;
        stru_140F10070.KcsanThread = 0LL;
        *(_QWORD *)&stru_140F10070.SchedulerAssistYieldCounter = 0LL;
        qword_140E27108 = 0LL;
        LOWORD(stru_140F10070.Padding[0]) = 1;
        BYTE2(stru_140F10070.Padding[0]) = 6;
        HIDWORD(stru_140F10070.Padding[0]) = 1;
        *(_QWORD *)&stru_140F10070.Spare36 = 0LL;
        LOWORD(word_140F0F600.Header.Lock) = 1;
        byte_140F0F602 = 6;
        dword_140F0F604 = 1;
        LODWORD(stru_140F12420.TracingPrivate[0]) = 1;
        stru_140F12420.SchedulerAssist = 0LL;
        LODWORD(stru_140F12420.AbWaitObject) = 0;
        LOWORD(stru_140F12420.ReservedPreviousReadyTimeValue) = 1;
        BYTE2(stru_140F12420.ReservedPreviousReadyTimeValue) = 6;
        *(&stru_140F12420.ReservedPreviousReadyTimeValue + 1) = 0;
        PopInitShutdownList();
        v9 = PopIdleScanInterval;
        qword_140F10818 = (__int64)&qword_140F10810;
        qword_140F10810 = (__int64)&qword_140F10810;
        qword_140F10808 = 0LL;
        if ( PopIdleScanInterval )
        {
          if ( PopIdleScanInterval == -1 )
          {
            v9 = 30;
            PopIdleScanInterval = 30;
          }
          else if ( (unsigned int)PopIdleScanInterval > 0x12C )
          {
            v9 = 300;
            PopIdleScanInterval = 300;
          }
          stru_140F12420.PriorityFloorSummary = (v9 + 59) / v9;
          stru_140F12420.AbCompletedIoBoostCount = (v9 + 179) / v9;
        }
        qword_140F10820 = 0LL;
        stru_140F10828.ApcState.ApcListHead[1].Flink = (struct _LIST_ENTRY *)PopPolicyWorkerThread;
        stru_140F10828.ApcState.ApcListHead[0].Flink = 0LL;
        stru_140F10828.ApcState.ApcListHead[1].Blink = (struct _LIST_ENTRY *)0x80000000LL;
        *(_DWORD *)&stru_140F10828.ApcStateFill[32] = -1;
        if ( (unsigned __int64)&stru_140F10828.216 < 0xFFFF800000000000uLL
          || MmDeterminePoolType((unsigned __int64)&stru_140F10828.216) == 256 )
        {
          ExpTraceLogBadResourceAddress((unsigned __int64)&stru_140F10828.216, retaddr);
        }
        memset_0((void *)&stru_140F10828.Queue, 0, 0x50uLL);
        stru_140F10828.WaitListEntry.Blink = &stru_140F10828.WaitListEntry;
        stru_140F10828.WaitListEntry.Flink = &stru_140F10828.WaitListEntry;
        stru_140F10828.RelativeTimerBias = 0LL;
        *(_QWORD *)&stru_140F10828.Timer.Header.Lock = 0LL;
        *(_QWORD *)&stru_140F10828.Timer.Processor = 0LL;
        if ( (NtGlobalFlag & 0x2000) != 0 )
        {
          p_Policy = (KSPIN_LOCK *)&NormalizationListLock.SchedulingGroup->Policy;
          if ( NormalizationListLock.SchedulingGroup )
          {
            v12 = (unsigned __int16 *)RtlStdLogStackTrace(
                                        (PKSPIN_LOCK)&NormalizationListLock.SchedulingGroup->Policy,
                                        1);
            v13 = (__int64 *)v12;
            if ( v12 )
            {
              RecordedStackTraceIndex = RtlpStdGetRecordedStackTraceIndex(p_Policy, v12);
              v11 = RecordedStackTraceIndex;
              if ( !RecordedStackTraceIndex )
                RtlStdReleaseStackTrace((__int64)p_Policy, v13);
            }
            else
            {
              v11 = 0;
            }
          }
          else
          {
            v11 = 0;
          }
          stru_140F10828.Timer.Dpc = (_KDPC *)v11;
        }
        else
        {
          stru_140F10828.Timer.Dpc = 0LL;
        }
        HIDWORD(stru_140F10828.Timer.TimerListEntry.Blink) = -1;
        ExpAddResourceToSystemResourceList((struct _SINGLE_LIST_ENTRY *)&stru_140F10828.216);
        __incgsdword(0x9098u);
        if ( (DWORD1(PerfGlobalGroupMask[0]) & 0x20000) != 0 )
          PerfLogExecutiveResourceInitialize(65544, (__int64)&stru_140F10828.216, 0, 0);
        *(_QWORD *)&stru_140F10828.Header.Lock = 0LL;
        stru_140F10828.ThreadLock = (unsigned __int64)&stru_140F10828.StackBase;
        stru_140F10828.StackBase = &stru_140F10828.StackBase;
        LODWORD(stru_140F10828.SListFaultAddress) = 1;
        stru_140F11D08.WaitBlock[2].SparePtr = &stru_140F11D08.WaitBlockFill11[128];
        stru_140F11D08.WaitBlock[2].Object = &stru_140F11D08.WaitBlockFill11[128];
        stru_140F10828.StateSaveArea = (_XSAVE_FORMAT *)&stru_140F10828.KernelStack;
        stru_140F10828.KernelStack = &stru_140F10828.KernelStack;
        *(_QWORD *)&stru_140F10828.WaitRegister.Flags = &stru_140F10828.SchedulingGroup;
        stru_140F10828.SchedulingGroup = (_KSCHEDULING_GROUP *volatile)&stru_140F10828.SchedulingGroup;
        *(_QWORD *)&stru_140F10828.SystemCallNumber = (char *)&stru_140F10828.116 + 4;
        *($353D57E818BB6F967B4B818D974CF463 *)((char *)&stru_140F10828.116 + 4) = ($353D57E818BB6F967B4B818D974CF463)((char *)&stru_140F10828.116 + 4);
        stru_140F10828.QuantumTarget = 0LL;
        LODWORD(stru_140F10828.InitialStack) = 0;
        LOWORD(stru_140F10828.StackLimit) = 1;
        BYTE2(stru_140F10828.StackLimit) = 6;
        HIDWORD(stru_140F10828.StackLimit) = 0;
        *(_WORD *)&stru_140F11D08.WaitBlockFill11[120] = 0;
        stru_140F11D08.WaitBlockFill7[122] = 6;
        *(_DWORD *)&stru_140F11D08.WaitBlockFill11[124] = 0;
        stru_140F10828.TrapFrame = (_KTRAP_FRAME *)&stru_140F10828.FirstArgument;
        stru_140F10828.FirstArgument = &stru_140F10828.FirstArgument;
        PopWeakChargerLock.WaitBlockFill5[24] = 0;
        stru_140F0F620.Header.WaitListHead.Flink = 0LL;
        *(_QWORD *)&stru_140F0F620.Header.Lock = 0LL;
        IoAddTriageDumpDataBlock((ULONG)&stru_140F10828.FirstArgument, (PVOID)0x10);
        qword_140F105B8 = (__int64)&qword_140F105B0;
        qword_140F105B0 = (__int64)&qword_140F105B0;
        PopResetActionDefaults();
        qword_140F105C0 = dword_140F105E4;
        PopDefaultPolicy(dword_140F105E4);
        *(_QWORD *)((char *)&xmmword_140F10740 + 4) = 5LL;
        HIDWORD(xmmword_140F10740) = -1;
        LODWORD(xmmword_140F10740) = 2;
        qword_140F10750 = 0xFFFFFFFF00000000uLL;
        dword_140F105A0[0] = 1;
        stru_140F11D08.WaitBlock[2].WaitListEntry.Flink = (struct _LIST_ENTRY *)&stru_140F11D08.WaitBlockFill11[88];
        stru_140F11D08.WaitBlock[1].SparePtr = &stru_140F11D08.WaitBlockFill11[88];
        stru_140F11D08.WaitBlock[2].WaitListEntry.Blink = 0LL;
        dword_140E67608 = 0;
        dword_140E27100 = -1;
        dword_140E27104 = 2;
        PpmInitPolicyConfiguration();
        PpmInitIdlePolicy();
        PpmPerfInitialize();
        PpmInitCoreParkingPolicy();
        PpmInitHeteroPolicy();
        PpmIdleRegisterDefaultStates();
        PopDeepSleepInitialize(0LL);
        PopInitializePowerSettings();
        PopInitilizeAcDcSettings();
        unk_140F10E38 = 0LL;
        *(_QWORD *)&unk_140F10E30.Header.Lock = 0LL;
        PopBatteryInit();
        PopThermalInit();
        stru_140F10828.SavedApcState.ApcListHead[1].Blink = &stru_140F10828.SavedApcState.ApcListHead[1];
        stru_140F10828.SavedApcState.ApcListHead[1].Flink = &stru_140F10828.SavedApcState.ApcListHead[1];
        stru_140F10828.SchedulerApc.ApcListEntry.Blink = &stru_140F10828.SchedulerApc.ApcListEntry;
        stru_140F10828.SchedulerApc.ApcListEntry.Flink = &stru_140F10828.SchedulerApc.ApcListEntry;
        *(_OWORD *)&stru_140F10828.SavedApcStateFill[32] = 0uLL;
        *(_OWORD *)&stru_140F10828.SchedulerApc.Type = 0uLL;
        dword_140F107C0 = 4;
        byte_140F107C4 = 0;
        qword_140F107C8 = (__int64)PopShutdownHandler;
        *(_QWORD *)&stru_140F11D08.Timer.Header.Lock = &stru_140F11D08.RelativeTimerBias;
        stru_140F11D08.RelativeTimerBias = (unsigned __int64)&stru_140F11D08.RelativeTimerBias;
        stru_140F11D08.WaitBlock[0].WaitListEntry.Blink = (struct _LIST_ENTRY *)&stru_140F11D08.320;
        stru_140F11D08.WaitBlock[0].WaitListEntry.Flink = (struct _LIST_ENTRY *)&stru_140F11D08.320;
        stru_140F11D08.Timer.TimerListEntry.Flink = (struct _LIST_ENTRY *)&stru_140F11D08.Timer.DueTime;
        stru_140F11D08.Timer.DueTime.QuadPart = (unsigned __int64)&stru_140F11D08.Timer.DueTime;
        PpmWmiIdleAccountingTimer.Header.WaitListHead.Blink = &PpmWmiIdleAccountingTimer.Header.WaitListHead;
        PpmWmiIdleAccountingTimer.Header.WaitListHead.Flink = &PpmWmiIdleAccountingTimer.Header.WaitListHead;
        qword_140F0CD78 = (__int64)PpmWmiIdleAccountingProcedure;
        stru_140F11D08.WaitBlock[1].Thread = (struct _KTHREAD *)PopUserPresentSetWorker;
        qword_140E674F0 = (__int64)&qword_140E674E8;
        qword_140E674E8 = (__int64)&qword_140E674E8;
        *(_QWORD *)&PpmWmiIdleAccountingTimer.Header.Lock = 8LL;
        qword_140E674E0 = 8LL;
        qword_140F11030 = (__int64)&qword_140F11028;
        qword_140F11028 = (__int64)&qword_140F11028;
        LODWORD(stru_140F11D08.Queue) = 0;
        stru_140F11D08.Timer.Header.WaitListHead.Flink = 0LL;
        stru_140F11D08.Teb = 0LL;
        stru_140F11D08.Timer.Processor = 0;
        stru_140F11D08.Timer.TimerType = 6;
        stru_140F11D08.Timer.Period = 1;
        *(_DWORD *)&stru_140F11D08.WaitBlockFill11[16] = 0;
        PpmWmiIdleAccountingTimer.DueTime.QuadPart = 0LL;
        PpmWmiIdleAccountingTimer.Period = 0;
        PpmWmiIdleAccountingTimer.Processor = 0;
        PpmWmiIdleAccountingTimer.TimerDifObjTracking = 0;
        PpmWmiIdleAccountingDpc = 275;
        qword_140F0CD80 = 0LL;
        qword_140F0CD98 = 0LL;
        qword_140F0CD70 = 0LL;
        stru_140F11D08.WaitBlock[0].Thread = 0LL;
        stru_140F11D08.WaitBlock[1].Object = 0LL;
        stru_140F11D08.WaitBlock[1].WaitListEntry.Blink = 0LL;
        qword_140E674F8 = 0LL;
        dword_140E6751C = 0;
        word_140E67518 = 0;
        byte_140E6751B = 0;
        LOWORD(word_140F11020.Header.Lock) = 1;
        byte_140F11022 = 6;
        dword_140F11024 = 0;
        PopSmartSuspendInit();
        word_140F123A8 = 1;
        qword_140F123B8 = (__int64)&qword_140F123B0;
        qword_140F123B0 = (__int64)&qword_140F123B0;
        byte_140F123AA = 6;
        dword_140F123AC = 1;
        PoFxInitPowerManagement();
        dword_140F106EC = 0;
        qword_140F106F0 = 100LL;
        qword_140F106F8 = 100LL;
        dword_140F10700 = 100;
        PopNetInitialize(0LL);
        PopInitializePowerButtonHold(0LL);
        PopModernStandbyStateNotify.UserWaitTime = 0LL;
        PopModernStandbyStateNotify.KernelWaitTime = 0LL;
        PopRecorderInit();
        PopRecordFirmwareResetReason(a2);
        TimebrokerServiceSid = PopCreateTimebrokerServiceSid();
        if ( TimebrokerServiceSid >= 0 )
        {
          PopInitializeDirectedDrips(0LL);
          SshInitialize(0LL);
LABEL_81:
          TimebrokerServiceSid = 0;
          return TimebrokerServiceSid >= 0;
        }
      }
    }
    return TimebrokerServiceSid >= 0;
  }
  if ( a1 == 1 )
  {
    if ( HviIsAnyHypervisorPresent() )
    {
      PpmExitLatencyCheckEnabled = 0;
      HIDWORD(stru_140E66FF0.SchedulerSharedSwappablePage) = 0;
    }
    unk_140F10E28 = 0LL;
    unk_140F10E20 = 0LL;
    unk_140F10EAC = 0;
    PopSendFanNoiseChangeWnf(0);
    if ( (unsigned int)PopAggressiveStandbyActionsRegValue < 0x10 )
      LODWORD(stru_140F10828.SavedApcState.ApcListHead[0].Flink) = PopAggressiveStandbyActionsRegValue;
    stru_140F110C0.Header.WaitListHead.Blink = 0LL;
    stru_140F110C0.SListFaultAddress = 0LL;
    stru_140F110C0.Header.WaitListHead.Flink = 0LL;
    *(_QWORD *)&stru_140F110C0.Header.Lock = 0LL;
    SshInitialize(1LL);
    PopUmpoInitializeChannel();
    PopUmpoInitializeMonitorChannel();
    PoInitializePdc();
    PopEsInit(1LL);
    PopInitializePowerSettingCallbacks();
    TimebrokerServiceSid = PopEtInit();
    if ( TimebrokerServiceSid >= 0 )
    {
      TimebrokerServiceSid = PopPowerRequestInitialize();
      if ( TimebrokerServiceSid >= 0 )
      {
        TimebrokerServiceSid = PopPowerAggregatorInitialize(1LL);
        if ( TimebrokerServiceSid >= 0 )
        {
          TimebrokerServiceSid = PopInitializeHighPerfPowerRequest();
          if ( TimebrokerServiceSid >= 0 )
          {
            PopCheckPowerSourceAfterRtcWakeInitialize();
            PopWatchdogInit();
            PopInitializePowerButtonHold(1LL);
            PopBSDiagInitialize();
            PopInitDripsWakeAccounting();
            TimebrokerServiceSid = EmpProviderRegister(
                                     0LL,
                                     (__int64)&PopEmEntry,
                                     1u,
                                     (struct _KLOCK_ENTRIES *)&PopEmCallback,
                                     2u,
                                     (__int64 *)&PerformanceFrequency);
            if ( TimebrokerServiceSid >= 0 )
            {
              v80 = 1;
              PopModernStandbyStateNotify.ApcStateFill[33] = 0;
              EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_DEVICE_FAST_RESUME, &v80);
              if ( v80 == 2 )
                PopModernStandbyStateNotify.ApcStateFill[33] = 1;
              PopDetectSimulatedHeteroProcessors();
              PpmHeteroHgsDetectContainmentPresence(0LL, 0);
              goto LABEL_81;
            }
          }
        }
      }
    }
    return TimebrokerServiceSid >= 0;
  }
  if ( a1 != 2 )
  {
    if ( a1 != 3 )
      goto LABEL_81;
    TimebrokerServiceSid = PopDiagInitialize();
    if ( TimebrokerServiceSid < 0 )
      return TimebrokerServiceSid >= 0;
    SshInitialize(3LL);
    PopSleepstudyInitialize(3LL);
    LOBYTE(v26) = *(_DWORD *)&stru_140E66FF0.WaitBlockFill11[80] != 0 ? stru_140E66FF0.WaitBlockFill6[84] : 0;
    PopTriggerDiagTraceAoAcCapability(v26);
    PopFanReportBootStartDevices();
    PopInitializeWin32kActivator();
    if ( (unsigned int)Feature_UnifiedMsNotification__private_IsEnabledDeviceUsageNoInline() )
      PopModernStandbyNotificationInit();
    PopPowerAggregatorInitialize(3LL);
    TimebrokerServiceSid = PopUserShutdownScenarioInitialize();
    if ( TimebrokerServiceSid < 0 )
      return TimebrokerServiceSid >= 0;
    v27 = 2;
    v28 = 1;
    if ( PopSkipTickPolicy )
    {
      if ( PopSkipTickPolicy != 1 )
      {
        v27 = 0;
        v29 = 0;
LABEL_58:
        PoSkipTickMode = v29;
        PopDiagTraceSkipTick(v27 == 2, v28);
        goto LABEL_59;
      }
      v28 = 0;
      if ( (int)HalGetInterruptTargetInformation(2, 0, (__int64)&v76) >= 0 )
      {
        PopApicMode = HIDWORD(v77);
        if ( HIDWORD(v77) == 3 )
        {
          PopApicClusterSize = v78;
          PoSkipTickMaxOpportunisticProcessors = 8;
        }
        PoSkipTickMode = !PopCheckSkipTick();
LABEL_59:
        PpmInitIllegalThrottleLogging();
        PopCheckShutdownMarker(a2);
        PopCheckAndClearBootError();
        if ( (unsigned __int8)guard_dispatch_icall_no_overrides(v31, v30)
          || LODWORD(stru_140F12D20.KcsanThread) && HIDWORD(stru_140F12D20.KcsanThread) )
        {
          PopDiagTraceAbnormalReset(SHIDWORD(stru_140F12D20.KcsanThread));
        }
        PopIdleWakeInitialize();
        PopAcquirePolicyLock(v33, v32, v34, v35);
        PopUpdateUpgradeInProgress(0LL);
        if ( InitIsWinPEMode )
          PopLogSleepDisabled(16, 15, 0LL, 0LL);
        if ( stru_140F10828.WaitBlockFill5[44] )
          PopLogSleepDisabled(17, 7, 0LL, 0LL);
        v36 = 0;
        if ( (*(_BYTE *)(*(_QWORD *)(a2 + 240) + 2648LL) & 8) != 0 )
        {
          LOBYTE(stru_140F11D08.Header.WaitListHead.Blink) = 1;
          v36 = 4;
        }
        if ( (HvlpFlags & 2) != 0 || !VslVsmEnabled )
        {
          if ( !v36 )
          {
LABEL_74:
            PopDeepSleepInitialize(3LL);
            PopInitializePowerPolicySimulate();
            if ( (stru_140F10828.WaitBlockFill6[100] & 1) != 0 )
            {
              stru_140F10828.WaitBlockFill5[54] = 1;
              stru_140F10828.WaitBlock[1].WaitListEntry.Blink = (struct _LIST_ENTRY *)0x19000000064LL;
              *(_QWORD *)&stru_140F10828.WaitBlockFill11[64] = 0xFFFF0000000ALL;
              *(_DWORD *)&stru_140F10828.WaitBlockFill11[88] = 4;
              *(_DWORD *)&stru_140F10828.WaitBlockFill11[96] = 2;
            }
            if ( (stru_140F10828.WaitBlockFill6[100] & 2) != 0 )
            {
              *(_DWORD *)&stru_140F10828.WaitBlockFill11[24] = 16843009;
              *(_WORD *)&stru_140F10828.WaitBlockFill11[28] = 257;
              stru_140F10828.WaitBlockFill5[30] = 1;
              *(_WORD *)&stru_140F10828.WaitBlockFill11[41] = 257;
            }
            PopResetCurrentPolicies();
            PopInitializeAdpm();
            PopEsInit(3LL);
            PopInitilizeAcDcSettings();
            v81 = 1;
            PopUpdateConsoleDisplayState(1LL, v37);
            ZwUpdateWnfStateData((__int64)&WNF_PO_PRIMARY_DISPLAY_VISIBLE_STATE, (__int64)&v81);
            PopNetInitialize(3LL);
            PopReleasePolicyLock();
            PopIdleInitAoAcDozeS4Timer();
            PopCreateIdlePhaseWatchdog(v39, v38, v40);
            PopInitializeSystemIdleDetection(v42, v41, v43);
            BYTE1(stru_140F11D08.Header.WaitListHead.Blink) = (*(_DWORD *)(*(_QWORD *)(a2 + 240) + 132LL) & 0x10000000) != 0;
            PopSetupHighPerfPowerRequest(BYTE1(stru_140F11D08.Header.WaitListHead.Blink), v44, v45);
            PpmEnableWmiInterface();
            v49 = *(_QWORD *)(a2 + 240);
            if ( (*(_DWORD *)(v49 + 2648) & 0x8000LL) != 0 )
              BYTE2(stru_140F11D08.Header.WaitListHead.Blink) = 1;
            *(_OWORD *)&stru_140F11D08.SListFaultAddress = *(_OWORD *)(v49 + 4416);
            PopAcquirePolicyLock(v46, v49, v47, v48);
            PopCoalescingInitialize(v51, v50, v52);
            PopReleasePolicyLock();
            PopInitializeDirectedDrips(3LL);
            PopDripsWatchdogInitialize(v54, v53, v55);
            PopSetupAudioEventNotification();
            PopSetupMixedRealitytNotification();
            PopSetupFullScrenVideoNotification();
            PopSetupUserPresencePredictionNotification();
            PopSetupSprActiveSessionChangeNotification();
            PopSetupAirplaneModeNotification();
            PopSetupBluetoothChargingNotification();
            PopSetupMobileHotspotNotification();
            PopThermalHandlePreviousShutdown();
            LOBYTE(PopModernStandbyStateNotify.GlobalUpdateVpThreadPriorityListEntry.Flink) = (*(_DWORD *)(a2 + 264) & 2) != 0;
            TtmInit();
            PopReadErrataForIncorrectLidNotification(v57, v56, v58);
            PopLidReliabilityInit(v59);
            PopEvaluateInputSuppressionRequired(v61, v60, v62);
            PopPowerButtonSuppressionInit(v64, v63, v65);
            PopBatteryQueueWork(1u);
            PopSetupKsrCallbacks(v67, v66, v68);
            PopHiberEvaluateSkippingMemoryMapValidation(v70, v69, v71);
            PopReadErrataSkipMemoryOverwriteRequestControlLockAction(v73, v72, v74);
            goto LABEL_81;
          }
        }
        else
        {
          LOBYTE(v36) = 23;
        }
        PopLogSleepDisabled(21, v36, 0LL, 0LL);
        goto LABEL_74;
      }
    }
    v29 = 2;
    goto LABEL_58;
  }
  PoFxRegisterDebugger();
  HalReportResourceUsage(1);
  PopBatteryInitPhaseTwo();
  TimebrokerServiceSid = PpmEventInitialize();
  if ( TimebrokerServiceSid >= 0 )
  {
    KeRegisterProcessorChangeCallback((PPROCESSOR_CALLBACK_FUNCTION)PopNewProcessorCallback, 0LL, 0);
    PpmAcquireLock((struct _KTHREAD **)&stru_140F10070.SchedulerAssistLastYieldBoostTime, v15, v16);
    PopInitializeHeteroProcessors(1);
    PpmReleaseLock(&stru_140F10070.SchedulerAssistLastYieldBoostTime);
    if ( PpmPerfArtificialDomainSetting != -1 )
      PpmPerfArtificialDomainEnabled = PpmPerfArtificialDomainSetting != 0;
    PpmIdleRegisterDefaultStates();
    TimebrokerServiceSid = PpmParkInitialize();
    if ( TimebrokerServiceSid >= 0 )
    {
      PpmCheckInitProcessors(0, 1);
      PpmAcquireLock((struct _KTHREAD **)&qword_140F123A0, v17, v18);
      PoFxSendSystemLatencyUpdate(v20, v19, v21, v22);
      PpmReleaseLock(&qword_140F123A0);
      PopPdcCsCheckSystemVolumeDevice();
      PopUpdateBackgroundCoolingStatus(0);
      ZwUpdateWnfStateData(
        (__int64)&WNF_PO_MULTIMEDIA_POWER_MODEL,
        (__int64)&stru_140F11D08.InGlobalUpdateVpThreadPriorityList + 4);
      PopInitVideoWnfState(v24, v23, v25);
      goto LABEL_81;
    }
  }
  return TimebrokerServiceSid >= 0;
}
