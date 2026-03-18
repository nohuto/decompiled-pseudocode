/*
 * XREFs of PopTransitionSystemPowerStateEx @ 0x140C0B0A0
 * Callers:
 *     PopTransitionSystemPowerState @ 0x140C0B030 (PopTransitionSystemPowerState.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021C3F0 (KeQueryPerformanceCounter.c)
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 *     PopRunMaximumIrpWorkers @ 0x1403B7600 (PopRunMaximumIrpWorkers.c)
 *     PopExecuteOnTargetProcessors @ 0x140428780 (PopExecuteOnTargetProcessors.c)
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     PopThermalSxEntry @ 0x1404351B4 (PopThermalSxEntry.c)
 *     PopFanSxExit @ 0x1404352D4 (PopFanSxExit.c)
 *     PopFanSxEntry @ 0x140435910 (PopFanSxEntry.c)
 *     PopUmpoSendFlushSleepStudyLoggerNotification @ 0x140437AA0 (PopUmpoSendFlushSleepStudyLoggerNotification.c)
 *     PoSetUserPresent @ 0x1404382E0 (PoSetUserPresent.c)
 *     PopCheckForWork @ 0x1404385D4 (PopCheckForWork.c)
 *     PopGetPolicyWorker @ 0x14043864C (PopGetPolicyWorker.c)
 *     StringCchPrintfW @ 0x1404AC750 (StringCchPrintfW.c)
 *     ExWakeTimersPause @ 0x1404B93C0 (ExWakeTimersPause.c)
 *     PpmCheckPausePpmEngineForSx @ 0x1404C7670 (PpmCheckPausePpmEngineForSx.c)
 *     PpmCheckResumePpmEngineFromSx @ 0x1404C76B4 (PpmCheckResumePpmEngineFromSx.c)
 *     IoRaiseInformationalHardError @ 0x1404DFC20 (IoRaiseInformationalHardError.c)
 *     PopActionRetrieveInitialState @ 0x1404F0404 (PopActionRetrieveInitialState.c)
 *     PopSetPowerActionState @ 0x1404F4374 (PopSetPowerActionState.c)
 *     ExWakeTimersResume @ 0x1404F5668 (ExWakeTimersResume.c)
 *     PopSetPowerActionWatchdogState @ 0x1404FE998 (PopSetPowerActionWatchdogState.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x1405079A8 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PopIgnoreBatteryStatusChange @ 0x140514E18 (PopIgnoreBatteryStatusChange.c)
 *     PopFxPrepareDevicesForShutdown @ 0x140522284 (PopFxPrepareDevicesForShutdown.c)
 *     PsIumResumeAfterHibernate @ 0x140527718 (PsIumResumeAfterHibernate.c)
 *     RtlBootStatusDisableFlushing @ 0x1405306D0 (RtlBootStatusDisableFlushing.c)
 *     PopReadShutdownPolicy @ 0x140600C58 (PopReadShutdownPolicy.c)
 *     PopPushPowerStateTransitionRecordWithCallback @ 0x14060769C (PopPushPowerStateTransitionRecordWithCallback.c)
 *     PopCheckPowerSourceAfterRtcWakeSet @ 0x140607E5C (PopCheckPowerSourceAfterRtcWakeSet.c)
 *     ExDeleteWakeTimerInfo @ 0x1406CEC44 (ExDeleteWakeTimerInfo.c)
 *     WheaResumedFromHibernate @ 0x1406D469C (WheaResumedFromHibernate.c)
 *     ZwUpdateWnfStateData @ 0x140727030 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PopDeferDoze @ 0x1407718E0 (PopDeferDoze.c)
 *     PopResetActionDefaults @ 0x14077C7B8 (PopResetActionDefaults.c)
 *     PopSetShutdownMarker @ 0x14077D210 (PopSetShutdownMarker.c)
 *     PpmPerfReApplyStates @ 0x1407CE2FC (PpmPerfReApplyStates.c)
 *     PopQueryMostRecentWakeSourceAttributes @ 0x1407CF840 (PopQueryMostRecentWakeSourceAttributes.c)
 *     PopBootLoaderTraceProcess @ 0x1407CFAB0 (PopBootLoaderTraceProcess.c)
 *     PopZeroHiberFile @ 0x1407D0EAC (PopZeroHiberFile.c)
 *     PopSaveLidReliabilityState @ 0x1407D15B8 (PopSaveLidReliabilityState.c)
 *     PopDiagTracePreSleepNotification @ 0x1407D4844 (PopDiagTracePreSleepNotification.c)
 *     PopDiagTraceStateTransitionFailurePoint @ 0x1407D5360 (PopDiagTraceStateTransitionFailurePoint.c)
 *     PopPowerAggregatorNotifySystemWake @ 0x1407D6DC4 (PopPowerAggregatorNotifySystemWake.c)
 *     MmZeroPageFileAtShutdown @ 0x1408648B4 (MmZeroPageFileAtShutdown.c)
 *     PsLookupProcessByProcessId @ 0x1408EF4E0 (PsLookupProcessByProcessId.c)
 *     PopFilterCapabilities @ 0x140944D5C (PopFilterCapabilities.c)
 *     PopUpdateSystemIdleContext @ 0x140945524 (PopUpdateSystemIdleContext.c)
 *     ExSwapinWorkerThreads @ 0x140956958 (ExSwapinWorkerThreads.c)
 *     PopInitSystemSleeperThread @ 0x140A03F00 (PopInitSystemSleeperThread.c)
 *     PsLookupThreadByThreadId @ 0x140A10B70 (PsLookupThreadByThreadId.c)
 *     PopCheckResiliencyScenarios @ 0x140A3D444 (PopCheckResiliencyScenarios.c)
 *     ExAcquireTimeRefreshLockExclusive @ 0x140A66A6C (ExAcquireTimeRefreshLockExclusive.c)
 *     ExReleaseTimeRefreshLockExclusive @ 0x140A66AE4 (ExReleaseTimeRefreshLockExclusive.c)
 *     MmLockPagableSectionByHandle @ 0x140A9C420 (MmLockPagableSectionByHandle.c)
 *     PopCurrentPowerStatePrecise @ 0x140AB129C (PopCurrentPowerStatePrecise.c)
 *     PopCurrentPowerState @ 0x140AB1350 (PopCurrentPowerState.c)
 *     PoInitializeBroadcast @ 0x140AC58BC (PoInitializeBroadcast.c)
 *     PnpSurpriseFailUnsafeDmaDevices @ 0x140B130B4 (PnpSurpriseFailUnsafeDmaDevices.c)
 *     PopTransitionCheckpoint @ 0x140B1B69C (PopTransitionCheckpoint.c)
 *     RtlSetSystemBootStatusEx @ 0x140B1B790 (RtlSetSystemBootStatusEx.c)
 *     PopInitializePowerPolicySimulate @ 0x140B2CC10 (PopInitializePowerPolicySimulate.c)
 *     PopIsDozeSupported @ 0x140B2E7C8 (PopIsDozeSupported.c)
 *     PopSetSleepMarker @ 0x140B2ECDC (PopSetSleepMarker.c)
 *     SshSessionManagerTracePostSleepNotification @ 0x140B2FE08 (SshSessionManagerTracePostSleepNotification.c)
 *     PoClearBroadcast @ 0x140B33768 (PoClearBroadcast.c)
 *     PopFastS4Check @ 0x140B3CBE4 (PopFastS4Check.c)
 *     PopIsDetailedSleepReliabilityDiagEnabled @ 0x140B3CD68 (PopIsDetailedSleepReliabilityDiagEnabled.c)
 *     PopDiagTraceKernelQueriesAllowed @ 0x140B41664 (PopDiagTraceKernelQueriesAllowed.c)
 *     PopQueryPowerSettingUlong @ 0x140B41710 (PopQueryPowerSettingUlong.c)
 *     PopFindNextSystemPowerState @ 0x140B449C0 (PopFindNextSystemPowerState.c)
 *     CmSetLazyFlushState @ 0x140B46A24 (CmSetLazyFlushState.c)
 *     PopEsExitSleep @ 0x140B4F60C (PopEsExitSleep.c)
 *     PopEnforceResiliencyScenarios @ 0x140B501F8 (PopEnforceResiliencyScenarios.c)
 *     PopNotifyTelemetryOsState @ 0x140B50FFC (PopNotifyTelemetryOsState.c)
 *     PopAdvanceSystemPowerState @ 0x140B55C34 (PopAdvanceSystemPowerState.c)
 *     PopNotifyCallbacksPreSleep @ 0x140B5BB0C (PopNotifyCallbacksPreSleep.c)
 *     PopEsEnterSleepShutdown @ 0x140B5CD70 (PopEsEnterSleepShutdown.c)
 *     PopCancelIgnoreBatteryStatusChange @ 0x140B607C0 (PopCancelIgnoreBatteryStatusChange.c)
 *     PopTransitionGetWakeTimerType @ 0x140B612E8 (PopTransitionGetWakeTimerType.c)
 *     PopAllocateHiberContext @ 0x140B71364 (PopAllocateHiberContext.c)
 *     PopGracefulShutdown @ 0x140BF9180 (PopGracefulShutdown.c)
 *     PopHandleWakeSources @ 0x140BF952C (PopHandleWakeSources.c)
 *     PopProcessDeviceWakeSource @ 0x140BF97FC (PopProcessDeviceWakeSource.c)
 *     PoDelistPowerStateTransitionBlocker @ 0x140BFD138 (PoDelistPowerStateTransitionBlocker.c)
 *     PopDiagTraceFirmwareS3Stats @ 0x140BFD8EC (PopDiagTraceFirmwareS3Stats.c)
 *     PopDiagTraceHibernateErrorStatus @ 0x140BFDBBC (PopDiagTraceHibernateErrorStatus.c)
 *     PopDiagTraceMtrrError @ 0x140BFDC48 (PopDiagTraceMtrrError.c)
 *     PopAcquirePolicyLock @ 0x140C04BF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C04C40 (PopReleasePolicyLock.c)
 *     PopSetDevicesSystemState @ 0x140C05C70 (PopSetDevicesSystemState.c)
 *     PopCheckpointSystemSleep @ 0x140C06470 (PopCheckpointSystemSleep.c)
 *     PopFlushVolumes @ 0x140C06720 (PopFlushVolumes.c)
 *     PopQpcTimeInMs @ 0x140C06CF0 (PopQpcTimeInMs.c)
 *     PfPowerActionNotify @ 0x140C071B0 (PfPowerActionNotify.c)
 *     ExUpdateSystemTimeFromCmos @ 0x140C08734 (ExUpdateSystemTimeFromCmos.c)
 *     PopNewWakeInfo @ 0x140C09008 (PopNewWakeInfo.c)
 *     PopAcquireTransitionLockAfterSleep @ 0x140C090E8 (PopAcquireTransitionLockAfterSleep.c)
 *     IoFreePoDeviceNotifyList @ 0x140C0A0AC (IoFreePoDeviceNotifyList.c)
 *     PopDiagComputeEarlyHiberStats @ 0x140C0A60C (PopDiagComputeEarlyHiberStats.c)
 *     PopIsMostRecentWakeAttended @ 0x140C0C3F8 (PopIsMostRecentWakeAttended.c)
 *     PopDiagTracePostSleepNotification @ 0x140C0C638 (PopDiagTracePostSleepNotification.c)
 *     ExGetNextWakeTime @ 0x140C0CCD0 (ExGetNextWakeTime.c)
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
  unsigned __int8 v71; // r11
  __int64 v72; // r10
  __int64 v73; // rdx
  __int64 v74; // rax
  char *v75; // rdx
  char *v76; // rdx
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
  int v125; // [rsp+30h] [rbp-89h]
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
  v132[1] = &word_140C0E0E0;
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
  a1[85] = (*(_DWORD *)&stru_140F10828.WaitBlockFill11[100] & 0x10000) != 0 ? 300000000 : 600000000;
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
  stru_140F0F620.StackBase = 0LL;
  stru_140F0F620.StackLimit = PopUnlockAfterSleepWorker;
  stru_140F0F620.QuantumTarget = 0LL;
  CmSetLazyFlushState(0);
  PopNotifyCallbacksPreSleep();
  ExSwapinWorkerThreads(0);
  v10 = PoInitializeBroadcast();
  a1[22] = v10;
  if ( v10 < 0 )
  {
    ExQueueWorkItem((PWORK_QUEUE_ITEM)&stru_140F0F620.QuantumTarget, DelayedWorkQueue);
    *v2 = 5;
    goto LABEL_230;
  }
  PopCheckPowerSourceAfterRtcWakeCancel();
  PopCurrentPowerStatePrecise((__int64)(a1 + 30), (__int64)&v129);
  PopAcquirePolicyLock(v12, v11, v13, v14);
  *((_BYTE *)a1 + 48) = 1;
  PopFilterCapabilities((__int64)&stru_140F10828.WaitBlock[0].Thread, (__int64)&unk_140F0FC38);
  if ( byte_140F0FB61 )
  {
    if ( byte_140F0FB61 != 2 )
    {
      PopReleasePolicyLock();
      PoClearBroadcast();
      ExQueueWorkItem((PWORK_QUEUE_ITEM)&stru_140F0F620.QuantumTarget, DelayedWorkQueue);
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
  *(_QWORD *)&qword_140F0FBA8 = qword_140F0FAF0;
  PopIgnoreBatteryStatusChange();
  PopCheckResiliencyScenarios();
  PopEnforceResiliencyScenarios(a1 + 52);
  PopExecuteOnTargetProcessors(
    (__int64)&stru_140FC01F0.WaitRegister,
    (__int64)PpmStopIllegalProcessorThrottleLogging,
    0LL,
    0LL);
  v18 = 6;
  if ( *a1 == 6 )
    LODWORD(qword_140F0FB64) = 6;
  v19 = *a1;
  if ( *a1 == 4 || (unsigned int)(v19 - 5) <= 1 )
  {
    BYTE1(stru_140F10828.WriteOperationCount) = 1;
    if ( v19 == 5 )
      BYTE3(stru_140F10828.WriteOperationCount) = 1;
    if ( FileHandle && FileObject && (unsigned int)MmZeroPageFileAtShutdown() )
      PopZeroHiberFile(FileHandle, (__int64)FileObject);
  }
  v20 = *a1;
  v21 = (unsigned __int8 *)(a1 + 18);
  *((_BYTE *)a1 + 72) = 0;
  v22 = a1 + 4;
  a1[4] = 0;
  if ( v20 == 2 || v20 == 3 )
    BYTE1(stru_140F10828.WriteOperationCount) = 1;
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
        if ( !(_DWORD)qword_140F0FB64 )
        {
          a1[27] = 6;
          a1[22] = 0;
          goto LABEL_69;
        }
        *((_BYTE *)a1 + 104) = byte_140F0FB60;
        LOBYTE(byte_140F0FB60) = 0;
        v24 = a1[22];
        if ( v24 == -1073741536 )
        {
          if ( (a1[26] & 2) != 0 && dword_140F0FB6C >= 0 && (dword_140F0FB6C & 3) != 0 )
          {
            PopGetPolicyWorker(2);
            a1[27] = 8;
LABEL_69:
            v4 = 0LL;
            v5 = v142;
            goto LABEL_70;
          }
          PopActionRetrieveInitialState((_DWORD *)&qword_140F0FB64 + 1, a1 + 4, &dword_140F0FB8C, (_BYTE *)a1 + 72);
          if ( (unsigned int)(qword_140F0FB64 - 4) <= 2 )
          {
            byte_140F0FB62 = 1;
            dword_140F0FB6C = a1[2];
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
        if ( (dword_140F0FB6C & 0x40000000) != 0 )
        {
          *v23 = 0;
          *v3 = 0;
        }
        if ( !byte_140F0FC56 && !byte_140F0FC44 && !byte_140F0FC4B )
          *v3 = 0;
        PopInitializePowerPolicySimulate();
        dword_140F0FB90 = dword_140F0FB8C;
        v25 = ((unsigned int)dword_140F0FB6C >> 27) & 2;
        a1[23] = v25;
        PopAdvanceSystemPowerState(&dword_140F0FB90, v25, SHIDWORD(qword_140F0FB64), *v22);
        if ( (a1[2] & 8) != 0 )
        {
          byte_140F0FDA0 = 1;
          *((_BYTE *)a1 + 24) = 0;
          dword_140F0FB94 = 5;
          a1[8] = 6;
          v26 = dword_140F0FB8C;
        }
        else
        {
          if ( PopFastS4Check() )
          {
            a1[8] = dword_140F0FB8C;
            v27 = 6;
            dword_140F0FB94 = 5;
            *((_BYTE *)a1 + 24) = 1;
            a1[13] = 6;
            goto LABEL_48;
          }
          dword_140F0FB94 = dword_140F0FB8C;
          a1[8] = dword_140F0FB8C;
          v26 = dword_140F0FB8C;
          *((_BYTE *)a1 + 24) = 0;
        }
        v27 = PopPowerStateHandlerLookup[v26];
        a1[13] = v27;
        if ( v27 > 6 )
          goto LABEL_65;
LABEL_48:
        if ( !qword_140F10768[3 * (int)v27] )
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
        if ( !byte_140F0FB62 )
        {
          v28 = dword_140F0FB8C;
          goto LABEL_53;
        }
        PopSetShutdownMarker();
        PopSaveLidReliabilityState(v33);
LABEL_55:
        PopAcquirePolicyLock(v30, v29, v31, v32);
        if ( (byte_140F0FB60 & 6) == 0 )
          break;
        *((_BYTE *)a1 + 48) = 1;
        a1[22] = -1073741536;
      }
      v34 = *((_BYTE *)stru_140F0C428.WaitBlock[2].Object + 2);
      v35 = *((_QWORD *)stru_140F0C428.WaitBlock[2].Object + 7);
      PopReleasePolicyLock();
      PopCheckpointSystemSleep(10, v36, v37, v38);
      byte_140F0FB88 = 3;
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
             qword_140F0FB64,
             dword_140F0FB8C,
             dword_140F0FB94,
             (struct _KLOCK_ENTRIES *)(unsigned int)a1[2],
             1);
  PopTransitionCheckpoint(9, 0);
  if ( !byte_140F0FB62 )
  {
    PopCurrentPowerState(a1 + 30, v55, v57, v58);
    PopDiagTracePreSleepNotification(
      (unsigned int)a1[8],
      (unsigned int)dword_140F0FB94,
      dword_140F0FB74,
      dword_140F0FB78,
      a1[25],
      (__int64)(a1 + 30),
      (__int64)qword_140F0FB80);
    PopCheckpointSystemSleep(16, v59, v60, v61);
    PopUmpoSendFlushSleepStudyLoggerNotification();
  }
  PopEsEnterSleepShutdown(v56, v55, v57, v58);
  PopThermalSxEntry();
  PopFanSxEntry();
  if ( !*((_BYTE *)a1 + 12) )
  {
    if ( byte_140F0FB62 )
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
    v62 = dword_140F0FB8C;
  PopFlushVolumes(v62);
  if ( dword_140F0FB94 < dword_140F0FB8C )
    dword_140F0FB94 = dword_140F0FB8C;
  byte_140F0FB88 = 2;
  if ( byte_140F0FB62 )
  {
    PopFxPrepareDevicesForShutdown(v64, v63, v65, v66);
    IoFreePoDeviceNotifyList((_BYTE *)(*(_QWORD *)&qword_140F0FBA8 + 48LL));
    if ( dword_140F0FB74 == 2 )
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
  if ( !byte_140F0FC20 )
  {
    ExWakeTimersPause();
    byte_140F0FC20 = 1;
  }
  *((_QWORD *)a1 + 19) = MEMORY[0xFFFFF78000000008];
  v69 = MEMORY[0xFFFFF78000000014];
  v70 = unk_140F10DE0;
  *((_QWORD *)a1 + 20) = MEMORY[0xFFFFF78000000014];
  *((_QWORD *)a1 + 23) = 0LL;
  if ( v70 || unk_140F10DE8 )
  {
    *((_QWORD *)a1 + 23) = -3LL;
  }
  else
  {
    v71 = stru_140F10828.WaitBlockFill5[44];
    if ( stru_140F10828.WaitBlockFill5[44]
      && dword_140F0FB8C == 5
      && !byte_140F0FDA0
      && dword_140F0FB74 != 2
      && v34
      && v35 != -1LL
      && v35 > v69 )
    {
      *((_QWORD *)a1 + 39) = v35 - v69;
      *((_QWORD *)a1 + 22) = v35 + *((_QWORD *)a1 + 19) - v69;
      goto LABEL_114;
    }
    if ( !*((_DWORD *)qword_140F105C0 + 22)
      || dword_140F0FB8C == 5
      || !PopIsDozeSupported((__int64)&stru_140F10828.WaitBlock[0].Thread)
      || (dword_140F0FB6C & 0x40000000) != 0 )
    {
      if ( v71 && dword_140F0FB8C == 5 && !byte_140F0FDA0 && stru_140F0F620.Spare32 && dword_140F0FB74 == 11 )
      {
        v75 = (char *)stru_140F0F620.Spare32 - v69;
        *((_QWORD *)a1 + 39) = (char *)stru_140F0F620.Spare32 - v69;
        v76 = &v75[-10000000 * PopSmartUserPresenceWakeOffset];
        v77 = *((_QWORD *)a1 + 19);
        *((_QWORD *)a1 + 39) = v76;
        *((_QWORD *)a1 + 22) = &v76[v77];
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
  if ( *((_QWORD *)a1 + 23) == -1LL && !qword_140F0FC30 )
    qword_140F0FC30 = *((_QWORD *)a1 + 19);
  v78 = &qword_140F0FBD8;
  memset_0(&qword_140F0FBD8, 0, 0x48uLL);
  dword_140F0FBD0 = 3;
  if ( *((_QWORD *)a1 + 23) == -3LL )
  {
    qword_140F0FBE8[0] = -3LL;
    qword_140F0FBD8 = v70;
    qword_140F0FC00 = *((_QWORD *)a1 + 23);
    qword_140F0FBF0 = unk_140F10DE8;
  }
  else if ( !byte_140F0FDA0 && dword_140F0FB74 != 14 )
  {
    if ( dword_140F0FB8C == 5 && a1[82] != 1 && a1[83] != 1 )
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
          qword_140F0FBD8 = *((_QWORD *)a1 + 22);
          qword_140F0FBE8[0] = *((_QWORD *)a1 + 23);
        }
        if ( a1[83] )
        {
          qword_140F0FBF0 = *((_QWORD *)a1 + 22);
          qword_140F0FC00 = *((_QWORD *)a1 + 23);
        }
      }
      else
      {
        do
        {
          *v78 = *((_QWORD *)a1 + 22);
          v78 += 3;
        }
        while ( (__int64)v78 < (__int64)&unk_140F0FC08 );
        v80 = qword_140F0FBE8;
        do
        {
          *v80 = *((_QWORD *)a1 + 23);
          v80 += 3;
        }
        while ( (__int64)v80 < (__int64)&qword_140F0FC18 );
      }
    }
    v81 = qword_140F0FC28;
    *((_QWORD *)a1 + 8) = qword_140F0FC28;
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
      if ( v84 != 2 || (LOBYTE(v79) = 1, *(int *)&stru_140F10828.WaitBlockFill11[100] < 0) )
        LOBYTE(v79) = 0;
      *((_BYTE *)a1 + 169) = v79;
      v85 = (_DWORD)a1 + 40;
      v86 = (__int64)(a1 + 50);
      NextWakeTime = ExGetNextWakeTime(v82 + 1, *((_QWORD *)a1 + 22), v79, (int)a1 + 40, (__int64)(a1 + 50));
      *((_BYTE *)a1 + 336) = NextWakeTime;
      if ( NextWakeTime )
      {
        qword_140F0FBD8 = *((_QWORD *)a1 + 5);
        qword_140F0FBE8[0] = *((_QWORD *)a1 + 25);
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
      if ( v88 != 2 || (LOBYTE(v79) = 1, *(int *)&stru_140F10828.WaitBlockFill11[100] < 0) )
        LOBYTE(v79) = 0;
      *((_BYTE *)a1 + 169) = v79;
      v89 = ExGetNextWakeTime((unsigned int)*((_QWORD *)a1 + 8) + 1, *((_QWORD *)a1 + 22), v79, v85, v86);
      *((_BYTE *)a1 + 336) = v89;
      if ( v89 )
      {
        qword_140F0FBF0 = *((_QWORD *)a1 + 5);
        qword_140F0FC00 = *((_QWORD *)a1 + 25);
      }
    }
  }
  qword_140F0FBE0[0] = qword_140F0FBD8;
  if ( qword_140F0FBD8 && qword_140F0FBD8 < *((_QWORD *)a1 + 19) + (unsigned __int64)(unsigned int)a1[85] )
    qword_140F0FBE0[0] = *((_QWORD *)a1 + 19) + (unsigned int)a1[85];
  qword_140F0FBF8 = qword_140F0FBF0;
  if ( qword_140F0FBF0 && qword_140F0FBF0 < *((_QWORD *)a1 + 19) + (unsigned __int64)(unsigned int)a1[85] )
    qword_140F0FBF8 = *((_QWORD *)a1 + 19) + (unsigned int)a1[85];
  a1[80] = PopTransitionGetWakeTimerType(qword_140F0FBE8[0]);
  a1[81] = PopTransitionGetWakeTimerType(qword_140F0FC00);
  stru_140F10070.WaitListEntry.Blink = (struct _LIST_ENTRY *)KeQueryPerformanceCounter(0LL).QuadPart;
  ExAcquireTimeRefreshLockExclusive(v91, v90, v92, v93);
  ExUpdateSystemTimeFromCmos(1, 1u);
  ExReleaseTimeRefreshLockExclusive();
  guard_dispatch_icall_no_overrides(qword_140F0FBE0[0], qword_140F0FBF8);
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
  a1[28] = dword_140F106CC;
  v98 = PopPushPowerStateTransitionRecordWithCallback(v97, v5, 0LL, 0LL, 0LL);
  KeSetEvent((PRKEVENT)(a1 + 62), 0, 1u);
  KeWaitForSingleObject(a1 + 68, Executive, 0, 0, 0LL);
  if ( v98 >= 0 )
    PoDelistPowerStateTransitionBlocker(v100, v99, v101, v102);
  qword_140F0FE40 = 0LL;
  a1[22] = a1[75];
  PopSetPowerActionWatchdogState(2);
  CurrentThread = KeGetCurrentThread();
  v104 = dword_140F0FB8C;
  if ( LOBYTE(stru_140F10828.OtherOperationCount) )
    v104 = dword_140F0FB94;
  dword_140F0FB98 = v104;
  PopTransitionCritialResumeThread = (__int64)CurrentThread;
  if ( (a1[2] & 8) != 0 )
  {
    a1[8] = 6;
  }
  else
  {
    a1[8] = dword_140F0FB8C;
    v18 = dword_140F0FB8C;
  }
  v105 = dword_140F0FB98;
  v125 = a1[81];
  v106 = a1[80];
  a1[7] = dword_140F0FB98;
  PopDiagTracePostSleepNotification(v18, dword_140F0FB94, v105, qword_140F0FBE0[0], qword_140F0FBF8, v106, v125);
  if ( KeMtrrComparisonFailed )
    PopDiagTraceMtrrError();
  if ( a1[22] < 0 && dword_140F0FB8C == 5 )
  {
    *(_OWORD *)ProcessId = 0LL;
    StringCchPrintfW((STRSAFE_LPWSTR)&stru_140F0F620.StateSaveArea, 0x80uLL, L"0x%x");
    RtlInitUnicodeString((PUNICODE_STRING)ProcessId, (PCWSTR)&stru_140F0F620.StateSaveArea);
    IoRaiseInformationalHardError(-1073740783, (PUNICODE_STRING)ProcessId, 0LL);
    PopDiagTraceHibernateErrorStatus(a1[22]);
  }
LABEL_70:
  if ( *((_BYTE *)a1 + 48) )
    PopReleasePolicyLock();
  if ( byte_140F0FDA0 )
  {
    *(LARGE_INTEGER *)&stru_140F10070.SchedulerApcFill5[80] = KeQueryPerformanceCounter(0LL);
    dword_140F0FD84 = PopQpcTimeInMs(
                        &stru_140F10070.SchedulerApc.SystemArgument2,
                        &stru_140F10070.SchedulerApcFill5[80]);
  }
  if ( a1[22] >= 0 )
  {
    qword_140F0FBC0 = *((_QWORD *)a1 + 38);
    ExUpdateSystemTimeFromCmos(1, 1u);
    LOBYTE(v43) = 1;
    if ( (unsigned int)guard_dispatch_icall_no_overrides(v43, 0LL) )
      *((_BYTE *)a1 + 168) = 1;
    stru_140F10070.RelativeTimerBias = KeQueryPerformanceCounter(0LL).QuadPart;
    PfPowerActionNotify(2, 0, 0);
    qword_140F0FBB8 = MEMORY[0xFFFFF78000000008];
    PopDiagComputeEarlyHiberStats();
    if ( a1[7] == 4 )
      PopDiagTraceFirmwareS3Stats();
  }
  byte_140F0FB89 = 1;
  BYTE1(stru_140F10828.WriteOperationCount) = 0;
  BYTE3(stru_140F10828.WriteOperationCount) = 0;
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
    ZwUpdateWnfStateData((__int64)&WNF_BOOT_INVALID_TIME_SOURCE, 0LL);
  if ( PopIsDetailedSleepReliabilityDiagEnabled(v48, v47, v49, v50) )
    PopBootStatCheckpointAvailable = 1;
  else
    RtlBootStatusDisableFlushing(1);
  PopCheckpointSystemSleep(56, v51, v52, v53);
  a1[25] = PopNotifyTelemetryOsState(
             qword_140F0FB64,
             dword_140F0FB8C,
             dword_140F0FB94,
             (struct _KLOCK_ENTRIES *)(unsigned int)a1[2],
             0);
  PopCancelIgnoreBatteryStatusChange();
  PopExecuteOnTargetProcessors(
    (__int64)&stru_140FC01F0.WaitRegister,
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
  *(_QWORD *)&qword_140F0FBA8 = 0LL;
  PopFanSxExit();
  PopEsExitSleep(v108, v107, v109, v110);
  a1[29] = dword_140F106CC;
  stru_140F0F620.KernelStack = 0LL;
  *(_QWORD *)&stru_140F0F620.CurrentRunTime = PopSpoilEstimatesOnPowerStateTransitionWorker;
  stru_140F0F620.ThreadLock = 0LL;
  ExQueueWorkItem((PWORK_QUEUE_ITEM)&stru_140F0F620.ThreadLock, DelayedWorkQueue);
  if ( a1[22] >= 0 )
    PopCurrentPowerState(a1 + 30, v111, v113, v114);
  if ( *((_BYTE *)a1 + 96) )
    PopHandleWakeSources();
  if ( a1[22] >= 0 )
  {
    PopQueryMostRecentWakeSourceAttributes(&v140, &v131, &v130, &v141);
    SshSessionManagerTracePostSleepNotification(
      qword_140F0FBE0[0],
      qword_140F0FBF8,
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
    LOBYTE(byte_140F0FB60) = 0;
    if ( (unsigned __int64)dword_140F0FBD0 >= 3 )
    {
      if ( !(unsigned __int8)PopIsMostRecentWakeAttended() )
      {
        dword_140F105A0[0] = 0;
        HIDWORD(stru_140F10828.OtherOperationCount) = 0;
        LODWORD(stru_140F10828.ReadTransferCount) = 0;
      }
    }
    else
    {
      v112 = 3LL * dword_140F0FBD0;
      qword_140F0FC28 = qword_140F0FBE0[3 * dword_140F0FBD0];
      v118 = qword_140F0FBE8[3 * dword_140F0FBD0];
      dword_140F105A0[0] = 0;
      HIDWORD(stru_140F10828.OtherOperationCount) = 0;
      LODWORD(stru_140F10828.ReadTransferCount) = 0;
      switch ( v118 )
      {
        case -1LL:
          if ( PopDeferDoze(a1[82], a1[83], (_BYTE *)a1 + 120) )
            qword_140F0FB64 = *(_QWORD *)a1;
          else
            qword_140F0FB64 = 0x500000002LL;
          LOBYTE(byte_140F0FB60) = byte_140F0FB60 | 2;
LABEL_212:
          *((_BYTE *)a1 + 216) = 0;
          break;
        case -2LL:
          if ( !qword_140F0FBC8 )
            qword_140F0FBC8 = qword_140F0FBB8;
          break;
        case -3LL:
          unk_140F10DE0 = 0LL;
          unk_140F10DE8 = 0LL;
          break;
        default:
          if ( dword_140F106CC == 1 )
          {
            if ( !a1[83] )
            {
              LOBYTE(v111) = 2;
              qword_140F0FB64 = *(_QWORD *)a1;
              LOBYTE(byte_140F0FB60) = 2;
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
  if ( byte_140F0FC20 && *((_BYTE *)a1 + 216) )
  {
    ExWakeTimersResume(v112, v111);
    byte_140F0FC20 = 0;
    qword_140F0FC28 = 0LL;
  }
  if ( LOBYTE(stru_140F10828.OtherOperationCount) )
    PopBootLoaderTraceProcess();
  byte_140F0FDA0 = 0;
  PopResetActionDefaults();
  PopSetPowerActionState(2);
  PopReleasePolicyLock();
  if ( HIDWORD(stru_140F10828.OtherOperationCount) )
    PoSetUserPresent(stru_140F10828.ReadTransferCount);
  ExQueueWorkItem((PWORK_QUEUE_ITEM)&stru_140F0F620.QuantumTarget, DelayedWorkQueue);
  PopCheckForWork();
  if ( a1[22] >= 0 )
    PpmPerfReApplyStates(v120, v119, v121);
  dword_140F0FB74 = 17;
  stru_140F10070.SavedApcState.ApcListHead[1].Flink = (struct _LIST_ENTRY *)(*(_QWORD *)&KeQueryPerformanceCounter(0LL)
                                                                           - qword_140F0B0D0);
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
