/*
 * XREFs of PopPowerInformationInternal @ 0x140B73EF0
 * Callers:
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14021B1A8 (PopReleaseRwLock.c)
 *     PpmReleaseLock @ 0x14037CD6C (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x140396D00 (PpmAcquireLock.c)
 *     PopSetWatchdog @ 0x1403B4B68 (PopSetWatchdog.c)
 *     PopDeepSleepSetDisengageReason @ 0x1403BE008 (PopDeepSleepSetDisengageReason.c)
 *     PopDeepSleepClearDisengageReason @ 0x1403BE204 (PopDeepSleepClearDisengageReason.c)
 *     RtlStringCbCopyW @ 0x14041DAC0 (RtlStringCbCopyW.c)
 *     PopQueryBootSessionStandbyActivationInfo @ 0x1404248C8 (PopQueryBootSessionStandbyActivationInfo.c)
 *     PopAcquireRwLockExclusive @ 0x140425310 (PopAcquireRwLockExclusive.c)
 *     RtlStringCbLengthW @ 0x140478794 (RtlStringCbLengthW.c)
 *     RtlCheckTokenMembership @ 0x140493B20 (RtlCheckTokenMembership.c)
 *     PopDiagTraceEventNoPayload @ 0x1404C0304 (PopDiagTraceEventNoPayload.c)
 *     SSHSupportIsPlatformAoAc @ 0x1404C3180 (SSHSupportIsPlatformAoAc.c)
 *     PopFxClearDeviceConstraints @ 0x1404DB710 (PopFxClearDeviceConstraints.c)
 *     PopDiagTraceSessionDisplayStateChange @ 0x1404E4520 (PopDiagTraceSessionDisplayStateChange.c)
 *     PoDirectedDripsSetDeviceFlags @ 0x1404EBB40 (PoDirectedDripsSetDeviceFlags.c)
 *     SSHSupportQueryIsLibraryEnabled @ 0x1404FE0C0 (SSHSupportQueryIsLibraryEnabled.c)
 *     PopPlRegisterPowerPlane @ 0x140507D2C (PopPlRegisterPowerPlane.c)
 *     PpmInternalProcessorIdleVeto @ 0x140512F38 (PpmInternalProcessorIdleVeto.c)
 *     PoDirectedDripsClearDeviceFlags @ 0x140530F20 (PoDirectedDripsClearDeviceFlags.c)
 *     PpmInternalPlatformIdleVeto @ 0x140530FA4 (PpmInternalPlatformIdleVeto.c)
 *     PoLatencySensitivityHint @ 0x140532910 (PoLatencySensitivityHint.c)
 *     PopGetEnergyEstimationInfo @ 0x140603BC4 (PopGetEnergyEstimationInfo.c)
 *     Feature_Servicing_BatteryTestExempt__private_IsEnabledDeviceUsageNoInline @ 0x1406066D8 (Feature_Servicing_BatteryTestExempt__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_Servicing_PDCAgentSessions__private_IsEnabledDeviceUsageNoInline @ 0x140606734 (Feature_Servicing_PDCAgentSessions__private_IsEnabledDeviceUsageNoInline.c)
 *     PpmPerfGetVmCppcConfig @ 0x14060906C (PpmPerfGetVmCppcConfig.c)
 *     PpmPerfGetVmPerfConfig @ 0x1406093B4 (PpmPerfGetVmPerfConfig.c)
 *     PpmPerfGetVmPerfPriorityConfig @ 0x140609648 (PpmPerfGetVmPerfPriorityConfig.c)
 *     PopShutdownListenerRemoveCallback @ 0x14060ED40 (PopShutdownListenerRemoveCallback.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x14072BC00 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     PopBootStatUnlock @ 0x140773008 (PopBootStatUnlock.c)
 *     PopDirectedDripsUmPowerInformationInternal @ 0x140775F20 (PopDirectedDripsUmPowerInformationInternal.c)
 *     PopAdaptiveGetSystemInitiatedRebootTargetState @ 0x140776E40 (PopAdaptiveGetSystemInitiatedRebootTargetState.c)
 *     PopReadPagesFromHiberFile @ 0x140778074 (PopReadPagesFromHiberFile.c)
 *     PopDiagTraceSleepReliabilityDiagConfigUpdate @ 0x140778664 (PopDiagTraceSleepReliabilityDiagConfigUpdate.c)
 *     PopFxPlatformRegisterInterface @ 0x140779CB4 (PopFxPlatformRegisterInterface.c)
 *     PoUserShutdownCancelled @ 0x14077E5A0 (PoUserShutdownCancelled.c)
 *     PopUpdateSmartUserPresencePredictions @ 0x14077F42C (PopUpdateSmartUserPresencePredictions.c)
 *     PopCheckTestsigningEnabled @ 0x1407CBC1C (PopCheckTestsigningEnabled.c)
 *     PopUpdateBackgroundCoolingStatus @ 0x1407CF0DC (PopUpdateBackgroundCoolingStatus.c)
 *     PopHandleProvIdentifierRequest @ 0x1407CF9D8 (PopHandleProvIdentifierRequest.c)
 *     PpmPerfGetVmPerfPrioritySupport @ 0x1407D1340 (PpmPerfGetVmPerfPrioritySupport.c)
 *     PopBatteryUpdateTestExempt @ 0x1407DB65C (PopBatteryUpdateTestExempt.c)
 *     PopBootStatCheckIntegrity @ 0x1407DEB68 (PopBootStatCheckIntegrity.c)
 *     PopScreenOn @ 0x1407DFB4C (PopScreenOn.c)
 *     PopAdaptiveSetSystemInitiatedRebootTargetStateOverride @ 0x1407E22B8 (PopAdaptiveSetSystemInitiatedRebootTargetStateOverride.c)
 *     PopSessionConnectionChangeV2 @ 0x1407E24E4 (PopSessionConnectionChangeV2.c)
 *     RtlCapabilityCheckForSingleSessionSku @ 0x140809A30 (RtlCapabilityCheckForSingleSessionSku.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x140933444 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     PopEsQueueStateEvaluation @ 0x1409C34B4 (PopEsQueueStateEvaluation.c)
 *     PopScreenOff @ 0x1409F4374 (PopScreenOff.c)
 *     TtmiGetSessionId @ 0x1409F5FA8 (TtmiGetSessionId.c)
 *     PopSetDisplayStatus @ 0x1409F7320 (PopSetDisplayStatus.c)
 *     PopUserPresenceHostStateChange @ 0x1409F7584 (PopUserPresenceHostStateChange.c)
 *     PopUpdateConsoleDisplayState @ 0x1409F877C (PopUpdateConsoleDisplayState.c)
 *     PopAdaptiveGetSessionState @ 0x1409F91C0 (PopAdaptiveGetSessionState.c)
 *     PopSetPowerSettingValueAcDc @ 0x1409F9E70 (PopSetPowerSettingValueAcDc.c)
 *     RtlIsMultiSessionSku @ 0x140A968C0 (RtlIsMultiSessionSku.c)
 *     PopBroadcastSessionInfo @ 0x140ABE614 (PopBroadcastSessionInfo.c)
 *     PpmPerfGetFrequencyBandStats @ 0x140ACBC98 (PpmPerfGetFrequencyBandStats.c)
 *     PopBootStatSet @ 0x140ACD7B0 (PopBootStatSet.c)
 *     PpmPerfUpdateDomainPolicy @ 0x140AD8DD8 (PpmPerfUpdateDomainPolicy.c)
 *     PopManageTransitionRecordRequest @ 0x140AE1E44 (PopManageTransitionRecordRequest.c)
 *     PopNotifyWin32kRequestStatus @ 0x140AEE7F4 (PopNotifyWin32kRequestStatus.c)
 *     PspIsContextAdmin @ 0x140AEF084 (PspIsContextAdmin.c)
 *     PopS0LowPowerIdleInfo @ 0x140AFBEE0 (PopS0LowPowerIdleInfo.c)
 *     PpmIdleGetConcurrencyStats @ 0x140AFE990 (PpmIdleGetConcurrencyStats.c)
 *     PpmIdleGetPackageIdleIntervalStats @ 0x140B05A3C (PpmIdleGetPackageIdleIntervalStats.c)
 *     PopIsRunningAsLocalSystem @ 0x140B11F04 (PopIsRunningAsLocalSystem.c)
 *     PopFanReadFanNoiseInfo @ 0x140B1C7E8 (PopFanReadFanNoiseInfo.c)
 *     PopTransitionCheckpoint @ 0x140B1D94C (PopTransitionCheckpoint.c)
 *     PpmPerfQueryProcMeasurementValues @ 0x140B26120 (PpmPerfQueryProcMeasurementValues.c)
 *     PopSuspendResumeInvocation @ 0x140B37780 (PopSuspendResumeInvocation.c)
 *     PopAcquireTransitionLock @ 0x140B3BB24 (PopAcquireTransitionLock.c)
 *     PopPowerAggregatorNotifyDisplayPoweredOn @ 0x140B48318 (PopPowerAggregatorNotifyDisplayPoweredOn.c)
 *     PoUserShutdownInitiated @ 0x140B48F60 (PoUserShutdownInitiated.c)
 *     PopReleaseTransitionLock @ 0x140B4DDD0 (PopReleaseTransitionLock.c)
 *     PopBootStatRestoreDefaults @ 0x140B53F84 (PopBootStatRestoreDefaults.c)
 *     PopQueryPowerButtonBugcheckEnabled @ 0x140B59530 (PopQueryPowerButtonBugcheckEnabled.c)
 *     PopReadResumeContext @ 0x140B6413C (PopReadResumeContext.c)
 *     PopPowerRequestNotifyUserSessionAttributed @ 0x140B67154 (PopPowerRequestNotifyUserSessionAttributed.c)
 *     PpmPerfGetBrandedFrequency @ 0x140B67AAC (PpmPerfGetBrandedFrequency.c)
 *     TtmNotifySessionPowerStateChange @ 0x140B68814 (TtmNotifySessionPowerStateChange.c)
 *     PopBootStatGet @ 0x140B6AD34 (PopBootStatGet.c)
 *     PopNetUpdateStandbyRequest @ 0x140B6B9E8 (PopNetUpdateStandbyRequest.c)
 *     TtmNotifySessionTerminalInput @ 0x140B6C74C (TtmNotifySessionTerminalInput.c)
 *     PpmPerfGetVmPerfControlSupport @ 0x140B70164 (PpmPerfGetVmPerfControlSupport.c)
 *     PopSessionWinlogonNotification @ 0x140B776DC (PopSessionWinlogonNotification.c)
 *     PopUpdateExternalDisplayState @ 0x140B777F0 (PopUpdateExternalDisplayState.c)
 *     PopAcquirePolicyLock @ 0x140C0AE00 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C0AE50 (PopReleasePolicyLock.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopPowerInformationInternal(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        _BYTE *a5,
        unsigned int a6,
        PVOID *a7,
        unsigned int *a8,
        _BYTE *a9)
{
  int v9; // ebx
  __m256i *v10; // rdi
  __int64 v11; // r14
  struct _KLOCK_ENTRIES *v12; // r9
  int v13; // eax
  unsigned __int64 v14; // rax
  __int64 v15; // rcx
  int IsEnabledDeviceUsageNoInline; // eax
  int PagesFromHiberFile; // ebx
  unsigned __int64 v18; // rax
  BOOLEAN IsContextAdmin; // al
  bool v20; // al
  unsigned __int64 v21; // rax
  BOOLEAN IsRunningAsLocalSystem; // al
  unsigned int v23; // eax
  __int64 v24; // rcx
  const wchar_t *v25; // rax
  __int16 v26; // cx
  unsigned __int64 v27; // rax
  int v29; // ebx
  int v30; // ebx
  int v31; // ebx
  char *v32; // rbx
  char PowerButtonBugcheckEnabled; // al
  BOOLEAN *p_IsMember; // rdx
  const WNF_STATE_NAME *v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rdi
  void *v38; // rcx
  ULONG v39; // edx
  __int64 (__fastcall **v40)(unsigned int *); // rax
  ULONGLONG *v41; // rsi
  int v42; // ebx
  int v43; // ebx
  int v44; // ebx
  int v45; // ebx
  __int64 v46; // rsi
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // r8
  struct _KLOCK_ENTRIES *v53; // r9
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // r9
  unsigned int v58; // r14d
  __int64 v59; // rax
  $7CFE901BD4F68CA229DBA1D003ACF329 *v60; // rax
  $7CFE901BD4F68CA229DBA1D003ACF329 v61; // xmm1
  int v62; // ebx
  int v63; // ebx
  int v64; // ebx
  int v65; // ebx
  __int32 v66; // ecx
  _OWORD *v67; // rax
  char **v68; // rbx
  char *v69; // rax
  int v70; // ecx
  bool v71; // zf
  int v72; // ebx
  int v73; // ebx
  int v74; // ebx
  _BYTE *v75; // rax
  _OWORD *v76; // rax
  char v77; // bl
  int *v78; // rcx
  int v79; // eax
  UCHAR *v80; // rcx
  __int64 v81; // rax
  __int64 v82; // rax
  __int64 v83; // rax
  UCHAR WaitType; // al
  unsigned __int32 v85; // eax
  unsigned __int64 v86; // rsi
  __int64 v87; // r14
  int v88; // eax
  int v89; // ebx
  int v90; // ebx
  int v91; // ebx
  int v92; // ebx
  __int64 v93; // rdx
  __int64 v94; // rcx
  __int64 v95; // rax
  unsigned int v96; // r8d
  _PROCESSOR_NUMBER *v97; // rcx
  int VmPerfPriorityConfig; // eax
  bool v99; // sf
  __int64 v100; // rax
  __int64 v101; // rcx
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // r8
  struct _KLOCK_ENTRIES *v105; // r9
  ULONG_PTR v106; // rcx
  unsigned __int64 v107; // rbx
  unsigned __int64 *v108; // rax
  int v109; // ebx
  int v110; // ebx
  int v111; // ebx
  int v112; // ebx
  __int64 v113; // rax
  __int64 v114; // rdx
  unsigned int v115; // r8d
  int FrequencyBandStats; // eax
  char v117; // bl
  ULONGLONG *v118; // rax
  int VmCppcConfig; // eax
  __int64 v120; // rax
  __int64 v121; // rdx
  unsigned int v122; // r8d
  void *v123; // rbx
  ULONGLONG *v124; // rax
  _DWORD *Pool2; // rbx
  PBOOLEAN i; // rax
  __int64 v127; // rcx
  int v128; // eax
  int v129; // ebx
  int v130; // ebx
  int v131; // ebx
  int v132; // ebx
  unsigned int v133; // eax
  unsigned int v134; // eax
  unsigned int v135; // esi
  unsigned int v136; // edi
  _DWORD *v137; // rcx
  _DWORD *v138; // rax
  struct _KLOCK_ENTRIES *v139; // r9
  int v140; // ecx
  int v141; // ebx
  int v142; // ebx
  int v143; // ebx
  _DWORD *v144; // rax
  __int64 v145; // rax
  int v146; // ebx
  int v147; // ebx
  int v148; // ebx
  int v149; // ebx
  ULONGLONG *v150; // rax
  unsigned int v151; // r8d
  __int64 v152; // rax
  __int64 v153; // rdx
  unsigned int v154; // r8d
  void *v155; // rbx
  _DWORD *v156; // rax
  __int64 v157; // rdx
  __int64 v158; // r8
  struct _KLOCK_ENTRIES *v159; // r9
  unsigned int SessionId; // eax
  __int64 v161; // rcx
  unsigned int v162; // ecx
  void *ExplicitScope; // [rsp+20h] [rbp-89h]
  BOOLEAN IsMember; // [rsp+40h] [rbp-69h] BYREF
  BOOLEAN HasCapability; // [rsp+41h] [rbp-68h] BYREF
  KPROCESSOR_MODE PreviousMode; // [rsp+42h] [rbp-67h]
  int v167; // [rsp+44h] [rbp-65h] BYREF
  __int64 v168; // [rsp+48h] [rbp-61h] BYREF
  unsigned int v169; // [rsp+50h] [rbp-59h] BYREF
  unsigned int v170; // [rsp+54h] [rbp-55h] BYREF
  size_t pcbLength; // [rsp+58h] [rbp-51h] BYREF
  void *v172; // [rsp+60h] [rbp-49h] BYREF
  void *v173; // [rsp+68h] [rbp-41h] BYREF
  UNICODE_STRING CapabilityName; // [rsp+70h] [rbp-39h] BYREF
  __int64 v175; // [rsp+80h] [rbp-29h]
  _DWORD v176[8]; // [rsp+88h] [rbp-21h] BYREF

  v9 = a1;
  v10 = (__m256i *)a3;
  CapabilityName = 0LL;
  v11 = a4;
  v12 = 0LL;
  *a7 = 0LL;
  *a8 = 0;
  *a9 = 0;
  LODWORD(v168) = a2;
  HasCapability = 0;
  IsMember = 0;
  LOBYTE(a1) = KeGetCurrentThread()->PreviousMode;
  pcbLength = 0LL;
  v169 = 0;
  v172 = 0LL;
  v173 = 0LL;
  v170 = 0;
  v175 = 0LL;
  PreviousMode = a1;
  if ( (_BYTE)a1 )
  {
    if ( (unsigned int)v9 <= 0x1C )
    {
      v13 = 347603205;
      if ( _bittest(&v13, v9) )
        return (unsigned int)-1073741790;
    }
    v14 = (unsigned int)(v9 - 40);
    if ( (unsigned int)v14 <= 0x38 )
    {
      v15 = 0x18082000A8E0003LL;
      if ( _bittest64(&v15, v14) )
        return (unsigned int)-1073741790;
    }
    IsEnabledDeviceUsageNoInline = Feature_Servicing_PDCAgentSessions__private_IsEnabledDeviceUsageNoInline();
    v12 = 0LL;
    if ( IsEnabledDeviceUsageNoInline )
    {
      if ( v9 == 98 )
        return (unsigned int)-1073741790;
    }
    v18 = (unsigned int)(v9 - 29);
    if ( (unsigned int)v18 <= 0x23 )
    {
      a1 = 0x88B4C0001LL;
      if ( _bittest64(&a1, v18) )
      {
        IsContextAdmin = PspIsContextAdmin();
        v12 = 0LL;
        if ( !IsContextAdmin )
          return (unsigned int)-1073741790;
      }
    }
    if ( (unsigned int)(v9 - 82) <= 1 )
    {
      v20 = PopCheckTestsigningEnabled();
      v12 = 0LL;
      if ( !v20 )
        return (unsigned int)-1073741790;
    }
    if ( (v21 = (unsigned int)(v9 - 35), (unsigned int)v21 <= 0x37) && (a1 = 0xA0001000000003LL, _bittest64(&a1, v21))
      || v9 == 24 )
    {
      IsRunningAsLocalSystem = PopIsRunningAsLocalSystem();
      v12 = 0LL;
      if ( !IsRunningAsLocalSystem )
        return (unsigned int)-1073741790;
    }
    switch ( v9 )
    {
      case 80:
        if ( !SeSinglePrivilegeCheck(SeShutdownPrivilege, PreviousMode) )
          return (unsigned int)-1073741727;
LABEL_452:
        if ( (_DWORD)v11 == 8 && v10 && !a6 && !a5 )
        {
          *(_QWORD *)&ExpPlatformBinaryLock.WaitBlockFill11[16] = PopAdaptiveGetSystemInitiatedRebootTargetState();
          ExpPlatformBinaryLock.WaitBlockFill4[8] = 1;
          return 0;
        }
        return (unsigned int)-1073741811;
      case 61:
        if ( PopCheckTestsigningEnabled() && PspIsContextAdmin() )
        {
LABEL_24:
          if ( (unsigned int)v11 < 0xC )
            return (unsigned int)-1073741811;
          if ( a5 )
          {
            PopAcquireTransitionLock(8, a2, a3, v12);
            PagesFromHiberFile = PopReadPagesFromHiberFile(v10->m256i_u32[2], 1u, a7);
            PopReleaseTransitionLock(8);
            v23 = 0;
            if ( PagesFromHiberFile < 0 )
            {
              *a7 = 0LL;
              return (unsigned int)PagesFromHiberFile;
            }
            *a8 = 4096;
            *a9 = 1;
            return v23;
          }
          return (unsigned int)-1073741789;
        }
        return (unsigned int)-1073741790;
      case 45:
        PagesFromHiberFile = 0;
        if ( !PopIsRunningAsLocalSystem() && (!PopCheckTestsigningEnabled() || !PspIsContextAdmin()) )
          return (unsigned int)-1073741790;
        goto LABEL_283;
      case 25:
        v24 = 0x7FFFLL;
        v25 = L"systemManagement";
        while ( *v25 )
        {
          ++v25;
          if ( !--v24 )
            goto LABEL_39;
        }
        v26 = 2 * v24;
        CapabilityName.Buffer = L"systemManagement";
        CapabilityName.Length = -2 - v26;
        CapabilityName.MaximumLength = -v26;
LABEL_39:
        PagesFromHiberFile = RtlCapabilityCheckForSingleSessionSku(0LL, &CapabilityName, &HasCapability);
        if ( PagesFromHiberFile < 0 )
          return (unsigned int)PagesFromHiberFile;
        if ( !HasCapability )
          return (unsigned int)-1073741790;
        goto LABEL_139;
    }
    a2 = (unsigned int)v168;
    LOBYTE(a1) = PreviousMode;
  }
  else
  {
    v27 = (unsigned int)(v9 - 24);
    if ( (unsigned int)v27 <= 0x3B )
    {
      a3 = 0xD00811169F09201LL;
      if ( _bittest64(&a3, v27) )
        return (unsigned int)-1073741637;
    }
    if ( v9 == 7 || v9 == 5 )
      return (unsigned int)-1073741637;
  }
  if ( v9 > 54 )
  {
    if ( v9 <= 78 )
    {
      if ( v9 == 78 )
      {
        if ( !a5 )
          return (unsigned int)-1073741811;
        Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
        if ( !Pool2 )
          return (unsigned int)-1073741670;
        for ( i = *(PBOOLEAN *)((char *)&Mm64BitPhysicalAddress + 2); ; i = *(PBOOLEAN *)i )
        {
          if ( i == (PBOOLEAN)((char *)&Mm64BitPhysicalAddress + 2) )
          {
            v128 = 0;
            goto LABEL_425;
          }
          v127 = *((_QWORD *)i + 54);
          if ( v127 )
            break;
        }
        v128 = guard_dispatch_icall_no_overrides(v127, (__int64)&Mm64BitPhysicalAddress + 2);
LABEL_425:
        *Pool2 = v128;
        *a7 = Pool2;
        *a8 = 4;
        goto LABEL_71;
      }
      if ( v9 <= 67 )
      {
        if ( v9 == 67 )
        {
          *a8 = 0;
          *a7 = 0LL;
          v78 = (int *)ExAllocatePool2(0x100uLL);
          if ( !v78 )
            return (unsigned int)-1073741670;
          v79 = PopDisableInboxPepGeneratedConstraintsOverride;
          goto LABEL_217;
        }
        if ( v9 > 61 )
        {
          if ( v9 == 62 )
          {
            if ( !a5 )
              return (unsigned int)-1073741789;
            v80 = (UCHAR *)ExAllocatePool2(0x100uLL);
            if ( !v80 )
              return (unsigned int)-1073741670;
            WaitType = stru_140E67200.WaitBlock[3].WaitType;
            goto LABEL_229;
          }
          if ( v9 == 63 )
          {
            if ( !a5 )
              return (unsigned int)-1073741811;
            v107 = (unsigned __int64)&SshpRoutineBlock & -(__int64)SSHSupportQueryIsLibraryEnabled();
            if ( !v107 )
              return (unsigned int)-1073741637;
            v108 = (unsigned __int64 *)ExAllocatePool2(0x100uLL);
            if ( !v108 )
              return (unsigned int)-1073741670;
            *v108 = v107;
            *a7 = v108;
            goto LABEL_169;
          }
          if ( v9 != 64 )
          {
            if ( v9 == 65 )
            {
              if ( (_DWORD)v11 == 16 )
              {
                v106 = v10->m256i_u64[1];
                if ( v106 )
                {
                  PagesFromHiberFile = PopFxClearDeviceConstraints(v106);
                  v23 = 0;
                  if ( PagesFromHiberFile < 0 )
                    return (unsigned int)PagesFromHiberFile;
                  return v23;
                }
              }
              return (unsigned int)-1073741811;
            }
            return (unsigned int)-1073741637;
          }
        }
        else
        {
          if ( v9 == 61 )
            goto LABEL_24;
          if ( v9 != 56 )
          {
            switch ( v9 )
            {
              case '9':
                if ( a5 )
                  return (unsigned int)-1073741811;
                return (unsigned int)PopPlRegisterPowerPlane((__int64)v10, v11, a3);
              case ':':
                if ( (unsigned int)v11 < 0x18 )
                  return (unsigned int)-1073741811;
                return (unsigned int)PoDirectedDripsSetDeviceFlags(v10->m256i_i64[1], v10->m256i_i32[4]);
              case ';':
                if ( (unsigned int)v11 < 0x18 )
                  return (unsigned int)-1073741811;
                return (unsigned int)PoDirectedDripsClearDeviceFlags(v10->m256i_i64[1], v10->m256i_i32[4]);
            }
            if ( v9 != 60 )
              return (unsigned int)-1073741811;
            if ( !a5 )
              return (unsigned int)-1073741789;
            PopAcquireTransitionLock(8, a2, a3, 0LL);
            PagesFromHiberFile = PopReadResumeContext(&v169, &v172);
            PopReleaseTransitionLock(8);
            if ( PagesFromHiberFile < 0 )
              return (unsigned int)PagesFromHiberFile;
            *a7 = v172;
            *a8 = v169;
LABEL_125:
            *a9 = 1;
            return 0;
          }
        }
        goto LABEL_315;
      }
      if ( v9 <= 73 )
      {
        if ( v9 == 73 )
        {
          if ( (unsigned int)v11 < 0xC )
            return (unsigned int)-1073741789;
          if ( a5 )
            return (unsigned int)-1073741811;
          PopUserPresenceHostStateChange(v10->m256i_i32[2]);
          return 0;
        }
        v109 = v9 - 68;
        if ( !v109 )
          return PopIdleScanInterval == 0 ? 0xC00000BB : 0;
        v110 = v109 - 1;
        if ( v110 )
        {
          v111 = v110 - 1;
          if ( !v111 )
          {
            if ( (unsigned int)v11 < 0xC )
              return (unsigned int)-1073741789;
            if ( v10->m256i_i32[1] > 2u )
              return (unsigned int)-1073741637;
            if ( v10->m256i_i32[1] == 2 && (unsigned int)v11 < 0x20 )
              return (unsigned int)-1073741789;
            if ( !a5 )
              return (unsigned int)-1073741811;
            v118 = (ULONGLONG *)ExAllocatePool2(0x100uLL);
            v41 = v118;
            if ( !v118 )
              return (unsigned int)-1073741670;
            if ( v10->m256i_i32[1] == 2 )
              VmCppcConfig = PpmPerfGetVmCppcConfig(
                               v10->m256i_u32[3],
                               v10->m256i_u32[2],
                               v10->m256i_u32[4],
                               v10->m256i_u32[5],
                               v10->m256i_i32[6],
                               v10->m256i_i8[28],
                               v118);
            else
              VmCppcConfig = PpmPerfGetVmPerfConfig(v10->m256i_i32[2], v118);
            PagesFromHiberFile = VmCppcConfig;
            v99 = VmCppcConfig < 0;
LABEL_305:
            if ( !v99 )
            {
              *a7 = v41;
LABEL_88:
              *a8 = 8;
              goto LABEL_89;
            }
LABEL_94:
            v38 = v41;
            goto LABEL_85;
          }
          v112 = v111 - 1;
          if ( !v112 )
          {
            if ( (_DWORD)v11 != 12 )
              return (unsigned int)-1073741811;
            v117 = v10->m256i_i8[8];
            PopAcquireRwLockExclusive(
              (unsigned __int64 *)&PopPdcDeviceListLock.ApcState.ApcListHead[1].Blink,
              a2,
              a3,
              0LL);
            if ( PopSleepReliabilityDetailedDiagEnabled != v117 )
            {
              PopSleepReliabilityDetailedDiagEnabled = v117;
              PopDiagTraceSleepReliabilityDiagConfigUpdate();
            }
            PopReleaseRwLock((struct _KTHREAD *)&PopPdcDeviceListLock.ApcStateFill[24]);
            return 0;
          }
          if ( v112 != 1 || !a5 )
            return (unsigned int)-1073741811;
          v58 = 2304;
          v113 = ExAllocatePool2(0x100uLL);
          v37 = v113;
          if ( !v113 )
            return (unsigned int)-1073741670;
          FrequencyBandStats = PpmPerfGetFrequencyBandStats(v113, v114, v115);
          goto LABEL_380;
        }
        if ( !a5 )
          return (unsigned int)-1073741811;
        v120 = ExAllocatePool2(0x100uLL);
        v123 = (void *)v120;
        if ( !v120 )
          return (unsigned int)-1073741670;
        PpmPerfGetVmPerfControlSupport(v120, v121, v122);
        *a7 = v123;
        *a8 = a6 < 0x14 ? 1 : 20;
LABEL_71:
        *a9 = 1;
        return 0;
      }
      if ( v9 == 74 || v9 == 75 )
      {
        if ( (_DWORD)v11 != 12 )
          return (unsigned int)-1073741789;
        if ( !a5 )
          return (unsigned int)-1073741811;
        if ( v9 == 74 )
          v58 = 296;
        else
          v58 = 592;
        v124 = (ULONGLONG *)ExAllocatePool2(0x100uLL);
        v41 = v124;
        if ( !v124 )
          return (unsigned int)-1073741670;
        PagesFromHiberFile = PpmIdleGetPackageIdleIntervalStats(v9, v10->m256i_u16[4], v124);
        if ( PagesFromHiberFile < 0 )
          goto LABEL_94;
        *a7 = v41;
LABEL_116:
        *a8 = v58;
        goto LABEL_89;
      }
      if ( (unsigned int)(v9 - 76) > 1 )
        return (unsigned int)-1073741811;
      if ( (_DWORD)v11 != 12 )
        return (unsigned int)-1073741789;
      if ( !a5 )
        return (unsigned int)-1073741811;
      PagesFromHiberFile = PpmIdleGetConcurrencyStats(v9, v10->m256i_u16[4], (__int64 *)&v173, &v170);
      if ( PagesFromHiberFile < 0 )
        return (unsigned int)PagesFromHiberFile;
      *a7 = v173;
      *a8 = v170;
LABEL_89:
      *a9 = 1;
      return (unsigned int)PagesFromHiberFile;
    }
    if ( v9 > 89 )
    {
      if ( v9 > 95 )
      {
        if ( v9 != 96 )
        {
          if ( v9 == 97 )
          {
            if ( (_DWORD)v11 != 12 || !a5 || a6 != 1 )
              return (unsigned int)-1073741811;
            *a5 = 0;
            if ( (unsigned int)Feature_Servicing_PDCAgentSessions__private_IsEnabledDeviceUsageNoInline()
              && v10->m256i_i32[2] == 59996711 )
            {
              *a5 = 1;
            }
            return 0;
          }
          if ( v9 != 98 )
          {
            if ( v9 != 99
              || !(unsigned int)Feature_Servicing_BatteryTestExempt__private_IsEnabledDeviceUsageNoInline()
              || !v10
              || a5 )
            {
              return (unsigned int)-1073741811;
            }
            if ( (unsigned int)v11 >= 0xC )
              return (unsigned int)PopBatteryUpdateTestExempt(v10->m256i_u8[8], v157, v158, v159);
            return (unsigned int)-1073741789;
          }
          if ( !(unsigned int)Feature_Servicing_PDCAgentSessions__private_IsEnabledDeviceUsageNoInline() )
            return (unsigned int)-1073741811;
          IsMember = 0;
          PagesFromHiberFile = SeIsAppContainerOrIdentifyLevelContext(0LL, &IsMember);
          if ( PagesFromHiberFile < 0 )
            return (unsigned int)PagesFromHiberFile;
          if ( IsMember )
            return (unsigned int)-1073741790;
          if ( (_DWORD)v168 )
            return (unsigned int)-1073741811;
          if ( (_DWORD)v11 == 48 && a5 && a6 == 16 )
          {
            SessionId = TtmiGetSessionId();
            PopSessionConnectionChangeV2(
              SessionId,
              (__int64)&v10->m256i_i64[1],
              (__int64)&v10->m256i_i64[2],
              (__int64)a5);
            v161 = (unsigned int)TtmiGetSessionId();
            if ( qword_140E677B8 )
              guard_dispatch_icall_no_overrides(v161, 0LL);
            return 0;
          }
          else
          {
            return (unsigned int)-1073741306;
          }
        }
      }
      else if ( v9 != 95 )
      {
        v146 = v9 - 90;
        if ( !v146 )
        {
          if ( v10 && (unsigned int)v11 >= 0x14 && (!a5 || !a6) )
            return (unsigned int)PopSuspendResumeInvocation((__int64)v10);
          return (unsigned int)-1073741811;
        }
        v147 = v146 - 1;
        if ( !v147 )
        {
          if ( !a5 || a6 < 0x24 )
            return (unsigned int)-1073741789;
          v156 = (_DWORD *)ExAllocatePool2(0x100uLL);
          v37 = (__int64)v156;
          if ( !v156 )
            return (unsigned int)-1073741670;
          PagesFromHiberFile = PopGetEnergyEstimationInfo(v156);
          if ( PagesFromHiberFile >= 0 )
          {
            *a7 = (PVOID)v37;
            PagesFromHiberFile = 0;
            *a8 = 36;
            *a9 = 1;
            return (unsigned int)PagesFromHiberFile;
          }
          goto LABEL_84;
        }
        v148 = v147 - 1;
        if ( !v148 )
          return (unsigned int)PopHandleProvIdentifierRequest(
                                 (__int64)v10,
                                 v11,
                                 (__int64)a5,
                                 a6,
                                 (unsigned __int16 **)a7,
                                 a8);
        v149 = v148 - 1;
        if ( v149 )
        {
          if ( v149 != 1 )
            return (unsigned int)-1073741811;
          if ( (unsigned int)v11 < 0xC )
            return (unsigned int)-1073741789;
          if ( !a5 )
            return (unsigned int)-1073741811;
          v150 = (ULONGLONG *)ExAllocatePool2(0x100uLL);
          v41 = v150;
          if ( !v150 )
            return (unsigned int)-1073741670;
          VmPerfPriorityConfig = PpmPerfGetVmPerfPriorityConfig(v10->m256i_u32[2], v150, v151);
LABEL_304:
          PagesFromHiberFile = VmPerfPriorityConfig;
          v99 = VmPerfPriorityConfig < 0;
          goto LABEL_305;
        }
        if ( (_DWORD)a2 )
          return (unsigned int)-1073741637;
        if ( !a5 )
          return (unsigned int)-1073741811;
        v152 = ExAllocatePool2(0x100uLL);
        v155 = (void *)v152;
        if ( !v152 )
          return (unsigned int)-1073741670;
        PpmPerfGetVmPerfPrioritySupport(v152, v153, v154);
        *a7 = v155;
        *a8 = 8;
        goto LABEL_71;
      }
      if ( (_DWORD)v11 == 12 && !a5 && !v10->m256i_i32[1] )
      {
        v162 = v10->m256i_u32[2];
        if ( v162 < 0x20 )
        {
          LOBYTE(a2) = v9 == 95;
          return (unsigned int)PopNotifyWin32kRequestStatus(v162, a2, a3, 0LL);
        }
      }
      return (unsigned int)-1073741811;
    }
    if ( v9 == 89 )
    {
      if ( !a5 || a6 != 20 )
        return (unsigned int)-1073741789;
      PopAcquirePolicyLock(a1, a2);
      PagesFromHiberFile = 0;
      if ( BYTE3(PpmIdlePolicyLock.Padding[3]) )
      {
        v145 = ExAllocatePool2(0x100uLL);
        if ( v145 )
        {
          *(_OWORD *)v145 = PopAcpiTimeAndAlarmCapabilities;
          v55 = (unsigned int)dword_140F0D290;
          *(_DWORD *)(v145 + 16) = dword_140F0D290;
          *a7 = (PVOID)v145;
          *a8 = 20;
          *a9 = 1;
        }
        else
        {
          PagesFromHiberFile = -1073741670;
        }
      }
      else
      {
        PagesFromHiberFile = -1073741637;
      }
      goto LABEL_110;
    }
    if ( v9 > 84 )
    {
      v141 = v9 - 85;
      if ( v141 )
      {
        v142 = v141 - 1;
        if ( v142 )
        {
          v143 = v142 - 1;
          if ( v143 )
          {
            if ( v143 == 1 )
              return (unsigned int)PopManageTransitionRecordRequest(a1, (__int64)v10, (unsigned int)v11);
          }
          else if ( v10 && (_DWORD)v11 == 24 && !a5 )
          {
            return (unsigned int)PopShutdownListenerRemoveCallback(v10);
          }
          return (unsigned int)-1073741811;
        }
        if ( (unsigned int)v11 < 8 || !a5 )
          return (unsigned int)-1073741789;
        v144 = (_DWORD *)ExAllocatePool2(0x100uLL);
        if ( v144 )
        {
          *v144 = ExBootAppErrorDiagCode;
          v144[1] = ExBootAppFailureStatus;
          *a7 = v144;
          *a8 = 8;
          goto LABEL_192;
        }
        return (unsigned int)-1073741670;
      }
      if ( !a5 )
        return (unsigned int)-1073741811;
      v58 = 88;
      v37 = ExAllocatePool2(0x100uLL);
      if ( !v37 )
        return (unsigned int)-1073741670;
      v140 = 85;
    }
    else
    {
      if ( v9 != 84 )
      {
        v129 = v9 - 79;
        if ( v129 )
        {
          v130 = v129 - 1;
          if ( !v130 )
            goto LABEL_452;
          v131 = v130 - 1;
          if ( v131 )
          {
            v132 = v131 - 1;
            if ( v132 )
            {
              if ( v132 != 1 || (_DWORD)v11 != 16 || !v10 || a6 || a5 )
                return (unsigned int)-1073741811;
              return (unsigned int)PopAdaptiveSetSystemInitiatedRebootTargetStateOverride((__int64)v10);
            }
            if ( (_DWORD)v11 != 12 || !v10 || a6 || a5 )
              return (unsigned int)-1073741811;
            v168 = (unsigned int)TtmiGetSessionId();
            BYTE5(v168) = v10->m256i_i8[8];
            BYTE4(v168) = 1;
            v133 = TtmiGetSessionId();
            PopSessionWinlogonNotification(v133, &v168);
          }
          else
          {
            if ( (_DWORD)v11 != 40 || !v10 || a6 != 16 || !a5 )
              return (unsigned int)-1073741811;
            v134 = TtmiGetSessionId();
            PopAdaptiveGetSessionState(v134, (__int64)&v10->m256i_i64[1], (__int64)a5);
          }
          return 0;
        }
        if ( !v10 || (_DWORD)v11 != 12 )
          return (unsigned int)-1073741811;
        v135 = v10->m256i_u32[2];
        v167 = 0;
        PagesFromHiberFile = PpmPerfQueryProcMeasurementValues(v135, (__int64)&v167);
        if ( PagesFromHiberFile < 0 )
          return (unsigned int)PagesFromHiberFile;
        v136 = 24 * v167 + 8;
        if ( a6 != 4 )
        {
          if ( a6 < v136 )
            return (unsigned int)-1073741789;
          v138 = (_DWORD *)ExAllocatePool2(0x40uLL);
          if ( v138 )
          {
            *a8 = v136;
            *a9 = 1;
            *a7 = v138;
            *v138 = v167;
            return (unsigned int)PpmPerfQueryProcMeasurementValues(v135, (__int64)&v167);
          }
          return (unsigned int)-1073741670;
        }
        v137 = (_DWORD *)ExAllocatePool2(0x100uLL);
        if ( !v137 )
          return (unsigned int)-1073741670;
        *v137 = v167;
        *a7 = v137;
        *a8 = 4;
        goto LABEL_89;
      }
      if ( !a5 )
        return (unsigned int)-1073741811;
      v58 = 160;
      v37 = ExAllocatePool2(0x100uLL);
      if ( !v37 )
        return (unsigned int)-1073741670;
      v140 = 84;
    }
    FrequencyBandStats = PopFanReadFanNoiseInfo(v140, v37, v58, v139);
LABEL_380:
    PagesFromHiberFile = FrequencyBandStats;
    if ( FrequencyBandStats >= 0 )
    {
LABEL_115:
      *a7 = (PVOID)v37;
      goto LABEL_116;
    }
LABEL_84:
    v38 = (void *)v37;
LABEL_85:
    v39 = 544040269;
LABEL_86:
    ExFreePoolWithTag(v38, v39);
    return (unsigned int)PagesFromHiberFile;
  }
  if ( v9 == 54 )
  {
LABEL_315:
    PagesFromHiberFile = PopDirectedDripsUmPowerInformationInternal(v9, v11, (__int64)v10, a8, a7);
    if ( PagesFromHiberFile < 0 || !*a7 )
      return (unsigned int)PagesFromHiberFile;
    goto LABEL_89;
  }
  if ( v9 > 31 )
  {
    if ( v9 <= 42 )
    {
      if ( v9 == 42 )
      {
        if ( (unsigned int)v11 < 8 || !a5 )
          return (unsigned int)-1073741789;
        v60 = ($7CFE901BD4F68CA229DBA1D003ACF329 *)ExAllocatePool2(0x100uLL);
        if ( !v60 )
          return (unsigned int)-1073741670;
        *v60 = *($7CFE901BD4F68CA229DBA1D003ACF329 *)&stru_140E67200.SchedulerApcFill5[64];
        v61 = *($7CFE901BD4F68CA229DBA1D003ACF329 *)&stru_140E67200.SchedulerApcFill5[80];
LABEL_124:
        v60[1] = v61;
        *a7 = v60;
        *a8 = 32;
        goto LABEL_125;
      }
      if ( v9 <= 37 )
      {
        if ( v9 != 37 )
        {
          a1 = (unsigned int)(v9 - 32);
          if ( v9 != 32 )
          {
            if ( v9 == 33 )
              return (unsigned int)-1073741637;
            a1 = (unsigned int)(v9 - 34);
            if ( v9 != 34 )
            {
              a1 = (unsigned int)(v9 - 35);
              if ( v9 != 35 )
              {
                if ( (unsigned int)v11 < 0xC )
                  return (unsigned int)-1073741789;
                if ( a5 )
                  return (unsigned int)-1073741811;
                v77 = v10->m256i_i8[8];
                PopAcquireRwLockExclusive((unsigned __int64 *)&PopEsLock, a2, a3, 0LL);
                PopEsEnabledOnHost = v77;
                PopReleaseRwLock((struct _KTHREAD *)&PopEsLock);
                PopEsQueueStateEvaluation(0);
                return 0;
              }
            }
          }
          goto LABEL_237;
        }
        if ( (unsigned int)v11 < 8 || !a5 )
          return (unsigned int)-1073741789;
        v78 = (int *)ExAllocatePool2(0x100uLL);
        if ( !v78 )
          return (unsigned int)-1073741670;
        v79 = qword_140F10424;
LABEL_217:
        *v78 = v79;
        *a7 = v78;
        *a8 = 4;
        goto LABEL_192;
      }
      a1 = (unsigned int)(v9 - 38);
      switch ( v9 )
      {
        case '&':
          goto LABEL_237;
        case '\'':
          if ( (_DWORD)v11 != 12 )
            return (unsigned int)-1073741811;
          p_IsMember = &IsMember;
          IsMember = v10->m256i_u8[8];
          v35 = (const WNF_STATE_NAME *)&WNF_PO_WAKE_ON_VOICE_STATE;
          return (unsigned int)ZwUpdateWnfStateData(v35, p_IsMember, 1u, 0LL, 0LL, 0, 0);
        case '(':
          if ( (_DWORD)v11 != 16 || v10->m256i_i32[2] )
            return (unsigned int)-1073741811;
          if ( v10->m256i_i8[12] )
            PopDeepSleepSetDisengageReason(7u);
          else
            PopDeepSleepClearDisengageReason(7u);
          return 0;
      }
      if ( (_DWORD)v11 != 16 )
        return (unsigned int)-1073741811;
      if ( !a5 )
        return (unsigned int)-1073741789;
      v80 = (UCHAR *)ExAllocatePool2(0x100uLL);
      if ( v80 )
      {
        v81 = v10->m256i_i64[1];
        if ( !v81
          || (v82 = *(_QWORD *)(*(_QWORD *)(v81 + 312) + 40LL)) == 0
          || (v83 = *(_QWORD *)(v82 + 80)) == 0
          || (v71 = *(_QWORD *)(v83 + 64) == 0LL, WaitType = 1, v71) )
        {
          WaitType = 0;
        }
LABEL_229:
        *v80 = WaitType;
        *a7 = v80;
        *a8 = 1;
        goto LABEL_192;
      }
      return (unsigned int)-1073741670;
    }
    if ( v9 <= 48 )
    {
      if ( v9 == 48 )
      {
        if ( (unsigned int)v11 < 0x10 )
          return (unsigned int)-1073741789;
        if ( a5 )
          return (unsigned int)-1073741811;
        if ( !v10->m256i_i32[1] )
          return (unsigned int)PpmInternalPlatformIdleVeto(v10->m256i_u32[2], v10->m256i_i8[12]);
        return (unsigned int)-1073741735;
      }
      v89 = v9 - 43;
      if ( v89 )
      {
        v90 = v89 - 1;
        if ( v90 )
        {
          v91 = v90 - 1;
          if ( !v91 )
          {
            PagesFromHiberFile = 0;
LABEL_283:
            if ( (_DWORD)v11 != 12 )
              return (unsigned int)-1073741811;
            if ( v10->m256i_i8[8] )
              PoUserShutdownInitiated();
            else
              PoUserShutdownCancelled();
            return (unsigned int)PagesFromHiberFile;
          }
          v92 = v91 - 1;
          if ( !v92 )
          {
            if ( (_DWORD)v11 != 32 || a5 )
              return (unsigned int)-1073741811;
            PopPowerRequestNotifyUserSessionAttributed(v10->m256i_i32[6], v10->m256i_i64[1], v10->m256i_i64[2], 0LL);
            return 0;
          }
          if ( v92 != 1 )
            return (unsigned int)-1073741811;
          if ( (unsigned int)v11 < 0x14 )
            return (unsigned int)-1073741789;
          if ( a5 )
            return (unsigned int)-1073741811;
          if ( !v10->m256i_i32[1] )
            return (unsigned int)PpmInternalProcessorIdleVeto(v10->m256i_u32[2], v10->m256i_u32[3], v10->m256i_i8[16]);
          return (unsigned int)-1073741735;
        }
        if ( (unsigned int)v11 < 0x90 )
          return (unsigned int)-1073741789;
        if ( a5 )
          return (unsigned int)-1073741811;
        PagesFromHiberFile = RtlCheckTokenMembership(0LL, PopTimeBrokerServiceSid, &IsMember);
        if ( PagesFromHiberFile < 0 )
          return (unsigned int)PagesFromHiberFile;
        if ( !IsMember )
          return (unsigned int)-1073741790;
        if ( !SSHSupportIsPlatformAoAc() )
          return (unsigned int)-1073741637;
        PagesFromHiberFile = RtlStringCbLengthW(&v10->m256i_u16[4], 0x80uLL, &pcbLength);
        if ( PagesFromHiberFile < 0 )
          return (unsigned int)PagesFromHiberFile;
        v95 = v10[4].m256i_i64[1];
        if ( pcbLength )
        {
          if ( !v95 )
            return (unsigned int)-1073741811;
        }
        else if ( v95 )
        {
          return (unsigned int)-1073741811;
        }
        PopAcquirePolicyLock(v94, v93);
        PopTimeBrokerExpirationReason = 0;
        PagesFromHiberFile = RtlStringCbCopyW(&PopTimeBrokerExpirationReason, 0x80uLL, &v10->m256i_u16[4]);
        PopTimeBrokerExpirationDueTime = v10[4].m256i_i64[1];
LABEL_110:
        PopReleasePolicyLock(v55, v54, v56, v57, ExplicitScope);
        return (unsigned int)PagesFromHiberFile;
      }
      if ( (((_DWORD)v11 - 8) & 0xFFFFFFFB) != 0 )
        return (unsigned int)-1073741811;
      if ( !a5 )
        return (unsigned int)-1073741789;
      v41 = (ULONGLONG *)ExAllocatePool2(0x100uLL);
      if ( !v41 )
        return (unsigned int)-1073741670;
      v97 = (_PROCESSOR_NUMBER *)&v10->m256i_u64[1];
      if ( (_DWORD)v11 != 12 )
        v97 = 0LL;
      VmPerfPriorityConfig = PpmPerfGetBrandedFrequency(v97, v41, v96);
      goto LABEL_304;
    }
    switch ( v9 )
    {
      case '1':
        if ( !a5 )
          return (unsigned int)-1073741789;
        v32 = (char *)ExAllocatePool2(0x100uLL);
        if ( !v32 )
          return (unsigned int)-1073741670;
        PowerButtonBugcheckEnabled = PopQueryPowerButtonBugcheckEnabled(v103, v102, v104, v105);
LABEL_70:
        *v32 = PowerButtonBugcheckEnabled;
        *a7 = v32;
        *a8 = 1;
        goto LABEL_71;
      case '2':
        if ( !a5 )
          return (unsigned int)-1073741789;
        v80 = (UCHAR *)ExAllocatePool2(0x100uLL);
        if ( !v80 )
          return (unsigned int)-1073741670;
        WaitType = stru_140E67200.SchedulerApcFill3[56];
        goto LABEL_229;
      case '3':
        if ( (_DWORD)a2 )
        {
          if ( (_DWORD)a2 != 1 )
            return (unsigned int)-1073741811;
          if ( (unsigned int)v11 < 0x18 )
            return (unsigned int)-1073741789;
          v100 = v10->m256i_i64[2];
          v101 = v10->m256i_i64[1];
        }
        else
        {
          if ( (unsigned int)v11 < 0x10 )
            return (unsigned int)-1073741789;
          v100 = v10->m256i_i64[1];
          v101 = v100;
        }
        PopWakeAlarmTimeOverrideAc = v101;
        PopWakeAlarmTimeOverrideDc = v100;
        return 0;
    }
    if ( v9 != 53 )
      return (unsigned int)-1073741811;
    goto LABEL_315;
  }
  if ( v9 == 31 )
  {
LABEL_237:
    if ( (_DWORD)v11 != 24 )
      return (unsigned int)-1073741811;
    if ( a5 )
    {
      v85 = v10->m256i_u32[2];
      if ( !v85 )
        return (unsigned int)-1073741811;
      v86 = 4LL * v85;
      if ( v86 > 0xFFFFFFFF )
        return (unsigned int)-1073741675;
      v87 = ExAllocatePool2(0x100uLL);
      if ( !v87 )
        return (unsigned int)-1073741670;
    }
    else
    {
      v87 = v175;
      LODWORD(v86) = 0;
    }
    switch ( v9 )
    {
      case 31:
        if ( !v10->m256i_i32[2] )
        {
LABEL_247:
          PagesFromHiberFile = -1073741811;
LABEL_261:
          if ( !v87 )
            return (unsigned int)PagesFromHiberFile;
          v39 = 0;
          v38 = (void *)v87;
          goto LABEL_86;
        }
        v88 = PopBootStatGet((__int64)v10, v87, a3, 0LL);
        break;
      case 32:
        if ( !v10->m256i_i32[2] )
          goto LABEL_247;
        v88 = PopBootStatSet((__int64)v10, v87, a3, 0LL);
        break;
      case 34:
        if ( !v10->m256i_i32[2] )
          goto LABEL_247;
        v88 = PopBootStatCheckIntegrity((__int64)v10, a2, a3, 0LL);
        break;
      case 35:
        v88 = PopBootStatRestoreDefaults(a1, a2, a3, 0LL);
        break;
      default:
        v88 = PopBootStatUnlock(a1, a2, a3, 0LL);
        break;
    }
    PagesFromHiberFile = v88;
    if ( v88 < 0 )
      goto LABEL_261;
    if ( v87 )
    {
      *a7 = (PVOID)v87;
      *a8 = v86;
      *a9 = 1;
    }
    return 0;
  }
  if ( v9 <= 20 )
  {
    if ( v9 == 20 )
    {
      if ( (_DWORD)v11 != 20 || a5 )
        return (unsigned int)-1073741811;
      TtmNotifySessionTerminalInput(v10->m256i_i32[2], v10->m256i_i32[3], v10->m256i_i8[16]);
      return 0;
    }
    if ( v9 <= 5 )
    {
      if ( v9 == 5 )
      {
        if ( (unsigned int)v11 < 0xC )
          return (unsigned int)-1073741789;
        if ( a5 )
          return (unsigned int)-1073741811;
        PoLatencySensitivityHint(v10->m256i_i32[2]);
        return 0;
      }
      if ( v9 )
      {
        v29 = v9 - 1;
        if ( v29 )
        {
          v30 = v29 - 1;
          if ( v30 )
          {
            v31 = v30 - 1;
            if ( v31 )
            {
              if ( v31 != 1 )
                return (unsigned int)-1073741811;
              if ( (unsigned int)v11 < 8 || !a5 )
                return (unsigned int)-1073741789;
              v32 = (char *)ExAllocatePool2(0x100uLL);
              if ( !v32 )
                return (unsigned int)-1073741670;
              if ( !SSHSupportIsPlatformAoAc()
                || (v71 = RtlIsMultiSessionSku() == 0, PowerButtonBugcheckEnabled = 1, v71) )
              {
                PowerButtonBugcheckEnabled = 0;
              }
              goto LABEL_70;
            }
            if ( (unsigned int)v11 < 0x10 )
              return (unsigned int)-1073741789;
            if ( a5 || (PpmIdlePolicyLock.SchedulerAssistLastYieldBoostTime & 1) == 0 )
              return (unsigned int)-1073741811;
            PopUpdateSmartUserPresencePredictions(v10->m256i_u64[1], 0);
            return 0;
          }
          PopVideoInitialized = 1;
          p_IsMember = (BOOLEAN *)&PopVideoInitialized;
          v35 = &WNF_PO_VIDEO_INITIALIALIZED;
          return (unsigned int)ZwUpdateWnfStateData(v35, p_IsMember, 1u, 0LL, 0LL, 0, 0);
        }
        if ( !a5 )
          return (unsigned int)-1073741789;
        v36 = ExAllocatePool2(0x100uLL);
        v37 = v36;
        if ( !v36 )
          return (unsigned int)-1073741670;
        PagesFromHiberFile = PopS0LowPowerIdleInfo(v36);
        if ( PagesFromHiberFile < 0 )
          goto LABEL_84;
        *a7 = (PVOID)v37;
        goto LABEL_88;
      }
      if ( (unsigned int)v11 < 0x20 || !a5 )
        return (unsigned int)-1073741789;
      v40 = (__int64 (__fastcall **)(unsigned int *))ExAllocatePool2(0x100uLL);
      v41 = (ULONGLONG *)v40;
      if ( !v40 )
        return (unsigned int)-1073741670;
      PagesFromHiberFile = PopFxPlatformRegisterInterface((__int64)v10, v40);
      if ( PagesFromHiberFile >= 0 )
      {
        *a7 = v41;
        *a8 = 16;
        goto LABEL_89;
      }
      goto LABEL_94;
    }
    v42 = v9 - 6;
    if ( !v42 )
    {
      if ( (unsigned int)v11 < 0xC )
        return (unsigned int)-1073741789;
      if ( a5 )
        return (unsigned int)-1073741811;
      return (unsigned int)PopNetUpdateStandbyRequest(v10->m256i_i8[8]);
    }
    v43 = v42 - 1;
    if ( v43 )
    {
      v44 = v43 - 1;
      if ( v44 )
      {
        v45 = v44 - 10;
        if ( v45 )
        {
          if ( v45 != 1 || (_DWORD)v11 != 20 || a5 )
            return (unsigned int)-1073741811;
          TtmNotifySessionPowerStateChange(v10->m256i_i32[2], v10->m256i_i8[12]);
          v46 = v10->m256i_u8[12];
          PopAcquirePolicyLock(v48, v47);
          if ( v10->m256i_i8[13] )
          {
            PopSetDisplayStatus((_BYTE)v46 != 0);
            PopUpdateConsoleDisplayState((_BYTE)v46 != 0, v49);
            if ( (_BYTE)v46 )
              PopPowerAggregatorNotifyDisplayPoweredOn(v51, v50, v52, v53);
          }
          PopDiagTraceSessionDisplayStateChange(
            v10->m256i_i8[12] == 0,
            v10->m256i_i32[2],
            v10->m256i_u8[13],
            v10->m256i_i32[4]);
          PagesFromHiberFile = 0;
          goto LABEL_110;
        }
        if ( SSHSupportIsPlatformAoAc() )
        {
          if ( !a5 )
            return (unsigned int)-1073741789;
          v58 = 1024;
          v59 = ExAllocatePool2(0x100uLL);
          v37 = v59;
          if ( !v59 )
            return (unsigned int)-1073741670;
          PagesFromHiberFile = PopQueryBootSessionStandbyActivationInfo(v59);
          if ( PagesFromHiberFile < 0 )
            return (unsigned int)PagesFromHiberFile;
          goto LABEL_115;
        }
        return (unsigned int)-1073741637;
      }
      if ( (unsigned int)v11 < 8 )
        return (unsigned int)-1073741789;
      if ( a5 )
        return (unsigned int)-1073741811;
      return (unsigned int)PopUpdateBackgroundCoolingStatus(v10->m256i_i8[8]);
    }
    if ( (unsigned int)v11 < 8 || !a5 )
      return (unsigned int)-1073741789;
    v60 = ($7CFE901BD4F68CA229DBA1D003ACF329 *)ExAllocatePool2(0x100uLL);
    if ( !v60 )
      return (unsigned int)-1073741670;
    *v60 = stru_140E67200.880;
    v61 = *($7CFE901BD4F68CA229DBA1D003ACF329 *)&stru_140E67200.ReadOperationCount;
    goto LABEL_124;
  }
  if ( v9 > 26 )
  {
    v72 = v9 - 27;
    if ( !v72 )
    {
      if ( (unsigned int)v11 < 0x10 )
        return (unsigned int)-1073741789;
      if ( a5 )
        return (unsigned int)-1073741811;
      PopTransitionCheckpoint(v10->m256i_i32[2], v10->m256i_i32[3]);
      return 0;
    }
    v73 = v72 - 1;
    if ( !v73 )
    {
      if ( (_DWORD)v11 != 12 )
        return (unsigned int)-1073741811;
      LODWORD(v168) = v10->m256i_i32[2];
      PopSetPowerSettingValueAcDc((__int64)&GUID_ADAPTIVE_INPUT_CONTROLLER_STATE, 4u, (__int64)&v168);
      return 0;
    }
    v74 = v73 - 1;
    if ( !v74 )
    {
      if ( (unsigned int)v11 < 8 || !a5 )
        return (unsigned int)-1073741789;
      v76 = (_OWORD *)ExAllocatePool2(0x100uLL);
      if ( !v76 )
        return (unsigned int)-1073741670;
      *v76 = *(_OWORD *)&stru_140E67200.WriteTransferCount;
      v76[1] = *(_OWORD *)&stru_140E67200.QueuedScb;
      v76[2] = *(_OWORD *)stru_140E67200.TracingPrivate;
      *a7 = v76;
      *a8 = 48;
      goto LABEL_125;
    }
    if ( v74 != 1 )
      return (unsigned int)-1073741811;
    if ( (unsigned int)v11 < 8 || !a5 )
      return (unsigned int)-1073741789;
    v75 = (_BYTE *)ExAllocatePool2(0x100uLL);
    if ( !v75 )
      return (unsigned int)-1073741670;
    *v75 = PpmPerfQosSupportedAndConfigured;
    v75[1] = PpmPerfSchedulerDirectedPerfStatesSupported;
    v75[2] = PpmPerfQosGroupPolicyDisable != 0;
    *a7 = v75;
    *a8 = 3;
LABEL_192:
    *a9 = 1;
    return 0;
  }
  if ( v9 != 26 )
  {
    v62 = v9 - 21;
    if ( v62 )
    {
      v63 = v62 - 1;
      if ( v63 )
      {
        v64 = v63 - 1;
        if ( !v64 )
        {
          if ( (_DWORD)v11 != 12 )
            return (unsigned int)-1073741811;
          LOBYTE(a1) = v10->m256i_i8[8];
          PopUpdateExternalDisplayState(a1);
          return 0;
        }
        v65 = v64 - 1;
        if ( v65 )
        {
          if ( v65 != 1 )
            return (unsigned int)-1073741811;
LABEL_139:
          if ( (unsigned int)v11 < 0xC )
            return (unsigned int)-1073741789;
          if ( a5 )
            return (unsigned int)-1073741811;
          if ( v10->m256i_i8[8] )
            PopScreenOn(a1);
          else
            PopScreenOff(30);
          return 0;
        }
        if ( (unsigned int)v11 < 0x28 )
          return (unsigned int)-1073741789;
        if ( a5 )
          return (unsigned int)-1073741811;
        v66 = v10->m256i_i32[3];
        if ( PopVideoHighPrecisionBrightnessEnabled )
        {
          if ( v66 == -1 )
            return (unsigned int)-1073741637;
        }
        else if ( v66 != -1 )
        {
          PopVideoHighPrecisionBrightnessEnabled = 1;
          ZwUpdateWnfStateData(
            &WNF_PO_BASIC_BRIGHTNESS_ENGINE_DISABLED,
            &PopVideoHighPrecisionBrightnessEnabled,
            1u,
            0LL,
            0LL,
            0,
            0);
          PopDiagTraceEventNoPayload(&POP_ETW_EVENT_BASIC_BRIGHTNESS_ENGINE_OFF);
        }
        v176[0] = v10->m256i_i32[2];
        v176[1] = v10->m256i_i32[3];
        v176[2] = v10->m256i_i32[4];
        v176[3] = v10->m256i_i32[5];
        v176[4] = v10->m256i_i32[6];
        v176[5] = v10->m256i_i32[7];
        v176[6] = v10[1].m256i_i32[0];
        v176[7] = v10[1].m256i_i32[1];
        PopBroadcastSessionInfo(4, 32, (__int64)v176);
        return 0;
      }
      if ( (unsigned int)v11 < 8 || !a5 )
        return (unsigned int)-1073741789;
      v67 = (_OWORD *)ExAllocatePool2(0x100uLL);
      if ( !v67 )
        return (unsigned int)-1073741670;
      *v67 = *(_OWORD *)&stru_140E67200.SuspendEvent.Header.WaitListHead.Blink;
      v67[1] = *(_OWORD *)&stru_140E67200.ThreadListEntry.Blink;
      v67[2] = *(_OWORD *)&stru_140E67200.MutantListHead.Blink;
      v67[3] = *(_OWORD *)&stru_140E67200.SchedulerSharedSystemSlot;
      *a7 = v67;
      *a8 = 64;
      goto LABEL_125;
    }
    if ( (unsigned int)v11 < 0x60 || !v10->m256i_i64[1] && !a5 )
      return (unsigned int)-1073741789;
    if ( v10->m256i_i32[6] == 412 )
    {
      if ( v10[2].m256i_i8[24] || !v10->m256i_i32[4] )
      {
        LODWORD(stru_140E67200.ReadTransferCount) = 0;
      }
      else
      {
        LODWORD(stru_140E67200.OtherOperationCount) = v10[1].m256i_i32[0];
        LODWORD(stru_140E67200.ReadTransferCount) = 1;
      }
    }
    v68 = 0LL;
    if ( a5 )
    {
      v68 = (char **)ExAllocatePool2(0x100uLL);
      if ( !v68 )
        return (unsigned int)-1073741670;
    }
    v69 = PopSetWatchdog((char *)v10->m256i_i64[1], &v10->m256i_u32[4], v10[2].m256i_i8[24]);
    if ( !a5 )
      return 0;
    *v68 = v69;
    *a7 = v68;
LABEL_169:
    *a8 = 8;
    goto LABEL_125;
  }
  if ( (unsigned int)v11 < 0xC )
    return (unsigned int)-1073741789;
  if ( a5 )
    return (unsigned int)-1073741811;
  PpmAcquireLock((struct _KTHREAD **)&PpmIdlePolicyLock.ThreadLock, a2, a3);
  v70 = PpmPerfQosDisableRefcount;
  if ( v10->m256i_i8[8] )
  {
    if ( PpmPerfQosDisableRefcount == -1 )
    {
      PagesFromHiberFile = -1073741675;
    }
    else
    {
      v70 = PpmPerfQosDisableRefcount + 1;
      PagesFromHiberFile = 0;
      ++PpmPerfQosDisableRefcount;
    }
    v71 = v70 == 1;
  }
  else
  {
    if ( PpmPerfQosDisableRefcount )
    {
      PagesFromHiberFile = 0;
      v70 = --PpmPerfQosDisableRefcount;
    }
    else
    {
      PagesFromHiberFile = -1073741637;
    }
    v71 = v70 == 0;
  }
  if ( v71 )
    PpmPerfUpdateDomainPolicy(0);
  else
    PpmReleaseLock((__int64 *)&PpmIdlePolicyLock.ThreadLock);
  return (unsigned int)PagesFromHiberFile;
}
