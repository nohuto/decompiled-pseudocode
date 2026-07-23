/*
 * XREFs of NtPowerInformation @ 0x140A1B510
 * Callers:
 *     WheaLogInternalEvent @ 0x1403E30B0 (WheaLogInternalEvent.c)
 *     PopRecordPepWorkorderBlackboxInformation @ 0x14061601C (PopRecordPepWorkorderBlackboxInformation.c)
 *     PopRecordPoIrpBlackboxInformation @ 0x1406161C0 (PopRecordPoIrpBlackboxInformation.c)
 *     PopRecordPowerWatchdogBlackboxInformation @ 0x140616474 (PopRecordPowerWatchdogBlackboxInformation.c)
 *     DifNtPowerInformationWrapper @ 0x1406839A0 (DifNtPowerInformationWrapper.c)
 *     TtmpCalloutArmWatchdog @ 0x1407EB34C (TtmpCalloutArmWatchdog.c)
 *     TtmpCalloutWatchdogCallback @ 0x1407EB3F0 (TtmpCalloutWatchdogCallback.c)
 *     TtmpStartCallout @ 0x1407EBC1C (TtmpStartCallout.c)
 *     TtmpStopCallout @ 0x1407EBDA4 (TtmpStopCallout.c)
 *     PnpRecordBlackboxPnpEventInformation @ 0x1409B4458 (PnpRecordBlackboxPnpEventInformation.c)
 *     PnpRecordBlackboxPnpEventWorkerInformation @ 0x140A1B470 (PnpRecordBlackboxPnpEventWorkerInformation.c)
 *     PnpRecordBlackboxDeviceCompletionQueueInformation @ 0x140AF2830 (PnpRecordBlackboxDeviceCompletionQueueInformation.c)
 *     PnpRecordBlackboxDelayedRemoveWorkerInformation @ 0x140B58EC0 (PnpRecordBlackboxDelayedRemoveWorkerInformation.c)
 *     VslRegisterIumPowerCallbacks @ 0x140CBFA3C (VslRegisterIumPowerCallbacks.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     KeQueryPerformanceCounter @ 0x14021DD80 (KeQueryPerformanceCounter.c)
 *     ExGetWakeTimerList @ 0x1404241AC (ExGetWakeTimerList.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     PopPowerRequestCreateUserModeRequest @ 0x140425ADC (PopPowerRequestCreateUserModeRequest.c)
 *     PsIsCurrentThreadInServerSilo @ 0x140449120 (PsIsCurrentThreadInServerSilo.c)
 *     ExNotifyCallback @ 0x140474150 (ExNotifyCallback.c)
 *     RtlStringCbLengthW @ 0x140478794 (RtlStringCbLengthW.c)
 *     PopPowerRequestReferenceAcquire @ 0x14049F9A0 (PopPowerRequestReferenceAcquire.c)
 *     PopPowerRequestReferenceRelease @ 0x14049FB30 (PopPowerRequestReferenceRelease.c)
 *     KeQueryActiveGroupCount @ 0x1404B4BB0 (KeQueryActiveGroupCount.c)
 *     PpmParkSetLpiCap @ 0x1404B533C (PpmParkSetLpiCap.c)
 *     KeQueryPrimaryGroupThread @ 0x1404B7CEC (KeQueryPrimaryGroupThread.c)
 *     PopPrintEx @ 0x1404BCBF8 (PopPrintEx.c)
 *     SSHSupportIsPlatformAoAc @ 0x1404C3180 (SSHSupportIsPlatformAoAc.c)
 *     PopFxIsDevicePotentialDripsConstraint @ 0x1404D044C (PopFxIsDevicePotentialDripsConstraint.c)
 *     PopDisksRegisteredForIdle @ 0x1404D1B58 (PopDisksRegisteredForIdle.c)
 *     Feature_AdapterAndNewBatteryIoctlSupport__private_IsEnabledDeviceUsageNoInline @ 0x1404DA8A4 (Feature_AdapterAndNewBatteryIoctlSupport__private_IsEnabledDeviceUsageNoInline.c)
 *     PopEventCalloutDispatch @ 0x1404E3D88 (PopEventCalloutDispatch.c)
 *     PopDiagTraceSessionDisplayStateChange @ 0x1404E4520 (PopDiagTraceSessionDisplayStateChange.c)
 *     PoPowerOffMonitor @ 0x1404FA0FC (PoPowerOffMonitor.c)
 *     PopUpdatePowerButtonHoldState @ 0x1404FE890 (PopUpdatePowerButtonHoldState.c)
 *     PpmSetSimulatedIdle @ 0x1405004B8 (PpmSetSimulatedIdle.c)
 *     PpmClearSimulatedIdle @ 0x140501B20 (PpmClearSimulatedIdle.c)
 *     PopShutdownListenerInsertCallback @ 0x140501FDC (PopShutdownListenerInsertCallback.c)
 *     PpmSetExitLatencySamplingPercentage @ 0x140503A58 (PpmSetExitLatencySamplingPercentage.c)
 *     PopCapabilityCheck @ 0x14050A214 (PopCapabilityCheck.c)
 *     PpmClearExitLatencySamplingPercentage @ 0x14050BC78 (PpmClearExitLatencySamplingPercentage.c)
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     Feature_Servicing_PDCAgentSessions__private_IsEnabledDeviceUsageNoInline @ 0x140606734 (Feature_Servicing_PDCAgentSessions__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x14072BC00 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PopSetHiberFileType @ 0x14077A2FC (PopSetHiberFileType.c)
 *     PopMonitorInvocation @ 0x14077EBD0 (PopMonitorInvocation.c)
 *     RtlCopyToUser @ 0x140781D84 (RtlCopyToUser.c)
 *     PopSetHiberFileSize @ 0x1407D3928 (PopSetHiberFileSize.c)
 *     PopCurrentSystemPowerSourceState @ 0x1407DCBC8 (PopCurrentSystemPowerSourceState.c)
 *     PopPdcRegister @ 0x1407DF940 (PopPdcRegister.c)
 *     PopEtEnergyTrackerCreate @ 0x1407E01B0 (PopEtEnergyTrackerCreate.c)
 *     PpmParkApplyForcedMask @ 0x1407E1804 (PpmParkApplyForcedMask.c)
 *     PpmParkClearForcedMask @ 0x1407E1A18 (PpmParkClearForcedMask.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x140933444 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     PopChangeCapability @ 0x1409BEA8C (PopChangeCapability.c)
 *     PopResetCurrentPolicies @ 0x1409BEAA8 (PopResetCurrentPolicies.c)
 *     PopHibernateEvaluation @ 0x1409BEDDC (PopHibernateEvaluation.c)
 *     PopApplyPolicy @ 0x1409BF988 (PopApplyPolicy.c)
 *     PopVerifySystemPowerPolicy @ 0x1409BFC64 (PopVerifySystemPowerPolicy.c)
 *     PopFilterCapabilities @ 0x1409C06CC (PopFilterCapabilities.c)
 *     PopLogSleepDisabled @ 0x1409C11F0 (PopLogSleepDisabled.c)
 *     ExCheckFullProcessInformationAccess @ 0x1409D42F8 (ExCheckFullProcessInformationAccess.c)
 *     PopSuspendResumePdc @ 0x1409F2EF4 (PopSuspendResumePdc.c)
 *     PopScreenOff @ 0x1409F4374 (PopScreenOff.c)
 *     TtmCleanupCurrentSession @ 0x1409F5AB8 (TtmCleanupCurrentSession.c)
 *     TtmInitCurrentSession @ 0x1409F5CD4 (TtmInitCurrentSession.c)
 *     TtmiGetSessionId @ 0x1409F5FA8 (TtmiGetSessionId.c)
 *     TtmDispatchApi @ 0x1409F5FD0 (TtmDispatchApi.c)
 *     TtmNotifySessionDisplayBurst @ 0x1409F6598 (TtmNotifySessionDisplayBurst.c)
 *     PopGetSettingNotificationName @ 0x1409F6CE4 (PopGetSettingNotificationName.c)
 *     PopSetDisplayStatus @ 0x1409F7320 (PopSetDisplayStatus.c)
 *     PopDiagTraceSessionStates @ 0x1409F7428 (PopDiagTraceSessionStates.c)
 *     PopFreeSessionState @ 0x1409F74CC (PopFreeSessionState.c)
 *     PopUpdateConsoleDisplayState @ 0x1409F877C (PopUpdateConsoleDisplayState.c)
 *     PopGetSettingValue @ 0x1409F8A4C (PopGetSettingValue.c)
 *     PopSetPowerSettingValueAcDc @ 0x1409F9E70 (PopSetPowerSettingValueAcDc.c)
 *     PopSetPowerSettingValue @ 0x1409F9F58 (PopSetPowerSettingValue.c)
 *     PopProcessSessionDisplayStateChange @ 0x1409FA84C (PopProcessSessionDisplayStateChange.c)
 *     TtmIsEnabled @ 0x1409FA8A4 (TtmIsEnabled.c)
 *     PopProcessorInformation @ 0x140A89700 (PopProcessorInformation.c)
 *     PopCurrentPowerStatePrecise @ 0x140AAF28C (PopCurrentPowerStatePrecise.c)
 *     PopCurrentPowerState @ 0x140AAF340 (PopCurrentPowerState.c)
 *     PopLoggingInformation @ 0x140AC32FC (PopLoggingInformation.c)
 *     PopQueryRemainingSystemIdleTime @ 0x140AE2004 (PopQueryRemainingSystemIdleTime.c)
 *     PopGetPowerRequestListInfo @ 0x140AECE04 (PopGetPowerRequestListInfo.c)
 *     PspIsContextAdmin @ 0x140AEF084 (PspIsContextAdmin.c)
 *     PopPowerRequestActionInfo @ 0x140AF441C (PopPowerRequestActionInfo.c)
 *     PopDiagTraceServiceNotification @ 0x140AFD540 (PopDiagTraceServiceNotification.c)
 *     PopBatteryDeviceState @ 0x140AFDFA8 (PopBatteryDeviceState.c)
 *     PopDiagTraceAppPowerMessage @ 0x140AFF0C0 (PopDiagTraceAppPowerMessage.c)
 *     PopDiagTraceAppPowerMessageEnd @ 0x140B0BCA0 (PopDiagTraceAppPowerMessageEnd.c)
 *     PopCapturePlatformRole @ 0x140B100A0 (PopCapturePlatformRole.c)
 *     PopIsRunningAsLocalSystem @ 0x140B11F04 (PopIsRunningAsLocalSystem.c)
 *     PopSetHiberPersistedRegValue @ 0x140B1C110 (PopSetHiberPersistedRegValue.c)
 *     PopReadHiberbootPolicy @ 0x140B246E0 (PopReadHiberbootPolicy.c)
 *     PopPdcCsDeviceNotification @ 0x140B32390 (PopPdcCsDeviceNotification.c)
 *     PopGetWakeSource @ 0x140B346F8 (PopGetWakeSource.c)
 *     PopUmpoSendLegacyEvent @ 0x140B35AB4 (PopUmpoSendLegacyEvent.c)
 *     PopAcquireTransitionLock @ 0x140B3BB24 (PopAcquireTransitionLock.c)
 *     DbgkWerCaptureLiveKernelDump2 @ 0x140B43D70 (DbgkWerCaptureLiveKernelDump2.c)
 *     PopThermalProcessUsermodeEvent @ 0x140B46A5C (PopThermalProcessUsermodeEvent.c)
 *     PopPowerAggregatorNotifyDisplayPoweredOn @ 0x140B48318 (PopPowerAggregatorNotifyDisplayPoweredOn.c)
 *     PopReleaseTransitionLock @ 0x140B4DDD0 (PopReleaseTransitionLock.c)
 *     PopDiagTraceDisplayBurstWin32kCallout @ 0x140B4F408 (PopDiagTraceDisplayBurstWin32kCallout.c)
 *     PopEnforceResiliencyScenarios @ 0x140B52A88 (PopEnforceResiliencyScenarios.c)
 *     PpmSetSimulatedLoad @ 0x140B5B35C (PpmSetSimulatedLoad.c)
 *     PopBlackBoxDirectAccess @ 0x140B5B474 (PopBlackBoxDirectAccess.c)
 *     PpmClearSimulatedLoad @ 0x140B5D3E8 (PpmClearSimulatedLoad.c)
 *     PopApplyAdminPolicy @ 0x140B5F580 (PopApplyAdminPolicy.c)
 *     PopPowerRequestNotifyTtmSessionInitialized @ 0x140B5FE6C (PopPowerRequestNotifyTtmSessionInitialized.c)
 *     PopPowerRequestNotifyTtmSessionUninitialized @ 0x140B61D4C (PopPowerRequestNotifyTtmSessionUninitialized.c)
 *     PopSendSuspendResumeNotifications @ 0x140B63780 (PopSendSuspendResumeNotifications.c)
 *     PopEtEnergyTrackerQuery @ 0x140B69ED8 (PopEtEnergyTrackerQuery.c)
 *     PopPowerInformationInternal @ 0x140B73EF0 (PopPowerInformationInternal.c)
 *     PopBlackBoxUpdate @ 0x140B76EF4 (PopBlackBoxUpdate.c)
 *     PopSessionConnectionChange @ 0x140B77620 (PopSessionConnectionChange.c)
 *     PopSessionWinlogonNotification @ 0x140B776DC (PopSessionWinlogonNotification.c)
 *     PopAcquirePolicyLock @ 0x140C0AE00 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C0AE50 (PopReleasePolicyLock.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     PopInitPlatformSettings @ 0x140CD5B14 (PopInitPlatformSettings.c)
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
  void (__fastcall __noreturn *v13)(); // r8
  NTSTATUS IsAppContainerOrIdentifyLevelContext; // edi
  void *v15; // r15
  _QWORD *v16; // r13
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  __int64 v24; // rcx
  struct _LIST_ENTRY *Blink; // rcx
  int v26; // eax
  unsigned __int64 v27; // rax
  char **WriteOperationCount; // rax
  __int64 v29; // rcx
  __int64 v30; // r10
  int v31; // ecx
  int v32; // ecx
  int v33; // ecx
  int v34; // ecx
  bool v35; // zf
  __int64 PrimaryGroupThread; // r8
  __int64 v37; // rdx
  __int64 v38; // rcx
  _BOOL8 v39; // rdx
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  bool v44; // sf
  _KPROCESS **p_Process; // rax
  __int64 *v46; // rax
  int v47; // eax
  NTSTATUS SettingNotificationName; // eax
  int v49; // eax
  unsigned int v50; // eax
  unsigned int v51; // edi
  int v52; // esi
  unsigned int v53; // eax
  __int64 v54; // rax
  _DWORD *v55; // rbx
  void *v56; // rax
  NTSTATUS WakeSource; // eax
  PVOID v58; // rcx
  int v60; // edx
  __int64 v61; // rdx
  int v62; // ebx
  char v63; // al
  __int64 v64; // rdx
  __int64 v65; // rcx
  __int64 v66; // rbx
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // r8
  __int64 v70; // r9
  NTSTATUS inserted; // eax
  int v72; // ecx
  __int64 *v73; // rdx
  int v74; // eax
  USHORT v75; // bx
  int WakeTimerList; // eax
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // r8
  __int64 v82; // r9
  __int64 v83; // rcx
  unsigned int v84; // eax
  unsigned int v85; // ebx
  ULONG v86; // eax
  __int64 v87; // rbx
  unsigned int v88; // eax
  int UserModeRequest; // eax
  __int64 v90; // rcx
  unsigned int SessionId; // eax
  bool v92; // bl
  unsigned int v93; // edx
  _DWORD *v94; // rcx
  unsigned int v95; // ebx
  int v96; // edi
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // rdx
  __int64 v100; // rcx
  __int64 v101; // r8
  __int64 v102; // r9
  int v103; // ecx
  __int64 v104; // rcx
  void *ExplicitScope; // [rsp+20h] [rbp-748h]
  ULONG Size; // [rsp+50h] [rbp-718h]
  ULONG Size_4; // [rsp+54h] [rbp-714h] BYREF
  KPROCESSOR_MODE PreviousMode; // [rsp+58h] [rbp-710h]
  char v109; // [rsp+59h] [rbp-70Fh] BYREF
  char v110[6]; // [rsp+5Ah] [rbp-70Eh] BYREF
  PVOID Src; // [rsp+60h] [rbp-708h] BYREF
  char v112; // [rsp+68h] [rbp-700h]
  ULONG Length; // [rsp+6Ch] [rbp-6FCh]
  int Length_4; // [rsp+70h] [rbp-6F8h]
  BOOL v115; // [rsp+74h] [rbp-6F4h] BYREF
  _BOOL8 v116; // [rsp+78h] [rbp-6F0h] BYREF
  unsigned int v117; // [rsp+80h] [rbp-6E8h] BYREF
  wchar_t *v118; // [rsp+88h] [rbp-6E0h]
  POWER_INFORMATION_LEVEL v119; // [rsp+90h] [rbp-6D8h]
  PVOID P[2]; // [rsp+98h] [rbp-6D0h] BYREF
  unsigned __int64 v121; // [rsp+A8h] [rbp-6C0h]
  __int64 v122; // [rsp+B0h] [rbp-6B8h] BYREF
  __int64 v123; // [rsp+B8h] [rbp-6B0h]
  __int64 v124; // [rsp+C0h] [rbp-6A8h]
  int v125; // [rsp+C8h] [rbp-6A0h]
  __int64 v126; // [rsp+CCh] [rbp-69Ch]
  int v127; // [rsp+D4h] [rbp-694h]
  char *v128; // [rsp+E0h] [rbp-688h] BYREF
  char *v129; // [rsp+E8h] [rbp-680h] BYREF
  __int64 v130; // [rsp+F0h] [rbp-678h] BYREF
  BOOL v131; // [rsp+F8h] [rbp-670h]
  int Next_high; // [rsp+FCh] [rbp-66Ch]
  int v133; // [rsp+100h] [rbp-668h]
  int v134; // [rsp+104h] [rbp-664h]
  unsigned int PriorityFloorSummary; // [rsp+108h] [rbp-660h]
  volatile int AbCompletedIoQoSBoostCount; // [rsp+10Ch] [rbp-65Ch]
  char v137; // [rsp+110h] [rbp-658h]
  char v138; // [rsp+111h] [rbp-657h]
  volatile int AbCompletedIoBoostCount; // [rsp+114h] [rbp-654h]
  char IsEnabled; // [rsp+118h] [rbp-650h]
  bool v141; // [rsp+119h] [rbp-64Fh]
  wchar_t psz[32]; // [rsp+6E0h] [rbp-88h] BYREF

  v121 = (unsigned __int64)OutputBuffer;
  v8 = InformationLevel;
  v119 = InformationLevel;
  v110[0] = 0;
  memset_0(&v128, 0, 0x600uLL);
  v117 = 0;
  v116 = 0LL;
  Src = 0LL;
  Size_4 = 0;
  Pool2 = 0LL;
  v118 = 0LL;
  P[0] = 0LL;
  LOBYTE(v13) = 0;
  v112 = 0;
  v109 = 0;
  v115 = 0;
  IsAppContainerOrIdentifyLevelContext = 0;
  if ( (unsigned int)v8 > 0x62 )
    goto LABEL_272;
  LOBYTE(v10) = KeGetCurrentThread()->PreviousMode;
  PreviousMode = v10;
  Length = InputBuffer != 0LL ? InputBufferLength : 0;
  v15 = (void *)((unsigned __int64)InputBuffer & -(__int64)(Length != 0));
  P[1] = v15;
  Size = OutputBuffer != 0LL ? OutputBufferLength : 0;
  v16 = (_QWORD *)(v121 & -(__int64)(Size != 0));
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
      IsAppContainerOrIdentifyLevelContext = SeIsAppContainerOrIdentifyLevelContext(0LL, v110);
      Length_4 = IsAppContainerOrIdentifyLevelContext;
      if ( IsAppContainerOrIdentifyLevelContext < 0 )
      {
        InputBuffer = v15;
        goto LABEL_273;
      }
      if ( v110[0] )
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
        if ( !(unsigned __int8)PspIsContextAdmin(0x4000000420001LL, v9, v13) )
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
        && (v21 = 0x218000004422401LL, _bittest64(&v21, v22)) )
      {
        if ( !(unsigned __int8)PspIsContextAdmin(v21, v9, v13) )
        {
          IsAppContainerOrIdentifyLevelContext = -1073741790;
          Length_4 = -1073741790;
          InputBuffer = v15;
          goto LABEL_273;
        }
      }
      if ( (unsigned int)(v8 - 2) > 1 )
      {
        v23 = (unsigned int)(v8 - 37);
        if ( (unsigned int)v23 > 0x3D || (v24 = 0x2FAE005C28F40BC3LL, !_bittest64(&v24, v23)) )
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
        v118 = (wchar_t *)Pool2;
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
        v118 = psz;
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
    LOBYTE(v13) = v112;
  }
  else
  {
    Pool2 = (_QWORD *)((unsigned __int64)InputBuffer & -(__int64)(Length != 0));
    v118 = (wchar_t *)Pool2;
    v9 = 1LL;
    LODWORD(InputBuffer) = Length;
  }
  if ( (unsigned int)v8 > 0x1F || (v26 = -234812256, !_bittest(&v26, v8)) )
  {
    v27 = (unsigned int)(v8 - 38);
    if ( (unsigned int)v27 > 0x3C || (v10 = 0x1FFFE3BEF5BE36EDLL, !_bittest64(&v10, v27)) )
    {
      PopAcquirePolicyLock(v10, 1LL);
      v9 = 1LL;
      LOBYTE(v13) = 1;
      v112 = 1;
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
          v95 = Length;
          if ( Length < 8 )
            goto LABEL_271;
          v96 = *(_DWORD *)Pool2;
          v9 = *((unsigned int *)Pool2 + 1);
          if ( *(int *)Pool2 >= 100 && (unsigned int)(v96 - 4096) > 0xA )
            goto LABEL_271;
          if ( (unsigned int)(v96 - 4096) > 0xA )
          {
            WakeSource = PopPowerInformationInternal(
                           v96,
                           v9,
                           (_DWORD)Pool2,
                           Length,
                           (__int64)v16,
                           Size,
                           (__int64)&Src,
                           (__int64)&Size_4,
                           (__int64)&v109);
          }
          else
          {
            if ( !SeSinglePrivilegeCheck(SeShutdownPrivilege, PreviousMode)
              && !PopCapabilityCheck(L"terminalPowerManagement") )
            {
              IsAppContainerOrIdentifyLevelContext = -1073741727;
              goto LABEL_8;
            }
            WakeSource = TtmDispatchApi(v96, (__int64)Pool2, v95, (__int64)v16, Size, &Src, &Size_4, &v109);
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
                PopCurrentPowerStatePrecise(&v128, 0LL);
                goto LABEL_79;
              }
              goto LABEL_271;
            case 'T':
              if ( !Pool2 || v16 )
                goto LABEL_271;
              if ( Length < 0x10 || Length < 2 * (unsigned int)*((unsigned __int16 *)Pool2 + 6) + 14 )
                goto LABEL_97;
              v47 = PopThermalProcessUsermodeEvent(Pool2, 1LL, v13);
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
              IsAppContainerOrIdentifyLevelContext = PopBatteryDeviceState(Pool2, &v128);
              if ( IsAppContainerOrIdentifyLevelContext < 0 )
                goto LABEL_273;
              Src = &v128;
              Size_4 = 52;
              goto LABEL_611;
            }
            goto LABEL_271;
          }
          v93 = *((_DWORD *)Pool2 + 2);
          v94 = (_DWORD *)*Pool2;
          if ( *((_BYTE *)Pool2 + 12) )
            inserted = PopPowerRequestReferenceAcquire(v94, v93);
          else
            inserted = PopPowerRequestReferenceRelease(v94, v93);
          goto LABEL_319;
        }
        switch ( (_DWORD)v8 )
        {
          case 'Q':
            goto LABEL_490;
          case 'L':
            if ( Pool2 || !v16 )
              goto LABEL_271;
            LODWORD(v128) = qword_140F10AB0;
            v129 = (char *)qword_140F10C48;
            v130 = qword_140F10C50;
            if ( !PopSleepStats )
            {
              IsAppContainerOrIdentifyLevelContext = -1073741823;
              goto LABEL_8;
            }
            p_Process = (_KPROCESS **)&v128;
            goto LABEL_147;
          case 'M':
            if ( Pool2 || v16 )
              goto LABEL_271;
            v110[0] = PopErrataReportingIncorrectLidState;
            if ( !TtmIsEnabled() )
            {
              v92 = 0;
              if ( !PopLidOpened )
                v92 = PopConsoleExternalDisplayConnected == 0;
              if ( !v92 )
                PopEventCalloutDispatch(10, 6LL);
              if ( !v110[0] )
              {
                LOBYTE(v13) = v92;
                PopDiagTraceDisplayBurstWin32kCallout(v90, v9, v13);
              }
              goto LABEL_611;
            }
            SessionId = TtmiGetSessionId();
            v9 = 0xFFFFFFFFLL;
            if ( SessionId == -1 )
            {
              IsAppContainerOrIdentifyLevelContext = -1073740715;
              goto LABEL_611;
            }
            inserted = TtmNotifySessionDisplayBurst(SessionId, 6);
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
        v72 = v8 - 79;
        if ( (_DWORD)v8 == 79 )
          goto LABEL_490;
LABEL_489:
        if ( v72 != 1 )
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
          v47 = PopBlackBoxUpdate(Pool2, v9, v13);
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
        v104 = (unsigned int)(v8 - 96);
        if ( (_DWORD)v8 == 96 )
        {
          if ( !Pool2 || v16 )
            goto LABEL_271;
          if ( !(_DWORD)InputBuffer )
            goto LABEL_97;
          LOBYTE(v104) = *(_BYTE *)Pool2;
          v47 = PopSendSuspendResumeNotifications(v104, 1LL, v13);
          goto LABEL_609;
        }
        if ( (_DWORD)v8 == 97 )
        {
          if ( !Pool2 || !Length || !v16 || !Size )
            goto LABEL_271;
          if ( Length < 0x20 || Size < 0x10 )
            goto LABEL_97;
          IsAppContainerOrIdentifyLevelContext = PopBlackBoxDirectAccess(Pool2, &v128, v13);
          InputBuffer = v15;
          if ( IsAppContainerOrIdentifyLevelContext < 0 )
            goto LABEL_273;
          goto LABEL_157;
        }
        if ( (unsigned int)Feature_AdapterAndNewBatteryIoctlSupport__private_IsEnabledDeviceUsageNoInline() )
        {
          if ( !Pool2 && v16 )
          {
            PopCurrentSystemPowerSourceState((__int64)&v128, v9, (__int64)v13, (struct _KLOCK_ENTRIES *)v11);
            Src = &v128;
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
        v47 = PopEtEnergyTrackerQuery(*Pool2, v16, Size);
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
          PopAcquirePolicyLock(v98, v97);
          IsAppContainerOrIdentifyLevelContext = PopSetHiberFileType(*(_DWORD *)Pool2, &v116, (unsigned int *)&v115);
          PopReleasePolicyLock(v100, v99, v101, v102, ExplicitScope);
          v83 = 6LL;
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
          UserModeRequest = PopEtEnergyTrackerCreate((unsigned int *)Pool2, (HANDLE *)&v128);
LABEL_475:
          IsAppContainerOrIdentifyLevelContext = UserModeRequest;
          InputBuffer = v15;
          if ( UserModeRequest < 0 )
            goto LABEL_273;
          v46 = (__int64 *)&v128;
          goto LABEL_180;
        }
        if ( SSHSupportIsPlatformAoAc() )
        {
          if ( Pool2 && (_DWORD)InputBuffer == 336 && v16 )
          {
            LOBYTE(v128) = PopFxIsDevicePotentialDripsConstraint(Pool2);
            Src = &v128;
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
        LODWORD(v128) = PopCapturePlatformRole(v10, 1LL, v13);
        goto LABEL_176;
      }
      if ( (int)v8 <= 63 )
      {
        if ( (_DWORD)v8 == 63 )
        {
          if ( !Pool2 && !v16 )
          {
            v87 = (unsigned int)TtmiGetSessionId();
            PopPrintEx(3, (int)"PopAdaptive: Session %u is closed\n", v87);
            PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_CLOSED, v87, 0);
            PopFreeSessionState(v87);
            if ( TtmIsEnabled() )
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
            SettingNotificationName = PopGetSettingNotificationName((__int64)Pool2, v16);
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
                      v86 = Size;
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
                v84 = TtmiGetSessionId();
                PopSessionConnectionChange(v84, Pool2, v16);
                v85 = TtmiGetSessionId();
                Feature_Servicing_PDCAgentSessions__private_IsEnabledDeviceUsageNoInline();
                LOBYTE(v13) = *(_BYTE *)Pool2;
                LOBYTE(v9) = *((_BYTE *)Pool2 + 1);
                if ( qword_140E677B8 )
                  guard_dispatch_icall_no_overrides(v85, v9);
                goto LABEL_611;
              }
              goto LABEL_271;
            }
            if ( !Pool2 || !v16 )
              goto LABEL_271;
            if ( (_DWORD)InputBuffer != 16 || Size < 4 )
              goto LABEL_97;
            SettingNotificationName = PopGetSettingValue((__int64)Pool2, (__int64)v16, Size);
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
              WakeSource = PpmClearSimulatedIdle((_PROCESSOR_NUMBER *)Pool2);
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
                                                   (unsigned int *)&v128);
          if ( IsAppContainerOrIdentifyLevelContext < 0 )
            goto LABEL_8;
LABEL_176:
          Src = &v128;
          Size_4 = 4;
          goto LABEL_611;
        }
        if ( !Pool2 || !v16 )
          goto LABEL_271;
        if ( (unsigned int)InputBuffer < 4 )
          goto LABEL_97;
        PopAcquireTransitionLock(5LL);
        PopAcquirePolicyLock(v78, v77);
        IsAppContainerOrIdentifyLevelContext = PopSetHiberFileSize(*(_DWORD *)Pool2, &v116, (unsigned int *)&v115);
        PopReleasePolicyLock(v80, v79, v81, v82, ExplicitScope);
        v83 = 5LL;
LABEL_384:
        PopReleaseTransitionLock(v83);
        if ( IsAppContainerOrIdentifyLevelContext < 0 )
          v116 = v115;
        v46 = (__int64 *)&v116;
        goto LABEL_180;
      }
      if ( (int)v8 <= 69 )
      {
        if ( (_DWORD)v8 == 69 )
        {
          if ( !Pool2 && !v16 )
          {
            IsAppContainerOrIdentifyLevelContext = PopInitPlatformSettings(v10, 1LL, v13);
            BYTE4(PpmIdlePolicyLock.Padding[3]) = SSHSupportIsPlatformAoAc();
            goto LABEL_8;
          }
          goto LABEL_271;
        }
        if ( (_DWORD)v8 == 64 )
        {
          if ( Pool2 && (_DWORD)InputBuffer == 8 && !v16 )
          {
            v88 = TtmiGetSessionId();
            PopSessionWinlogonNotification(v88, Pool2);
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
              LOBYTE(v128) = SSHSupportIsPlatformAoAc();
              Src = &v128;
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
              if ( !qword_140E677B0 )
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
            PopFilterCapabilities((__int64)&PpmIdlePolicyLock.Padding[1], (__int64)&v128);
            if ( BYTE2(v130) )
              PopReadHiberbootPolicy((char *)&v130 + 2);
            Src = (char *)&v130 + 2;
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
          PopShutdownButtonPressTime = KeQueryPerformanceCounter(0LL).QuadPart;
          goto LABEL_611;
        case 'G':
          goto LABEL_447;
        case 'H':
LABEL_470:
          if ( !Pool2 || !v16 )
            goto LABEL_271;
          if ( (_DWORD)InputBuffer != 40 || Size != 8 )
            goto LABEL_97;
          UserModeRequest = PopPowerRequestCreateUserModeRequest(Pool2, (_DWORD)v8 == 72, (HANDLE *)&v128);
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
      v103 = 23;
      if ( (_DWORD)v8 != 88 )
        v103 = 11;
      PopScreenOff(v103);
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
                WriteOperationCount = (char **)((char *)&PpmIdlePolicyLock.Affinity + 4);
              }
              else
              {
                if ( (_DWORD)v8 != 2 && (_DWORD)v8 != 3 )
                {
                  if ( (_DWORD)v8 != 4 )
                  {
                    if ( !Pool2 && v16 )
                    {
                      PopCurrentPowerState(&v128);
LABEL_79:
                      Src = &v128;
                      Size_4 = 32;
LABEL_611:
                      v86 = Size;
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
                      if ( v86 >= Size_4 )
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
                    if ( (PpmIdlePolicyLock.SchedulerAssistLastYieldBoostTime & 1) != 0 )
                    {
                      if ( (unsigned int)InputBuffer < 0x4C )
                        goto LABEL_97;
                      *(_OWORD *)&PpmIdlePolicyLock.Padding[1] = *(_OWORD *)Pool2;
                      *(_OWORD *)&PpmIdlePolicyLock.Padding[3] = *((_OWORD *)Pool2 + 1);
                      xmmword_140F11220 = *((_OWORD *)Pool2 + 2);
                      unk_140F11230 = *((_OWORD *)Pool2 + 3);
                      qword_140F11240 = Pool2[8];
                      dword_140F11248 = *((_DWORD *)Pool2 + 18);
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
                    BYTE1(PpmIdlePolicyLock.Padding[2]) = (__int64)PpmIdlePolicyLock.Teb & 1;
                    BYTE5(PpmIdlePolicyLock.Padding[3]) = PopDisksRegisteredForIdle();
                    PopFilterCapabilities((__int64)&PpmIdlePolicyLock.Padding[1], (__int64)&v128);
                    Src = &v128;
                    Size_4 = 76;
                    goto LABEL_611;
                  }
                  goto LABEL_271;
                }
                if ( !Pool2 || !v16 )
                  goto LABEL_271;
                if ( (unsigned int)InputBuffer < 0xE8 )
                  goto LABEL_97;
                IsAppContainerOrIdentifyLevelContext = PopVerifySystemPowerPolicy(Pool2, (__int64)&v128);
                InputBuffer = v15;
                if ( IsAppContainerOrIdentifyLevelContext < 0 )
                  goto LABEL_273;
                WriteOperationCount = &v128;
              }
LABEL_92:
              Src = WriteOperationCount;
              Size_4 = 232;
              goto LABEL_611;
            }
            if ( !Pool2 || v16 )
              goto LABEL_271;
            if ( (unsigned int)InputBuffer < 0x18 )
              goto LABEL_97;
            v29 = *(unsigned int *)Pool2;
            if ( (unsigned int)v29 >= 7 )
              goto LABEL_271;
            v30 = 3 * v29;
            if ( *((_QWORD *)&PpmIdlePolicyLock.Timer.Header.WaitListHead.Flink + 3 * v29) )
            {
              if ( (_DWORD)v29 != 5 )
              {
                if ( (_DWORD)v29 != 4 )
                  goto LABEL_271;
                v13 = PopShutdownHandler;
                if ( PpmIdlePolicyLock.WaitBlock[0].SparePtr != PopShutdownHandler )
                  goto LABEL_271;
              }
            }
            *(_OWORD *)(&PpmIdlePolicyLock.Timer.Header.Lock + 6 * v29) = *(_OWORD *)Pool2;
            *((_QWORD *)&PpmIdlePolicyLock.Timer.Header.WaitListHead.Blink + 3 * v29) = Pool2[2];
            *(_WORD *)((char *)&PpmIdlePolicyLock.Timer.Header.SignalState + 24 * v29 + 1) = 0;
            *((_BYTE *)&PpmIdlePolicyLock.Timer.Header.SignalState + 24 * v29 + 3) = 0;
            v13 = 0LL;
            v11 = 0LL;
            if ( (_DWORD)v29 )
            {
              v31 = v29 - 1;
              if ( v31 )
              {
                v32 = v31 - 1;
                if ( v32 )
                {
                  v33 = v32 - 1;
                  if ( v33 )
                  {
                    v34 = v33 - 1;
                    if ( v34 )
                    {
                      if ( v34 == 2 )
                      {
                        v11 = 4LL;
                        v35 = (PpmIdlePolicyLock.SchedulerAssistLastYieldBoostTime & 0x2000) == 0;
                        v13 = (void (__fastcall __noreturn *)())((char *)&PpmIdlePolicyLock.Padding[3] + 1);
                        goto LABEL_120;
                      }
                    }
                    else
                    {
                      v13 = (void (__fastcall __noreturn *)())((char *)&PpmIdlePolicyLock.Padding[1] + 7);
                    }
LABEL_122:
                    if ( (v11 & (unsigned int)-(*((_BYTE *)&PpmIdlePolicyLock.Timer.Header.SignalState + 8 * v30) != 0)) > (int)qword_140F11240 )
                      LODWORD(qword_140F11240) = *((_BYTE *)&PpmIdlePolicyLock.Timer.Header.SignalState + 8 * v30) != 0
                                               ? v11
                                               : 0;
                    if ( v13 )
                      PopChangeCapability(v13, 1);
                    goto LABEL_611;
                  }
                  v11 = 5LL;
                  v35 = (PpmIdlePolicyLock.SchedulerAssistLastYieldBoostTime & 0x2000) == 0;
                  v13 = (void (__fastcall __noreturn *)())((char *)&PpmIdlePolicyLock.Padding[1] + 6);
                }
                else
                {
                  v11 = 4LL;
                  v35 = (PpmIdlePolicyLock.SchedulerAssistLastYieldBoostTime & 0x20) == 0;
                  v13 = (void (__fastcall __noreturn *)())((char *)&PpmIdlePolicyLock.Padding[1] + 5);
                }
              }
              else
              {
                v11 = 3LL;
                v35 = (PpmIdlePolicyLock.SchedulerAssistLastYieldBoostTime & 0x40) == 0;
                v13 = (void (__fastcall __noreturn *)())((char *)&PpmIdlePolicyLock.Padding[1] + 4);
              }
            }
            else
            {
              v11 = 2LL;
              v35 = (PpmIdlePolicyLock.SchedulerAssistLastYieldBoostTime & 8) == 0;
              v13 = (void (__fastcall __noreturn *)())((char *)&PpmIdlePolicyLock.Padding[1] + 3);
            }
LABEL_120:
            if ( !v35 )
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
            WriteOperationCount = (char **)PpmIdlePolicyLock.WriteOperationCount;
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
              IsAppContainerOrIdentifyLevelContext = PopProcessorInformation(&v128, v9, PrimaryGroupThread, &Size_4);
              InputBuffer = v15;
              if ( IsAppContainerOrIdentifyLevelContext < 0 )
                goto LABEL_273;
              Src = &v128;
              goto LABEL_611;
            }
            if ( !Pool2 || v16 )
              goto LABEL_271;
            if ( !(_DWORD)InputBuffer )
              goto LABEL_97;
            PopAcquireTransitionLock(3LL);
            PopAcquirePolicyLock(v38, v37);
            v39 = *(_BYTE *)Pool2 != 0;
            PopHiberEnabledReg = *(_BYTE *)Pool2 != 0;
            PopSetHiberPersistedRegValue(0LL, v39, 0LL);
            IsAppContainerOrIdentifyLevelContext = PopHibernateEvaluation(0, 0, 0LL);
            PopReleasePolicyLock(v41, v40, v42, v43, ExplicitScope);
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
          p_Process = &PpmIdlePolicyLock.Process;
LABEL_147:
          Src = p_Process;
          Size_4 = 24;
          goto LABEL_611;
        }
        if ( Pool2 || !v16 )
          goto LABEL_271;
        HIDWORD(v128) = dword_140F10324;
        PopQueryRemainingSystemIdleTime(&v129, 0LL);
        BYTE4(v129) = PopCoolingMode;
LABEL_157:
        Src = &v128;
        Size_4 = 16;
        goto LABEL_611;
      }
      if ( (int)v8 > 18 )
      {
        if ( (_DWORD)v8 != 19 && (_DWORD)v8 != 20 && (_DWORD)v8 != 21 && (_DWORD)v8 != 22 )
        {
          if ( !Pool2 && v16 )
          {
            IsAppContainerOrIdentifyLevelContext = PopLoggingInformation(P, &v117, v13);
            InputBuffer = v15;
            if ( IsAppContainerOrIdentifyLevelContext < 0 )
              goto LABEL_273;
            Src = P[0];
            Size_4 = v117;
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
            v46 = &qword_140F10478;
            break;
          case 0xF:
            if ( Pool2 || !v16 )
              goto LABEL_271;
            v46 = &qword_140F10480;
            break;
          case 0x10:
            if ( !Pool2 && v16 )
            {
              if ( dword_140E01A18 )
                LODWORD(v128) = (unsigned int)v128 | 1;
              if ( dword_140E019E8 )
                LODWORD(v128) = (unsigned int)v128 | 2;
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
              if ( !(_QWORD)PopPowerStateNotifyHandler || !*Pool2 )
              {
                PopPowerStateNotifyHandler = *(_OWORD *)Pool2;
                goto LABEL_611;
              }
            }
            goto LABEL_271;
        }
LABEL_180:
        Src = v46;
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
    v47 = PopLogSleepDisabled(*(_DWORD *)Pool2, *((_DWORD *)Pool2 + 1), 0LL, 0LL);
LABEL_609:
    v44 = v47 < 0;
    IsAppContainerOrIdentifyLevelContext = v47;
LABEL_610:
    InputBuffer = v15;
    if ( v44 )
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
        v47 = PopPowerRequestActionInfo(Pool2, 1LL, v13);
        goto LABEL_609;
      }
      if ( (_DWORD)v8 != 39 )
      {
        if ( (_DWORD)v8 == 40 )
        {
          if ( Pool2 && (_DWORD)InputBuffer == 4 && !v16 )
          {
            v115 = *(_DWORD *)Pool2 != 0;
            PopSetPowerSettingValueAcDc((__int64)&GUID_VIDEO_BRIGHTNESS_CAPABLE, 4u, (__int64)&v115);
            goto LABEL_611;
          }
          goto LABEL_271;
        }
        if ( (_DWORD)v8 == 41 )
        {
          if ( !Pool2 && v16 && Size == 64 )
          {
            PopAcquireRwLockExclusive((unsigned __int64 *)&PopEsLock, 1LL, (__int64)v13, (struct _KLOCK_ENTRIES *)v11);
            v62 = PopEsState;
            PopReleaseRwLock((struct _KTHREAD *)&PopEsLock);
            v63 = v137;
            if ( v62 == 1 )
              v63 = 1;
            v137 = v63;
            IsEnabled = TtmIsEnabled();
            if ( TtmIsEnabled() )
            {
              IsAppContainerOrIdentifyLevelContext = TtmInitCurrentSession();
              InputBuffer = v15;
              if ( IsAppContainerOrIdentifyLevelContext < 0 )
                goto LABEL_273;
              PopPowerRequestNotifyTtmSessionInitialized();
            }
            PopAcquirePolicyLock(v65, v64);
            LODWORD(v130) = 0;
            v128 = &PopNoMoreInput;
            v129 = &PopHiberBootForceMonitorOff;
            v131 = BYTE1(PpmIdlePolicyLock.IoSelfBoostsEntry.Next) != 0;
            Next_high = HIDWORD(PpmIdlePolicyLock.PropagateBoostsEntry.Next);
            HIDWORD(v130) = *(_DWORD *)&PpmIdlePolicyLock.PriorityFloorCounts[20];
            v133 = *(_DWORD *)&PpmIdlePolicyLock.PriorityFloorCounts[24];
            v134 = *(_DWORD *)&PpmIdlePolicyLock.PriorityFloorCounts[28];
            PriorityFloorSummary = PpmIdlePolicyLock.PriorityFloorSummary;
            AbCompletedIoBoostCount = PpmIdlePolicyLock.AbCompletedIoBoostCount;
            AbCompletedIoQoSBoostCount = PpmIdlePolicyLock.AbCompletedIoQoSBoostCount;
            v138 = PopLidOpened;
            _m_prefetchw(&PopLidStateIsReliable);
            v141 = _InterlockedOr(&PopLidStateIsReliable, 0) != 0;
            Src = &v128;
            Size_4 = 64;
            v66 = (unsigned int)TtmiGetSessionId();
            PopPrintEx(3, (int)"PopAdaptive: Session %u is started\n", v66);
            PopDiagTraceSessionStates(&POP_ETW_ADPM_SESSION_CREATED, v66, 0);
            PopReleasePolicyLock(v68, v67, v69, v70, ExplicitScope);
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
              ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_VISIBLE_STATE, (char *)Pool2 + 4, 4u, 0LL, 0LL, 0, 0);
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
            PopProcessSessionDisplayStateChange(*((_BYTE *)Pool2 + 15), *((_DWORD *)Pool2 + 2));
LABEL_295:
            PopSetDisplayStatus(*((_DWORD *)Pool2 + 1));
            PopUpdateConsoleDisplayState(*((unsigned int *)Pool2 + 1), v61);
            if ( *((_DWORD *)Pool2 + 1) == 1 )
              PopPowerAggregatorNotifyDisplayPoweredOn();
            goto LABEL_297;
          }
          v126 = 0LL;
          v127 = 0;
          LODWORD(v122) = v60;
          HIDWORD(v122) = 40;
          v123 = 0LL;
          v124 = 0LL;
          v125 = 0;
          IsAppContainerOrIdentifyLevelContext = DbgkWerCaptureLiveKernelDump2(
                                                   L"InvalidDisplayStateTransition",
                                                   *(unsigned int *)Pool2,
                                                   0LL,
                                                   (__int64)&v122);
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
        v75 = *(_WORD *)Pool2;
        if ( v75 >= KeQueryActiveGroupCount() )
          goto LABEL_271;
        PrimaryGroupThread = v75;
        goto LABEL_133;
      }
      if ( (_DWORD)v8 == 47 )
      {
        if ( Pool2 && (_DWORD)InputBuffer == 16 )
        {
          v74 = PopUmpoSendLegacyEvent(Pool2);
          IsAppContainerOrIdentifyLevelContext = v74;
          if ( v74 < 0 )
          {
            InputBuffer = v15;
            if ( v74 != -1073741536 )
              goto LABEL_273;
          }
          goto LABEL_611;
        }
        goto LABEL_271;
      }
      v72 = v8 - 48;
      if ( (_DWORD)v8 == 48 )
      {
        if ( !(_BYTE)KdDebuggerEnabled )
          goto LABEL_7;
        if ( !Pool2 || v16 )
          goto LABEL_271;
        switch ( Length )
        {
          case 0x10u:
            v73 = 0LL;
            break;
          case 0x18u:
            v73 = Pool2 + 2;
            break;
          case 2u:
            WakeSource = PpmParkClearForcedMask((unsigned __int16 *)Pool2, 1LL, (unsigned int)v13);
            goto LABEL_256;
          default:
            goto LABEL_263;
        }
        WakeSource = PpmParkApplyForcedMask(Pool2, v73);
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
    v109 = 1;
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
        if ( !(_DWORD)dword_140F10900 || !qword_140F108F8 )
        {
          IsAppContainerOrIdentifyLevelContext = -1073741275;
          goto LABEL_8;
        }
        Size_4 = dword_140F10900 + 8;
        v54 = ExAllocatePool2(0x100uLL);
        v55 = (_DWORD *)v54;
        if ( v54 )
        {
          Src = (PVOID)v54;
          v109 = 1;
          memmove((void *)(v54 + 8), qword_140F108F8, (unsigned int)dword_140F10900);
          *v55 = (unsigned int)dword_140F10900 >> 4;
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
      PopReleasePolicyLock((unsigned int)(v8 - 35), 1LL, v13, v11, ExplicitScope);
      v112 = 0;
    }
    IsAppContainerOrIdentifyLevelContext = PopGetWakeSource(0LL, &Size_4);
    if ( IsAppContainerOrIdentifyLevelContext != -1073741789 )
    {
LABEL_139:
      v44 = IsAppContainerOrIdentifyLevelContext < 0;
      goto LABEL_610;
    }
    v56 = (void *)ExAllocatePool2(0x40uLL);
    Src = v56;
    if ( !v56 )
      goto LABEL_213;
    v109 = 1;
    WakeSource = PopGetWakeSource(v56, &Size_4);
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
        v109 = 1;
        *(_DWORD *)Src = PopConsoleDisplayState;
        goto LABEL_611;
      }
LABEL_213:
      IsAppContainerOrIdentifyLevelContext = -1073741670;
      goto LABEL_8;
    }
    PopSuspendResumePdc(1LL, 1LL);
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
  v49 = *((_DWORD *)Pool2 + 6);
  if ( !v49 || *((_DWORD *)Pool2 + 5) > 2u )
    goto LABEL_271;
  InputBuffer = v15;
  if ( *(_DWORD *)Pool2 != 1 )
  {
    IsAppContainerOrIdentifyLevelContext = -1073741736;
    goto LABEL_273;
  }
  v50 = v49 + 28;
  v9 = 0xFFFFFFFFLL;
  if ( v50 >= 0x1C )
    v9 = v50;
  Size_4 = v9;
  IsAppContainerOrIdentifyLevelContext = v50 < 0x1C ? 0xC0000095 : 0;
  if ( v50 >= 0x1C )
  {
    if ( Length >= (unsigned int)v9 )
    {
      v51 = *((_DWORD *)Pool2 + 6);
      v52 = *((_DWORD *)Pool2 + 5);
      v53 = TtmiGetSessionId();
      IsAppContainerOrIdentifyLevelContext = PopSetPowerSettingValue(
                                               (GUID *)((char *)Pool2 + 4),
                                               v53,
                                               v52,
                                               v51,
                                               (char *)Pool2 + 28);
      InputBuffer = v15;
      if ( IsAppContainerOrIdentifyLevelContext < 0 )
        goto LABEL_273;
      LODWORD(v8) = v119;
      goto LABEL_611;
    }
    goto LABEL_271;
  }
LABEL_273:
  v58 = P[0];
  if ( P[0] )
    ExFreePoolWithTag(P[0], 0);
  if ( v109 )
    ExFreePoolWithTag(Src, 0x206D654Du);
  if ( v112 )
    PopReleasePolicyLock(v58, v9, v13, v11, ExplicitScope);
  if ( Pool2 && Pool2 != InputBuffer && Pool2 != (_QWORD *)psz )
    ExFreePoolWithTag(Pool2, 0x206D654Du);
  return IsAppContainerOrIdentifyLevelContext;
}
