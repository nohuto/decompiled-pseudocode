/*
 * XREFs of PopPowerInformationInternal @ 0x140B6F6FC
 * Callers:
 *     NtPowerInformation @ 0x1409DE3E0 (NtPowerInformation.c)
 * Callees:
 *     PpmReleaseLock @ 0x14037AFBC (PpmReleaseLock.c)
 *     PpmAcquireLock @ 0x140394F80 (PpmAcquireLock.c)
 *     PopSetWatchdog @ 0x1403AAE58 (PopSetWatchdog.c)
 *     PopDeepSleepSetDisengageReason @ 0x1403B40FC (PopDeepSleepSetDisengageReason.c)
 *     PopDeepSleepClearDisengageReason @ 0x1403B42F8 (PopDeepSleepClearDisengageReason.c)
 *     RtlStringCbCopyW @ 0x140430A90 (RtlStringCbCopyW.c)
 *     PopQueryBootSessionStandbyActivationInfo @ 0x140435DB8 (PopQueryBootSessionStandbyActivationInfo.c)
 *     PopReleaseRwLock @ 0x14043630C (PopReleaseRwLock.c)
 *     PopAcquireRwLockExclusive @ 0x140436378 (PopAcquireRwLockExclusive.c)
 *     RtlStringCbLengthW @ 0x14047EE24 (RtlStringCbLengthW.c)
 *     RtlCheckTokenMembership @ 0x140499FD0 (RtlCheckTokenMembership.c)
 *     PopDiagTraceEventNoPayload @ 0x1404C6954 (PopDiagTraceEventNoPayload.c)
 *     SSHSupportIsPlatformAoAc @ 0x1404C9760 (SSHSupportIsPlatformAoAc.c)
 *     PopQueueWorkItem @ 0x1404CEE60 (PopQueueWorkItem.c)
 *     PopFxClearDeviceConstraints @ 0x1404E2030 (PopFxClearDeviceConstraints.c)
 *     PopDiagTraceSessionDisplayStateChange @ 0x1404EAF3C (PopDiagTraceSessionDisplayStateChange.c)
 *     PoDirectedDripsSetDeviceFlags @ 0x1404F2560 (PoDirectedDripsSetDeviceFlags.c)
 *     SSHSupportQueryIsLibraryEnabled @ 0x14050477C (SSHSupportQueryIsLibraryEnabled.c)
 *     PopPlRegisterPowerPlane @ 0x14050E2BC (PopPlRegisterPowerPlane.c)
 *     PpmInternalProcessorIdleVeto @ 0x1405194C8 (PpmInternalProcessorIdleVeto.c)
 *     PoDirectedDripsClearDeviceFlags @ 0x14052EA00 (PoDirectedDripsClearDeviceFlags.c)
 *     PpmInternalPlatformIdleVeto @ 0x14052EA84 (PpmInternalPlatformIdleVeto.c)
 *     PoLatencySensitivityHint @ 0x140530410 (PoLatencySensitivityHint.c)
 *     PopGetEnergyEstimationInfo @ 0x140601114 (PopGetEnergyEstimationInfo.c)
 *     Feature_Servicing_PDCAgentSessions__private_IsEnabledDeviceUsageNoInline @ 0x140603C28 (Feature_Servicing_PDCAgentSessions__private_IsEnabledDeviceUsageNoInline.c)
 *     PpmPerfGetVmCppcConfig @ 0x14060656C (PpmPerfGetVmCppcConfig.c)
 *     PpmPerfGetVmPerfConfig @ 0x1406068B4 (PpmPerfGetVmPerfConfig.c)
 *     PpmPerfGetVmPerfPriorityConfig @ 0x140606B48 (PpmPerfGetVmPerfPriorityConfig.c)
 *     PopShutdownListenerRemoveCallback @ 0x14060BBE0 (PopShutdownListenerRemoveCallback.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x140727030 (ZwUpdateWnfStateData.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     PopBootStatUnlock @ 0x140770008 (PopBootStatUnlock.c)
 *     PopDirectedDripsUmPowerInformationInternal @ 0x140772F20 (PopDirectedDripsUmPowerInformationInternal.c)
 *     PopAdaptiveGetSystemInitiatedRebootTargetState @ 0x140773E40 (PopAdaptiveGetSystemInitiatedRebootTargetState.c)
 *     PopReadPagesFromHiberFile @ 0x140775074 (PopReadPagesFromHiberFile.c)
 *     PopDiagTraceSleepReliabilityDiagConfigUpdate @ 0x140775664 (PopDiagTraceSleepReliabilityDiagConfigUpdate.c)
 *     PopFxPlatformRegisterInterface @ 0x140776E0C (PopFxPlatformRegisterInterface.c)
 *     PoUserShutdownCancelled @ 0x14077B960 (PoUserShutdownCancelled.c)
 *     PopDiagTraceExternalDisplayState @ 0x14077BE68 (PopDiagTraceExternalDisplayState.c)
 *     PopUpdateSmartUserPresencePredictions @ 0x14077C938 (PopUpdateSmartUserPresencePredictions.c)
 *     PopCheckTestsigningEnabled @ 0x1407C8B7C (PopCheckTestsigningEnabled.c)
 *     PopUpdateBackgroundCoolingStatus @ 0x1407CC03C (PopUpdateBackgroundCoolingStatus.c)
 *     PopHandleProvIdentifierRequest @ 0x1407CC938 (PopHandleProvIdentifierRequest.c)
 *     PpmPerfGetVmPerfPrioritySupport @ 0x1407CE2A0 (PpmPerfGetVmPerfPrioritySupport.c)
 *     PopBootStatCheckIntegrity @ 0x1407DAC78 (PopBootStatCheckIntegrity.c)
 *     PopScreenOn @ 0x1407DB930 (PopScreenOn.c)
 *     PopAdaptiveSetSystemInitiatedRebootTargetStateOverride @ 0x1407DDC88 (PopAdaptiveSetSystemInitiatedRebootTargetStateOverride.c)
 *     PopSessionConnectionChangeV2 @ 0x1407DDEB4 (PopSessionConnectionChangeV2.c)
 *     RtlCapabilityCheckForSingleSessionSku @ 0x140803F90 (RtlCapabilityCheckForSingleSessionSku.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x1409034B4 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     SeSinglePrivilegeCheck @ 0x140932280 (SeSinglePrivilegeCheck.c)
 *     PopEsQueueStateEvaluation @ 0x140947B44 (PopEsQueueStateEvaluation.c)
 *     PspIsContextAdmin @ 0x140958640 (PspIsContextAdmin.c)
 *     PopScreenOff @ 0x140A387B4 (PopScreenOff.c)
 *     TtmiGetSessionId @ 0x140A3A3A8 (TtmiGetSessionId.c)
 *     PopSessionWinlogonNotification @ 0x140A3B184 (PopSessionWinlogonNotification.c)
 *     PopSetDisplayStatus @ 0x140A3B900 (PopSetDisplayStatus.c)
 *     PopUserPresenceHostStateChange @ 0x140A3BB64 (PopUserPresenceHostStateChange.c)
 *     PopUpdateConsoleDisplayState @ 0x140A3CD5C (PopUpdateConsoleDisplayState.c)
 *     PopAdaptiveGetSessionState @ 0x140A3D7A0 (PopAdaptiveGetSessionState.c)
 *     PopSetPowerSettingValueAcDc @ 0x140A3E450 (PopSetPowerSettingValueAcDc.c)
 *     RtlIsMultiSessionSku @ 0x140A91D70 (RtlIsMultiSessionSku.c)
 *     PpmPerfUpdateDomainPolicy @ 0x140A9D254 (PpmPerfUpdateDomainPolicy.c)
 *     PopBroadcastSessionInfo @ 0x140ABC7F4 (PopBroadcastSessionInfo.c)
 *     PpmPerfGetFrequencyBandStats @ 0x140AC9B88 (PpmPerfGetFrequencyBandStats.c)
 *     PopBootStatSet @ 0x140ACB570 (PopBootStatSet.c)
 *     PopManageTransitionRecordRequest @ 0x140AE4334 (PopManageTransitionRecordRequest.c)
 *     PopNotifyWin32kRequestStatus @ 0x140AEB8E8 (PopNotifyWin32kRequestStatus.c)
 *     PopS0LowPowerIdleInfo @ 0x140AF9A54 (PopS0LowPowerIdleInfo.c)
 *     PpmIdleGetConcurrencyStats @ 0x140AFCE20 (PpmIdleGetConcurrencyStats.c)
 *     PpmIdleGetPackageIdleIntervalStats @ 0x140B03E2C (PpmIdleGetPackageIdleIntervalStats.c)
 *     PopIsRunningAsLocalSystem @ 0x140B104C4 (PopIsRunningAsLocalSystem.c)
 *     PopFanReadFanNoiseInfo @ 0x140B1A538 (PopFanReadFanNoiseInfo.c)
 *     PopTransitionCheckpoint @ 0x140B1B69C (PopTransitionCheckpoint.c)
 *     PpmPerfQueryProcMeasurementValues @ 0x140B23D20 (PpmPerfQueryProcMeasurementValues.c)
 *     PopSuspendResumeInvocation @ 0x140B35570 (PopSuspendResumeInvocation.c)
 *     PopAcquireTransitionLock @ 0x140B39914 (PopAcquireTransitionLock.c)
 *     PopPowerAggregatorNotifyDisplayPoweredOn @ 0x140B462E8 (PopPowerAggregatorNotifyDisplayPoweredOn.c)
 *     PoUserShutdownInitiated @ 0x140B46F30 (PoUserShutdownInitiated.c)
 *     PopReleaseTransitionLock @ 0x140B4C040 (PopReleaseTransitionLock.c)
 *     PopBootStatRestoreDefaults @ 0x140B516E4 (PopBootStatRestoreDefaults.c)
 *     PopQueryPowerButtonBugcheckEnabled @ 0x140B56830 (PopQueryPowerButtonBugcheckEnabled.c)
 *     PopReadResumeContext @ 0x140B6109C (PopReadResumeContext.c)
 *     PopPowerRequestNotifyUserSessionAttributed @ 0x140B640B4 (PopPowerRequestNotifyUserSessionAttributed.c)
 *     PpmPerfGetBrandedFrequency @ 0x140B64A0C (PpmPerfGetBrandedFrequency.c)
 *     TtmNotifySessionPowerStateChange @ 0x140B65774 (TtmNotifySessionPowerStateChange.c)
 *     PopBootStatGet @ 0x140B67DA4 (PopBootStatGet.c)
 *     PopNetUpdateStandbyRequest @ 0x140B68A58 (PopNetUpdateStandbyRequest.c)
 *     TtmNotifySessionTerminalInput @ 0x140B697BC (TtmNotifySessionTerminalInput.c)
 *     PpmPerfGetVmPerfControlSupport @ 0x140B6CD94 (PpmPerfGetVmPerfControlSupport.c)
 *     PopAcquirePolicyLock @ 0x140C04BF0 (PopAcquirePolicyLock.c)
 *     PopReleasePolicyLock @ 0x140C04C40 (PopReleasePolicyLock.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopPowerInformationInternal(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        _BYTE *a5,
        unsigned int a6,
        PVOID *a7,
        _DWORD *a8,
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
  char IsRunningAsLocalSystem; // al
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
  struct _LIST_ENTRY **p_Blink; // rdx
  __int64 *v35; // rcx
  __int64 v36; // rax
  _DWORD *v37; // rdi
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
  int v58; // r14d
  __int64 v59; // rax
  _OWORD *v60; // rax
  __int128 v61; // xmm1
  int v62; // ebx
  int v63; // ebx
  int v64; // ebx
  int v65; // ebx
  __int32 v66; // ecx
  char v67; // bl
  __int64 v68; // rdx
  __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // rax
  char **v73; // rbx
  char *v74; // rax
  int v75; // ecx
  bool v76; // zf
  int v77; // ebx
  int v78; // ebx
  int v79; // ebx
  _BYTE *v80; // rax
  _OWORD *v81; // rax
  __int8 v82; // bl
  int *v83; // rcx
  int v84; // eax
  char *Pool2; // rcx
  __int64 v86; // rax
  __int64 v87; // rax
  __int64 v88; // rax
  char Flink; // al
  unsigned __int32 v90; // eax
  unsigned __int64 v91; // rsi
  __int64 v92; // r14
  int v93; // eax
  int v94; // ebx
  int v95; // ebx
  int v96; // ebx
  int v97; // ebx
  unsigned int v98; // r8d
  struct _PROCESSOR_NUMBER *v99; // rcx
  int VmPerfPriorityConfig; // eax
  bool v101; // sf
  __int64 v102; // rax
  __int64 v103; // rcx
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // r8
  struct _KLOCK_ENTRIES *v107; // r9
  ULONG_PTR v108; // rcx
  unsigned __int64 v109; // rbx
  unsigned __int64 *v110; // rax
  int v111; // ebx
  int v112; // ebx
  int v113; // ebx
  int v114; // ebx
  char v115; // bl
  ULONGLONG *v116; // rax
  int VmCppcConfig; // eax
  __int64 v118; // rax
  __int64 v119; // rdx
  unsigned int v120; // r8d
  void *v121; // rbx
  __int64 v122; // rax
  __int64 v123; // rdx
  unsigned int v124; // r8d
  int FrequencyBandStats; // eax
  ULONGLONG *v126; // rax
  int v127; // ebx
  int v128; // ebx
  int v129; // ebx
  int v130; // ebx
  unsigned int v131; // eax
  unsigned int v132; // eax
  unsigned int v133; // esi
  unsigned int v134; // edi
  _DWORD *v135; // rcx
  _DWORD *v136; // rax
  _DWORD *v137; // rbx
  PBOOLEAN i; // rax
  __int64 v139; // rcx
  int v140; // eax
  int v141; // ebx
  int v142; // ebx
  int v143; // ebx
  _DWORD *v144; // rax
  __int64 v145; // rax
  struct _KLOCK_ENTRIES *v146; // r9
  __int64 v147; // rax
  struct _KLOCK_ENTRIES *v148; // r9
  int v149; // ebx
  int v150; // ebx
  int v151; // ebx
  int v152; // ebx
  __int64 v153; // rax
  __int64 v154; // rdx
  unsigned int v155; // r8d
  void *v156; // rbx
  _DWORD *v157; // rax
  __int64 v158; // rax
  ULONGLONG *v159; // rax
  unsigned int v160; // r8d
  unsigned int SessionId; // eax
  __int64 v162; // rcx
  unsigned int v163; // ecx
  __int64 v164; // [rsp+20h] [rbp-89h]
  __int8 v165; // [rsp+40h] [rbp-69h] BYREF
  char v166; // [rsp+41h] [rbp-68h] BYREF
  KPROCESSOR_MODE PreviousMode; // [rsp+42h] [rbp-67h]
  int v168; // [rsp+44h] [rbp-65h] BYREF
  __int64 v169; // [rsp+48h] [rbp-61h] BYREF
  int v170; // [rsp+50h] [rbp-59h] BYREF
  int v171; // [rsp+54h] [rbp-55h] BYREF
  size_t pcbLength; // [rsp+58h] [rbp-51h]
  void *v173; // [rsp+60h] [rbp-49h] BYREF
  void *v174; // [rsp+68h] [rbp-41h] BYREF
  UNICODE_STRING v175; // [rsp+70h] [rbp-39h] BYREF
  __int64 v176; // [rsp+80h] [rbp-29h]
  _DWORD v177[8]; // [rsp+88h] [rbp-21h] BYREF

  v9 = a1;
  v10 = (__m256i *)a3;
  v175 = 0LL;
  v11 = a4;
  v12 = 0LL;
  *a7 = 0LL;
  *a8 = 0;
  *a9 = 0;
  LODWORD(v169) = a2;
  v166 = 0;
  v165 = 0;
  LOBYTE(a1) = KeGetCurrentThread()->PreviousMode;
  pcbLength = 0LL;
  v170 = 0;
  v173 = 0LL;
  v174 = 0LL;
  v171 = 0;
  v176 = 0LL;
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
LABEL_430:
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
        v175.Buffer = L"systemManagement";
        v175.Length = -2 - v26;
        v175.MaximumLength = -v26;
LABEL_39:
        PagesFromHiberFile = RtlCapabilityCheckForSingleSessionSku(0LL, &v175, &v166);
        if ( PagesFromHiberFile < 0 )
          return (unsigned int)PagesFromHiberFile;
        if ( !v166 )
          return (unsigned int)-1073741790;
        goto LABEL_139;
    }
    a2 = (unsigned int)v169;
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
    if ( v9 <= 77 )
    {
      if ( v9 == 77 )
      {
LABEL_395:
        if ( (_DWORD)v11 != 12 )
          return (unsigned int)-1073741789;
        if ( !a5 )
          return (unsigned int)-1073741811;
        PagesFromHiberFile = PpmIdleGetConcurrencyStats(v9, v10->m256i_u16[4], (__int64 *)&v174, &v171);
        if ( PagesFromHiberFile < 0 )
          return (unsigned int)PagesFromHiberFile;
        *a7 = v174;
        *a8 = v171;
        goto LABEL_89;
      }
      if ( v9 <= 66 )
      {
        if ( v9 == 66 )
          return (unsigned int)-1073741637;
        if ( v9 > 61 )
        {
          if ( v9 == 62 )
          {
            if ( !a5 )
              return (unsigned int)-1073741789;
            Pool2 = (char *)ExAllocatePool2(0x100uLL);
            if ( !Pool2 )
              return (unsigned int)-1073741670;
            Flink = (char)stru_140E66FF0.GlobalForegroundListEntry.Flink;
            goto LABEL_229;
          }
          if ( v9 == 63 )
          {
            if ( !a5 )
              return (unsigned int)-1073741811;
            v109 = (unsigned __int64)&SshpRoutineBlock & -(__int64)SSHSupportQueryIsLibraryEnabled();
            if ( !v109 )
              return (unsigned int)-1073741637;
            v110 = (unsigned __int64 *)ExAllocatePool2(0x100uLL);
            if ( !v110 )
              return (unsigned int)-1073741670;
            *v110 = v109;
            *a7 = v110;
            goto LABEL_169;
          }
          if ( v9 != 64 )
          {
            if ( (_DWORD)v11 == 16 )
            {
              v108 = v10->m256i_u64[1];
              if ( v108 )
              {
                PagesFromHiberFile = PopFxClearDeviceConstraints(v108);
                v23 = 0;
                if ( PagesFromHiberFile < 0 )
                  return (unsigned int)PagesFromHiberFile;
                return v23;
              }
            }
            return (unsigned int)-1073741811;
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
            PagesFromHiberFile = PopReadResumeContext(&v170, &v173);
            PopReleaseTransitionLock(8);
            if ( PagesFromHiberFile < 0 )
              return (unsigned int)PagesFromHiberFile;
            *a7 = v173;
            *a8 = v170;
LABEL_125:
            *a9 = 1;
            return 0;
          }
        }
        goto LABEL_308;
      }
      if ( v9 <= 72 )
      {
        if ( v9 != 72 )
        {
          v111 = v9 - 67;
          if ( !v111 )
          {
            *a8 = 0;
            *a7 = 0LL;
            v83 = (int *)ExAllocatePool2(0x100uLL);
            if ( !v83 )
              return (unsigned int)-1073741670;
            v84 = PopDisableInboxPepGeneratedConstraintsOverride;
            goto LABEL_217;
          }
          v112 = v111 - 1;
          if ( !v112 )
            return PopIdleScanInterval == 0 ? 0xC00000BB : 0;
          v113 = v112 - 1;
          if ( v113 )
          {
            v114 = v113 - 1;
            if ( v114 )
            {
              if ( v114 != 1 || (_DWORD)v11 != 12 )
                return (unsigned int)-1073741811;
              v115 = v10->m256i_i8[8];
              PopAcquireRwLockExclusive(&PopModernStandbyStateNotify.KernelWaitTime, a2, a3, 0LL);
              if ( PopSleepReliabilityDetailedDiagEnabled != v115 )
              {
                PopSleepReliabilityDetailedDiagEnabled = v115;
                PopDiagTraceSleepReliabilityDiagConfigUpdate();
              }
              PopReleaseRwLock((struct _KTHREAD *)&PopModernStandbyStateNotify.KernelWaitTime);
              return 0;
            }
            if ( (unsigned int)v11 < 0xC )
              return (unsigned int)-1073741789;
            if ( v10->m256i_i32[1] > 2u )
              return (unsigned int)-1073741637;
            if ( v10->m256i_i32[1] == 2 && (unsigned int)v11 < 0x20 )
              return (unsigned int)-1073741789;
            if ( !a5 )
              return (unsigned int)-1073741811;
            v116 = (ULONGLONG *)ExAllocatePool2(0x100uLL);
            v41 = v116;
            if ( !v116 )
              return (unsigned int)-1073741670;
            if ( v10->m256i_i32[1] == 2 )
              VmCppcConfig = PpmPerfGetVmCppcConfig(
                               v10->m256i_u32[3],
                               v10->m256i_u32[2],
                               v10->m256i_u32[4],
                               v10->m256i_u32[5],
                               v10->m256i_i32[6],
                               v10->m256i_i8[28],
                               v116);
            else
              VmCppcConfig = PpmPerfGetVmPerfConfig(v10->m256i_i32[2], v116);
            PagesFromHiberFile = VmCppcConfig;
            v101 = VmCppcConfig < 0;
LABEL_298:
            if ( !v101 )
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
          if ( !a5 )
            return (unsigned int)-1073741811;
          v118 = ExAllocatePool2(0x100uLL);
          v121 = (void *)v118;
          if ( !v118 )
            return (unsigned int)-1073741670;
          PpmPerfGetVmPerfControlSupport(v118, v119, v120);
          *a7 = v121;
          *a8 = a6 < 0x14 ? 1 : 20;
LABEL_71:
          *a9 = 1;
          return 0;
        }
        if ( !a5 )
          return (unsigned int)-1073741811;
        v58 = 2304;
        v122 = ExAllocatePool2(0x100uLL);
        v37 = (_DWORD *)v122;
        if ( !v122 )
          return (unsigned int)-1073741670;
        FrequencyBandStats = PpmPerfGetFrequencyBandStats(v122, v123, v124);
        goto LABEL_390;
      }
      if ( v9 != 73 )
      {
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
          v126 = (ULONGLONG *)ExAllocatePool2(0x100uLL);
          v41 = v126;
          if ( !v126 )
            return (unsigned int)-1073741670;
          PagesFromHiberFile = PpmIdleGetPackageIdleIntervalStats(v9, v10->m256i_u16[4], v126);
          if ( PagesFromHiberFile < 0 )
            goto LABEL_94;
          *a7 = v41;
LABEL_116:
          *a8 = v58;
          goto LABEL_89;
        }
        goto LABEL_395;
      }
      if ( (unsigned int)v11 < 0xC )
        return (unsigned int)-1073741789;
      if ( a5 )
        return (unsigned int)-1073741811;
      PopUserPresenceHostStateChange(v10->m256i_i32[2]);
      return 0;
    }
    if ( v9 > 88 )
    {
      if ( v9 > 94 )
      {
        if ( v9 == 95 || v9 == 96 )
        {
          if ( (_DWORD)v11 == 12 && !a5 && !v10->m256i_i32[1] )
          {
            v163 = v10->m256i_u32[2];
            if ( v163 < 0x20 )
            {
              LOBYTE(a2) = v9 == 95;
              return (unsigned int)PopNotifyWin32kRequestStatus(v163, a2, a3, 0LL);
            }
          }
          return (unsigned int)-1073741811;
        }
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
        if ( v9 != 98 || !(unsigned int)Feature_Servicing_PDCAgentSessions__private_IsEnabledDeviceUsageNoInline() )
          return (unsigned int)-1073741811;
        v165 = 0;
        PagesFromHiberFile = SeIsAppContainerOrIdentifyLevelContext(0LL, &v165);
        if ( PagesFromHiberFile < 0 )
          return (unsigned int)PagesFromHiberFile;
        if ( v165 )
          return (unsigned int)-1073741790;
        if ( (_DWORD)v169 )
          return (unsigned int)-1073741811;
        if ( (_DWORD)v11 == 48 && a5 && a6 == 16 )
        {
          SessionId = TtmiGetSessionId();
          PopSessionConnectionChangeV2(SessionId, (__int64)&v10->m256i_i64[1], (__int64)&v10->m256i_i64[2], (__int64)a5);
          v162 = (unsigned int)TtmiGetSessionId();
          if ( qword_140E67558 )
            guard_dispatch_icall_no_overrides(v162, 0LL);
          return 0;
        }
        else
        {
          return (unsigned int)-1073741306;
        }
      }
      if ( v9 == 94 )
      {
        if ( (unsigned int)v11 < 0xC )
          return (unsigned int)-1073741789;
        if ( !a5 )
          return (unsigned int)-1073741811;
        v159 = (ULONGLONG *)ExAllocatePool2(0x100uLL);
        v41 = v159;
        if ( !v159 )
          return (unsigned int)-1073741670;
        VmPerfPriorityConfig = PpmPerfGetVmPerfPriorityConfig(v10->m256i_u32[2], v159, v160);
LABEL_297:
        PagesFromHiberFile = VmPerfPriorityConfig;
        v101 = VmPerfPriorityConfig < 0;
        goto LABEL_298;
      }
      v149 = v9 - 89;
      if ( !v149 )
      {
        if ( !a5 || a6 != 20 )
          return (unsigned int)-1073741789;
        PopAcquirePolicyLock(a1, a2);
        PagesFromHiberFile = 0;
        if ( stru_140F10828.WaitBlockFill5[43] )
        {
          v158 = ExAllocatePool2(0x100uLL);
          if ( v158 )
          {
            *(_OWORD *)v158 = *(_OWORD *)&PopWeakChargerLock.WaitBlockList;
            v55 = *((unsigned int *)&PopWeakChargerLock.SwapListEntry + 2);
            *(_DWORD *)(v158 + 16) = *((_DWORD *)&PopWeakChargerLock.SwapListEntry + 2);
            *a7 = (PVOID)v158;
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
LABEL_110:
        PopReleasePolicyLock(v55, v54, v56, v57, v164);
        return (unsigned int)PagesFromHiberFile;
      }
      v150 = v149 - 1;
      if ( !v150 )
      {
        if ( v10 && (unsigned int)v11 >= 0x14 && (!a5 || !a6) )
          return (unsigned int)PopSuspendResumeInvocation((__int64)v10);
        return (unsigned int)-1073741811;
      }
      v151 = v150 - 1;
      if ( v151 )
      {
        v152 = v151 - 1;
        if ( !v152 )
          return (unsigned int)PopHandleProvIdentifierRequest((__int64)v10, v11, (__int64)a5, a6, a7, a8);
        if ( v152 != 1 )
          return (unsigned int)-1073741811;
        if ( (_DWORD)a2 )
          return (unsigned int)-1073741637;
        if ( !a5 )
          return (unsigned int)-1073741811;
        v153 = ExAllocatePool2(0x100uLL);
        v156 = (void *)v153;
        if ( !v153 )
          return (unsigned int)-1073741670;
        PpmPerfGetVmPerfPrioritySupport(v153, v154, v155);
        *a7 = v156;
        *a8 = 8;
        goto LABEL_71;
      }
      if ( !a5 || a6 < 0x24 )
        return (unsigned int)-1073741789;
      v157 = (_DWORD *)ExAllocatePool2(0x100uLL);
      v37 = v157;
      if ( !v157 )
        return (unsigned int)-1073741670;
      PagesFromHiberFile = PopGetEnergyEstimationInfo(v157);
      if ( PagesFromHiberFile >= 0 )
      {
        *a7 = v37;
        PagesFromHiberFile = 0;
        *a8 = 36;
        *a9 = 1;
        return (unsigned int)PagesFromHiberFile;
      }
    }
    else
    {
      if ( v9 == 88 )
        return (unsigned int)PopManageTransitionRecordRequest(a1, (__int64)v10, (unsigned int)v11);
      if ( v9 <= 83 )
      {
        if ( v9 == 83 )
        {
          if ( (_DWORD)v11 == 16 && v10 && !a6 && !a5 )
            return (unsigned int)PopAdaptiveSetSystemInitiatedRebootTargetStateOverride((__int64)v10);
          return (unsigned int)-1073741811;
        }
        v127 = v9 - 78;
        if ( !v127 )
        {
          if ( !a5 )
            return (unsigned int)-1073741811;
          v137 = (_DWORD *)ExAllocatePool2(0x100uLL);
          if ( !v137 )
            return (unsigned int)-1073741670;
          for ( i = *(PBOOLEAN *)((char *)&Mm64BitPhysicalAddress + 2); ; i = *(PBOOLEAN *)i )
          {
            if ( i == (PBOOLEAN)((char *)&Mm64BitPhysicalAddress + 2) )
            {
              v140 = 0;
              goto LABEL_451;
            }
            v139 = *((_QWORD *)i + 54);
            if ( v139 )
              break;
          }
          v140 = guard_dispatch_icall_no_overrides(v139, (__int64)&Mm64BitPhysicalAddress + 2);
LABEL_451:
          *v137 = v140;
          *a7 = v137;
          *a8 = 4;
          goto LABEL_71;
        }
        v128 = v127 - 1;
        if ( !v128 )
        {
          if ( !v10 || (_DWORD)v11 != 12 )
            return (unsigned int)-1073741811;
          v133 = v10->m256i_u32[2];
          v168 = 0;
          PagesFromHiberFile = PpmPerfQueryProcMeasurementValues(v133, (__int64)&v168);
          if ( PagesFromHiberFile < 0 )
            return (unsigned int)PagesFromHiberFile;
          v134 = 24 * v168 + 8;
          if ( a6 != 4 )
          {
            if ( a6 < v134 )
              return (unsigned int)-1073741789;
            v136 = (_DWORD *)ExAllocatePool2(0x40uLL);
            if ( v136 )
            {
              *a8 = v134;
              *a9 = 1;
              *a7 = v136;
              *v136 = v168;
              return (unsigned int)PpmPerfQueryProcMeasurementValues(v133, (__int64)&v168);
            }
            return (unsigned int)-1073741670;
          }
          v135 = (_DWORD *)ExAllocatePool2(0x100uLL);
          if ( !v135 )
            return (unsigned int)-1073741670;
          *v135 = v168;
          *a7 = v135;
          *a8 = 4;
LABEL_89:
          *a9 = 1;
          return (unsigned int)PagesFromHiberFile;
        }
        v129 = v128 - 1;
        if ( !v129 )
          goto LABEL_430;
        v130 = v129 - 1;
        if ( v130 )
        {
          if ( v130 != 1 || (_DWORD)v11 != 12 || !v10 || a6 || a5 )
            return (unsigned int)-1073741811;
          v169 = (unsigned int)TtmiGetSessionId();
          BYTE5(v169) = v10->m256i_i8[8];
          BYTE4(v169) = 1;
          v131 = TtmiGetSessionId();
          PopSessionWinlogonNotification(v131, (__int64)&v169);
        }
        else
        {
          if ( (_DWORD)v11 != 40 || !v10 || a6 != 16 || !a5 )
            return (unsigned int)-1073741811;
          v132 = TtmiGetSessionId();
          PopAdaptiveGetSessionState(v132, (__int64)&v10->m256i_i64[1], (__int64)a5);
        }
        return 0;
      }
      v141 = v9 - 84;
      if ( !v141 )
      {
        if ( !a5 )
          return (unsigned int)-1073741811;
        v58 = 160;
        v147 = ExAllocatePool2(0x100uLL);
        v37 = (_DWORD *)v147;
        if ( !v147 )
          return (unsigned int)-1073741670;
        FrequencyBandStats = PopFanReadFanNoiseInfo(84, v147, 160LL, v148);
LABEL_390:
        PagesFromHiberFile = FrequencyBandStats;
        if ( FrequencyBandStats >= 0 )
        {
LABEL_115:
          *a7 = v37;
          goto LABEL_116;
        }
        goto LABEL_84;
      }
      v142 = v141 - 1;
      if ( v142 )
      {
        v143 = v142 - 1;
        if ( v143 )
        {
          if ( v143 == 1 && v10 && (_DWORD)v11 == 24 && !a5 )
            return (unsigned int)PopShutdownListenerRemoveCallback(v10);
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
      v145 = ExAllocatePool2(0x100uLL);
      v37 = (_DWORD *)v145;
      if ( !v145 )
        return (unsigned int)-1073741670;
      PagesFromHiberFile = PopFanReadFanNoiseInfo(85, v145, 88LL, v146);
      if ( PagesFromHiberFile >= 0 )
      {
        *a7 = v37;
        *a8 = 88;
        goto LABEL_89;
      }
    }
LABEL_84:
    v38 = v37;
LABEL_85:
    v39 = 544040269;
LABEL_86:
    ExFreePoolWithTag(v38, v39);
    return (unsigned int)PagesFromHiberFile;
  }
  if ( v9 == 54 )
  {
LABEL_308:
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
        v60 = (_OWORD *)ExAllocatePool2(0x100uLL);
        if ( !v60 )
          return (unsigned int)-1073741670;
        *v60 = *(_OWORD *)&stru_140E66FF0.WaitBlockFill11[160];
        v61 = *(_OWORD *)&stru_140E66FF0.Spare18;
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
                v82 = v10->m256i_i8[8];
                PopAcquireRwLockExclusive(
                  (unsigned __int64 *)&PopModernStandbyStateNotify.MutantListHead.Blink,
                  a2,
                  a3,
                  0LL);
                LOBYTE(PopModernStandbyStateNotify.SchedulerSharedSystemSlot) = v82;
                PopReleaseRwLock((struct _KTHREAD *)&PopModernStandbyStateNotify.MutantListHead.Blink);
                PopEsQueueStateEvaluation(0);
                return 0;
              }
            }
          }
          goto LABEL_237;
        }
        if ( (unsigned int)v11 < 8 || !a5 )
          return (unsigned int)-1073741789;
        v83 = (int *)ExAllocatePool2(0x100uLL);
        if ( !v83 )
          return (unsigned int)-1073741670;
        v84 = qword_140F0FB64;
LABEL_217:
        *v83 = v84;
        *a7 = v83;
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
          p_Blink = (struct _LIST_ENTRY **)&v165;
          v165 = v10->m256i_i8[8];
          v35 = &WNF_PO_WAKE_ON_VOICE_STATE;
          return (unsigned int)ZwUpdateWnfStateData((__int64)v35, (__int64)p_Blink);
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
      Pool2 = (char *)ExAllocatePool2(0x100uLL);
      if ( Pool2 )
      {
        v86 = v10->m256i_i64[1];
        if ( !v86
          || (v87 = *(_QWORD *)(*(_QWORD *)(v86 + 312) + 40LL)) == 0
          || (v88 = *(_QWORD *)(v87 + 80)) == 0
          || (v76 = *(_QWORD *)(v88 + 64) == 0LL, Flink = 1, v76) )
        {
          Flink = 0;
        }
LABEL_229:
        *Pool2 = Flink;
        *a7 = Pool2;
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
      v94 = v9 - 43;
      if ( v94 )
      {
        v95 = v94 - 1;
        if ( !v95 )
        {
          if ( (unsigned int)v11 < 0x90 )
            return (unsigned int)-1073741789;
          if ( a5 )
            return (unsigned int)-1073741811;
          PagesFromHiberFile = RtlCheckTokenMembership(0LL, *(void **)&stru_140F10828.WaitBlockFill11[112]);
          if ( PagesFromHiberFile < 0 )
            return (unsigned int)PagesFromHiberFile;
          return (unsigned int)-1073741790;
        }
        v96 = v95 - 1;
        if ( !v96 )
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
        v97 = v96 - 1;
        if ( !v97 )
        {
          if ( (_DWORD)v11 != 32 || a5 )
            return (unsigned int)-1073741811;
          PopPowerRequestNotifyUserSessionAttributed(v10->m256i_i32[6], v10->m256i_i64[1], v10->m256i_i64[2], 0LL);
          return 0;
        }
        if ( v97 != 1 )
          return (unsigned int)-1073741811;
        if ( (unsigned int)v11 < 0x14 )
          return (unsigned int)-1073741789;
        if ( a5 )
          return (unsigned int)-1073741811;
        if ( !v10->m256i_i32[1] )
          return (unsigned int)PpmInternalProcessorIdleVeto(v10->m256i_u32[2], v10->m256i_u32[3], v10->m256i_i8[16]);
        return (unsigned int)-1073741735;
      }
      if ( (((_DWORD)v11 - 8) & 0xFFFFFFFB) != 0 )
        return (unsigned int)-1073741811;
      if ( !a5 )
        return (unsigned int)-1073741789;
      v41 = (ULONGLONG *)ExAllocatePool2(0x100uLL);
      if ( !v41 )
        return (unsigned int)-1073741670;
      v99 = (struct _PROCESSOR_NUMBER *)&v10->m256i_u64[1];
      if ( (_DWORD)v11 != 12 )
        v99 = 0LL;
      VmPerfPriorityConfig = PpmPerfGetBrandedFrequency(v99, v41, v98);
      goto LABEL_297;
    }
    switch ( v9 )
    {
      case '1':
        if ( !a5 )
          return (unsigned int)-1073741789;
        v32 = (char *)ExAllocatePool2(0x100uLL);
        if ( !v32 )
          return (unsigned int)-1073741670;
        PowerButtonBugcheckEnabled = PopQueryPowerButtonBugcheckEnabled(v105, v104, v106, v107);
LABEL_70:
        *v32 = PowerButtonBugcheckEnabled;
        *a7 = v32;
        *a8 = 1;
        goto LABEL_71;
      case '2':
        if ( !a5 )
          return (unsigned int)-1073741789;
        Pool2 = (char *)ExAllocatePool2(0x100uLL);
        if ( !Pool2 )
          return (unsigned int)-1073741670;
        Flink = (char)stru_140E66FF0.SystemAffinityTokenListHead.Next;
        goto LABEL_229;
      case '3':
        if ( (_DWORD)a2 )
        {
          if ( (_DWORD)a2 != 1 )
            return (unsigned int)-1073741811;
          if ( (unsigned int)v11 < 0x18 )
            return (unsigned int)-1073741789;
          v102 = v10->m256i_i64[2];
          v103 = v10->m256i_i64[1];
        }
        else
        {
          if ( (unsigned int)v11 < 0x10 )
            return (unsigned int)-1073741789;
          v102 = v10->m256i_i64[1];
          v103 = v102;
        }
        unk_140F10DE0 = v103;
        unk_140F10DE8 = v102;
        return 0;
    }
    if ( v9 != 53 )
      return (unsigned int)-1073741811;
    goto LABEL_308;
  }
  if ( v9 == 31 )
  {
LABEL_237:
    if ( (_DWORD)v11 != 24 )
      return (unsigned int)-1073741811;
    if ( a5 )
    {
      v90 = v10->m256i_u32[2];
      if ( !v90 )
        return (unsigned int)-1073741811;
      v91 = 4LL * v90;
      if ( v91 > 0xFFFFFFFF )
        return (unsigned int)-1073741675;
      v92 = ExAllocatePool2(0x100uLL);
      if ( !v92 )
        return (unsigned int)-1073741670;
    }
    else
    {
      v92 = v176;
      LODWORD(v91) = 0;
    }
    switch ( v9 )
    {
      case 31:
        if ( !v10->m256i_i32[2] )
        {
LABEL_247:
          PagesFromHiberFile = -1073741811;
LABEL_261:
          if ( !v92 )
            return (unsigned int)PagesFromHiberFile;
          v39 = 0;
          v38 = (void *)v92;
          goto LABEL_86;
        }
        v93 = PopBootStatGet((__int64)v10, v92, a3, 0LL);
        break;
      case 32:
        if ( !v10->m256i_i32[2] )
          goto LABEL_247;
        v93 = PopBootStatSet((__int64)v10, v92, a3, 0LL);
        break;
      case 34:
        if ( !v10->m256i_i32[2] )
          goto LABEL_247;
        v93 = PopBootStatCheckIntegrity((__int64)v10, a2, a3, 0LL);
        break;
      case 35:
        v93 = PopBootStatRestoreDefaults(a1, a2, a3, 0LL);
        break;
      default:
        v93 = PopBootStatUnlock(a1, a2, a3, 0LL);
        break;
    }
    PagesFromHiberFile = v93;
    if ( v93 < 0 )
      goto LABEL_261;
    if ( v92 )
    {
      *a7 = (PVOID)v92;
      *a8 = v91;
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
      LOBYTE(a3) = v10->m256i_i8[16];
      TtmNotifySessionTerminalInput(v10->m256i_u32[2], v10->m256i_i32[3], a3);
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
                || (v76 = RtlIsMultiSessionSku() == 0, PowerButtonBugcheckEnabled = 1, v76) )
              {
                PowerButtonBugcheckEnabled = 0;
              }
              goto LABEL_70;
            }
            if ( (unsigned int)v11 < 0x10 )
              return (unsigned int)-1073741789;
            if ( a5 || (stru_140F10828.WaitBlockFill6[100] & 1) == 0 )
              return (unsigned int)-1073741811;
            PopUpdateSmartUserPresencePredictions((void *)v10->m256i_i64[1], 0);
            return 0;
          }
          LOBYTE(stru_140F12420.InGlobalUpdateVpThreadPriorityList) = 1;
          p_Blink = &stru_140F12420.GlobalUpdateVpThreadPriorityListEntry.Blink;
          v35 = &WNF_PO_VIDEO_INITIALIALIZED;
          return (unsigned int)ZwUpdateWnfStateData((__int64)v35, (__int64)p_Blink);
        }
        if ( !a5 )
          return (unsigned int)-1073741789;
        v36 = ExAllocatePool2(0x100uLL);
        v37 = (_DWORD *)v36;
        if ( !v36 )
          return (unsigned int)-1073741670;
        PagesFromHiberFile = PopS0LowPowerIdleInfo(v36);
        if ( PagesFromHiberFile < 0 )
          goto LABEL_84;
        *a7 = v37;
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
      return (unsigned int)PopNetUpdateStandbyRequest();
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
          TtmNotifySessionPowerStateChange(v10->m256i_u32[2], v10->m256i_i8[12], a3);
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
          v37 = (_DWORD *)v59;
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
    v60 = (_OWORD *)ExAllocatePool2(0x100uLL);
    if ( !v60 )
      return (unsigned int)-1073741670;
    *v60 = *(_OWORD *)&stru_140E66FF0.ThreadFlags2;
    v61 = *(_OWORD *)&stru_140E66FF0.QueueListEntry.Blink;
    goto LABEL_124;
  }
  if ( v9 > 26 )
  {
    v77 = v9 - 27;
    if ( !v77 )
    {
      if ( (unsigned int)v11 < 0x10 )
        return (unsigned int)-1073741789;
      if ( a5 )
        return (unsigned int)-1073741811;
      PopTransitionCheckpoint(v10->m256i_i32[2], v10->m256i_i32[3]);
      return 0;
    }
    v78 = v77 - 1;
    if ( !v78 )
    {
      if ( (_DWORD)v11 != 12 )
        return (unsigned int)-1073741811;
      LODWORD(v169) = v10->m256i_i32[2];
      PopSetPowerSettingValueAcDc((__int64)&GUID_ADAPTIVE_INPUT_CONTROLLER_STATE, 4u, (__int64)&v169);
      return 0;
    }
    v79 = v78 - 1;
    if ( !v79 )
    {
      if ( (unsigned int)v11 < 8 || !a5 )
        return (unsigned int)-1073741789;
      v81 = (_OWORD *)ExAllocatePool2(0x100uLL);
      if ( !v81 )
        return (unsigned int)-1073741670;
      *v81 = *(_OWORD *)&stru_140E66FF0.SchedulerApcFill5[8];
      v81[1] = *(_OWORD *)&stru_140E66FF0.SchedulerApcFill5[24];
      v81[2] = *(_OWORD *)&stru_140E66FF0.SchedulerApcFill5[40];
      *a7 = v81;
      *a8 = 48;
      goto LABEL_125;
    }
    if ( v79 != 1 )
      return (unsigned int)-1073741811;
    if ( (unsigned int)v11 < 8 || !a5 )
      return (unsigned int)-1073741789;
    v80 = (_BYTE *)ExAllocatePool2(0x100uLL);
    if ( !v80 )
      return (unsigned int)-1073741670;
    *v80 = PpmPerfQosSupportedAndConfigured;
    v80[1] = PpmPerfSchedulerDirectedPerfStatesSupported;
    v80[2] = PpmPerfQosGroupPolicyDisable != 0;
    *a7 = v80;
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
          v67 = v10->m256i_i8[8];
          PopAcquirePolicyLock(a1, a2);
          PopConsoleExternalDisplayConnected = v67;
          PopDiagTraceExternalDisplayState();
          PopQueueWorkItem((__int64)&PopWeakChargerLock.NpxState, DelayedWorkQueue);
          PopReleasePolicyLock(v69, v68, v70, v71, v164);
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
        if ( BYTE1(stru_140F12420.InGlobalUpdateVpThreadPriorityList) )
        {
          if ( v66 == -1 )
            return (unsigned int)-1073741637;
        }
        else if ( v66 != -1 )
        {
          BYTE1(stru_140F12420.InGlobalUpdateVpThreadPriorityList) = 1;
          ZwUpdateWnfStateData(
            (__int64)&WNF_PO_BASIC_BRIGHTNESS_ENGINE_DISABLED,
            (__int64)&stru_140F12420.InGlobalUpdateVpThreadPriorityList + 1);
          PopDiagTraceEventNoPayload(&POP_ETW_EVENT_BASIC_BRIGHTNESS_ENGINE_OFF);
        }
        v177[0] = v10->m256i_i32[2];
        v177[1] = v10->m256i_i32[3];
        v177[2] = v10->m256i_i32[4];
        v177[3] = v10->m256i_i32[5];
        v177[4] = v10->m256i_i32[6];
        v177[5] = v10->m256i_i32[7];
        v177[6] = v10[1].m256i_i32[0];
        v177[7] = v10[1].m256i_i32[1];
        PopBroadcastSessionInfo(4, 32, (__int64)v177);
        return 0;
      }
      if ( (unsigned int)v11 < 8 || !a5 )
        return (unsigned int)-1073741789;
      v72 = ExAllocatePool2(0x100uLL);
      if ( !v72 )
        return (unsigned int)-1073741670;
      *(_KWAIT_BLOCK *)v72 = stru_140E66FF0.WaitBlock[2];
      *(_OWORD *)(v72 + 48) = *(_OWORD *)&stru_140E66FF0.WaitBlockFill11[144];
      *a7 = (PVOID)v72;
      *a8 = 64;
      goto LABEL_125;
    }
    if ( (unsigned int)v11 < 0x60 || !v10->m256i_i64[1] && !a5 )
      return (unsigned int)-1073741789;
    if ( v10->m256i_i32[6] == 412 )
    {
      if ( v10[2].m256i_i8[24] || !v10->m256i_i32[4] )
      {
        *(_DWORD *)&stru_140E66FF0.SavedApcStateFill[12] = 0;
      }
      else
      {
        *(_DWORD *)&stru_140E66FF0.SavedApcStateFill[8] = v10[1].m256i_i32[0];
        *(_DWORD *)&stru_140E66FF0.SavedApcStateFill[12] = 1;
      }
    }
    v73 = 0LL;
    if ( a5 )
    {
      v73 = (char **)ExAllocatePool2(0x100uLL);
      if ( !v73 )
        return (unsigned int)-1073741670;
    }
    v74 = PopSetWatchdog((char *)v10->m256i_i64[1], &v10->m256i_u32[4], v10[2].m256i_i8[24]);
    if ( !a5 )
      return 0;
    *v73 = v74;
    *a7 = v73;
LABEL_169:
    *a8 = 8;
    goto LABEL_125;
  }
  if ( (unsigned int)v11 < 0xC )
    return (unsigned int)-1073741789;
  if ( a5 )
    return (unsigned int)-1073741811;
  PpmAcquireLock((struct _KTHREAD **)&stru_140F10070.SchedulerAssistLastYieldBoostTime, a2, a3);
  v75 = PpmPerfQosDisableRefcount;
  if ( v10->m256i_i8[8] )
  {
    if ( PpmPerfQosDisableRefcount == -1 )
    {
      PagesFromHiberFile = -1073741675;
    }
    else
    {
      v75 = PpmPerfQosDisableRefcount + 1;
      PagesFromHiberFile = 0;
      ++PpmPerfQosDisableRefcount;
    }
    v76 = v75 == 1;
  }
  else
  {
    if ( PpmPerfQosDisableRefcount )
    {
      PagesFromHiberFile = 0;
      v75 = --PpmPerfQosDisableRefcount;
    }
    else
    {
      PagesFromHiberFile = -1073741637;
    }
    v76 = v75 == 0;
  }
  if ( v76 )
    PpmPerfUpdateDomainPolicy(0);
  else
    PpmReleaseLock(&stru_140F10070.SchedulerAssistLastYieldBoostTime);
  return (unsigned int)PagesFromHiberFile;
}
