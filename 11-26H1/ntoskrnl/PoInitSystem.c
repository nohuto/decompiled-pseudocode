/*
 * XREFs of PoInitSystem @ 0x140CD49D0
 * Callers:
 *     Phase1InitializationDiscard @ 0x140CB1D40 (Phase1InitializationDiscard.c)
 *     Phase1InitializationIoReady @ 0x140CB3060 (Phase1InitializationIoReady.c)
 *     IoInitSystemPreDrivers @ 0x140CC0D18 (IoInitSystemPreDrivers.c)
 * Callees:
 *     MmDeterminePoolType @ 0x14021A220 (MmDeterminePoolType.c)
 *     ExpAddResourceToSystemResourceList @ 0x14021B4EC (ExpAddResourceToSystemResourceList.c)
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     RtlStdLogStackTrace @ 0x140260150 (RtlStdLogStackTrace.c)
 *     RtlpStdGetRecordedStackTraceIndex @ 0x1402601DC (RtlpStdGetRecordedStackTraceIndex.c)
 *     RtlStdReleaseStackTrace @ 0x1402602B0 (RtlStdReleaseStackTrace.c)
 *     PpmReleaseLock @ 0x14037CD6C (PpmReleaseLock.c)
 *     PoFxSendSystemLatencyUpdate @ 0x1403960E8 (PoFxSendSystemLatencyUpdate.c)
 *     PpmAcquireLock @ 0x140396D00 (PpmAcquireLock.c)
 *     PopInitilizeAcDcSettings @ 0x140427138 (PopInitilizeAcDcSettings.c)
 *     IoAddTriageDumpDataBlock @ 0x140442C84 (IoAddTriageDumpDataBlock.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x1404927B0 (ExInitializeNPagedLookasideListInternal.c)
 *     PopBatteryQueueWork @ 0x1404DA29C (PopBatteryQueueWork.c)
 *     HviIsAnyHypervisorPresent @ 0x1404DF970 (HviIsAnyHypervisorPresent.c)
 *     PerfLogExecutiveResourceInitialize @ 0x140528A54 (PerfLogExecutiveResourceInitialize.c)
 *     PopComputeCounterShifts @ 0x140529E88 (PopComputeCounterShifts.c)
 *     ExpTraceLogBadResourceAddress @ 0x14052FCB0 (ExpTraceLogBadResourceAddress.c)
 *     HalGetInterruptTargetInformation @ 0x14057F4B0 (HalGetInterruptTargetInformation.c)
 *     Feature_NU4MP__private_IsEnabledDeviceUsageNoInline @ 0x140602F80 (Feature_NU4MP__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_UnifiedMsNotification__private_IsEnabledDeviceUsageNoInline @ 0x140602FDC (Feature_UnifiedMsNotification__private_IsEnabledDeviceUsageNoInline.c)
 *     PpmInitIllegalThrottleLogging @ 0x140603038 (PpmInitIllegalThrottleLogging.c)
 *     PopLidReliabilityInit @ 0x14060A4FC (PopLidReliabilityInit.c)
 *     PopCheckPowerSourceAfterRtcWakeInitialize @ 0x14060A9A4 (PopCheckPowerSourceAfterRtcWakeInitialize.c)
 *     PopDiagTraceAbnormalReset @ 0x14060ABE4 (PopDiagTraceAbnormalReset.c)
 *     PpmHeteroHgsDetectContainmentPresence @ 0x14060D93C (PpmHeteroHgsDetectContainmentPresence.c)
 *     ZwUpdateWnfStateData @ 0x14072BC00 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PopResetActionDefaults @ 0x14077F2AC (PopResetActionDefaults.c)
 *     KeRegisterProcessorChangeCallback @ 0x1407BD330 (KeRegisterProcessorChangeCallback.c)
 *     PopCheckSkipTick @ 0x1407CB4CC (PopCheckSkipTick.c)
 *     PopDefaultPolicy @ 0x1407CB528 (PopDefaultPolicy.c)
 *     PopSetupAirplaneModeNotification @ 0x1407CB5F0 (PopSetupAirplaneModeNotification.c)
 *     PopSetupAudioEventNotification @ 0x1407CB630 (PopSetupAudioEventNotification.c)
 *     PopSetupBluetoothChargingNotification @ 0x1407CB670 (PopSetupBluetoothChargingNotification.c)
 *     PopSetupFullScrenVideoNotification @ 0x1407CB6B0 (PopSetupFullScrenVideoNotification.c)
 *     PopSetupHighPerfPowerRequest @ 0x1407CB6F0 (PopSetupHighPerfPowerRequest.c)
 *     PopSetupMixedRealitytNotification @ 0x1407CB72C (PopSetupMixedRealitytNotification.c)
 *     PopSetupMobileHotspotNotification @ 0x1407CB7BC (PopSetupMobileHotspotNotification.c)
 *     PopSetupSprActiveSessionChangeNotification @ 0x1407CB7FC (PopSetupSprActiveSessionChangeNotification.c)
 *     PopSetupUsb4DisplayPresenceNotification @ 0x1407CB83C (PopSetupUsb4DisplayPresenceNotification.c)
 *     PopSetupUserPresencePredictionNotification @ 0x1407CB87C (PopSetupUserPresencePredictionNotification.c)
 *     PopInitializeWorkItem @ 0x1407CBD0C (PopInitializeWorkItem.c)
 *     PopUpdateUpgradeInProgress @ 0x1407CC310 (PopUpdateUpgradeInProgress.c)
 *     PpmIdleRegisterDefaultStates @ 0x1407CCAF4 (PpmIdleRegisterDefaultStates.c)
 *     PopUpdateBackgroundCoolingStatus @ 0x1407CF0DC (PopUpdateBackgroundCoolingStatus.c)
 *     PopThermalHandlePreviousShutdown @ 0x1407D4910 (PopThermalHandlePreviousShutdown.c)
 *     PopDiagTraceSkipTick @ 0x1407D7DC8 (PopDiagTraceSkipTick.c)
 *     PpmEnableWmiInterface @ 0x1407DDEC8 (PpmEnableWmiInterface.c)
 *     PopIdleInitAoAcDozeS4Timer @ 0x1407DE22C (PopIdleInitAoAcDozeS4Timer.c)
 *     PopSendFanNoiseChangeWnf @ 0x1407DF3EC (PopSendFanNoiseChangeWnf.c)
 *     PopIdleWakeInitialize @ 0x1407E1F44 (PopIdleWakeInitialize.c)
 *     TtmInit @ 0x1407EBF08 (TtmInit.c)
 *     PopResetCurrentPolicies @ 0x1409BEAA8 (PopResetCurrentPolicies.c)
 *     PopLogSleepDisabled @ 0x1409C11F0 (PopLogSleepDisabled.c)
 *     PopUpdateConsoleDisplayState @ 0x1409F877C (PopUpdateConsoleDisplayState.c)
 *     PpmCheckInitProcessors @ 0x140AEB890 (PpmCheckInitProcessors.c)
 *     PopInitializePowerPolicySimulate @ 0x140B2EC90 (PopInitializePowerPolicySimulate.c)
 *     EmpProviderRegister @ 0x140B5B680 (EmpProviderRegister.c)
 *     PopInitializeHeteroProcessors @ 0x140B76758 (PopInitializeHeteroProcessors.c)
 *     EmClientQueryRuleState @ 0x140C09B60 (EmClientQueryRuleState.c)
 *     PopAcquirePolicyLock @ 0x140C0AE00 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C0AE50 (PopReleasePolicyLock.c)
 *     HalReportResourceUsage @ 0x140CB3690 (HalReportResourceUsage.c)
 *     PopCreateTimebrokerServiceSid @ 0x140CD59CC (PopCreateTimebrokerServiceSid.c)
 *     PopInitDripsWakeAccounting @ 0x140CD5A7C (PopInitDripsWakeAccounting.c)
 *     PopInitVideoWnfState @ 0x140CD5D90 (PopInitVideoWnfState.c)
 *     PopInitializeHighPerfPowerRequest @ 0x140CD5E40 (PopInitializeHighPerfPowerRequest.c)
 *     PpmInitCoreParkingPolicy @ 0x140CD5F78 (PpmInitCoreParkingPolicy.c)
 *     PpmInitIdlePolicy @ 0x140CD6020 (PpmInitIdlePolicy.c)
 *     PopCheckAndClearBootError @ 0x140CD6184 (PopCheckAndClearBootError.c)
 *     PopCheckShutdownMarker @ 0x140CD620C (PopCheckShutdownMarker.c)
 *     PopRecordFirmwareResetReason @ 0x140CD69A8 (PopRecordFirmwareResetReason.c)
 *     PopPowerRequestInitialize @ 0x140CD69F8 (PopPowerRequestInitialize.c)
 *     PopInitializeDirectedDrips @ 0x140CD6E50 (PopInitializeDirectedDrips.c)
 *     PopInitializePowerSettingCallbacks @ 0x140CD6E84 (PopInitializePowerSettingCallbacks.c)
 *     PopInitializeWin32kActivator @ 0x140CD6F6C (PopInitializeWin32kActivator.c)
 *     PoFxInitPowerManagement @ 0x140CD6FEC (PoFxInitPowerManagement.c)
 *     PpmPerfInitialize @ 0x140CD72F0 (PpmPerfInitialize.c)
 *     PopInitShutdownList @ 0x140CD74E4 (PopInitShutdownList.c)
 *     PopCoalescingInitialize @ 0x140CD7580 (PopCoalescingInitialize.c)
 *     PopInitializePowerSettings @ 0x140CD7644 (PopInitializePowerSettings.c)
 *     PopHiberEvaluateSkippingMemoryMapValidation @ 0x140CD7708 (PopHiberEvaluateSkippingMemoryMapValidation.c)
 *     PopInitializeBlameStack @ 0x140CD7764 (PopInitializeBlameStack.c)
 *     PopUserShutdownScenarioInitialize @ 0x140CD78F0 (PopUserShutdownScenarioInitialize.c)
 *     PopThermalInit @ 0x140CD7954 (PopThermalInit.c)
 *     PopSetupKsrCallbacks @ 0x140CD7A4C (PopSetupKsrCallbacks.c)
 *     PopDiagInitialize @ 0x140CD7AF8 (PopDiagInitialize.c)
 *     PopTriggerDiagTraceAoAcCapability @ 0x140CD8D04 (PopTriggerDiagTraceAoAcCapability.c)
 *     PpmCheckInit @ 0x140CD8DAC (PpmCheckInit.c)
 *     PpmInitPolicyConfiguration @ 0x140CD8F20 (PpmInitPolicyConfiguration.c)
 *     PopInitializeSystemIdleDetection @ 0x140CD90F8 (PopInitializeSystemIdleDetection.c)
 *     PopDeepSleepInitialize @ 0x140CD91E0 (PopDeepSleepInitialize.c)
 *     PopEvaluateInputSuppressionRequired @ 0x140CD922C (PopEvaluateInputSuppressionRequired.c)
 *     PopPowerButtonSuppressionInit @ 0x140CD931C (PopPowerButtonSuppressionInit.c)
 *     PopInitializeIrpWorkers @ 0x140CD94A0 (PopInitializeIrpWorkers.c)
 *     PopDetectSimulatedHeteroProcessors @ 0x140CD9614 (PopDetectSimulatedHeteroProcessors.c)
 *     PpmInitHeteroPolicy @ 0x140CDAA34 (PpmInitHeteroPolicy.c)
 *     PopBatteryInit @ 0x140CDAD9C (PopBatteryInit.c)
 *     PopBatteryInitPhaseTwo @ 0x140CDB010 (PopBatteryInitPhaseTwo.c)
 *     PopSmartSuspendInit @ 0x140CDB184 (PopSmartSuspendInit.c)
 *     PopNetInitialize @ 0x140CDB1D8 (PopNetInitialize.c)
 *     PopInitializePowerButtonHold @ 0x140CDB3CC (PopInitializePowerButtonHold.c)
 *     PopRecorderInit @ 0x140CDB644 (PopRecorderInit.c)
 *     PopFanReportBootStartDevices @ 0x140CDB6C0 (PopFanReportBootStartDevices.c)
 *     PopUmpoInitializeChannel @ 0x140CDB714 (PopUmpoInitializeChannel.c)
 *     PopUmpoInitializeMonitorChannel @ 0x140CDB990 (PopUmpoInitializeMonitorChannel.c)
 *     PopCreateIdlePhaseWatchdog @ 0x140CDBB44 (PopCreateIdlePhaseWatchdog.c)
 *     PopPdcCsCheckSystemVolumeDevice @ 0x140CDBBC4 (PopPdcCsCheckSystemVolumeDevice.c)
 *     PopEsInit @ 0x140CDBD48 (PopEsInit.c)
 *     PopEtInit @ 0x140CDBE50 (PopEtInit.c)
 *     PopWatchdogInit @ 0x140CDC178 (PopWatchdogInit.c)
 *     PopBSDiagInitialize @ 0x140CDC274 (PopBSDiagInitialize.c)
 *     PopReadErrataForIncorrectLidNotification @ 0x140CDC334 (PopReadErrataForIncorrectLidNotification.c)
 *     PopReadErrataSkipMemoryOverwriteRequestControlLockAction @ 0x140CDC380 (PopReadErrataSkipMemoryOverwriteRequestControlLockAction.c)
 *     PoFxRegisterDebugger @ 0x140CDC3E8 (PoFxRegisterDebugger.c)
 *     PpmEventInitialize @ 0x140CDC6AC (PpmEventInitialize.c)
 *     PpmParkInitialize @ 0x140CDC73C (PpmParkInitialize.c)
 *     PopModernStandbyNotificationInit @ 0x140CDC888 (PopModernStandbyNotificationInit.c)
 *     PopInitializeAdpm @ 0x140CDCA70 (PopInitializeAdpm.c)
 *     PopDripsWatchdogInitialize @ 0x140CDCC40 (PopDripsWatchdogInitialize.c)
 *     SshInitialize @ 0x140CDD7A8 (SshInitialize.c)
 *     PopSleepstudyInitialize @ 0x140D0FD08 (PopSleepstudyInitialize.c)
 *     PopPowerAggregatorInitialize @ 0x140D11CE4 (PopPowerAggregatorInitialize.c)
 */

bool __fastcall PoInitSystem(int a1, __int64 a2)
{
  int TimebrokerServiceSid; // eax
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 v6; // r8
  __int64 v7; // r8
  unsigned int v8; // ecx
  KSPIN_LOCK *v9; // rbx
  unsigned __int16 v10; // di
  unsigned __int16 *v11; // rax
  __int64 *v12; // rsi
  int RecordedStackTraceIndex; // eax
  __int64 v14; // rdx
  unsigned int v15; // r8d
  __int64 v16; // rdx
  unsigned int v17; // r8d
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  struct _KLOCK_ENTRIES *v21; // r9
  __int64 v22; // rcx
  int v23; // edi
  unsigned __int8 v24; // si
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  struct _SINGLE_LIST_ENTRY *v31; // r9
  int v32; // edx
  __int64 v33; // rdx
  __int64 v34; // rdx
  unsigned int v35; // r8d
  __int64 v36; // rcx
  __int64 v37; // r8
  struct _SINGLE_LIST_ENTRY *v38; // r9
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int128 v42; // [rsp+40h] [rbp-20h] BYREF
  __int64 v43; // [rsp+50h] [rbp-10h]
  int v44; // [rsp+58h] [rbp-8h]
  unsigned __int64 retaddr; // [rsp+98h] [rbp+38h]
  int v46; // [rsp+A0h] [rbp+40h] BYREF
  int Buffer; // [rsp+B0h] [rbp+50h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+B8h] [rbp+58h] BYREF

  PopOsInitPhase = a1;
  PerformanceFrequency.QuadPart = 0LL;
  v43 = 0LL;
  v44 = 0;
  v42 = 0LL;
  if ( !a1 )
  {
    KeQueryPerformanceCounter(&PerformanceFrequency);
    PopQpcFrequency = PerformanceFrequency.QuadPart;
    PopComputeCounterShifts(
      PerformanceFrequency.QuadPart,
      &PpmPerformanceDistributionShift,
      &PpmPerformanceCounterShift);
    PopComputeCounterShifts(0x989680uLL, &PpmHvPerformanceDistributionShift, &PpmHvPerformanceCounterShift);
    PopCsResiliencyStatsLock = 0LL;
    PopSleepstudyInitialize(0LL);
    TimebrokerServiceSid = PopPowerAggregatorInitialize(0LL);
    if ( TimebrokerServiceSid >= 0 )
    {
      PopIdleLoopExecuted.Header.WaitListHead.Blink = &PopIdleLoopExecuted.Header.WaitListHead;
      PopIdleLoopExecuted.Header.WaitListHead.Flink = &PopIdleLoopExecuted.Header.WaitListHead;
      PpmIdlePolicyLock.WaitListEntry.Flink = (struct _LIST_ENTRY *)&PpmIdlePolicyLock.WaitBlockList;
      PpmIdlePolicyLock.WaitBlockList = (_KWAIT_BLOCK *)&PpmIdlePolicyLock.WaitBlockList;
      PpmIdlePolicyLock.WaitStatus = (volatile __int64)&PpmIdlePolicyLock.ApcStateFill[40];
      *(_QWORD *)&PpmIdlePolicyLock.ApcStateFill[40] = &PpmIdlePolicyLock.ApcStateFill[40];
      qword_140F0D898 = 0LL;
      PopPowerEventLock = 0LL;
      qword_140F0D578 = 0LL;
      PopSystemIdleLock = 0LL;
      qword_140F123B8 = 0LL;
      PopCoalRegistrationListLock = 0LL;
      LOWORD(PopIdleLoopExecuted.Header.Lock) = 0;
      PopIdleLoopExecuted.Header.Size = 6;
      PopIdleLoopExecuted.Header.SignalState = 0;
      PopDeepSleepDisengageReasonLock = 0LL;
      PpmIdlePolicyLock.WaitListEntry.Blink = 0LL;
      ExInitializeNPagedLookasideListInternal((__int64)&PopIrpDataLookaside, 0LL, 0LL, 512, 312, 1917415248, 0, 0);
      PopShutdownNotificationCallbackLock = 0LL;
      qword_140F0D478 = (__int64)&PopShutdownNotificationCallbackList;
      PopShutdownNotificationCallbackList = &PopShutdownNotificationCallbackList;
      PopInitializeBlameStack();
      PpmIdlePolicyLock.Queue = 0LL;
      PpmIdlePolicyLock.ApcState.ApcListHead[1].Blink = (struct _LIST_ENTRY *)PopDevicePowerTransitionInProgressWorker;
      PpmIdlePolicyLock.ApcState.Process = 0LL;
      LOBYTE(NormalizationListLock.KernelStack) = ((__int64)ExpSysDbgLock.MutantListHead.Flink & 4) != 0;
      PopBsdFlushInactiveEvent.Header.WaitListHead.Blink = &PopBsdFlushInactiveEvent.Header.WaitListHead;
      PopBsdFlushInactiveEvent.Header.WaitListHead.Flink = &PopBsdFlushInactiveEvent.Header.WaitListHead;
      PpmIdlePolicyLock.ApcState.ApcListHead[0].Blink = 0LL;
      *(_QWORD *)&NormalizationListLock.CurrentRunTime = 0LL;
      BYTE4(NormalizationListLock.CycleTime) = 0;
      LOBYTE(NormalizationListLock.SchedulingGroup) = 0;
      NormalizationListLock.StateSaveArea = 0LL;
      PopBsdSkipLogging = 0;
      qword_140F13488 = 0LL;
      PopBsdUpdateLock = 0LL;
      LOWORD(PopBsdFlushInactiveEvent.Header.Lock) = 1;
      PopBsdFlushInactiveEvent.Header.Size = 6;
      PopBsdFlushInactiveEvent.Header.SignalState = 1;
      PopInitializeWorkItem((__int64)&PopSetUserShutdownMarkerWorkItem, (__int64)PopSetUserShutdownMarkerWorker, 0LL);
      PopInitializeWorkItem((__int64)&PopClearUserShutdownMarkerWorkItem, (__int64)PopClearUserShutdownMarkerWorker, v4);
      PopInitializeWorkItem((__int64)&PopBsdFlushWorkItem, (__int64)PopBsdFlushWorker, v5);
      PopInitializeWorkItem((__int64)&PopBsdUpdateWorkItem, (__int64)PopBsdUpdateWorker, v6);
      PopWdiCurrentScenarioInstanceId = 0LL;
      PopWdiCurrentScenario = (__int64)&GUID_SPM_DEFAULT;
      PopInitializeWorkItem((__int64)&PopExternalMonitorUpdatedWorkItem, (__int64)PopExternalMonitorUpdatedWorker, v7);
      if ( (unsigned int)Feature_NU4MP__private_IsEnabledDeviceUsageNoInline() )
        PopInitializeWorkItem(
          (__int64)&PopUsb4DisplayPresenceUpdatedWorkItem,
          (__int64)PopUsb4DisplayPresenceUpdatedWorker,
          0LL);
      PopInitializeWorkItem((__int64)&PopRecordLidStateWorkItem, (__int64)PopRecordLidStateWorker, 0LL);
      qword_140F0D3E8 = 0LL;
      qword_140F13368 = (__int64)&PopTransitionCheckpoints;
      PopTransitionCheckpoints = &PopTransitionCheckpoints;
      PopInputSuppressionLock = 0LL;
      qword_140F0D3D8 = 0LL;
      PopPowerButtonSuppressionLock = 0LL;
      stru_140F12EA0.Padding[2] = 0LL;
      stru_140F12EA0.Padding[1] = 0LL;
      PopMonitorOffDueToSleep = 0;
      PpmCheckInit();
      TimebrokerServiceSid = PopInitializeIrpWorkers();
      if ( TimebrokerServiceSid >= 0 )
      {
        PpmIdlePolicyLock.Header.WaitListHead.Blink = 0LL;
        PpmIdlePolicyLock.KernelStack = &PpmIdlePolicyLock.CurrentRunTime;
        *(_QWORD *)&PpmIdlePolicyLock.CurrentRunTime = &PpmIdlePolicyLock.CurrentRunTime;
        PpmIdlePolicyLock.InitialStack = &PpmIdlePolicyLock.QuantumTarget;
        PpmIdlePolicyLock.QuantumTarget = (unsigned __int64)&PpmIdlePolicyLock.QuantumTarget;
        *($C9C4F79064DE35237E3F199A7D1BD3E1 *)((char *)&PpmIdlePolicyLock.116 + 4) = ($C9C4F79064DE35237E3F199A7D1BD3E1)&PpmIdlePolicyLock.WaitRegister;
        *(_QWORD *)&PpmIdlePolicyLock.WaitRegister.Flags = &PpmIdlePolicyLock.WaitRegister;
        PopTransitionLock.Header.WaitListHead.Blink = &PopTransitionLock.Header.WaitListHead;
        PopTransitionLock.Header.WaitListHead.Flink = &PopTransitionLock.Header.WaitListHead;
        PpmIdlePolicyLock.FirstArgument = &PpmIdlePolicyLock.SystemCallNumber;
        *(_QWORD *)&PpmIdlePolicyLock.SystemCallNumber = &PpmIdlePolicyLock.SystemCallNumber;
        PopDisableSleepMutex.Event.Header.WaitListHead.Blink = &PopDisableSleepMutex.Event.Header.WaitListHead;
        PopDisableSleepMutex.Event.Header.WaitListHead.Flink = &PopDisableSleepMutex.Event.Header.WaitListHead;
        qword_140F12DB8 = (__int64)&PopDisableSleepList;
        PopDisableSleepList = (__int64)&PopDisableSleepList;
        PpmIdlePolicyLock.Header.WaitListHead.Flink = 0LL;
        *(_QWORD *)&PpmIdlePolicyLock.Header.Lock = 0LL;
        PpmIdleVetoLock = 0LL;
        PpmIdlePolicyLock.StateSaveArea = 0LL;
        qword_140E27248 = 0LL;
        LOWORD(PpmIdlePolicyLock.CycleTime) = 1;
        BYTE2(PpmIdlePolicyLock.CycleTime) = 6;
        HIDWORD(PpmIdlePolicyLock.CycleTime) = 1;
        PpmIdlePolicyLock.TrapFrame = 0LL;
        LOWORD(PopTransitionLock.Header.Lock) = 1;
        PopTransitionLock.Header.Size = 6;
        PopTransitionLock.Header.SignalState = 1;
        PopDisableSleepMutex.Count = 1;
        PopDisableSleepMutex.Owner = 0LL;
        PopDisableSleepMutex.Contention = 0;
        LOWORD(PopDisableSleepMutex.Event.Header.Lock) = 1;
        PopDisableSleepMutex.Event.Header.Size = 6;
        PopDisableSleepMutex.Event.Header.SignalState = 0;
        PopInitShutdownList();
        v8 = PopIdleScanInterval;
        PpmIdlePolicyLock.LastXStateSaveDebugInfo = (unsigned __int64)&PpmIdlePolicyLock.Spare18;
        PpmIdlePolicyLock.Spare18 = (unsigned __int64)&PpmIdlePolicyLock.Spare18;
        *(_QWORD *)&PpmIdlePolicyLock.WaitBlockFill11[160] = 0LL;
        if ( PopIdleScanInterval )
        {
          if ( PopIdleScanInterval == -1 )
          {
            v8 = 30;
            PopIdleScanInterval = 30;
          }
          else if ( (unsigned int)PopIdleScanInterval > 0x12C )
          {
            v8 = 300;
            PopIdleScanInterval = 300;
          }
          dword_140F12ACC = (v8 + 59) / v8;
          dword_140F12AC8 = (v8 + 179) / v8;
        }
        PpmIdlePolicyLock.WaitBlock[2].WaitListEntry.Blink = 0LL;
        PpmIdlePolicyLock.WaitBlock[3].WaitListEntry.Flink = (struct _LIST_ENTRY *)PopPolicyWorkerThread;
        PpmIdlePolicyLock.WaitBlock[2].Object = 0LL;
        PpmIdlePolicyLock.WaitBlock[3].WaitListEntry.Blink = (struct _LIST_ENTRY *)0x80000000LL;
        *(_DWORD *)&PpmIdlePolicyLock.WaitBlockFill11[112] = -1;
        if ( (unsigned __int64)&PpmIdlePolicyLock.KernelWaitTime < 0xFFFF800000000000uLL
          || MmDeterminePoolType((unsigned __int64)&PpmIdlePolicyLock.KernelWaitTime) == 256 )
        {
          ExpTraceLogBadResourceAddress((unsigned __int64)&PpmIdlePolicyLock.KernelWaitTime, retaddr);
        }
        memset_0(&PpmIdlePolicyLock.1008, 0, 0x50uLL);
        PpmIdlePolicyLock.UserWaitTime = (unsigned __int64)&PpmIdlePolicyLock.KernelWaitTime;
        PpmIdlePolicyLock.KernelWaitTime = (unsigned __int64)&PpmIdlePolicyLock.KernelWaitTime;
        *(_QWORD *)&PpmIdlePolicyLock.SchedulerAssistPriorityFloor = 0LL;
        PpmIdlePolicyLock.KernelShadowStack = 0LL;
        PpmIdlePolicyLock.Spare35[1] = 0LL;
        if ( (NtGlobalFlag & 0x2000) != 0 )
        {
          v9 = *(KSPIN_LOCK **)&NormalizationListLock.WaitRegister.Flags;
          if ( *(_QWORD *)&NormalizationListLock.WaitRegister.Flags )
          {
            v11 = (unsigned __int16 *)RtlStdLogStackTrace(*(PKSPIN_LOCK *)&NormalizationListLock.WaitRegister.Flags, 1);
            v12 = (__int64 *)v11;
            if ( v11 )
            {
              RecordedStackTraceIndex = RtlpStdGetRecordedStackTraceIndex(v9, v11);
              v10 = RecordedStackTraceIndex;
              if ( !RecordedStackTraceIndex )
                RtlStdReleaseStackTrace((__int64)v9, v12);
            }
            else
            {
              v10 = 0;
            }
          }
          else
          {
            v10 = 0;
          }
          PpmIdlePolicyLock.Spare35[0] = v10;
        }
        else
        {
          PpmIdlePolicyLock.Spare35[0] = 0LL;
        }
        HIDWORD(PpmIdlePolicyLock.WpsFeedback) = -1;
        ExpAddResourceToSystemResourceList((_KSWAPPABLE_PAGE *)&PpmIdlePolicyLock.KernelWaitTime);
        __incgsdword(0x9098u);
        if ( (DWORD1(PerfGlobalGroupMask[0]) & 0x20000) != 0 )
          PerfLogExecutiveResourceInitialize(65544, (__int64)&PpmIdlePolicyLock.KernelWaitTime, 0, 0);
        *(_QWORD *)&PpmIdlePolicyLock.ReservedPreviousReadyTimeValue = 0LL;
        PpmIdlePolicyLock.SchedulerAssist = PpmIdlePolicyLock.TracingPrivate;
        PpmIdlePolicyLock.TracingPrivate[0] = (unsigned __int64)PpmIdlePolicyLock.TracingPrivate;
        LODWORD(PpmIdlePolicyLock.WriteTransferCount) = 1;
        PopPowerSettingCallbackReturned.Header.WaitListHead.Blink = &PopPowerSettingCallbackReturned.Header.WaitListHead;
        PopPowerSettingCallbackReturned.Header.WaitListHead.Flink = &PopPowerSettingCallbackReturned.Header.WaitListHead;
        *(_QWORD *)&PpmIdlePolicyLock.SchedulerAssistYieldCounter = &PpmIdlePolicyLock.KcsanThread;
        PpmIdlePolicyLock.KcsanThread = (unsigned __int64)&PpmIdlePolicyLock.KcsanThread;
        PpmIdlePolicyLock.Spare32 = &PpmIdlePolicyLock.1136;
        PpmIdlePolicyLock.AutoBoostThreadState = &PpmIdlePolicyLock.1136;
        PpmIdlePolicyLock.SchedulerSharedSwappablePage = (_KSWAPPABLE_PAGE *)&PpmIdlePolicyLock.ResourceIndex;
        *(_QWORD *)&PpmIdlePolicyLock.ResourceIndex = &PpmIdlePolicyLock.ResourceIndex;
        PpmIdlePolicyLock.OtherTransferCount = 0LL;
        LODWORD(PpmIdlePolicyLock.QueuedScb) = 0;
        LOWORD(PpmIdlePolicyLock.ThreadTimerDelay) = 1;
        BYTE2(PpmIdlePolicyLock.ThreadTimerDelay) = 6;
        *(_DWORD *)&PpmIdlePolicyLock.Spare26 = 0;
        LOWORD(PopPowerSettingCallbackReturned.Header.Lock) = 0;
        PopPowerSettingCallbackReturned.Header.Size = 6;
        PopPowerSettingCallbackReturned.Header.SignalState = 0;
        PpmIdlePolicyLock.IptSaveArea = &PpmIdlePolicyLock.SystemAffinityTokenListHead;
        PpmIdlePolicyLock.SystemAffinityTokenListHead.Next = &PpmIdlePolicyLock.SystemAffinityTokenListHead;
        PopWaitingForTransitionLock = 0;
        qword_140F0FC88 = 0LL;
        PopUnlockAfterSleepLock = 0LL;
        IoAddTriageDumpDataBlock((ULONG)&PpmIdlePolicyLock.SystemAffinityTokenListHead, (PVOID)0x10);
        PpmIdlePolicyLock.QueueListEntry.Flink = (struct _LIST_ENTRY *)&PpmIdlePolicyLock.512;
        *(_QWORD *)&PpmIdlePolicyLock.ThreadFlags2 = &PpmIdlePolicyLock.512;
        PopResetActionDefaults();
        PpmIdlePolicyLock.WriteOperationCount = (__int64)&PpmIdlePolicyLock.Affinity + 4;
        PopDefaultPolicy((_DWORD *)&PpmIdlePolicyLock.Affinity + 1);
        *(_KPROCESS **)((char *)&PpmIdlePolicyLock.Process + 4) = (_KPROCESS *)5;
        HIDWORD(PpmIdlePolicyLock.UserAffinity) = -1;
        LODWORD(PpmIdlePolicyLock.Process) = 2;
        *(_DWORD *)&PpmIdlePolicyLock.UserAffinityPrimaryGroup = 0;
        *(_DWORD *)&PpmIdlePolicyLock.SharedComputeUnitsUsed = -1;
        LODWORD(PpmIdlePolicyLock.Teb) = 1;
        qword_140F12278 = (__int64)&PopSstNotificationHandlerList;
        PopSstNotificationHandlerList = &PopSstNotificationHandlerList;
        PopSstNotificationHandlerListLock = 0LL;
        PopCoolingMode = 0;
        dword_140E27240 = -1;
        dword_140E27244 = 2;
        PpmInitPolicyConfiguration();
        PpmInitIdlePolicy();
        PpmPerfInitialize();
        PpmInitCoreParkingPolicy();
        PpmInitHeteroPolicy();
        PpmIdleRegisterDefaultStates();
        PopDeepSleepInitialize(0LL);
        PopInitializePowerSettings();
        PopInitilizeAcDcSettings();
        qword_140F10238 = 0LL;
        PopPolicyDeviceLock = 0LL;
        PopBatteryInit();
        PopThermalInit();
        qword_140F0FEA8 = 0LL;
        qword_140F0FEB8 = (__int64)&PopCoolingExtensionList;
        PopCoolingExtensionList = (__int64)&PopCoolingExtensionList;
        qword_140F0FED8 = (__int64)&PopPowerLimitExtensionList;
        PopPowerLimitExtensionList = (__int64)&PopPowerLimitExtensionList;
        PopCoolingExtensionLock = 0LL;
        qword_140F0FEC8 = 0LL;
        PopPowerLimitExtensionLock = 0LL;
        *(_DWORD *)&PpmIdlePolicyLock.WaitBlockFill11[32] = 4;
        PpmIdlePolicyLock.WaitBlockFill5[36] = 0;
        PpmIdlePolicyLock.WaitBlock[0].SparePtr = PopShutdownHandler;
        qword_140F12208 = (__int64)&PopWakeInfoList;
        PopWakeInfoList = (__int64)&PopWakeInfoList;
        PopWakeSourceAvailable.Header.WaitListHead.Blink = &PopWakeSourceAvailable.Header.WaitListHead;
        PopWakeSourceAvailable.Header.WaitListHead.Flink = &PopWakeSourceAvailable.Header.WaitListHead;
        qword_140F121E8 = (__int64)&PopWakeSourceWorkList;
        PopWakeSourceWorkList = &PopWakeSourceWorkList;
        PpmWmiIdleAccountingTimer.Header.WaitListHead.Blink = &PpmWmiIdleAccountingTimer.Header.WaitListHead;
        PpmWmiIdleAccountingTimer.Header.WaitListHead.Flink = &PpmWmiIdleAccountingTimer.Header.WaitListHead;
        qword_140F0D158 = (__int64)PpmWmiIdleAccountingProcedure;
        PopUserPresentWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopUserPresentSetWorker;
        qword_140E67760 = (__int64)&qword_140E67758;
        qword_140E67758 = (__int64)&qword_140E67758;
        *(_QWORD *)&PpmWmiIdleAccountingTimer.Header.Lock = 8LL;
        qword_140E67750 = 8LL;
        PopUserPresentCompletedEvent.Header.WaitListHead.Blink = &PopUserPresentCompletedEvent.Header.WaitListHead;
        PopUserPresentCompletedEvent.Header.WaitListHead.Flink = &PopUserPresentCompletedEvent.Header.WaitListHead;
        PopWakeInfoCount = 0;
        PopCurrentWakeInfo = 0LL;
        PopWakeSourceLock = 0LL;
        LOWORD(PopWakeSourceAvailable.Header.Lock) = 0;
        PopWakeSourceAvailable.Header.Size = 6;
        PopWakeSourceAvailable.Header.SignalState = 1;
        PopWakeSourceWorkState = 0;
        PpmWmiIdleAccountingTimer.DueTime.QuadPart = 0LL;
        PpmWmiIdleAccountingTimer.Period = 0;
        PpmWmiIdleAccountingTimer.Processor = 0;
        PpmWmiIdleAccountingTimer.TimerDifObjTracking = 0;
        PpmWmiIdleAccountingDpc = 275;
        qword_140F0D160 = 0LL;
        qword_140F0D178 = 0LL;
        qword_140F0D150 = 0LL;
        PopUserPresentLock = 0LL;
        PopUserPresentWorkItem.Parameter = 0LL;
        PopUserPresentWorkItem.List.Flink = 0LL;
        qword_140E67768 = 0LL;
        dword_140E6778C = 0;
        word_140E67788 = 0;
        byte_140E6778B = 0;
        LOWORD(PopUserPresentCompletedEvent.Header.Lock) = 1;
        PopUserPresentCompletedEvent.Header.Size = 6;
        PopUserPresentCompletedEvent.Header.SignalState = 0;
        PopSmartSuspendInit();
        word_140F12AA8 = 1;
        qword_140F12AB8 = (__int64)&qword_140F12AB0;
        qword_140F12AB0 = (__int64)&qword_140F12AB0;
        byte_140F12AAA = 6;
        dword_140F12AAC = 1;
        PoFxInitPowerManagement();
        *(_DWORD *)&PpmIdlePolicyLock.PriorityFloorCounts[20] = 0;
        *(_QWORD *)&PpmIdlePolicyLock.PriorityFloorCounts[24] = 100LL;
        *(_QWORD *)&PpmIdlePolicyLock.PriorityFloorSummary = 100LL;
        PpmIdlePolicyLock.AbCompletedIoQoSBoostCount = 100;
        PopNetInitialize(0LL);
        PopInitializePowerButtonHold(0LL);
        *(_OWORD *)&PopPdcDeviceListLock.ApcStateFill[24] = 0uLL;
        PopRecorderInit();
        PopRecordFirmwareResetReason(a2);
        TimebrokerServiceSid = PopCreateTimebrokerServiceSid();
        if ( TimebrokerServiceSid >= 0 )
        {
          PopInitializeDirectedDrips(0LL);
          SshInitialize(0LL);
LABEL_85:
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
      LODWORD(stru_140E67200.Padding[1]) = 0;
    }
    qword_140F10218 = 0LL;
    PopFanLock = 0LL;
    dword_140F102AC = 0;
    PopSendFanNoiseChangeWnf(0);
    if ( (unsigned int)PopAggressiveStandbyActionsRegValue < 0x10 )
      PopAggressiveStandbyEnabledActions = PopAggressiveStandbyActionsRegValue;
    qword_140F11450 = 0LL;
    qword_140F11458 = 0LL;
    qword_140F11448 = 0LL;
    PopSuspendResumeNotification = 0LL;
    SshInitialize(1LL);
    PopUmpoInitializeChannel();
    PopUmpoInitializeMonitorChannel();
    *(_QWORD *)&PopPdcDeviceListLock.Header.Lock = 0LL;
    PopPdcDeviceListLock.QuantumTarget = (unsigned __int64)PopDelayedPdcRegistrationWorker;
    PopPdcDeviceListLock.InitialStack = 0LL;
    PopPdcDeviceListLock.Header.WaitListHead.Blink = 0LL;
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
              v46 = 1;
              PopErrataDisablePrimaryDeviceFastResume = 0;
              EmClientQueryRuleState(&GUID_EM_RULE_DISABLE_DEVICE_FAST_RESUME, &v46);
              if ( v46 == 2 )
                PopErrataDisablePrimaryDeviceFastResume = 1;
              PopDetectSimulatedHeteroProcessors();
              PpmHeteroHgsDetectContainmentPresence(0LL, 0);
              goto LABEL_85;
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
      goto LABEL_85;
    TimebrokerServiceSid = PopDiagInitialize();
    if ( TimebrokerServiceSid < 0 )
      return TimebrokerServiceSid >= 0;
    SshInitialize(3LL);
    PopSleepstudyInitialize(3LL);
    LOBYTE(v22) = *(_DWORD *)&stru_140E67200.WaitBlockFill11[88] != 0 ? stru_140E67200.WaitBlockFill6[80] : 0;
    PopTriggerDiagTraceAoAcCapability(v22);
    PopFanReportBootStartDevices();
    PopInitializeWin32kActivator();
    if ( (unsigned int)Feature_UnifiedMsNotification__private_IsEnabledDeviceUsageNoInline() )
      PopModernStandbyNotificationInit();
    PopPowerAggregatorInitialize(3LL);
    TimebrokerServiceSid = PopUserShutdownScenarioInitialize();
    if ( TimebrokerServiceSid < 0 )
      return TimebrokerServiceSid >= 0;
    v23 = 2;
    v24 = 1;
    if ( PopSkipTickPolicy )
    {
      if ( PopSkipTickPolicy != 1 )
      {
        v23 = 0;
        v25 = 0;
LABEL_60:
        PoSkipTickMode = v25;
        PopDiagTraceSkipTick(v23 == 2, v24);
        goto LABEL_61;
      }
      v24 = 0;
      if ( (int)HalGetInterruptTargetInformation(2, 0, (__int64)&v42) >= 0 )
      {
        PopApicMode = HIDWORD(v43);
        if ( HIDWORD(v43) == 3 )
        {
          PopApicClusterSize = v44;
          PoSkipTickMaxOpportunisticProcessors = 8;
        }
        PoSkipTickMode = !PopCheckSkipTick();
LABEL_61:
        PpmInitIllegalThrottleLogging();
        PopCheckShutdownMarker(a2);
        PopCheckAndClearBootError();
        if ( (unsigned __int8)guard_dispatch_icall_no_overrides(v27, v26)
          || LODWORD(stru_140F12EA0.KcsanThread) && HIDWORD(stru_140F12EA0.KcsanThread) )
        {
          PopDiagTraceAbnormalReset(SHIDWORD(stru_140F12EA0.KcsanThread));
        }
        PopIdleWakeInitialize();
        PopAcquirePolicyLock(v29, v28, v30, v31);
        PopUpdateUpgradeInProgress(0LL);
        if ( InitIsWinPEMode )
          PopLogSleepDisabled(16, 15, 0LL, 0LL);
        if ( BYTE4(PpmIdlePolicyLock.Padding[3]) )
          PopLogSleepDisabled(17, 7, 0LL, 0LL);
        v32 = 0;
        if ( (*(_BYTE *)(*(_QWORD *)(a2 + 240) + 2648LL) & 8) != 0 )
        {
          PopSecureLaunched = 1;
          v32 = 4;
        }
        if ( (HvlpFlags & 2) != 0 || !VslVsmEnabled )
        {
          if ( !v32 )
          {
LABEL_76:
            PopDeepSleepInitialize(3LL);
            PopInitializePowerPolicySimulate();
            if ( (PpmIdlePolicyLock.SchedulerAssistLastYieldBoostTime & 1) != 0 )
            {
              BYTE6(PpmIdlePolicyLock.Padding[4]) = 1;
              *(_QWORD *)&xmmword_140F11220 = 0x19000000064LL;
              *((_QWORD *)&xmmword_140F11220 + 1) = 0xFFFF0000000ALL;
              LODWORD(qword_140F11240) = 4;
              dword_140F11248 = 2;
            }
            if ( (PpmIdlePolicyLock.SchedulerAssistLastYieldBoostTime & 2) != 0 )
            {
              LODWORD(PpmIdlePolicyLock.Padding[1]) = 16843009;
              WORD2(PpmIdlePolicyLock.Padding[1]) = 257;
              BYTE6(PpmIdlePolicyLock.Padding[1]) = 1;
              *(_WORD *)((char *)&PpmIdlePolicyLock.Padding[3] + 1) = 257;
            }
            PopResetCurrentPolicies();
            PopInitializeAdpm();
            PopEsInit(3LL);
            PopInitilizeAcDcSettings();
            Buffer = 1;
            PopUpdateConsoleDisplayState(1LL, v33);
            ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_VISIBLE_STATE, &Buffer, 4u, 0LL, 0LL, 0, 0);
            PopNetInitialize(3LL);
            PopReleasePolicyLock();
            PopIdleInitAoAcDozeS4Timer();
            PopCreateIdlePhaseWatchdog();
            PopInitializeSystemIdleDetection();
            PopHiberResumeXhciHandoffSkip = (*(_DWORD *)(*(_QWORD *)(a2 + 240) + 132LL) & 0x10000000) != 0;
            PopSetupHighPerfPowerRequest((unsigned __int8)PopHiberResumeXhciHandoffSkip, v34, v35);
            PpmEnableWmiInterface();
            v39 = *(_QWORD *)(a2 + 240);
            if ( (*(_DWORD *)(v39 + 2648) & 0x8000LL) != 0 )
              PopFasr = 1;
            BootAppSvnInfo = *(_OWORD *)(v39 + 4416);
            PopAcquirePolicyLock(v36, v39, v37, v38);
            PopCoalescingInitialize();
            PopReleasePolicyLock();
            PopInitializeDirectedDrips(3LL);
            PopDripsWatchdogInitialize();
            PopSetupAudioEventNotification();
            PopSetupMixedRealitytNotification();
            PopSetupFullScrenVideoNotification();
            PopSetupUserPresencePredictionNotification();
            PopSetupSprActiveSessionChangeNotification();
            PopSetupAirplaneModeNotification();
            PopSetupBluetoothChargingNotification();
            PopSetupMobileHotspotNotification();
            PopThermalHandlePreviousShutdown();
            PopPdcDeviceListLock.ApcStateFill[16] = (*(_DWORD *)(a2 + 264) & 2) != 0;
            TtmInit();
            PopReadErrataForIncorrectLidNotification();
            PopLidReliabilityInit(v40);
            PopEvaluateInputSuppressionRequired();
            if ( (unsigned int)Feature_NU4MP__private_IsEnabledDeviceUsageNoInline() )
              PopSetupUsb4DisplayPresenceNotification();
            PopPowerButtonSuppressionInit();
            PopBatteryQueueWork(1u);
            PopSetupKsrCallbacks();
            PopHiberEvaluateSkippingMemoryMapValidation();
            PopReadErrataSkipMemoryOverwriteRequestControlLockAction();
            goto LABEL_85;
          }
        }
        else
        {
          LOBYTE(v32) = 23;
        }
        PopLogSleepDisabled(21, v32, 0LL, 0LL);
        goto LABEL_76;
      }
    }
    v25 = 2;
    goto LABEL_60;
  }
  PoFxRegisterDebugger();
  HalReportResourceUsage(1);
  PopBatteryInitPhaseTwo();
  TimebrokerServiceSid = PpmEventInitialize();
  if ( TimebrokerServiceSid >= 0 )
  {
    KeRegisterProcessorChangeCallback((PPROCESSOR_CALLBACK_FUNCTION)PopNewProcessorCallback, 0LL, 0);
    PpmAcquireLock((struct _KTHREAD **)&PpmIdlePolicyLock.ThreadLock, v14, v15);
    PopInitializeHeteroProcessors(1, 0);
    PpmReleaseLock((__int64 *)&PpmIdlePolicyLock.ThreadLock);
    if ( PpmPerfArtificialDomainSetting != -1 )
      PpmPerfArtificialDomainEnabled = PpmPerfArtificialDomainSetting != 0;
    PpmIdleRegisterDefaultStates();
    TimebrokerServiceSid = PpmParkInitialize();
    if ( TimebrokerServiceSid >= 0 )
    {
      PpmCheckInitProcessors(0, 1);
      PpmAcquireLock((struct _KTHREAD **)&qword_140F12AA0, v16, v17);
      PoFxSendSystemLatencyUpdate(v19, v18, v20, v21);
      PpmReleaseLock(&qword_140F12AA0);
      PopPdcCsCheckSystemVolumeDevice();
      PopUpdateBackgroundCoolingStatus(0);
      ZwUpdateWnfStateData(&WNF_PO_MULTIMEDIA_POWER_MODEL, &PpmPerfMultimediaPowerModel, 4u, 0LL, 0LL, 0, 0);
      PopInitVideoWnfState();
      goto LABEL_85;
    }
  }
  return TimebrokerServiceSid >= 0;
}
