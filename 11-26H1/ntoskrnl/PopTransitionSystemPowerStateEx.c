/*
 * XREFs of PopTransitionSystemPowerStateEx @ 0x140C112B0
 * Callers:
 *     PopTransitionSystemPowerState @ 0x140C11240 (PopTransitionSystemPowerState.c)
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x14021AA60 (PopExecuteOnTargetProcessors.c)
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     PopRunMaximumIrpWorkers @ 0x1403C1500 (PopRunMaximumIrpWorkers.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     PopThermalSxEntry @ 0x14042408C (PopThermalSxEntry.c)
 *     PopFanSxExit @ 0x14042446C (PopFanSxExit.c)
 *     PopFanSxEntry @ 0x14042474C (PopFanSxEntry.c)
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x140424B5C (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 *     PoSetUserPresent @ 0x140427200 (PoSetUserPresent.c)
 *     PopCheckForWork @ 0x1404274F4 (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x14042756C (PopGetPolicyWorker.c)
 *     StringCchPrintfW @ 0x1404A5DE0 (StringCchPrintfW.c)
 *     ExWakeTimersPause @ 0x1404B2BF0 (ExWakeTimersPause.c)
 *     PpmCheckPausePpmEngineForSx @ 0x1404C0F80 (PpmCheckPausePpmEngineForSx.c)
 *     PpmCheckResumePpmEngineFromSx @ 0x1404C0FC4 (PpmCheckResumePpmEngineFromSx.c)
 *     IoRaiseInformationalHardError @ 0x1404D9300 (IoRaiseInformationalHardError.c)
 *     PopActionRetrieveInitialState @ 0x1404E99E4 (PopActionRetrieveInitialState.c)
 *     PopSetPowerActionState @ 0x1404ED954 (PopSetPowerActionState.c)
 *     ExWakeTimersResume @ 0x1404EEC28 (ExWakeTimersResume.c)
 *     PopSetPowerActionWatchdogState @ 0x1404F7F48 (PopSetPowerActionWatchdogState.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x140501378 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PopIgnoreBatteryStatusChange @ 0x14050E888 (PopIgnoreBatteryStatusChange.c)
 *     PopFxPrepareDevicesForShutdown @ 0x1405248F0 (PopFxPrepareDevicesForShutdown.c)
 *     PsIumResumeAfterHibernate @ 0x140529D88 (PsIumResumeAfterHibernate.c)
 *     RtlBootStatusDisableFlushing @ 0x140532BD0 (RtlBootStatusDisableFlushing.c)
 *     PopReadShutdownPolicy @ 0x140603708 (PopReadShutdownPolicy.c)
 *     PopPushPowerStateTransitionRecordWithCallback @ 0x14060A1F8 (PopPushPowerStateTransitionRecordWithCallback.c)
 *     PopCheckPowerSourceAfterRtcWakeSet @ 0x14060AA0C (PopCheckPowerSourceAfterRtcWakeSet.c)
 *     ExDeleteWakeTimerInfo @ 0x1406D2C74 (ExDeleteWakeTimerInfo.c)
 *     WheaResumedFromHibernate @ 0x1406D871C (WheaResumedFromHibernate.c)
 *     ZwUpdateWnfStateData @ 0x14072BC00 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PopDeferDoze @ 0x1407748E0 (PopDeferDoze.c)
 *     PopResetActionDefaults @ 0x14077F2AC (PopResetActionDefaults.c)
 *     PopSetShutdownMarker @ 0x14077FD10 (PopSetShutdownMarker.c)
 *     PpmPerfReApplyStates @ 0x1407D139C (PpmPerfReApplyStates.c)
 *     PopQueryMostRecentWakeSourceAttributes @ 0x1407D28E0 (PopQueryMostRecentWakeSourceAttributes.c)
 *     PopBootLoaderTraceProcess @ 0x1407D2B50 (PopBootLoaderTraceProcess.c)
 *     PopZeroHiberFile @ 0x1407D3F4C (PopZeroHiberFile.c)
 *     PopSaveLidReliabilityState @ 0x1407D4658 (PopSaveLidReliabilityState.c)
 *     PopDiagTracePreSleepNotification @ 0x1407D79C4 (PopDiagTracePreSleepNotification.c)
 *     PopDiagTraceStateTransitionFailurePoint @ 0x1407D8518 (PopDiagTraceStateTransitionFailurePoint.c)
 *     PopPowerAggregatorNotifySystemWake @ 0x1407D9EF4 (PopPowerAggregatorNotifySystemWake.c)
 *     MmZeroPageFileAtShutdown @ 0x14086AC94 (MmZeroPageFileAtShutdown.c)
 *     PsLookupProcessByProcessId @ 0x1408F5AA0 (PsLookupProcessByProcessId.c)
 *     ExSwapinWorkerThreads @ 0x14094A380 (ExSwapinWorkerThreads.c)
 *     PnpSurpriseFailUnsafeDmaDevices @ 0x14096EA80 (PnpSurpriseFailUnsafeDmaDevices.c)
 *     PopFilterCapabilities @ 0x1409C06CC (PopFilterCapabilities.c)
 *     PopUpdateSystemIdleContext @ 0x1409C0E94 (PopUpdateSystemIdleContext.c)
 *     PopCheckResiliencyScenarios @ 0x1409F8E64 (PopCheckResiliencyScenarios.c)
 *     PsLookupThreadByThreadId @ 0x140A0FD60 (PsLookupThreadByThreadId.c)
 *     ExAcquireTimeRefreshLockExclusive @ 0x140A73A3C (ExAcquireTimeRefreshLockExclusive.c)
 *     ExReleaseTimeRefreshLockExclusive @ 0x140A73AB4 (ExReleaseTimeRefreshLockExclusive.c)
 *     PopInitSystemSleeperThread @ 0x140A77BF0 (PopInitSystemSleeperThread.c)
 *     MmLockPagableSectionByHandle @ 0x140A9F220 (MmLockPagableSectionByHandle.c)
 *     PopCurrentPowerStatePrecise @ 0x140AAF28C (PopCurrentPowerStatePrecise.c)
 *     PopCurrentPowerState @ 0x140AAF340 (PopCurrentPowerState.c)
 *     PoInitializeBroadcast @ 0x140AC752C (PoInitializeBroadcast.c)
 *     PopTransitionCheckpoint @ 0x140B1D94C (PopTransitionCheckpoint.c)
 *     RtlSetSystemBootStatusEx @ 0x140B1DA40 (RtlSetSystemBootStatusEx.c)
 *     PopInitializePowerPolicySimulate @ 0x140B2EC90 (PopInitializePowerPolicySimulate.c)
 *     PopIsDozeSupported @ 0x140B30718 (PopIsDozeSupported.c)
 *     PopSetSleepMarker @ 0x140B30AB8 (PopSetSleepMarker.c)
 *     SshSessionManagerTracePostSleepNotification @ 0x140B31BE8 (SshSessionManagerTracePostSleepNotification.c)
 *     PoClearBroadcast @ 0x140B35BB8 (PoClearBroadcast.c)
 *     PopFastS4Check @ 0x140B3EE64 (PopFastS4Check.c)
 *     PopIsDetailedSleepReliabilityDiagEnabled @ 0x140B3EFE8 (PopIsDetailedSleepReliabilityDiagEnabled.c)
 *     PopDiagTraceKernelQueriesAllowed @ 0x140B43674 (PopDiagTraceKernelQueriesAllowed.c)
 *     PopQueryPowerSettingUlong @ 0x140B43720 (PopQueryPowerSettingUlong.c)
 *     PopFindNextSystemPowerState @ 0x140B469FC (PopFindNextSystemPowerState.c)
 *     CmSetLazyFlushState @ 0x140B48A54 (CmSetLazyFlushState.c)
 *     PopEsExitSleep @ 0x140B51E9C (PopEsExitSleep.c)
 *     PopEnforceResiliencyScenarios @ 0x140B52A88 (PopEnforceResiliencyScenarios.c)
 *     PopNotifyTelemetryOsState @ 0x140B53894 (PopNotifyTelemetryOsState.c)
 *     PopAdvanceSystemPowerState @ 0x140B584D4 (PopAdvanceSystemPowerState.c)
 *     PopNotifyCallbacksPreSleep @ 0x140B5EE28 (PopNotifyCallbacksPreSleep.c)
 *     PopEsEnterSleepShutdown @ 0x140B5FEF0 (PopEsEnterSleepShutdown.c)
 *     PopCancelIgnoreBatteryStatusChange @ 0x140B63860 (PopCancelIgnoreBatteryStatusChange.c)
 *     PopTransitionGetWakeTimerType @ 0x140B64388 (PopTransitionGetWakeTimerType.c)
 *     PopAllocateHiberContext @ 0x140B75B48 (PopAllocateHiberContext.c)
 *     PopGracefulShutdown @ 0x140BFF180 (PopGracefulShutdown.c)
 *     PopHandleWakeSources @ 0x140BFF52C (PopHandleWakeSources.c)
 *     PopProcessDeviceWakeSource @ 0x140BFF7FC (PopProcessDeviceWakeSource.c)
 *     PoDelistPowerStateTransitionBlocker @ 0x140C03138 (PoDelistPowerStateTransitionBlocker.c)
 *     PopDiagTraceFirmwareS3Stats @ 0x140C038EC (PopDiagTraceFirmwareS3Stats.c)
 *     PopDiagTraceHibernateErrorStatus @ 0x140C03C08 (PopDiagTraceHibernateErrorStatus.c)
 *     PopDiagTraceMtrrError @ 0x140C03C94 (PopDiagTraceMtrrError.c)
 *     PopAcquirePolicyLock @ 0x140C0AE00 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C0AE50 (PopReleasePolicyLock.c)
 *     PopSetDevicesSystemState @ 0x140C0BE80 (PopSetDevicesSystemState.c)
 *     PopCheckpointSystemSleep @ 0x140C0C680 (PopCheckpointSystemSleep.c)
 *     PopFlushVolumes @ 0x140C0C930 (PopFlushVolumes.c)
 *     PopQpcTimeInMs @ 0x140C0CF00 (PopQpcTimeInMs.c)
 *     PfPowerActionNotify @ 0x140C0D3C0 (PfPowerActionNotify.c)
 *     ExUpdateSystemTimeFromCmos @ 0x140C0E944 (ExUpdateSystemTimeFromCmos.c)
 *     PopNewWakeInfo @ 0x140C0F218 (PopNewWakeInfo.c)
 *     PopAcquireTransitionLockAfterSleep @ 0x140C0F2F8 (PopAcquireTransitionLockAfterSleep.c)
 *     IoFreePoDeviceNotifyList @ 0x140C102BC (IoFreePoDeviceNotifyList.c)
 *     PopDiagComputeEarlyHiberStats @ 0x140C1081C (PopDiagComputeEarlyHiberStats.c)
 *     PopIsMostRecentWakeAttended @ 0x140C12608 (PopIsMostRecentWakeAttended.c)
 *     PopDiagTracePostSleepNotification @ 0x140C12848 (PopDiagTracePostSleepNotification.c)
 *     ExGetNextWakeTime @ 0x140C12EE0 (ExGetNextWakeTime.c)
 */

__int64 __fastcall PopTransitionSystemPowerStateEx(int *a1)
{
  _DWORD *v2; // rbx
  _DWORD *v3; // r14
  PEPROCESS v4; // r12
  PETHREAD v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // r8
  struct _KLOCK_ENTRIES *v8; // r9
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  struct _SINGLE_LIST_ENTRY *v14; // r9
  __int64 v15; // rdx
  __int64 v16; // r8
  struct _SINGLE_LIST_ENTRY *v17; // r9
  int v18; // r15d
  int v19; // ecx
  int v20; // eax
  unsigned __int8 *v21; // rsi
  int *v22; // r12
  _DWORD *v23; // rbx
  int v24; // eax
  unsigned int v25; // edx
  __int64 v26; // rax
  unsigned int v27; // ecx
  char v28; // cl
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  struct _SINGLE_LIST_ENTRY *v32; // r9
  __int64 v33; // rcx
  char v34; // r14
  unsigned __int64 v35; // rbx
  __int64 v36; // rdx
  __int64 v37; // r8
  struct _KLOCK_ENTRIES *v38; // r9
  int v39; // eax
  char v40; // al
  int v41; // eax
  char NextSystemPowerState; // al
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rcx
  unsigned int v46; // r8d
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  struct _KLOCK_ENTRIES *v50; // r9
  __int64 v51; // rdx
  __int64 v52; // r8
  struct _KLOCK_ENTRIES *v53; // r9
  int HiberContext; // eax
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // r8
  struct _KLOCK_ENTRIES *v58; // r9
  __int64 v59; // rdx
  __int64 v60; // r8
  struct _KLOCK_ENTRIES *v61; // r9
  int v62; // ecx
  __int64 v63; // rdx
  __int64 v64; // rcx
  __int64 v65; // r8
  struct _KLOCK_ENTRIES *v66; // r9
  LONG v67; // ecx
  int inited; // eax
  unsigned __int64 v69; // r9
  __int64 v70; // rsi
  char v71; // r11
  __int64 v72; // r10
  __int64 v73; // rdx
  __int64 v74; // rax
  unsigned __int64 v75; // rdx
  unsigned __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 *v78; // rbx
  int v79; // r8d
  __int64 *v80; // rcx
  unsigned __int64 v81; // rcx
  int v82; // edx
  unsigned __int64 v83; // rax
  int v84; // eax
  int v85; // ebx
  __int64 v86; // rsi
  char NextWakeTime; // al
  int v88; // eax
  char v89; // al
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r8
  struct _KLOCK_ENTRIES *v93; // r9
  __int64 v94; // rdx
  __int64 v95; // rcx
  unsigned int v96; // r8d
  PEPROCESS v97; // rcx
  int v98; // ebx
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  struct _KLOCK_ENTRIES *v102; // r9
  struct _KTHREAD *CurrentThread; // rax
  int v104; // ecx
  int v105; // r8d
  int v106; // eax
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // r8
  struct _KLOCK_ENTRIES *v110; // r9
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // r8
  struct _KLOCK_ENTRIES *v114; // r9
  __int64 v115; // rdx
  __int64 v116; // r8
  struct _KLOCK_ENTRIES *v117; // r9
  __int64 v118; // rax
  __int64 v119; // rdx
  __int64 v120; // rcx
  unsigned int v121; // r8d
  void *v122; // rcx
  int v123; // edx
  int CheckStamp; // [rsp+30h] [rbp-89h]
  HANDLE ProcessId[2]; // [rsp+58h] [rbp-61h] BYREF
  PETHREAD Thread; // [rsp+68h] [rbp-51h] BYREF
  PEPROCESS Process; // [rsp+70h] [rbp-49h] BYREF
  __int64 v129; // [rsp+78h] [rbp-41h] BYREF
  _QWORD *v130; // [rsp+80h] [rbp-39h] BYREF
  _QWORD *v131; // [rsp+88h] [rbp-31h] BYREF
  _QWORD v132[2]; // [rsp+90h] [rbp-29h] BYREF
  int v133; // [rsp+A0h] [rbp-19h] BYREF
  char *v134; // [rsp+A8h] [rbp-11h]
  int v135; // [rsp+B0h] [rbp-9h]
  int v136; // [rsp+B8h] [rbp-1h]
  unsigned __int64 v137; // [rsp+C0h] [rbp+7h]
  int v138; // [rsp+C8h] [rbp+Fh]
  char v139; // [rsp+120h] [rbp+67h] BYREF
  int v140; // [rsp+128h] [rbp+6Fh] BYREF
  int v141; // [rsp+130h] [rbp+77h] BYREF
  struct _KTHREAD *v142; // [rsp+138h] [rbp+7Fh]

  v132[0] = 0x20000LL;
  *((_BYTE *)a1 + 12) = 0;
  v2 = a1 + 27;
  *((_BYTE *)a1 + 24) = 0;
  v3 = a1 + 83;
  a1[7] = 0;
  *((_QWORD *)a1 + 8) = 0LL;
  *((_QWORD *)a1 + 5) = 0LL;
  v132[1] = &word_140C142F0;
  a1[25] = 0;
  a1[28] = 1;
  a1[29] = 1;
  v4 = 0LL;
  *((_QWORD *)a1 + 25) = 0LL;
  v5 = 0LL;
  *((_QWORD *)a1 + 22) = 0LL;
  *((_QWORD *)a1 + 23) = 0LL;
  *((_QWORD *)a1 + 38) = 0LL;
  *((_BYTE *)a1 + 216) = 1;
  *((_BYTE *)a1 + 336) = 0;
  *((_QWORD *)a1 + 40) = 0LL;
  a1[82] = 1;
  *((_QWORD *)a1 + 24) = 0LL;
  v131 = v132;
  v130 = v132;
  a1[27] = 0;
  a1[83] = 0;
  v140 = 0;
  v141 = 0;
  Process = 0LL;
  v142 = 0LL;
  Thread = 0LL;
  a1[85] = (PpmIdlePolicyLock.SchedulerAssistLastYieldBoostTime & 0x10000) != 0 ? 300000000 : 600000000;
  *(_OWORD *)ProcessId = 0LL;
  v129 = 0LL;
  a1[22] = 0;
  PopTransitionCheckpoint(8, 1);
  v9 = 2LL;
  if ( *a1 == 2 )
    PnpSurpriseFailUnsafeDmaDevices();
  if ( *a1 == 4 )
    PopReadShutdownPolicy();
  PopAcquireTransitionLockAfterSleep(v9, v6, v7, v8);
  MmLockPagableSectionByHandle(ExPageLockHandle);
  PopRunMaximumIrpWorkers();
  PopUnlockAfterSleepWorkItem.Parameter = 0LL;
  PopUnlockAfterSleepWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopUnlockAfterSleepWorker;
  PopUnlockAfterSleepWorkItem.List.Flink = 0LL;
  CmSetLazyFlushState(0);
  PopNotifyCallbacksPreSleep();
  ExSwapinWorkerThreads(0);
  v10 = PoInitializeBroadcast();
  a1[22] = v10;
  if ( v10 < 0 )
  {
    ExQueueWorkItem(&PopUnlockAfterSleepWorkItem, DelayedWorkQueue);
    *v2 = 5;
    goto LABEL_230;
  }
  PopCheckPowerSourceAfterRtcWakeCancel();
  PopCurrentPowerStatePrecise((__int64)(a1 + 30), (__int64)&v129);
  PopAcquirePolicyLock(v12, v11, v13, v14);
  *((_BYTE *)a1 + 48) = 1;
  PopFilterCapabilities((__int64)&PpmIdlePolicyLock.Padding[1], (__int64)&unk_140F104F8);
  if ( byte_140F10421 )
  {
    if ( byte_140F10421 != 2 )
    {
      PopReleasePolicyLock();
      PoClearBroadcast();
      ExQueueWorkItem(&PopUnlockAfterSleepWorkItem, DelayedWorkQueue);
      *v2 = 6;
      a1[22] = -1073741791;
      goto LABEL_230;
    }
  }
  else
  {
    PopResetActionDefaults();
  }
  PopSetPowerActionState(3);
  *(_QWORD *)&qword_140F10468 = qword_140F103F0;
  PopIgnoreBatteryStatusChange();
  PopCheckResiliencyScenarios();
  PopEnforceResiliencyScenarios(a1 + 52);
  PopExecuteOnTargetProcessors(
    (__int64)&stru_140FC11F0.WaitRegister,
    (__int64)PpmStopIllegalProcessorThrottleLogging,
    0LL,
    0LL);
  v18 = 6;
  if ( *a1 == 6 )
    LODWORD(qword_140F10424) = 6;
  v19 = *a1;
  if ( *a1 == 4 || (unsigned int)(v19 - 5) <= 1 )
  {
    PoPowerDownActionInProgress = 1;
    if ( v19 == 5 )
      PoPowerResetActionInProgress = 1;
    if ( PopHiberInfo && FileObject && (unsigned int)MmZeroPageFileAtShutdown() )
      PopZeroHiberFile(PopHiberInfo, (__int64)FileObject);
  }
  v20 = *a1;
  v21 = (unsigned __int8 *)(a1 + 18);
  *((_BYTE *)a1 + 72) = 0;
  v22 = a1 + 4;
  a1[4] = 0;
  if ( v20 == 2 || v20 == 3 )
    PoPowerDownActionInProgress = 1;
  a1[22] = -1073741536;
  v23 = a1 + 82;
  *((_BYTE *)a1 + 96) = 0;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        if ( !*((_BYTE *)a1 + 48) )
        {
          PopAcquirePolicyLock(2LL, v15, v16, v17);
          *((_BYTE *)a1 + 48) = 1;
        }
        if ( !(_DWORD)qword_140F10424 )
        {
          a1[27] = 6;
          a1[22] = 0;
          goto LABEL_69;
        }
        *((_BYTE *)a1 + 104) = PopAction;
        LOBYTE(PopAction) = 0;
        v24 = a1[22];
        if ( v24 == -1073741536 )
        {
          if ( (a1[26] & 2) != 0 && dword_140F1042C >= 0 && (dword_140F1042C & 3) != 0 )
          {
            PopGetPolicyWorker(2);
            a1[27] = 8;
LABEL_69:
            v4 = 0LL;
            v5 = v142;
            goto LABEL_70;
          }
          PopActionRetrieveInitialState((_DWORD *)&qword_140F10424 + 1, a1 + 4, &dword_140F1044C, (_BYTE *)a1 + 72);
          if ( (unsigned int)(qword_140F10424 - 4) <= 2 )
          {
            byte_140F10422 = 1;
            dword_140F1042C = a1[2];
          }
          a1[22] = 0;
        }
        else if ( v24 < 0 )
        {
          goto LABEL_69;
        }
        PopReleasePolicyLock();
        *((_BYTE *)a1 + 48) = 0;
        *v23 = 1;
        *v3 = 0;
        PopQueryPowerSettingUlong(&GUID_ALLOW_RTC_WAKE, v23, v3);
        if ( (dword_140F1042C & 0x40000000) != 0 )
        {
          *v23 = 0;
          *v3 = 0;
        }
        if ( !byte_140F10516 && !byte_140F10504 && !byte_140F1050B )
          *v3 = 0;
        PopInitializePowerPolicySimulate();
        dword_140F10450 = dword_140F1044C;
        v25 = ((unsigned int)dword_140F1042C >> 27) & 2;
        a1[23] = v25;
        PopAdvanceSystemPowerState(&dword_140F10450, v25, SHIDWORD(qword_140F10424), *v22);
        if ( (a1[2] & 8) != 0 )
        {
          byte_140F10920 = 1;
          *((_BYTE *)a1 + 24) = 0;
          dword_140F10454 = 5;
          a1[8] = 6;
          v26 = dword_140F1044C;
        }
        else
        {
          if ( PopFastS4Check() )
          {
            a1[8] = dword_140F1044C;
            v27 = 6;
            dword_140F10454 = 5;
            *((_BYTE *)a1 + 24) = 1;
            a1[13] = 6;
            goto LABEL_48;
          }
          dword_140F10454 = dword_140F1044C;
          a1[8] = dword_140F1044C;
          v26 = dword_140F1044C;
          *((_BYTE *)a1 + 24) = 0;
        }
        v27 = PopPowerStateHandlerLookup[v26];
        a1[13] = v27;
        if ( v27 > 6 )
          goto LABEL_65;
LABEL_48:
        if ( !*((_QWORD *)&PpmIdlePolicyLock.Timer.Header.WaitListHead.Flink + 3 * (int)v27) )
        {
LABEL_65:
          NextSystemPowerState = PopFindNextSystemPowerState(*v22, *((_BYTE *)a1 + 24), (_BYTE *)a1 + 72);
          *((_BYTE *)a1 + 36) = NextSystemPowerState;
          if ( !NextSystemPowerState )
            goto LABEL_69;
          goto LABEL_66;
        }
        if ( (a1[2] & 8) != 0 )
        {
          v28 = 6;
LABEL_53:
          PopSetSleepMarker(v28);
          goto LABEL_55;
        }
        if ( !byte_140F10422 )
        {
          v28 = dword_140F1044C;
          goto LABEL_53;
        }
        PopSetShutdownMarker();
        PopSaveLidReliabilityState(v33);
LABEL_55:
        PopAcquirePolicyLock(v30, v29, v31, v32);
        if ( (PopAction & 6) == 0 )
          break;
        *((_BYTE *)a1 + 48) = 1;
        a1[22] = -1073741536;
      }
      v34 = *(_BYTE *)(*(_QWORD *)&PopPdcDeviceListLock.Spare36 + 2LL);
      v35 = *(_QWORD *)(*(_QWORD *)&PopPdcDeviceListLock.Spare36 + 56LL);
      PopReleasePolicyLock();
      PopCheckpointSystemSleep(10, v36, v37, v38);
      byte_140F10448 = 3;
      PopDiagTraceKernelQueriesAllowed(*v21);
      if ( !*v21 )
        goto LABEL_63;
      v39 = PopSetDevicesSystemState();
      a1[22] = v39;
      if ( v39 >= 0 )
        break;
      if ( v39 == -1073741536 )
        goto LABEL_63;
      v40 = PopFindNextSystemPowerState(*v22, *((_BYTE *)a1 + 24), (_BYTE *)a1 + 72);
      *((_BYTE *)a1 + 36) = v40;
      if ( !v40 )
      {
        a1[27] = 9;
        goto LABEL_69;
      }
      v3 = a1 + 83;
      v23 = a1 + 82;
LABEL_66:
      a1[22] = 0;
    }
    *((_BYTE *)a1 + 96) = 1;
LABEL_63:
    v41 = a1[22];
    if ( v41 != -1073741536 )
      break;
    v3 = a1 + 83;
    v23 = a1 + 82;
  }
  if ( v41 < 0 )
    goto LABEL_69;
  PopCheckpointSystemSleep(13, v15, v16, (struct _KLOCK_ENTRIES *)v17);
  HiberContext = PopAllocateHiberContext(a1 + 27);
  a1[22] = HiberContext;
  if ( HiberContext < 0 )
    goto LABEL_69;
  a1[25] = PopNotifyTelemetryOsState(
             qword_140F10424,
             dword_140F1044C,
             dword_140F10454,
             (struct _KLOCK_ENTRIES *)(unsigned int)a1[2],
             1);
  PopTransitionCheckpoint(9, 0);
  if ( !byte_140F10422 )
  {
    PopCurrentPowerState(a1 + 30, v55, v57, v58);
    PopDiagTracePreSleepNotification(
      (unsigned int)a1[8],
      (unsigned int)dword_140F10454,
      dword_140F10434,
      dword_140F10438,
      a1[25],
      (__int64)(a1 + 30),
      (__int64)qword_140F10440);
    PopCheckpointSystemSleep(16, v59, v60, v61);
    PopUmpoSendFlushSleepStudyLoggerNotification();
  }
  PopEsEnterSleepShutdown(v56, v55, v57, v58);
  PopThermalSxEntry();
  PopFanSxEntry();
  if ( !*((_BYTE *)a1 + 12) )
  {
    if ( byte_140F10422 )
    {
      v139 = 1;
      v133 = 5;
      v134 = &v139;
      v135 = 1;
      v136 = 11;
      v137 = 0xFFFFF780000002C4uLL;
      v138 = 4;
      RtlSetSystemBootStatusEx((__int64)&v133, 2u);
    }
    *((_BYTE *)a1 + 12) = 1;
  }
  v62 = 5;
  if ( !*((_BYTE *)a1 + 24) )
    v62 = dword_140F1044C;
  PopFlushVolumes(v62);
  if ( dword_140F10454 < dword_140F1044C )
    dword_140F10454 = dword_140F1044C;
  byte_140F10448 = 2;
  if ( byte_140F10422 )
  {
    PopFxPrepareDevicesForShutdown(v64, v63, v65, v66);
    IoFreePoDeviceNotifyList((_BYTE *)(*(_QWORD *)&qword_140F10468 + 48LL));
    if ( dword_140F10434 == 2 )
      PopCriticalShutdownInProgress = 1;
    PopTransitionCheckpoint(8, 2);
    PopGracefulShutdown();
  }
  v67 = a1[13];
  KeMtrrComparisonFailed = 0;
  inited = PopInitSystemSleeperThread(v67, (struct _KEVENT *)(a1 + 56), ProcessId);
  a1[22] = inited;
  if ( inited < 0 )
  {
    a1[27] = 20;
    goto LABEL_69;
  }
  if ( !byte_140F104E0 )
  {
    ExWakeTimersPause();
    byte_140F104E0 = 1;
  }
  *((_QWORD *)a1 + 19) = MEMORY[0xFFFFF78000000008];
  v69 = MEMORY[0xFFFFF78000000014];
  v70 = PopWakeAlarmTimeOverrideAc;
  *((_QWORD *)a1 + 20) = MEMORY[0xFFFFF78000000014];
  *((_QWORD *)a1 + 23) = 0LL;
  if ( v70 || PopWakeAlarmTimeOverrideDc )
  {
    *((_QWORD *)a1 + 23) = -3LL;
  }
  else
  {
    v71 = BYTE4(PpmIdlePolicyLock.Padding[3]);
    if ( BYTE4(PpmIdlePolicyLock.Padding[3])
      && dword_140F1044C == 5
      && !byte_140F10920
      && dword_140F10434 != 2
      && v34
      && v35 != -1LL
      && v35 > v69 )
    {
      *((_QWORD *)a1 + 39) = v35 - v69;
      *((_QWORD *)a1 + 22) = v35 + *((_QWORD *)a1 + 19) - v69;
      goto LABEL_114;
    }
    if ( !*(_DWORD *)(PpmIdlePolicyLock.WriteOperationCount + 88)
      || dword_140F1044C == 5
      || !PopIsDozeSupported((__int64)&PpmIdlePolicyLock.Padding[1])
      || (dword_140F1042C & 0x40000000) != 0 )
    {
      if ( v71 && dword_140F1044C == 5 && !byte_140F10920 && qword_140F10338 && dword_140F10434 == 11 )
      {
        v75 = qword_140F10338 - v69;
        *((_QWORD *)a1 + 39) = qword_140F10338 - v69;
        v76 = v75 - 10000000LL * (unsigned int)PopSmartUserPresenceWakeOffset;
        v77 = *((_QWORD *)a1 + 19);
        *((_QWORD *)a1 + 39) = v76;
        *((_QWORD *)a1 + 22) = v76 + v77;
LABEL_114:
        *((_QWORD *)a1 + 23) = -2LL;
      }
    }
    else
    {
      v73 = *((_QWORD *)a1 + 19);
      *((_QWORD *)a1 + 22) = v73;
      v74 = *(unsigned int *)(v72 + 88);
      *((_QWORD *)a1 + 23) = -1LL;
      *((_QWORD *)a1 + 22) = v73 + 10000000 * v74;
    }
  }
  if ( *((_QWORD *)a1 + 23) == -1LL && !qword_140F104F0 )
    qword_140F104F0 = *((_QWORD *)a1 + 19);
  v78 = &qword_140F10498;
  memset_0(&qword_140F10498, 0, 0x48uLL);
  dword_140F10490 = 3;
  if ( *((_QWORD *)a1 + 23) == -3LL )
  {
    qword_140F104A8[0] = -3LL;
    qword_140F10498 = v70;
    qword_140F104C0 = *((_QWORD *)a1 + 23);
    qword_140F104B0 = PopWakeAlarmTimeOverrideDc;
  }
  else if ( !byte_140F10920 && dword_140F10434 != 14 )
  {
    if ( dword_140F1044C == 5 && a1[82] != 1 && a1[83] != 1 )
    {
      PopQueryPowerSettingUlong(&GUID_LEGACY_RTC_MITIGATION, a1 + 48, a1 + 49);
      if ( a1[48] || a1[49] )
        *((_QWORD *)a1 + 41) = 0LL;
    }
    if ( *((_QWORD *)a1 + 22) )
    {
      if ( *((_QWORD *)a1 + 23) == -2LL )
      {
        if ( a1[82] )
        {
          qword_140F10498 = *((_QWORD *)a1 + 22);
          qword_140F104A8[0] = *((_QWORD *)a1 + 23);
        }
        if ( a1[83] )
        {
          qword_140F104B0 = *((_QWORD *)a1 + 22);
          qword_140F104C0 = *((_QWORD *)a1 + 23);
        }
      }
      else
      {
        do
        {
          *v78 = *((_QWORD *)a1 + 22);
          v78 += 3;
        }
        while ( (__int64)v78 < (__int64)&unk_140F104C8 );
        v80 = qword_140F104A8;
        do
        {
          *v80 = *((_QWORD *)a1 + 23);
          v80 += 3;
        }
        while ( (__int64)v80 < (__int64)&qword_140F104D8 );
      }
    }
    v81 = qword_140F104E8;
    *((_QWORD *)a1 + 8) = qword_140F104E8;
    v82 = v81;
    if ( v81 )
    {
      v83 = *((_QWORD *)a1 + 19) + 20000000LL;
      if ( v81 < v83 )
      {
        *((_QWORD *)a1 + 8) = v83;
        v82 = v83;
      }
    }
    v84 = a1[82];
    if ( v84 )
    {
      if ( v84 != 2 || (LOBYTE(v79) = 1, SLODWORD(PpmIdlePolicyLock.SchedulerAssistLastYieldBoostTime) < 0) )
        LOBYTE(v79) = 0;
      *((_BYTE *)a1 + 169) = v79;
      v85 = (_DWORD)a1 + 40;
      v86 = (__int64)(a1 + 50);
      NextWakeTime = ExGetNextWakeTime(v82 + 1, *((_QWORD *)a1 + 22), v79, (int)a1 + 40, (__int64)(a1 + 50));
      *((_BYTE *)a1 + 336) = NextWakeTime;
      if ( NextWakeTime )
      {
        qword_140F10498 = *((_QWORD *)a1 + 5);
        qword_140F104A8[0] = *((_QWORD *)a1 + 25);
      }
    }
    else
    {
      v85 = (_DWORD)a1 + 40;
      v86 = (__int64)(a1 + 50);
    }
    v88 = a1[83];
    if ( v88 )
    {
      if ( v88 != 2 || (LOBYTE(v79) = 1, SLODWORD(PpmIdlePolicyLock.SchedulerAssistLastYieldBoostTime) < 0) )
        LOBYTE(v79) = 0;
      *((_BYTE *)a1 + 169) = v79;
      v89 = ExGetNextWakeTime((unsigned int)*((_QWORD *)a1 + 8) + 1, *((_QWORD *)a1 + 22), v79, v85, v86);
      *((_BYTE *)a1 + 336) = v89;
      if ( v89 )
      {
        qword_140F104B0 = *((_QWORD *)a1 + 5);
        qword_140F104C0 = *((_QWORD *)a1 + 25);
      }
    }
  }
  qword_140F104A0[0] = qword_140F10498;
  if ( qword_140F10498 && qword_140F10498 < *((_QWORD *)a1 + 19) + (unsigned __int64)(unsigned int)a1[85] )
    qword_140F104A0[0] = *((_QWORD *)a1 + 19) + (unsigned int)a1[85];
  qword_140F104B8 = qword_140F104B0;
  if ( qword_140F104B0 && qword_140F104B0 < *((_QWORD *)a1 + 19) + (unsigned __int64)(unsigned int)a1[85] )
    qword_140F104B8 = *((_QWORD *)a1 + 19) + (unsigned int)a1[85];
  a1[80] = PopTransitionGetWakeTimerType(qword_140F104A8[0]);
  a1[81] = PopTransitionGetWakeTimerType(qword_140F104C0);
  qword_140F109F0 = KeQueryPerformanceCounter(0LL).QuadPart;
  ExAcquireTimeRefreshLockExclusive(v91, v90, v92, v93);
  ExUpdateSystemTimeFromCmos(1, 1u);
  ExReleaseTimeRefreshLockExclusive();
  guard_dispatch_icall_no_overrides(qword_140F104A0[0], qword_140F104B8);
  PopBootStatCheckpointAvailable = 0;
  PpmCheckPausePpmEngineForSx(v95, v94, v96);
  PsLookupProcessByProcessId(ProcessId[0], &Process);
  PsLookupThreadByThreadId(ProcessId[1], &Thread);
  PopSetDevicesSystemState();
  *((_BYTE *)a1 + 96) = 1;
  PopNewWakeInfo();
  v5 = Thread;
  *((_QWORD *)a1 + 38) = MEMORY[0xFFFFF78000000008];
  v4 = Process;
  v97 = Process;
  a1[28] = HIDWORD(PpmIdlePolicyLock.PropagateBoostsEntry.Next);
  v98 = PopPushPowerStateTransitionRecordWithCallback(v97, v5, 0LL, 0LL, 0LL);
  KeSetEvent((PRKEVENT)(a1 + 62), 0, 1u);
  KeWaitForSingleObject(a1 + 68, Executive, 0, 0, 0LL);
  if ( v98 >= 0 )
    PoDelistPowerStateTransitionBlocker(v100, v99, v101, v102);
  qword_140F109C0 = 0LL;
  a1[22] = a1[75];
  PopSetPowerActionWatchdogState(2);
  CurrentThread = KeGetCurrentThread();
  v104 = dword_140F1044C;
  if ( PoResumeFromHibernate )
    v104 = dword_140F10454;
  dword_140F10458 = v104;
  PopTransitionCritialResumeThread = (__int64)CurrentThread;
  if ( (a1[2] & 8) != 0 )
  {
    a1[8] = 6;
  }
  else
  {
    a1[8] = dword_140F1044C;
    v18 = dword_140F1044C;
  }
  v105 = dword_140F10458;
  CheckStamp = a1[81];
  v106 = a1[80];
  a1[7] = dword_140F10458;
  PopDiagTracePostSleepNotification(v18, dword_140F10454, v105, qword_140F104A0[0], qword_140F104B8, v106, CheckStamp);
  if ( KeMtrrComparisonFailed )
    PopDiagTraceMtrrError();
  if ( a1[22] < 0 && dword_140F1044C == 5 )
  {
    *(_OWORD *)ProcessId = 0LL;
    StringCchPrintfW(PopHibernationErrorSubstitutionString, 0x80uLL, L"0x%x");
    RtlInitUnicodeString((PUNICODE_STRING)ProcessId, PopHibernationErrorSubstitutionString);
    IoRaiseInformationalHardError(-1073740783, (PUNICODE_STRING)ProcessId, 0LL);
    PopDiagTraceHibernateErrorStatus(a1[22]);
  }
LABEL_70:
  if ( *((_BYTE *)a1 + 48) )
    PopReleasePolicyLock();
  if ( byte_140F10920 )
  {
    qword_140F10BE8 = KeQueryPerformanceCounter(0LL).QuadPart;
    dword_140F10904 = PopQpcTimeInMs(&qword_140F10BE0, &qword_140F10BE8);
  }
  if ( a1[22] >= 0 )
  {
    qword_140F10480 = *((_QWORD *)a1 + 38);
    ExUpdateSystemTimeFromCmos(1, 1u);
    LOBYTE(v43) = 1;
    if ( (unsigned int)guard_dispatch_icall_no_overrides(v43, 0LL) )
      *((_BYTE *)a1 + 168) = 1;
    qword_140F10A08 = KeQueryPerformanceCounter(0LL).QuadPart;
    PfPowerActionNotify(2, 0, 0);
    qword_140F10478 = MEMORY[0xFFFFF78000000008];
    PopDiagComputeEarlyHiberStats();
    if ( a1[7] == 4 )
      PopDiagTraceFirmwareS3Stats();
  }
  byte_140F10449 = 1;
  PoPowerDownActionInProgress = 0;
  PoPowerResetActionInProgress = 0;
  PsIumResumeAfterHibernate();
  if ( *((_BYTE *)a1 + 96) )
  {
    PfPowerActionNotify(3, 0, 0);
    PopSetDevicesSystemState();
    PfPowerActionNotify(3, 1, 0);
  }
  if ( a1[22] >= 0 )
    WheaResumedFromHibernate();
  PpmCheckResumePpmEngineFromSx(v45, v44, v46);
  PopCurrentPowerStatePrecise((__int64)(a1 + 30), (__int64)&v129);
  if ( *((_BYTE *)a1 + 168) )
    ZwUpdateWnfStateData(&WNF_BOOT_INVALID_TIME_SOURCE, 0LL, 0, 0LL, 0LL, 0, 0);
  if ( PopIsDetailedSleepReliabilityDiagEnabled(v48, v47, v49, v50) )
    PopBootStatCheckpointAvailable = 1;
  else
    RtlBootStatusDisableFlushing(1);
  PopCheckpointSystemSleep(56, v51, v52, v53);
  a1[25] = PopNotifyTelemetryOsState(
             qword_140F10424,
             dword_140F1044C,
             dword_140F10454,
             (struct _KLOCK_ENTRIES *)(unsigned int)a1[2],
             0);
  PopCancelIgnoreBatteryStatusChange();
  PopExecuteOnTargetProcessors(
    (__int64)&stru_140FC11F0.WaitRegister,
    (__int64)PpmStartIllegalProcessorThrottleLogging,
    0LL,
    0LL);
  if ( *((_BYTE *)a1 + 48) )
  {
    PopReleasePolicyLock();
    *((_BYTE *)a1 + 48) = 0;
  }
  if ( *((_BYTE *)a1 + 96) )
    PopProcessDeviceWakeSource();
  PoClearBroadcast();
  *(_QWORD *)&qword_140F10468 = 0LL;
  PopFanSxExit();
  PopEsExitSleep(v108, v107, v109, v110);
  a1[29] = HIDWORD(PpmIdlePolicyLock.PropagateBoostsEntry.Next);
  PopSpoilEstimatesOnPowerStateTransitionWorkItem.Parameter = 0LL;
  PopSpoilEstimatesOnPowerStateTransitionWorkItem.WorkerRoutine = (void (__fastcall *)(void *))PopSpoilEstimatesOnPowerStateTransitionWorker;
  PopSpoilEstimatesOnPowerStateTransitionWorkItem.List.Flink = 0LL;
  ExQueueWorkItem(&PopSpoilEstimatesOnPowerStateTransitionWorkItem, DelayedWorkQueue);
  if ( a1[22] >= 0 )
    PopCurrentPowerState(a1 + 30, v111, v113, v114);
  if ( *((_BYTE *)a1 + 96) )
    PopHandleWakeSources();
  if ( a1[22] >= 0 )
  {
    PopQueryMostRecentWakeSourceAttributes(&v140, &v131, &v130, &v141);
    SshSessionManagerTracePostSleepNotification(
      qword_140F104A0[0],
      qword_140F104B8,
      a1[80],
      a1[81],
      a1[33],
      a1[32],
      (__int64)v131,
      (__int64)v130,
      v140);
  }
  if ( !*((_BYTE *)a1 + 48) )
  {
    PopAcquirePolicyLock(v112, v111, v113, (struct _SINGLE_LIST_ENTRY *)v114);
    *((_BYTE *)a1 + 48) = 1;
  }
  if ( a1[22] >= 0 )
  {
    PopUpdateSystemIdleContext(1);
    PopPowerAggregatorNotifySystemWake(a1[7], v115, v116, v117);
    LOBYTE(v111) = 0;
    LOBYTE(PopAction) = 0;
    if ( (unsigned __int64)dword_140F10490 >= 3 )
    {
      if ( !(unsigned __int8)PopIsMostRecentWakeAttended() )
      {
        LODWORD(PpmIdlePolicyLock.Teb) = 0;
        PopPendingUserPresenceDuringSystemSleep = 0;
        PopPendingUserPresenceMonitorOnReason = 0;
      }
    }
    else
    {
      v112 = 3LL * dword_140F10490;
      qword_140F104E8 = qword_140F104A0[3 * dword_140F10490];
      v118 = qword_140F104A8[3 * dword_140F10490];
      LODWORD(PpmIdlePolicyLock.Teb) = 0;
      PopPendingUserPresenceDuringSystemSleep = 0;
      PopPendingUserPresenceMonitorOnReason = 0;
      switch ( v118 )
      {
        case -1LL:
          if ( PopDeferDoze(a1[82], a1[83], (_BYTE *)a1 + 120) )
            qword_140F10424 = *(_QWORD *)a1;
          else
            qword_140F10424 = 0x500000002LL;
          LOBYTE(PopAction) = PopAction | 2;
LABEL_212:
          *((_BYTE *)a1 + 216) = 0;
          break;
        case -2LL:
          if ( !qword_140F10488 )
            qword_140F10488 = qword_140F10478;
          break;
        case -3LL:
          PopWakeAlarmTimeOverrideAc = 0LL;
          PopWakeAlarmTimeOverrideDc = 0LL;
          break;
        default:
          if ( HIDWORD(PpmIdlePolicyLock.PropagateBoostsEntry.Next) == 1 )
          {
            if ( !a1[83] )
            {
              LOBYTE(v111) = 2;
              qword_140F10424 = *(_QWORD *)a1;
              LOBYTE(PopAction) = 2;
              goto LABEL_212;
            }
          }
          else if ( !a1[83] && a1[28] == a1[29] )
          {
            PopCheckPowerSourceAfterRtcWakeSet();
          }
          break;
      }
    }
  }
  if ( byte_140F104E0 && *((_BYTE *)a1 + 216) )
  {
    ExWakeTimersResume(v112, v111);
    byte_140F104E0 = 0;
    qword_140F104E8 = 0LL;
  }
  if ( PoResumeFromHibernate )
    PopBootLoaderTraceProcess();
  byte_140F10920 = 0;
  PopResetActionDefaults();
  PopSetPowerActionState(2);
  PopReleasePolicyLock();
  if ( PopPendingUserPresenceDuringSystemSleep )
    PoSetUserPresent(PopPendingUserPresenceMonitorOnReason);
  ExQueueWorkItem(&PopUnlockAfterSleepWorkItem, DelayedWorkQueue);
  PopCheckForWork();
  if ( a1[22] >= 0 )
    PpmPerfReApplyStates(v120, v119, v121);
  dword_140F10434 = 17;
  qword_140F10B78 = *(_QWORD *)&KeQueryPerformanceCounter(0LL) - PopDirectedDripsDiagLock.WriteOperationCount;
  v122 = (void *)*((_QWORD *)a1 + 25);
  if ( v122 )
  {
    ExDeleteWakeTimerInfo(v122);
    *((_QWORD *)a1 + 25) = 0LL;
  }
  PopTransitionCritialResumeThread = 0LL;
LABEL_230:
  if ( v4 )
    ObfDereferenceObject(v4);
  if ( v5 )
    ObfDereferenceObject(v5);
  v123 = a1[27];
  if ( v123 )
    PopDiagTraceStateTransitionFailurePoint(a1[22], v123);
  return (unsigned int)a1[22];
}
