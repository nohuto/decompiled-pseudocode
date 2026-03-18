/*
 * XREFs of NtPowerInformation @ 0x1409DE3E0
 * Callers:
 *     WheaLogInternalEvent @ 0x1403DFEC0 (WheaLogInternalEvent.c)
 *     PopRecordPepWorkorderBlackboxInformation @ 0x140613160 (PopRecordPepWorkorderBlackboxInformation.c)
 *     PopRecordPoIrpBlackboxInformation @ 0x140613304 (PopRecordPoIrpBlackboxInformation.c)
 *     PopRecordPowerWatchdogBlackboxInformation @ 0x1406135B8 (PopRecordPowerWatchdogBlackboxInformation.c)
 *     DifNtPowerInformationWrapper @ 0x14067FDC0 (DifNtPowerInformationWrapper.c)
 *     TtmpCalloutArmWatchdog @ 0x1407E57EC (TtmpCalloutArmWatchdog.c)
 *     TtmpCalloutWatchdogCallback @ 0x1407E5890 (TtmpCalloutWatchdogCallback.c)
 *     TtmpStartCallout @ 0x1407E60BC (TtmpStartCallout.c)
 *     TtmpStopCallout @ 0x1407E6244 (TtmpStopCallout.c)
 *     PnpRecordBlackboxPnpEventInformation @ 0x140912378 (PnpRecordBlackboxPnpEventInformation.c)
 *     PnpRecordBlackboxPnpEventWorkerInformation @ 0x1409DE344 (PnpRecordBlackboxPnpEventWorkerInformation.c)
 *     PnpRecordBlackboxDeviceCompletionQueueInformation @ 0x140AEFC6C (PnpRecordBlackboxDeviceCompletionQueueInformation.c)
 *     PnpRecordBlackboxDelayedRemoveWorkerInformation @ 0x140B561C0 (PnpRecordBlackboxDelayedRemoveWorkerInformation.c)
 *     VslRegisterIumPowerCallbacks @ 0x140CB99FC (VslRegisterIumPowerCallbacks.c)
 * Callees:
 *     KeQueryPerformanceCounter @ 0x14021C3F0 (KeQueryPerformanceCounter.c)
 *     PpmSetSimulatedIdle @ 0x14042A28C (PpmSetSimulatedIdle.c)
 *     PpmClearSimulatedIdle @ 0x14042A3B8 (PpmClearSimulatedIdle.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     PopPowerRequestCreateUserModeRequest @ 0x140436B4C (PopPowerRequestCreateUserModeRequest.c)
 *     ExGetWakeTimerList @ 0x1404388A0 (ExGetWakeTimerList.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140450FF0 (PsIsCurrentThreadInServerSilo.c)
 *     ExNotifyCallback @ 0x14047A7E0 (ExNotifyCallback.c)
 *     RtlStringCbLengthW @ 0x14047EE24 (RtlStringCbLengthW.c)
 *     PopPowerRequestReferenceAcquire @ 0x1404A6310 (PopPowerRequestReferenceAcquire.c)
 *     PopPowerRequestReferenceRelease @ 0x1404A64A0 (PopPowerRequestReferenceRelease.c)
 *     KeQueryActiveGroupCount @ 0x1404BB3D0 (KeQueryActiveGroupCount.c)
 *     PpmParkSetLpiCap @ 0x1404BBB5C (PpmParkSetLpiCap.c)
 *     KeQueryPrimaryGroupThread @ 0x1404BE49C (KeQueryPrimaryGroupThread.c)
 *     PopPrintEx @ 0x1404C33A8 (PopPrintEx.c)
 *     SSHSupportIsPlatformAoAc @ 0x1404C9760 (SSHSupportIsPlatformAoAc.c)
 *     PopFxIsDevicePotentialDripsConstraint @ 0x1404D6C7C (PopFxIsDevicePotentialDripsConstraint.c)
 *     PopDisksRegisteredForIdle @ 0x1404D8388 (PopDisksRegisteredForIdle.c)
 *     Feature_AdapterAndNewBatteryIoctlSupport__private_IsEnabledDeviceUsageNoInline @ 0x1404E11C4 (Feature_AdapterAndNewBatteryIoctlSupport__private_IsEnabledDeviceUsageNoInline.c)
 *     PopEventCalloutDispatch @ 0x1404EA9D8 (PopEventCalloutDispatch.c)
 *     PopDiagTraceSessionDisplayStateChange @ 0x1404EAF3C (PopDiagTraceSessionDisplayStateChange.c)
 *     PoPowerOffMonitor @ 0x14050090C (PoPowerOffMonitor.c)
 *     PopUpdatePowerButtonHoldState @ 0x140504F4C (PopUpdatePowerButtonHoldState.c)
 *     PopShutdownListenerInsertCallback @ 0x140508534 (PopShutdownListenerInsertCallback.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x140509FA8 (PpmSetExitLatencySamplingPercentage.c)
 *     PopCapabilityCheck @ 0x1405107A4 (PopCapabilityCheck.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x140512208 (PpmClearExitLatencySamplingPercentage.c)
 *     RtlCopyFromUser @ 0x140533E38 (RtlCopyFromUser.c)
 *     Feature_Servicing_PDCAgentSessions__private_IsEnabledDeviceUsageNoInline @ 0x140603C28 (Feature_Servicing_PDCAgentSessions__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x140727030 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PopSetHiberFileType @ 0x140777454 (PopSetHiberFileType.c)
 *     PopPdcRegister @ 0x14077B0D8 (PopPdcRegister.c)
 *     PopMonitorInvocation @ 0x14077C050 (PopMonitorInvocation.c)
 *     RtlCopyToUser @ 0x14077F284 (RtlCopyToUser.c)
 *     PopSetHiberFileSize @ 0x1407D0888 (PopSetHiberFileSize.c)
 *     PopCurrentSystemPowerSourceState @ 0x1407D91A8 (PopCurrentSystemPowerSourceState.c)
 *     PopEtEnergyTrackerCreate @ 0x1407DBF90 (PopEtEnergyTrackerCreate.c)
 *     PpmParkApplyForcedMask @ 0x1407DD1D8 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x1407DD3EC (PpmParkClearForcedMask.c)
 *     ProbeForRead @ 0x1408EF880 (ProbeForRead.c)
 *     ProbeForWrite @ 0x1408F5D00 (ProbeForWrite.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x1409034B4 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     SeSinglePrivilegeCheck @ 0x140932280 (SeSinglePrivilegeCheck.c)
 *     PopChangeCapability @ 0x140943114 (PopChangeCapability.c)
 *     PopResetCurrentPolicies @ 0x140943130 (PopResetCurrentPolicies.c)
 *     PopHibernateEvaluation @ 0x140943464 (PopHibernateEvaluation.c)
 *     PopApplyPolicy @ 0x140944018 (PopApplyPolicy.c)
 *     PopVerifySystemPowerPolicy @ 0x1409442F4 (PopVerifySystemPowerPolicy.c)
 *     PopFilterCapabilities @ 0x140944D5C (PopFilterCapabilities.c)
 *     PopLogSleepDisabled @ 0x140945880 (PopLogSleepDisabled.c)
 *     PspIsContextAdmin @ 0x140958640 (PspIsContextAdmin.c)
 *     ExCheckFullProcessInformationAccess @ 0x1409E78E0 (ExCheckFullProcessInformationAccess.c)
 *     PopSuspendResumePdc @ 0x140A37334 (PopSuspendResumePdc.c)
 *     PopScreenOff @ 0x140A387B4 (PopScreenOff.c)
 *     TtmCleanupCurrentSession @ 0x140A39EB8 (TtmCleanupCurrentSession.c)
 *     TtmInitCurrentSession @ 0x140A3A0D4 (TtmInitCurrentSession.c)
 *     TtmiGetSessionId @ 0x140A3A3A8 (TtmiGetSessionId.c)
 *     TtmDispatchApi @ 0x140A3A3D0 (TtmDispatchApi.c)
 *     TtmNotifySessionDisplayBurst @ 0x140A3A998 (TtmNotifySessionDisplayBurst.c)
 *     PopSessionWinlogonNotification @ 0x140A3B184 (PopSessionWinlogonNotification.c)
 *     PopGetSettingNotificationName @ 0x140A3B2C4 (PopGetSettingNotificationName.c)
 *     PopSetDisplayStatus @ 0x140A3B900 (PopSetDisplayStatus.c)
 *     PopDiagTraceSessionStates @ 0x140A3BA08 (PopDiagTraceSessionStates.c)
 *     PopFreeSessionState @ 0x140A3BAAC (PopFreeSessionState.c)
 *     PopUpdateConsoleDisplayState @ 0x140A3CD5C (PopUpdateConsoleDisplayState.c)
 *     PopGetSettingValue @ 0x140A3D02C (PopGetSettingValue.c)
 *     PopSetPowerSettingValueAcDc @ 0x140A3E450 (PopSetPowerSettingValueAcDc.c)
 *     PopSetPowerSettingValue @ 0x140A3E538 (PopSetPowerSettingValue.c)
 *     PopProcessSessionDisplayStateChange @ 0x140A3EE2C (PopProcessSessionDisplayStateChange.c)
 *     TtmIsEnabled @ 0x140A3EE84 (TtmIsEnabled.c)
 *     PopProcessorInformation @ 0x140A843AC (PopProcessorInformation.c)
 *     PopCurrentPowerStatePrecise @ 0x140AB129C (PopCurrentPowerStatePrecise.c)
 *     PopCurrentPowerState @ 0x140AB1350 (PopCurrentPowerState.c)
 *     PopLoggingInformation @ 0x140AC125C (PopLoggingInformation.c)
 *     PopQueryRemainingSystemIdleTime @ 0x140AE44F4 (PopQueryRemainingSystemIdleTime.c)
 *     PopGetPowerRequestListInfo @ 0x140AEA314 (PopGetPowerRequestListInfo.c)
 *     PopPowerRequestActionInfo @ 0x140AF1B4C (PopPowerRequestActionInfo.c)
 *     PopDiagTraceServiceNotification @ 0x140AFB8C0 (PopDiagTraceServiceNotification.c)
 *     PopBatteryDeviceState @ 0x140AFC434 (PopBatteryDeviceState.c)
 *     PopDiagTraceAppPowerMessage @ 0x140AFD550 (PopDiagTraceAppPowerMessage.c)
 *     PopDiagTraceAppPowerMessageEnd @ 0x140B09EE0 (PopDiagTraceAppPowerMessageEnd.c)
 *     PopCapturePlatformRole @ 0x140B0E868 (PopCapturePlatformRole.c)
 *     PopIsRunningAsLocalSystem @ 0x140B104C4 (PopIsRunningAsLocalSystem.c)
 *     PopSetHiberPersistedRegValue @ 0x140B19CC0 (PopSetHiberPersistedRegValue.c)
 *     PopReadHiberbootPolicy @ 0x140B222E0 (PopReadHiberbootPolicy.c)
 *     PopPdcCsDeviceNotification @ 0x140B3018C (PopPdcCsDeviceNotification.c)
 *     PopGetWakeSource @ 0x140B322A4 (PopGetWakeSource.c)
 *     PopUmpoSendLegacyEvent @ 0x140B33664 (PopUmpoSendLegacyEvent.c)
 *     PopAcquireTransitionLock @ 0x140B39914 (PopAcquireTransitionLock.c)
 *     DbgkWerCaptureLiveKernelDump2 @ 0x140B41E80 (DbgkWerCaptureLiveKernelDump2.c)
 *     PopThermalProcessUsermodeEvent @ 0x140B44A20 (PopThermalProcessUsermodeEvent.c)
 *     PopPowerAggregatorNotifyDisplayPoweredOn @ 0x140B462E8 (PopPowerAggregatorNotifyDisplayPoweredOn.c)
 *     PopReleaseTransitionLock @ 0x140B4C040 (PopReleaseTransitionLock.c)
 *     PopDiagTraceDisplayBurstWin32kCallout @ 0x140B4D678 (PopDiagTraceDisplayBurstWin32kCallout.c)
 *     PopEnforceResiliencyScenarios @ 0x140B501F8 (PopEnforceResiliencyScenarios.c)
 *     PpmSetSimulatedLoad @ 0x140B5853C (PpmSetSimulatedLoad.c)
 *     PopBlackBoxDirectAccess @ 0x140B58654 (PopBlackBoxDirectAccess.c)
 *     PpmClearSimulatedLoad @ 0x140B5A0CC (PpmClearSimulatedLoad.c)
 *     PopApplyAdminPolicy @ 0x140B5C748 (PopApplyAdminPolicy.c)
 *     PopPowerRequestNotifyTtmSessionInitialized @ 0x140B5CCEC (PopPowerRequestNotifyTtmSessionInitialized.c)
 *     PopPowerRequestNotifyTtmSessionUninitialized @ 0x140B5EBCC (PopPowerRequestNotifyTtmSessionUninitialized.c)
 *     PopSendSuspendResumeNotifications @ 0x140B606E0 (PopSendSuspendResumeNotifications.c)
 *     PopEtEnergyTrackerQuery @ 0x140B66F4C (PopEtEnergyTrackerQuery.c)
 *     PopPowerInformationInternal @ 0x140B6F6FC (PopPowerInformationInternal.c)
 *     PopBlackBoxUpdate @ 0x140B71EFC (PopBlackBoxUpdate.c)
 *     PopSessionConnectionChange @ 0x140B72640 (PopSessionConnectionChange.c)
 *     PopAcquirePolicyLock @ 0x140C04BF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C04C40 (PopReleasePolicyLock.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 *     PopInitPlatformSettings @ 0x140CCF964 (PopInitPlatformSettings.c)
 */

NTSTATUS __stdcall NtPowerInformation(
        POWER_INFORMATION_LEVEL InformationLevel,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength)
{
  unsigned __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r9
  _QWORD *Pool2; // r12
  unsigned __int8 *v13; // r8
  NTSTATUS IsAppContainerOrIdentifyLevelContext; // edi
  void *v15; // r15
  _QWORD *v16; // r13
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // rax
  __int64 v23; // rcx
  unsigned __int64 v24; // rax
  __int64 v25; // rcx
  struct _LIST_ENTRY *Blink; // rcx
  int v27; // eax
  unsigned __int64 v28; // rax
  HANDLE *v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r10
  int v32; // ecx
  int v33; // ecx
  int v34; // ecx
  int v35; // ecx
  bool v36; // zf
  __int64 PrimaryGroupThread; // r8
  __int64 v38; // rdx
  __int64 v39; // rcx
  _BOOL8 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  bool v45; // sf
  __int128 *v46; // rax
  __int64 *v47; // rax
  int v48; // eax
  NTSTATUS SettingNotificationName; // eax
  int v50; // eax
  unsigned int v51; // eax
  unsigned int v52; // edi
  unsigned int v53; // esi
  unsigned int v54; // eax
  __int64 v55; // rax
  _DWORD *v56; // rbx
  void *v57; // rax
  NTSTATUS WakeSource; // eax
  PVOID v59; // rcx
  int v61; // edx
  __int64 v62; // rcx
  int v63; // ebx
  __int64 v64; // rdx
  __int64 v65; // r8
  char v66; // al
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // rcx
  __int64 v73; // rdx
  __int64 v74; // r8
  __int64 v75; // rbx
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // r8
  __int64 v79; // r9
  NTSTATUS inserted; // eax
  int v81; // ecx
  __int64 *v82; // rdx
  int v83; // eax
  USHORT v84; // bx
  int WakeTimerList; // eax
  __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // rdx
  __int64 v89; // rcx
  __int64 v90; // r8
  __int64 v91; // r9
  __int64 v92; // rcx
  __int64 v93; // rcx
  unsigned int v94; // eax
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r8
  unsigned int v98; // ebx
  ULONG v99; // eax
  __int64 v100; // rbx
  __int64 v101; // rdx
  __int64 v102; // rcx
  __int64 v103; // r8
  unsigned int v104; // eax
  int v105; // eax
  __int64 v106; // rcx
  unsigned int SessionId; // eax
  bool v108; // bl
  unsigned int v109; // edx
  _DWORD *v110; // rcx
  unsigned int v111; // ebx
  int v112; // edi
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // rdx
  __int64 v116; // rcx
  __int64 v117; // r8
  __int64 v118; // r9
  __int64 v119; // rcx
  __int64 v120; // rcx
  __int64 v121; // [rsp+20h] [rbp-748h]
  ULONG Size; // [rsp+50h] [rbp-718h]
  unsigned int Size_4; // [rsp+54h] [rbp-714h] BYREF
  KPROCESSOR_MODE PreviousMode; // [rsp+58h] [rbp-710h]
  char v125; // [rsp+59h] [rbp-70Fh] BYREF
  char v126[6]; // [rsp+5Ah] [rbp-70Eh] BYREF
  PVOID Src; // [rsp+60h] [rbp-708h] BYREF
  char v128; // [rsp+68h] [rbp-700h]
  ULONG Length; // [rsp+6Ch] [rbp-6FCh]
  int Length_4; // [rsp+70h] [rbp-6F8h]
  BOOL v131; // [rsp+74h] [rbp-6F4h] BYREF
  _BOOL8 v132; // [rsp+78h] [rbp-6F0h] BYREF
  unsigned int v133; // [rsp+80h] [rbp-6E8h] BYREF
  wchar_t *v134; // [rsp+88h] [rbp-6E0h]
  POWER_INFORMATION_LEVEL v135; // [rsp+90h] [rbp-6D8h]
  PVOID P[2]; // [rsp+98h] [rbp-6D0h] BYREF
  unsigned __int64 v137; // [rsp+A8h] [rbp-6C0h]
  __int64 v138; // [rsp+B0h] [rbp-6B8h] BYREF
  __int64 v139; // [rsp+B8h] [rbp-6B0h]
  __int64 v140; // [rsp+C0h] [rbp-6A8h]
  int v141; // [rsp+C8h] [rbp-6A0h]
  __int64 v142; // [rsp+CCh] [rbp-69Ch]
  int v143; // [rsp+D4h] [rbp-694h]
  HANDLE v144; // [rsp+E0h] [rbp-688h] BYREF
  char *v145; // [rsp+E8h] [rbp-680h] BYREF
  __int64 v146; // [rsp+F0h] [rbp-678h] BYREF
  BOOL v147; // [rsp+F8h] [rbp-670h]
  int v148; // [rsp+FCh] [rbp-66Ch]
  __int64 v149; // [rsp+100h] [rbp-668h]
  int v150; // [rsp+108h] [rbp-660h]
  int v151; // [rsp+10Ch] [rbp-65Ch]
  char v152; // [rsp+110h] [rbp-658h]
  char v153; // [rsp+111h] [rbp-657h]
  int v154; // [rsp+114h] [rbp-654h]
  char IsEnabled; // [rsp+118h] [rbp-650h]
  bool v156; // [rsp+119h] [rbp-64Fh]
  wchar_t psz[32]; // [rsp+6E0h] [rbp-88h] BYREF

  v137 = (unsigned __int64)OutputBuffer;
  v8 = InformationLevel;
  v135 = InformationLevel;
  v126[0] = 0;
  memset_0(&v144, 0, 0x600uLL);
  v133 = 0;
  v132 = 0LL;
  Src = 0LL;
  Size_4 = 0;
  Pool2 = 0LL;
  v134 = 0LL;
  P[0] = 0LL;
  LOBYTE(v13) = 0;
  v128 = 0;
  v125 = 0;
  v131 = 0;
  IsAppContainerOrIdentifyLevelContext = 0;
  if ( (unsigned int)v8 > 0x62 )
    goto LABEL_272;
  LOBYTE(v10) = KeGetCurrentThread()->PreviousMode;
  PreviousMode = v10;
  Length = InputBuffer != 0LL ? InputBufferLength : 0;
  v15 = (void *)((unsigned __int64)InputBuffer & -(__int64)(Length != 0));
  P[1] = v15;
  Size = OutputBuffer != 0LL ? OutputBufferLength : 0;
  v16 = (_QWORD *)(v137 & -(__int64)(Size != 0));
  if ( (_BYTE)v10 )
  {
    if ( (unsigned int)v8 <= 0x22 )
    {
      v9 = 0x7C30200C0LL;
      if ( _bittest64(&v9, v8) )
        goto LABEL_7;
    }
    v17 = (unsigned int)(v8 - 39);
    if ( (unsigned int)v17 <= 0x3A )
    {
      v9 = 0x4104F0071C2E50FLL;
      if ( _bittest64(&v9, v17) )
        goto LABEL_7;
    }
    v18 = (unsigned int)(v8 - 37);
    if ( (unsigned int)v18 <= 0x3A && (v9 = 0x608801808940903LL, _bittest64(&v9, v18)) || (unsigned int)(v8 - 2) <= 1 )
    {
      IsAppContainerOrIdentifyLevelContext = SeIsAppContainerOrIdentifyLevelContext(0LL, v126);
      Length_4 = IsAppContainerOrIdentifyLevelContext;
      if ( IsAppContainerOrIdentifyLevelContext < 0 )
      {
        InputBuffer = v15;
        goto LABEL_273;
      }
      if ( v126[0] )
      {
        if ( (_DWORD)v8 != 73 && (_DWORD)v8 != 88 )
        {
          IsAppContainerOrIdentifyLevelContext = -1073741790;
          Length_4 = -1073741790;
          InputBuffer = v15;
          goto LABEL_273;
        }
        if ( !PopCapabilityCheck(L"ID_CAP_SCREENOFF") )
        {
          IsAppContainerOrIdentifyLevelContext = -1073741790;
          Length_4 = -1073741790;
          InputBuffer = v15;
          goto LABEL_273;
        }
      }
      LOBYTE(v10) = PreviousMode;
    }
    if ( (unsigned int)(v8 - 92) <= 1 )
    {
      IsAppContainerOrIdentifyLevelContext = ExCheckFullProcessInformationAccess(v10);
      Length_4 = IsAppContainerOrIdentifyLevelContext;
      if ( IsAppContainerOrIdentifyLevelContext < 0 )
      {
        InputBuffer = v15;
        goto LABEL_273;
      }
    }
    v19 = (unsigned int)(v8 - 28);
    if ( (unsigned int)v19 <= 0x32 )
    {
      v10 = 0x4000000420001LL;
      if ( _bittest64(&v10, v19) )
      {
        if ( !PspIsContextAdmin() )
        {
          IsAppContainerOrIdentifyLevelContext = -1073741790;
          Length_4 = -1073741790;
          InputBuffer = v15;
          goto LABEL_273;
        }
      }
    }
    if ( (_DWORD)v8 == 71 && !(unsigned __int8)PopIsRunningAsLocalSystem(v10, v9, v13) )
    {
      IsAppContainerOrIdentifyLevelContext = -1073741790;
      Length_4 = -1073741790;
      InputBuffer = v15;
      goto LABEL_273;
    }
    if ( v15 )
    {
      v20 = (unsigned int)(v8 - 11);
      if ( (unsigned int)v20 > 0x3D || (v21 = 0x2001800900000001LL, !_bittest64(&v21, v20)) )
      {
        if ( PsIsCurrentThreadInServerSilo() )
        {
          IsAppContainerOrIdentifyLevelContext = -1073741637;
          Length_4 = -1073741637;
          InputBuffer = v15;
          goto LABEL_273;
        }
      }
      if ( (_DWORD)v8 == 9
        || (v22 = (unsigned int)(v8 - 38), (unsigned int)v22 <= 0x39)
        && (v23 = 0x218000004422401LL, _bittest64(&v23, v22)) )
      {
        if ( !PspIsContextAdmin() )
        {
          IsAppContainerOrIdentifyLevelContext = -1073741790;
          Length_4 = -1073741790;
          InputBuffer = v15;
          goto LABEL_273;
        }
      }
      if ( (unsigned int)(v8 - 2) > 1 )
      {
        v24 = (unsigned int)(v8 - 37);
        if ( (unsigned int)v24 > 0x3D || (v25 = 0x2FAE005C28F40BC3LL, !_bittest64(&v25, v24)) )
        {
          if ( (_DWORD)v8 != 11 )
          {
            Blink = (struct _LIST_ENTRY *)SeShutdownPrivilege;
            if ( (_DWORD)v8 == 10 )
              Blink = PspSiloMonitorLock.WaitBlock[3].WaitListEntry.Blink;
            if ( !SeSinglePrivilegeCheck((LUID)Blink, PreviousMode) )
            {
              IsAppContainerOrIdentifyLevelContext = -1073741727;
              Length_4 = -1073741727;
              InputBuffer = v15;
              goto LABEL_273;
            }
          }
        }
      }
      InputBuffer = (PVOID)Length;
      ProbeForRead(v15, Length, 1u);
      if ( (unsigned int)InputBuffer > 0x40 )
      {
        Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL);
        v134 = (wchar_t *)Pool2;
        if ( !Pool2 )
        {
          IsAppContainerOrIdentifyLevelContext = -1073741670;
          Length_4 = -1073741670;
          InputBuffer = v15;
          goto LABEL_273;
        }
      }
      else
      {
        Pool2 = psz;
        v134 = psz;
      }
      RtlCopyFromUser(Pool2, v15, (size_t)InputBuffer);
    }
    else
    {
      LODWORD(InputBuffer) = Length;
    }
    if ( v16 )
      ProbeForWrite(v16, Size, 1u);
    v9 = 1LL;
    LOBYTE(v13) = v128;
  }
  else
  {
    Pool2 = (_QWORD *)((unsigned __int64)InputBuffer & -(__int64)(Length != 0));
    v134 = (wchar_t *)Pool2;
    v9 = 1LL;
    LODWORD(InputBuffer) = Length;
  }
  if ( (unsigned int)v8 > 0x1F || (v27 = -234812256, !_bittest(&v27, v8)) )
  {
    v28 = (unsigned int)(v8 - 38);
    if ( (unsigned int)v28 > 0x3C || (v10 = 0x1FFFE3BEF5BE36EDLL, !_bittest64(&v10, v28)) )
    {
      PopAcquirePolicyLock(v10, 1LL);
      v9 = 1LL;
      LOBYTE(v13) = 1;
      v128 = 1;
    }
  }
  if ( (int)v8 > 50 )
  {
    if ( (int)v8 > 75 )
    {
      if ( (int)v8 <= 87 )
      {
        if ( (_DWORD)v8 == 87 )
        {
          if ( !Pool2 )
            goto LABEL_271;
          v111 = Length;
          if ( Length < 8 )
            goto LABEL_271;
          v112 = *(_DWORD *)Pool2;
          v9 = *((unsigned int *)Pool2 + 1);
          if ( *(int *)Pool2 >= 99 && (unsigned int)(v112 - 4096) > 0xA )
            goto LABEL_271;
          if ( (unsigned int)(v112 - 4096) > 0xA )
          {
            WakeSource = PopPowerInformationInternal(
                           v112,
                           v9,
                           (_DWORD)Pool2,
                           Length,
                           (__int64)v16,
                           Size,
                           (__int64)&Src,
                           (__int64)&Size_4,
                           (__int64)&v125);
          }
          else
          {
            if ( !SeSinglePrivilegeCheck(SeShutdownPrivilege, PreviousMode)
              && !PopCapabilityCheck(L"terminalPowerManagement") )
            {
              IsAppContainerOrIdentifyLevelContext = -1073741727;
              goto LABEL_8;
            }
            WakeSource = TtmDispatchApi(
                           v112,
                           (_DWORD)Pool2,
                           v111,
                           (_DWORD)v16,
                           Size,
                           (__int64)&Src,
                           (__int64)&Size_4,
                           (__int64)&v125);
          }
          goto LABEL_256;
        }
        if ( (int)v8 > 81 )
        {
          switch ( (_DWORD)v8 )
          {
            case 'R':
              goto LABEL_490;
            case 'S':
              if ( !Pool2 && v16 )
              {
                PopCurrentPowerStatePrecise(&v144, 0LL, v13);
                goto LABEL_79;
              }
              goto LABEL_271;
            case 'T':
              if ( !Pool2 || v16 )
                goto LABEL_271;
              if ( Length < 0x10 || Length < 2 * (unsigned int)*((unsigned __int16 *)Pool2 + 6) + 14 )
                goto LABEL_97;
              v48 = PopThermalProcessUsermodeEvent(Pool2, 1LL, v13);
              goto LABEL_609;
          }
          if ( (_DWORD)v8 != 85 )
          {
            if ( Pool2 && v16 )
            {
              IsAppContainerOrIdentifyLevelContext = RtlStringCbLengthW(
                                                       (STRSAFE_PCNZWCH)Pool2,
                                                       (unsigned int)InputBuffer,
                                                       0LL);
              InputBuffer = v15;
              if ( IsAppContainerOrIdentifyLevelContext < 0 )
                goto LABEL_273;
              IsAppContainerOrIdentifyLevelContext = PopBatteryDeviceState(Pool2, &v144);
              if ( IsAppContainerOrIdentifyLevelContext < 0 )
                goto LABEL_273;
              Src = &v144;
              Size_4 = 52;
              goto LABEL_611;
            }
            goto LABEL_271;
          }
          v109 = *((_DWORD *)Pool2 + 2);
          v110 = (_DWORD *)*Pool2;
          if ( *((_BYTE *)Pool2 + 12) )
            inserted = PopPowerRequestReferenceAcquire(v110, v109);
          else
            inserted = PopPowerRequestReferenceRelease(v110, v109);
          goto LABEL_319;
        }
        switch ( (_DWORD)v8 )
        {
          case 'Q':
            goto LABEL_490;
          case 'L':
            if ( Pool2 || !v16 )
              goto LABEL_271;
            LODWORD(v144) = *(_DWORD *)&stru_140F10070.WaitBlockFill11[96];
            v145 = *(char **)stru_140F10070.PriorityFloorCounts;
            v146 = *(_QWORD *)&stru_140F10070.PriorityFloorCounts[8];
            if ( !LOBYTE(stru_140F10070.WaitBlockList) )
            {
              IsAppContainerOrIdentifyLevelContext = -1073741823;
              goto LABEL_8;
            }
            v46 = (__int128 *)&v144;
            goto LABEL_147;
          case 'M':
            if ( Pool2 || v16 )
              goto LABEL_271;
            v126[0] = PopErrataReportingIncorrectLidState;
            if ( !(unsigned __int8)TtmIsEnabled((unsigned int)(v8 - 77), 1LL, v13) )
            {
              v108 = 0;
              if ( !PopLidOpened )
                v108 = PopConsoleExternalDisplayConnected == 0;
              if ( !v108 )
                PopEventCalloutDispatch(10, 6LL);
              if ( !v126[0] )
              {
                LOBYTE(v13) = v108;
                PopDiagTraceDisplayBurstWin32kCallout(v106, v9, v13);
              }
              goto LABEL_611;
            }
            SessionId = TtmiGetSessionId(v106, v9, v13);
            v9 = 0xFFFFFFFFLL;
            if ( SessionId == -1 )
            {
              IsAppContainerOrIdentifyLevelContext = -1073740715;
              goto LABEL_611;
            }
            inserted = TtmNotifySessionDisplayBurst(SessionId, 6LL);
            goto LABEL_319;
          case 'N':
            if ( PreviousMode != 1 )
              goto LABEL_7;
            if ( v16 || Size )
              goto LABEL_271;
            if ( !Pool2 )
            {
              PpmClearExitLatencySamplingPercentage((unsigned int)(v8 - 78), 1LL, (unsigned int)v13);
              goto LABEL_611;
            }
            if ( (_DWORD)InputBuffer != 4 )
              goto LABEL_271;
            inserted = PpmSetExitLatencySamplingPercentage((unsigned int *)Pool2, 1LL, (unsigned int)v13);
            goto LABEL_319;
        }
        v81 = v8 - 79;
        if ( (_DWORD)v8 == 79 )
          goto LABEL_490;
LABEL_489:
        if ( v81 != 1 )
          goto LABEL_271;
        goto LABEL_490;
      }
      if ( (int)v8 > 93 )
      {
        if ( (_DWORD)v8 == 94 )
        {
          if ( !Pool2 || v16 || Size )
            goto LABEL_271;
          if ( (_DWORD)InputBuffer != 32 )
            goto LABEL_97;
          LOBYTE(v9) = PreviousMode;
          v48 = PopBlackBoxUpdate(Pool2, v9, v13);
          goto LABEL_609;
        }
        if ( (_DWORD)v8 == 95 )
        {
          if ( Pool2 && (_DWORD)InputBuffer == 1 && !v16 )
          {
            ExNotifyCallback(PipCslCallbackObject, Pool2, 0LL);
            goto LABEL_611;
          }
          goto LABEL_271;
        }
        v120 = (unsigned int)(v8 - 96);
        if ( (_DWORD)v8 == 96 )
        {
          if ( !Pool2 || v16 )
            goto LABEL_271;
          if ( !(_DWORD)InputBuffer )
            goto LABEL_97;
          LOBYTE(v120) = *(_BYTE *)Pool2;
          v48 = PopSendSuspendResumeNotifications(v120, 1LL, v13);
          goto LABEL_609;
        }
        if ( (_DWORD)v8 == 97 )
        {
          if ( !Pool2 || !Length || !v16 || !Size )
            goto LABEL_271;
          if ( Length < 0x20 || Size < 0x10 )
            goto LABEL_97;
          IsAppContainerOrIdentifyLevelContext = PopBlackBoxDirectAccess(Pool2, &v144, v13);
          InputBuffer = v15;
          if ( IsAppContainerOrIdentifyLevelContext < 0 )
            goto LABEL_273;
          goto LABEL_157;
        }
        if ( (unsigned int)Feature_AdapterAndNewBatteryIoctlSupport__private_IsEnabledDeviceUsageNoInline() )
        {
          if ( !Pool2 && v16 )
          {
            PopCurrentSystemPowerSourceState((__int64)&v144, v9, (__int64)v13, (struct _KLOCK_ENTRIES *)v11);
            Src = &v144;
            Size_4 = 68;
            goto LABEL_611;
          }
          goto LABEL_271;
        }
        goto LABEL_447;
      }
      if ( (_DWORD)v8 == 93 )
      {
        if ( !Pool2 || !v16 )
          goto LABEL_271;
        if ( (_DWORD)InputBuffer != 8 || Size < 0xC )
          goto LABEL_97;
        v48 = PopEtEnergyTrackerQuery(*Pool2, v16, Size);
        goto LABEL_609;
      }
      if ( (_DWORD)v8 != 88 )
      {
        if ( (_DWORD)v8 == 89 )
        {
          if ( !Pool2 || !v16 )
            goto LABEL_271;
          if ( (unsigned int)InputBuffer < 4 )
            goto LABEL_97;
          PopAcquireTransitionLock(6LL);
          PopAcquirePolicyLock(v114, v113);
          IsAppContainerOrIdentifyLevelContext = PopSetHiberFileType(*(_DWORD *)Pool2, &v132, (unsigned int *)&v131);
          PopReleasePolicyLock(v116, v115, v117, v118, v121);
          v92 = 6LL;
          goto LABEL_384;
        }
        if ( (_DWORD)v8 == 90 )
        {
          if ( Pool2 && (unsigned int)InputBuffer >= 4 && !v16 )
          {
            PopUpdatePowerButtonHoldState(*(_DWORD *)Pool2 != 0);
            goto LABEL_611;
          }
          goto LABEL_271;
        }
        if ( (_DWORD)v8 != 91 )
        {
          if ( !Pool2 || !v16 )
            goto LABEL_271;
          if ( (_DWORD)InputBuffer != 12 || Size != 8 )
            goto LABEL_97;
          v105 = PopEtEnergyTrackerCreate((unsigned int *)Pool2, &v144);
LABEL_475:
          IsAppContainerOrIdentifyLevelContext = v105;
          InputBuffer = v15;
          if ( v105 < 0 )
            goto LABEL_273;
          v47 = (__int64 *)&v144;
          goto LABEL_180;
        }
        if ( SSHSupportIsPlatformAoAc() )
        {
          if ( Pool2 && (_DWORD)InputBuffer == 336 && v16 )
          {
            LOBYTE(v144) = PopFxIsDevicePotentialDripsConstraint(Pool2);
            Src = &v144;
            Size_4 = 1;
            IsAppContainerOrIdentifyLevelContext = 0;
            goto LABEL_611;
          }
          goto LABEL_271;
        }
LABEL_447:
        IsAppContainerOrIdentifyLevelContext = -1073741637;
        goto LABEL_8;
      }
    }
    else
    {
      if ( (_DWORD)v8 == 75 )
      {
        if ( Pool2 || !v16 )
          goto LABEL_271;
        LODWORD(v144) = PopCapturePlatformRole(v10, 1LL, v13);
        goto LABEL_176;
      }
      if ( (int)v8 <= 63 )
      {
        if ( (_DWORD)v8 == 63 )
        {
          if ( !Pool2 && !v16 )
          {
            v100 = (unsigned int)TtmiGetSessionId(v10, 1LL, v13);
            PopPrintEx(3, (int)"PopAdaptive: Session %u is closed\n", v100);
            PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_CLOSED);
            PopFreeSessionState((unsigned int)v100);
            if ( (unsigned __int8)TtmIsEnabled(v102, v101, v103) )
            {
              PopPowerRequestNotifyTtmSessionUninitialized();
              TtmCleanupCurrentSession();
            }
            goto LABEL_611;
          }
          goto LABEL_271;
        }
        if ( (int)v8 > 57 )
        {
          if ( (_DWORD)v8 == 58 )
          {
            if ( !v16 )
              goto LABEL_271;
            if ( v15 && (_DWORD)InputBuffer != 20 || Size != 8 )
              goto LABEL_97;
            SettingNotificationName = PopGetSettingNotificationName(Pool2, v16, v13);
          }
          else
          {
            if ( (_DWORD)v8 != 59 )
            {
              if ( (_DWORD)v8 == 60 )
              {
                if ( Pool2 && !v16 )
                {
                  if ( (unsigned int)InputBuffer < 8 )
                    goto LABEL_97;
                  PopEnforceResiliencyScenarios(Pool2, 1LL, v13);
                  goto LABEL_611;
                }
              }
              else if ( (_DWORD)v8 == 61 )
              {
                if ( Pool2 )
                {
                  if ( (_DWORD)InputBuffer == 16 )
                  {
                    if ( v16 )
                    {
                      v99 = Size;
                      if ( Size == 8 )
                      {
                        IsAppContainerOrIdentifyLevelContext = -1073741637;
                        goto LABEL_612;
                      }
                    }
                  }
                }
              }
              else if ( !(unsigned int)Feature_Servicing_PDCAgentSessions__private_IsEnabledDeviceUsageNoInline()
                     && Pool2
                     && (_DWORD)InputBuffer == 40
                     && v16
                     && Size == 16 )
              {
                v94 = TtmiGetSessionId(v93, v9, v13);
                PopSessionConnectionChange(v94, Pool2, v16);
                v98 = TtmiGetSessionId(v96, v95, v97);
                Feature_Servicing_PDCAgentSessions__private_IsEnabledDeviceUsageNoInline();
                LOBYTE(v13) = *(_BYTE *)Pool2;
                LOBYTE(v9) = *((_BYTE *)Pool2 + 1);
                if ( qword_140E67558 )
                  guard_dispatch_icall_no_overrides(v98, v9);
                goto LABEL_611;
              }
              goto LABEL_271;
            }
            if ( !Pool2 || !v16 )
              goto LABEL_271;
            if ( (_DWORD)InputBuffer != 16 || Size < 4 )
              goto LABEL_97;
            SettingNotificationName = PopGetSettingValue(Pool2, v16, Size);
          }
          goto LABEL_412;
        }
        if ( (_DWORD)v8 == 57 )
          goto LABEL_490;
        if ( (_DWORD)v8 != 51 )
        {
          if ( (_DWORD)v8 == 52 || (_DWORD)v8 == 53 || (_DWORD)v8 == 54 )
            goto LABEL_490;
          if ( (_DWORD)v8 == 55 )
          {
            if ( !(_BYTE)KdDebuggerEnabled )
              goto LABEL_7;
            if ( !Pool2 || v16 )
              goto LABEL_271;
            if ( Length == 8 )
            {
              WakeSource = PpmSetSimulatedIdle((__int64)Pool2);
              goto LABEL_256;
            }
            if ( Length == 4 )
            {
              WakeSource = PpmClearSimulatedIdle((struct _PROCESSOR_NUMBER *)Pool2);
              goto LABEL_256;
            }
            goto LABEL_263;
          }
          if ( !Pool2 || !v16 )
            goto LABEL_271;
          if ( (_DWORD)InputBuffer != 8 || Size != 4 )
            goto LABEL_97;
          IsAppContainerOrIdentifyLevelContext = PpmParkSetLpiCap(
                                                   *(_DWORD *)Pool2,
                                                   *((unsigned int *)Pool2 + 1),
                                                   (unsigned int *)&v144);
          if ( IsAppContainerOrIdentifyLevelContext < 0 )
            goto LABEL_8;
LABEL_176:
          Src = &v144;
          Size_4 = 4;
          goto LABEL_611;
        }
        if ( !Pool2 || !v16 )
          goto LABEL_271;
        if ( (unsigned int)InputBuffer < 4 )
          goto LABEL_97;
        PopAcquireTransitionLock(5LL);
        PopAcquirePolicyLock(v87, v86);
        IsAppContainerOrIdentifyLevelContext = PopSetHiberFileSize(*(_DWORD *)Pool2, &v132, (unsigned int *)&v131);
        PopReleasePolicyLock(v89, v88, v90, v91, v121);
        v92 = 5LL;
LABEL_384:
        PopReleaseTransitionLock(v92);
        if ( IsAppContainerOrIdentifyLevelContext < 0 )
          v132 = v131;
        v47 = (__int64 *)&v132;
        goto LABEL_180;
      }
      if ( (int)v8 <= 69 )
      {
        if ( (_DWORD)v8 == 69 )
        {
          if ( !Pool2 && !v16 )
          {
            IsAppContainerOrIdentifyLevelContext = PopInitPlatformSettings(v10, 1LL, v13);
            stru_140F10828.WaitBlockFill5[44] = SSHSupportIsPlatformAoAc();
            goto LABEL_8;
          }
          goto LABEL_271;
        }
        if ( (_DWORD)v8 == 64 )
        {
          if ( Pool2 && (_DWORD)InputBuffer == 8 && !v16 )
          {
            v104 = TtmiGetSessionId((unsigned int)(v8 - 64), 1LL, v13);
            PopSessionWinlogonNotification(v104, Pool2);
            goto LABEL_611;
          }
          goto LABEL_271;
        }
        if ( (_DWORD)v8 != 65 )
        {
          if ( (_DWORD)v8 == 66 )
          {
            if ( !Pool2 && v16 )
            {
              LOBYTE(v144) = SSHSupportIsPlatformAoAc();
              Src = &v144;
              Size_4 = v9;
              goto LABEL_611;
            }
            goto LABEL_271;
          }
          if ( (_DWORD)v8 == 67 )
          {
            if ( !Pool2 || (_DWORD)InputBuffer != 224 || v16 && Size != 176 )
              goto LABEL_271;
            if ( *(_DWORD *)Pool2 )
            {
              if ( *(_DWORD *)Pool2 != 1 )
              {
                IsAppContainerOrIdentifyLevelContext = -1073741811;
                goto LABEL_8;
              }
              IsAppContainerOrIdentifyLevelContext = -1073741822;
              if ( !qword_140E67550 )
                goto LABEL_8;
              SettingNotificationName = guard_dispatch_icall_no_overrides(Pool2[2], Pool2[1]);
            }
            else
            {
              SettingNotificationName = PopPdcRegister((__int64)Pool2, v16);
            }
          }
          else
          {
            if ( !Pool2 || (_DWORD)InputBuffer != 8 || v16 || Size )
              goto LABEL_271;
            SettingNotificationName = PopMonitorInvocation((__int64)Pool2, 1LL);
          }
          goto LABEL_412;
        }
        if ( !PsIsCurrentThreadInServerSilo() )
        {
          if ( !Pool2 && v16 )
          {
            PopFilterCapabilities((__int64)&stru_140F10828.WaitBlock[0].Thread, (__int64)&v144);
            if ( BYTE2(v146) )
              PopReadHiberbootPolicy((char *)&v146 + 2);
            Src = (char *)&v146 + 2;
            Size_4 = 1;
            goto LABEL_611;
          }
          goto LABEL_271;
        }
        goto LABEL_447;
      }
      switch ( (_DWORD)v8 )
      {
        case 'F':
          unk_140F12AA0 = KeQueryPerformanceCounter(0LL);
          goto LABEL_611;
        case 'G':
          goto LABEL_447;
        case 'H':
LABEL_470:
          if ( !Pool2 || !v16 )
            goto LABEL_271;
          if ( (_DWORD)InputBuffer != 40 || Size != 8 )
            goto LABEL_97;
          v105 = PopPowerRequestCreateUserModeRequest(Pool2, (_DWORD)v8 == 72, &v144);
          goto LABEL_475;
      }
      if ( (_DWORD)v8 != 73 )
      {
        if ( !PreviousMode )
        {
          if ( !Pool2 || (_DWORD)InputBuffer != 16 || v16 || Size )
            goto LABEL_271;
          SettingNotificationName = PopPdcCsDeviceNotification(Pool2, 1LL, v13);
          goto LABEL_412;
        }
LABEL_7:
        IsAppContainerOrIdentifyLevelContext = -1073741790;
LABEL_8:
        InputBuffer = v15;
        goto LABEL_273;
      }
    }
    if ( !Pool2 && !v16 )
    {
      v119 = 23LL;
      if ( (_DWORD)v8 != 88 )
        v119 = 11LL;
      PopScreenOff(v119, 1LL, v13);
      goto LABEL_574;
    }
    goto LABEL_271;
  }
  if ( (_DWORD)v8 == 50 )
  {
    if ( Pool2 || !v16 )
      goto LABEL_271;
    WakeTimerList = ExGetWakeTimerList(&Src, &Size_4, (__int64)v13, (struct _KLOCK_ENTRIES *)v11);
    goto LABEL_351;
  }
  if ( (int)v8 <= 24 )
  {
    if ( (_DWORD)v8 != 24 )
    {
      if ( (int)v8 <= 12 )
      {
        if ( (_DWORD)v8 != 12 )
        {
          if ( (int)v8 <= 6 )
          {
            if ( (_DWORD)v8 != 6 )
            {
              if ( (unsigned int)v8 < 2 )
              {
                if ( Pool2 )
                {
                  if ( Length < 0xE8 )
                    goto LABEL_97;
                  IsAppContainerOrIdentifyLevelContext = PopApplyPolicy(0, 0, Pool2, Length);
                  InputBuffer = v15;
                  if ( IsAppContainerOrIdentifyLevelContext < 0 )
                    goto LABEL_273;
                }
                else if ( !v16 )
                {
                  goto LABEL_271;
                }
                v29 = (HANDLE *)&unk_140F105E4;
              }
              else
              {
                if ( (_DWORD)v8 != 2 && (_DWORD)v8 != 3 )
                {
                  if ( (_DWORD)v8 != 4 )
                  {
                    if ( !Pool2 && v16 )
                    {
                      PopCurrentPowerState(&v144);
LABEL_79:
                      Src = &v144;
                      Size_4 = 32;
LABEL_611:
                      v99 = Size;
LABEL_612:
                      if ( !Src || !v16 )
                      {
LABEL_618:
                        InputBuffer = v15;
                        if ( (_DWORD)v8 != 51 && (_DWORD)v8 != 89 )
                        {
LABEL_574:
                          IsAppContainerOrIdentifyLevelContext = 0;
                          goto LABEL_8;
                        }
                        goto LABEL_273;
                      }
                      if ( v99 >= Size_4 )
                      {
                        if ( PreviousMode )
                          RtlCopyToUser(v16, Src, Size_4);
                        else
                          RtlCopyVolatileMemory(v16, Src, Size_4);
                        goto LABEL_618;
                      }
LABEL_97:
                      IsAppContainerOrIdentifyLevelContext = -1073741789;
                      goto LABEL_8;
                    }
                    goto LABEL_271;
                  }
                  if ( Pool2 )
                  {
                    if ( (stru_140F10828.WaitBlockFill6[100] & 1) != 0 )
                    {
                      if ( (unsigned int)InputBuffer < 0x4C )
                        goto LABEL_97;
                      *(_OWORD *)&stru_140F10828.WaitBlockFill11[24] = *(_OWORD *)Pool2;
                      *(_OWORD *)&stru_140F10828.WaitBlockFill11[40] = *((_OWORD *)Pool2 + 1);
                      *(_OWORD *)&stru_140F10828.WaitBlockFill11[56] = *((_OWORD *)Pool2 + 2);
                      *(_OWORD *)&stru_140F10828.WaitBlockFill11[72] = *((_OWORD *)Pool2 + 3);
                      stru_140F10828.WaitBlock[1].SparePtr = (PVOID)Pool2[8];
                      *(_DWORD *)&stru_140F10828.WaitBlockFill11[96] = *((_DWORD *)Pool2 + 18);
                      IsAppContainerOrIdentifyLevelContext = PopResetCurrentPolicies();
                      InputBuffer = v15;
                      if ( IsAppContainerOrIdentifyLevelContext < 0 )
                        goto LABEL_273;
                      goto LABEL_86;
                    }
                  }
                  else if ( v16 )
                  {
LABEL_86:
                    stru_140F10828.WaitBlockFill5[33] = dword_140F105A0[0] & 1;
                    stru_140F10828.WaitBlockFill5[45] = PopDisksRegisteredForIdle();
                    PopFilterCapabilities((__int64)&stru_140F10828.WaitBlock[0].Thread, (__int64)&v144);
                    Src = &v144;
                    Size_4 = 76;
                    goto LABEL_611;
                  }
                  goto LABEL_271;
                }
                if ( !Pool2 || !v16 )
                  goto LABEL_271;
                if ( (unsigned int)InputBuffer < 0xE8 )
                  goto LABEL_97;
                IsAppContainerOrIdentifyLevelContext = PopVerifySystemPowerPolicy(Pool2, (__int64)&v144);
                InputBuffer = v15;
                if ( IsAppContainerOrIdentifyLevelContext < 0 )
                  goto LABEL_273;
                v29 = &v144;
              }
LABEL_92:
              Src = v29;
              Size_4 = 232;
              goto LABEL_611;
            }
            if ( !Pool2 || v16 )
              goto LABEL_271;
            if ( (unsigned int)InputBuffer < 0x18 )
              goto LABEL_97;
            v30 = *(unsigned int *)Pool2;
            if ( (unsigned int)v30 >= 7 )
              goto LABEL_271;
            v31 = 3 * v30;
            if ( *((_QWORD *)&unk_140F10760 + 3 * v30 + 1) )
            {
              if ( (_DWORD)v30 != 5 )
              {
                if ( (_DWORD)v30 != 4 )
                  goto LABEL_271;
                v13 = (unsigned __int8 *)PopShutdownHandler;
                if ( (void (__fastcall __noreturn *)())qword_140F107C8 != PopShutdownHandler )
                  goto LABEL_271;
              }
            }
            *(_OWORD *)((char *)&unk_140F10760 + 24 * v30) = *(_OWORD *)Pool2;
            *((_QWORD *)&unk_140F10760 + 3 * v30 + 2) = Pool2[2];
            *(_WORD *)((char *)&unk_140F10760 + 24 * v30 + 5) = 0;
            *((_BYTE *)&unk_140F10760 + 24 * v30 + 7) = 0;
            v13 = 0LL;
            v11 = 0LL;
            if ( (_DWORD)v30 )
            {
              v32 = v30 - 1;
              if ( v32 )
              {
                v33 = v32 - 1;
                if ( v33 )
                {
                  v34 = v33 - 1;
                  if ( v34 )
                  {
                    v35 = v34 - 1;
                    if ( v35 )
                    {
                      if ( v35 == 2 )
                      {
                        v11 = 4LL;
                        v36 = (*(_WORD *)&stru_140F10828.WaitBlockFill11[100] & 0x2000) == 0;
                        v13 = &stru_140F10828.WaitBlockFill5[41];
                        goto LABEL_120;
                      }
                    }
                    else
                    {
                      v13 = &stru_140F10828.WaitBlockFill5[31];
                    }
LABEL_122:
                    if ( (v11 & (unsigned int)-(*((_BYTE *)&unk_140F10760 + 8 * v31 + 4) != 0)) > *(int *)&stru_140F10828.WaitBlockFill11[88] )
                      *(_DWORD *)&stru_140F10828.WaitBlockFill11[88] = *((_BYTE *)&unk_140F10760 + 8 * v31 + 4) != 0
                                                                     ? v11
                                                                     : 0;
                    if ( v13 )
                      PopChangeCapability(v13, 1);
                    goto LABEL_611;
                  }
                  v11 = 5LL;
                  v36 = (*(_WORD *)&stru_140F10828.WaitBlockFill11[100] & 0x2000) == 0;
                  v13 = &stru_140F10828.WaitBlockFill5[30];
                }
                else
                {
                  v11 = 4LL;
                  v36 = (stru_140F10828.WaitBlockFill6[100] & 0x20) == 0;
                  v13 = &stru_140F10828.WaitBlockFill5[29];
                }
              }
              else
              {
                v11 = 3LL;
                v36 = (stru_140F10828.WaitBlockFill6[100] & 0x40) == 0;
                v13 = &stru_140F10828.WaitBlockFill5[28];
              }
            }
            else
            {
              v11 = 2LL;
              v36 = (stru_140F10828.WaitBlockFill6[100] & 8) == 0;
              v13 = &stru_140F10828.WaitBlockFill5[27];
            }
LABEL_120:
            if ( !v36 )
              v13 = 0LL;
            goto LABEL_122;
          }
          if ( (_DWORD)v8 == 7 )
          {
            if ( !Pool2 && v16 )
            {
              Src = &PpmProcessorDriverDispatchTable;
              Size_4 = 296;
              goto LABEL_611;
            }
            goto LABEL_271;
          }
          if ( (_DWORD)v8 == 8 )
          {
            if ( Pool2 || !v16 )
              goto LABEL_271;
            v29 = (HANDLE *)qword_140F105C0;
            goto LABEL_92;
          }
          if ( (_DWORD)v8 != 9 )
          {
            if ( (_DWORD)v8 != 10 )
            {
              if ( Pool2 || !v16 )
                goto LABEL_271;
              PrimaryGroupThread = (unsigned __int16)KeQueryPrimaryGroupThread((__int64)KeGetCurrentThread());
LABEL_133:
              IsAppContainerOrIdentifyLevelContext = PopProcessorInformation(&v144, v9, PrimaryGroupThread, &Size_4);
              InputBuffer = v15;
              if ( IsAppContainerOrIdentifyLevelContext < 0 )
                goto LABEL_273;
              Src = &v144;
              goto LABEL_611;
            }
            if ( !Pool2 || v16 )
              goto LABEL_271;
            if ( !(_DWORD)InputBuffer )
              goto LABEL_97;
            PopAcquireTransitionLock(3LL);
            PopAcquirePolicyLock(v39, v38);
            v40 = *(_BYTE *)Pool2 != 0;
            PopHiberEnabledReg = *(_BYTE *)Pool2 != 0;
            PopSetHiberPersistedRegValue(0LL, v40, 0LL);
            IsAppContainerOrIdentifyLevelContext = PopHibernateEvaluation(0, 0, 0LL);
            PopReleasePolicyLock(v42, v41, v43, v44, v121);
            PopReleaseTransitionLock(3LL);
            goto LABEL_139;
          }
          if ( Pool2 )
          {
            if ( (unsigned int)InputBuffer < 0x18 )
              goto LABEL_97;
            IsAppContainerOrIdentifyLevelContext = PopApplyAdminPolicy((unsigned int)(v8 - 9), Pool2, v13);
            InputBuffer = v15;
            if ( IsAppContainerOrIdentifyLevelContext < 0 )
              goto LABEL_273;
            IsAppContainerOrIdentifyLevelContext = PopResetCurrentPolicies();
            if ( IsAppContainerOrIdentifyLevelContext < 0 )
              goto LABEL_273;
          }
          else if ( !v16 )
          {
            goto LABEL_271;
          }
          v46 = &xmmword_140F10740;
LABEL_147:
          Src = v46;
          Size_4 = 24;
          goto LABEL_611;
        }
        if ( Pool2 || !v16 )
          goto LABEL_271;
        HIDWORD(v144) = stru_140F0F620.SchedulerSharedOffset;
        PopQueryRemainingSystemIdleTime(&v145, 0LL);
        BYTE4(v145) = dword_140E67608;
LABEL_157:
        Src = &v144;
        Size_4 = 16;
        goto LABEL_611;
      }
      if ( (int)v8 > 18 )
      {
        if ( (_DWORD)v8 != 19 && (_DWORD)v8 != 20 && (_DWORD)v8 != 21 && (_DWORD)v8 != 22 )
        {
          if ( !Pool2 && v16 )
          {
            IsAppContainerOrIdentifyLevelContext = PopLoggingInformation(P, &v133, v13);
            InputBuffer = v15;
            if ( IsAppContainerOrIdentifyLevelContext < 0 )
              goto LABEL_273;
            Src = P[0];
            Size_4 = v133;
            goto LABEL_611;
          }
          goto LABEL_271;
        }
      }
      else if ( (_DWORD)v8 != 18 && (_DWORD)v8 != 13 )
      {
        switch ( (_DWORD)v8 )
        {
          case 0xE:
            if ( Pool2 || !v16 )
              goto LABEL_271;
            v47 = &qword_140F0FBB8;
            break;
          case 0xF:
            if ( Pool2 || !v16 )
              goto LABEL_271;
            v47 = &qword_140F0FBC0;
            break;
          case 0x10:
            if ( !Pool2 && v16 )
            {
              if ( dword_140E01A18 )
                LODWORD(v144) = (unsigned int)v144 | 1;
              if ( dword_140E019E8 )
                LODWORD(v144) = (unsigned int)v144 | 2;
              goto LABEL_176;
            }
LABEL_271:
            InputBuffer = v15;
LABEL_272:
            IsAppContainerOrIdentifyLevelContext = -1073741811;
            goto LABEL_273;
          default:
            if ( Pool2 && !v16 )
            {
              if ( (unsigned int)InputBuffer < 0x10 )
                goto LABEL_97;
              if ( !stru_140F10828.KernelShadowStackBase || !*Pool2 )
              {
                *(_OWORD *)&stru_140F10828.KernelShadowStackBase = *(_OWORD *)Pool2;
                goto LABEL_611;
              }
            }
            goto LABEL_271;
        }
LABEL_180:
        Src = v47;
        Size_4 = 8;
        goto LABEL_611;
      }
LABEL_490:
      IsAppContainerOrIdentifyLevelContext = -1073741822;
      goto LABEL_8;
    }
    if ( !Pool2 || v16 )
      goto LABEL_271;
    if ( (unsigned int)InputBuffer < 8 )
      goto LABEL_97;
    v48 = PopLogSleepDisabled(*(_DWORD *)Pool2, *((_DWORD *)Pool2 + 1), 0LL, 0LL);
LABEL_609:
    v45 = v48 < 0;
    IsAppContainerOrIdentifyLevelContext = v48;
LABEL_610:
    InputBuffer = v15;
    if ( v45 )
      goto LABEL_273;
    goto LABEL_611;
  }
  if ( (int)v8 > 38 )
  {
    if ( (int)v8 <= 44 )
    {
      if ( (_DWORD)v8 == 44 )
      {
        if ( !Pool2 || v16 )
          goto LABEL_271;
        if ( (_DWORD)InputBuffer != 24 )
          goto LABEL_97;
        v48 = PopPowerRequestActionInfo(Pool2, 1LL, v13);
        goto LABEL_609;
      }
      if ( (_DWORD)v8 != 39 )
      {
        if ( (_DWORD)v8 == 40 )
        {
          if ( Pool2 && (_DWORD)InputBuffer == 4 && !v16 )
          {
            v131 = *(_DWORD *)Pool2 != 0;
            PopSetPowerSettingValueAcDc(&GUID_VIDEO_BRIGHTNESS_CAPABLE, 4LL, &v131);
            goto LABEL_611;
          }
          goto LABEL_271;
        }
        if ( (_DWORD)v8 == 41 )
        {
          if ( !Pool2 && v16 && Size == 64 )
          {
            PopAcquireRwLockExclusive(
              (unsigned __int64 *)&PopModernStandbyStateNotify.MutantListHead.Blink,
              1LL,
              (__int64)v13,
              (struct _KLOCK_ENTRIES *)v11);
            v63 = PopEsState;
            PopReleaseRwLock((struct _KTHREAD *)&PopModernStandbyStateNotify.MutantListHead.Blink);
            v66 = v152;
            if ( v63 == 1 )
              v66 = 1;
            v152 = v66;
            IsEnabled = TtmIsEnabled(1LL, v64, v65);
            if ( (unsigned __int8)TtmIsEnabled(v68, v67, v69) )
            {
              IsAppContainerOrIdentifyLevelContext = TtmInitCurrentSession();
              InputBuffer = v15;
              if ( IsAppContainerOrIdentifyLevelContext < 0 )
                goto LABEL_273;
              PopPowerRequestNotifyTtmSessionInitialized();
            }
            PopAcquirePolicyLock(v71, v70);
            LODWORD(v146) = 0;
            v144 = (char *)&stru_140F10828.KernelShadowStackInitial + 4;
            v145 = &PopHiberBootForceMonitorOff;
            v147 = byte_140F106D1 != 0;
            v148 = dword_140F106CC;
            HIDWORD(v146) = dword_140F106EC;
            v149 = qword_140F106F0;
            v154 = HIDWORD(qword_140F106F8);
            v150 = qword_140F106F8;
            v151 = dword_140F10700;
            v153 = PopLidOpened;
            _m_prefetchw(&PopLidStateIsReliable);
            v72 = (unsigned int)PopLidStateIsReliable;
            v156 = _InterlockedOr(&PopLidStateIsReliable, 0) != 0;
            Src = &v144;
            Size_4 = 64;
            v75 = (unsigned int)TtmiGetSessionId(v72, v73, v74);
            PopPrintEx(3, (int)"PopAdaptive: Session %u is started\n", v75);
            PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_CREATED);
            PopReleasePolicyLock(v77, v76, v78, v79, v121);
            goto LABEL_611;
          }
          goto LABEL_271;
        }
        if ( (_DWORD)v8 != 42 )
          goto LABEL_470;
        if ( !Pool2 || (_DWORD)InputBuffer != 16 || v16 )
          goto LABEL_271;
        if ( !*((_BYTE *)Pool2 + 13) || !*((_BYTE *)Pool2 + 12) )
        {
LABEL_297:
          if ( *((_BYTE *)Pool2 + 14) )
          {
            if ( *((_BYTE *)Pool2 + 12) )
            {
              v121 = 0LL;
              ZwUpdateWnfStateData((__int64)&WNF_PO_PRIMARY_DISPLAY_VISIBLE_STATE, (__int64)Pool2 + 4);
            }
            if ( *((_BYTE *)Pool2 + 14) )
              PopDiagTraceSessionDisplayStateChange(
                *((_DWORD *)Pool2 + 1) == 0,
                *(_DWORD *)Pool2,
                *((unsigned __int8 *)Pool2 + 12),
                *((_DWORD *)Pool2 + 2));
          }
          goto LABEL_611;
        }
        if ( SSHSupportIsPlatformAoAc() && !PopConsoleDisplayState )
        {
          if ( *((_DWORD *)Pool2 + 1) != 2 )
          {
LABEL_294:
            LOBYTE(v62) = *((_BYTE *)Pool2 + 15);
            PopProcessSessionDisplayStateChange(v62, *((unsigned int *)Pool2 + 2));
LABEL_295:
            PopSetDisplayStatus(*((unsigned int *)Pool2 + 1));
            PopUpdateConsoleDisplayState(*((unsigned int *)Pool2 + 1));
            if ( *((_DWORD *)Pool2 + 1) == 1 )
              PopPowerAggregatorNotifyDisplayPoweredOn();
            goto LABEL_297;
          }
          v142 = 0LL;
          v143 = 0;
          LODWORD(v138) = v61;
          HIDWORD(v138) = 40;
          v139 = 0LL;
          v140 = 0LL;
          v141 = 0;
          IsAppContainerOrIdentifyLevelContext = DbgkWerCaptureLiveKernelDump2(
                                                   L"InvalidDisplayStateTransition",
                                                   *(unsigned int *)Pool2,
                                                   0LL,
                                                   (__int64)&v138);
        }
        if ( *((_DWORD *)Pool2 + 1) == 2 )
          goto LABEL_295;
        goto LABEL_294;
      }
      if ( !Pool2 || v16 || (_DWORD)InputBuffer != 24 )
        goto LABEL_271;
      inserted = PopShutdownListenerInsertCallback(Pool2);
LABEL_319:
      IsAppContainerOrIdentifyLevelContext = inserted;
      goto LABEL_611;
    }
    if ( (_DWORD)v8 != 45 )
    {
      if ( (_DWORD)v8 == 46 )
      {
        if ( !Pool2 )
          goto LABEL_271;
        if ( (unsigned int)InputBuffer < 2 )
          goto LABEL_271;
        if ( !v16 )
          goto LABEL_271;
        v84 = *(_WORD *)Pool2;
        if ( v84 >= KeQueryActiveGroupCount() )
          goto LABEL_271;
        PrimaryGroupThread = v84;
        goto LABEL_133;
      }
      if ( (_DWORD)v8 == 47 )
      {
        if ( Pool2 && (_DWORD)InputBuffer == 16 )
        {
          v83 = PopUmpoSendLegacyEvent(Pool2);
          IsAppContainerOrIdentifyLevelContext = v83;
          if ( v83 < 0 )
          {
            InputBuffer = v15;
            if ( v83 != -1073741536 )
              goto LABEL_273;
          }
          goto LABEL_611;
        }
        goto LABEL_271;
      }
      v81 = v8 - 48;
      if ( (_DWORD)v8 == 48 )
      {
        if ( !(_BYTE)KdDebuggerEnabled )
          goto LABEL_7;
        if ( !Pool2 || v16 )
          goto LABEL_271;
        switch ( Length )
        {
          case 0x10u:
            v82 = 0LL;
            break;
          case 0x18u:
            v82 = Pool2 + 2;
            break;
          case 2u:
            WakeSource = PpmParkClearForcedMask((unsigned __int16 *)Pool2, 1LL, (unsigned int)v13);
            goto LABEL_256;
          default:
            goto LABEL_263;
        }
        WakeSource = PpmParkApplyForcedMask(Pool2, v82);
        goto LABEL_256;
      }
      goto LABEL_489;
    }
    if ( Pool2 || !v16 )
      goto LABEL_271;
    WakeTimerList = PopGetPowerRequestListInfo(&Src, &Size_4, v13);
LABEL_351:
    IsAppContainerOrIdentifyLevelContext = WakeTimerList;
    InputBuffer = v15;
    if ( WakeTimerList < 0 )
      goto LABEL_273;
    v125 = 1;
    goto LABEL_611;
  }
  if ( (_DWORD)v8 == 38 )
  {
    if ( !Pool2 || v16 )
      goto LABEL_271;
    if ( Length == 8 )
    {
      WakeSource = PpmSetSimulatedLoad((PPROCESSOR_NUMBER)Pool2);
      goto LABEL_256;
    }
    if ( Length == 4 )
    {
      WakeSource = PpmClearSimulatedLoad((PPROCESSOR_NUMBER)Pool2);
      goto LABEL_256;
    }
LABEL_263:
    IsAppContainerOrIdentifyLevelContext = -1073741811;
    goto LABEL_139;
  }
  if ( (int)v8 > 32 )
  {
    if ( (_DWORD)v8 == 33 || (_DWORD)v8 == 34 )
      goto LABEL_490;
    if ( (_DWORD)v8 != 35 )
    {
      if ( (_DWORD)v8 == 36 )
      {
        if ( !v16 )
          goto LABEL_271;
        if ( !(_DWORD)dword_140F0FD80 || !qword_140F0FD78 )
        {
          IsAppContainerOrIdentifyLevelContext = -1073741275;
          goto LABEL_8;
        }
        Size_4 = dword_140F0FD80 + 8;
        v55 = ExAllocatePool2(0x100uLL);
        v56 = (_DWORD *)v55;
        if ( v55 )
        {
          Src = (PVOID)v55;
          v125 = 1;
          memmove((void *)(v55 + 8), qword_140F0FD78, (unsigned int)dword_140F0FD80);
          *v56 = (unsigned int)dword_140F0FD80 >> 4;
          goto LABEL_611;
        }
        goto LABEL_213;
      }
      if ( !Pool2 || v16 )
        goto LABEL_271;
      if ( PreviousMode == 1 )
      {
        if ( Length >= 4 )
        {
          IsAppContainerOrIdentifyLevelContext = RtlStringCbLengthW((STRSAFE_PCNZWCH)Pool2 + 2, Length - 4, 0LL);
          if ( IsAppContainerOrIdentifyLevelContext >= 0 )
            IsAppContainerOrIdentifyLevelContext = 0;
        }
        else
        {
          IsAppContainerOrIdentifyLevelContext = -1073741811;
        }
        InputBuffer = v15;
        if ( IsAppContainerOrIdentifyLevelContext < 0 )
          goto LABEL_273;
        PopDiagTraceServiceNotification(Pool2, v9, v13);
        goto LABEL_611;
      }
      goto LABEL_7;
    }
    if ( Pool2 || !v16 )
      goto LABEL_271;
    if ( (_BYTE)v13 )
    {
      PopReleasePolicyLock((unsigned int)(v8 - 35), 1LL, v13, v11, v121);
      v128 = 0;
    }
    IsAppContainerOrIdentifyLevelContext = PopGetWakeSource(0LL, &Size_4);
    if ( IsAppContainerOrIdentifyLevelContext != -1073741789 )
    {
LABEL_139:
      v45 = IsAppContainerOrIdentifyLevelContext < 0;
      goto LABEL_610;
    }
    v57 = (void *)ExAllocatePool2(0x40uLL);
    Src = v57;
    if ( !v57 )
      goto LABEL_213;
    v125 = 1;
    WakeSource = PopGetWakeSource(v57, &Size_4);
LABEL_256:
    IsAppContainerOrIdentifyLevelContext = WakeSource;
    goto LABEL_139;
  }
  if ( (_DWORD)v8 == 32 )
    goto LABEL_490;
  if ( (_DWORD)v8 != 25 )
  {
    if ( (_DWORD)v8 != 28 )
    {
      if ( (_DWORD)v8 != 29 )
      {
        if ( (unsigned int)(v8 - 30) <= 1 && Pool2 && !v16 )
        {
          if ( (unsigned int)InputBuffer < 8 )
            goto LABEL_97;
          if ( (_DWORD)v8 == 30 )
            PopDiagTraceAppPowerMessage(Pool2, 1LL, v13);
          else
            PopDiagTraceAppPowerMessageEnd(Pool2, 1LL, v13);
          goto LABEL_611;
        }
        goto LABEL_271;
      }
      if ( Pool2 || !v16 )
        goto LABEL_271;
      Size_4 = 4;
      Src = (PVOID)ExAllocatePool2(0x100uLL);
      if ( Src )
      {
        v125 = 1;
        *(_DWORD *)Src = PopConsoleDisplayState;
        goto LABEL_611;
      }
LABEL_213:
      IsAppContainerOrIdentifyLevelContext = -1073741670;
      goto LABEL_8;
    }
    PopSuspendResumePdc(1LL);
    PopHiberBootForceMonitorOff = 1;
    SettingNotificationName = PoPowerOffMonitor();
LABEL_412:
    IsAppContainerOrIdentifyLevelContext = SettingNotificationName;
    goto LABEL_8;
  }
  if ( !Pool2 )
    goto LABEL_271;
  if ( v16 )
    goto LABEL_271;
  if ( Size )
    goto LABEL_271;
  if ( Length < 0x1C )
    goto LABEL_271;
  v50 = *((_DWORD *)Pool2 + 6);
  if ( !v50 || *((_DWORD *)Pool2 + 5) > 2u )
    goto LABEL_271;
  InputBuffer = v15;
  if ( *(_DWORD *)Pool2 != 1 )
  {
    IsAppContainerOrIdentifyLevelContext = -1073741736;
    goto LABEL_273;
  }
  v51 = v50 + 28;
  v9 = 0xFFFFFFFFLL;
  if ( v51 >= 0x1C )
    v9 = v51;
  Size_4 = v9;
  IsAppContainerOrIdentifyLevelContext = v51 < 0x1C ? 0xC0000095 : 0;
  if ( v51 >= 0x1C )
  {
    if ( Length >= (unsigned int)v9 )
    {
      v52 = *((_DWORD *)Pool2 + 6);
      v53 = *((_DWORD *)Pool2 + 5);
      v54 = TtmiGetSessionId(Length, v9, v13);
      IsAppContainerOrIdentifyLevelContext = PopSetPowerSettingValue(
                                               (char *)Pool2 + 4,
                                               v54,
                                               v53,
                                               v52,
                                               (char *)Pool2 + 28);
      InputBuffer = v15;
      if ( IsAppContainerOrIdentifyLevelContext < 0 )
        goto LABEL_273;
      LODWORD(v8) = v135;
      goto LABEL_611;
    }
    goto LABEL_271;
  }
LABEL_273:
  v59 = P[0];
  if ( P[0] )
    ExFreePoolWithTag(P[0], 0);
  if ( v125 )
    ExFreePoolWithTag(Src, 0x206D654Du);
  if ( v128 )
    PopReleasePolicyLock(v59, v9, v13, v11, v121);
  if ( Pool2 && Pool2 != InputBuffer && Pool2 != (_QWORD *)psz )
    ExFreePoolWithTag(Pool2, 0x206D654Du);
  return IsAppContainerOrIdentifyLevelContext;
}
