/*
 * XREFs of Win32kBaseDriverEntryOrFault @ 0x1401B34A8
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1402E85E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     InitSmartObjectRefLookaside @ 0x140029530 (InitSmartObjectRefLookaside.c)
 *     ?AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z @ 0x140029598 (-AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     RIMInitialize @ 0x14005E170 (RIMInitialize.c)
 *     IsServiceSession @ 0x140083934 (IsServiceSession.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     RtlLoadStringOrError @ 0x1400F3D50 (RtlLoadStringOrError.c)
 *     CoreMsgInitialize @ 0x1400FC350 (CoreMsgInitialize.c)
 *     InitializeWin32KSyscallFilter @ 0x140100E20 (InitializeWin32KSyscallFilter.c)
 *     ?InitializeWppLogging@@YAJPEAU_DRIVER_OBJECT@@@Z @ 0x140101280 (-InitializeWppLogging@@YAJPEAU_DRIVER_OBJECT@@@Z.c)
 *     ?InitializeUserTypeIsolation@@YA_NXZ @ 0x14011AE60 (-InitializeUserTypeIsolation@@YA_NXZ.c)
 *     CreateKernelEvent @ 0x140135730 (CreateKernelEvent.c)
 *     CreateKernelSemaphore @ 0x14013AA50 (CreateKernelSemaphore.c)
 *     CreateWin32kApiSetTable @ 0x140141B38 (CreateWin32kApiSetTable.c)
 *     DCEInUseCountTelemetryInit @ 0x1401490C8 (DCEInUseCountTelemetryInit.c)
 *     InitializeTelemetryAssertsKMByName @ 0x14014AC30 (InitializeTelemetryAssertsKMByName.c)
 *     ?HYDRA_HINT@@YAXW4HydraHint@@@Z @ 0x14014CA8C (-HYDRA_HINT@@YAXW4HydraHint@@@Z.c)
 *     CreateKernelEventObject @ 0x14014E99C (CreateKernelEventObject.c)
 *     ?VerifyDWMApiSetImplementation@@YAJXZ @ 0x14014EA54 (-VerifyDWMApiSetImplementation@@YAJXZ.c)
 *     ?InitializePowerGlobals@@YAJXZ @ 0x14014F2D8 (-InitializePowerGlobals@@YAJXZ.c)
 *     IsCurrentSessionInServerSilo @ 0x140150CF4 (IsCurrentSessionInServerSilo.c)
 *     ?CheckInitialSessions@@YAJXZ @ 0x140153818 (-CheckInitialSessions@@YAJXZ.c)
 *     CreatePerSessionWin32kCall @ 0x140153DF8 (CreatePerSessionWin32kCall.c)
 *     InitTimerCoalescing @ 0x1401559E8 (InitTimerCoalescing.c)
 *     ?InitializeCursorGlobals@@YAJXZ @ 0x140156318 (-InitializeCursorGlobals@@YAJXZ.c)
 *     IsInitializeNavigationWindowRegistrySupported @ 0x140157C7C (IsInitializeNavigationWindowRegistrySupported.c)
 *     OPMInitialize @ 0x1401585AC (OPMInitialize.c)
 *     ?EnsureRequiredApiSetExtensions@@YAXXZ @ 0x140159030 (-EnsureRequiredApiSetExtensions@@YAXXZ.c)
 *     ?InitializeWin32SiloGlobals@@YAJW4SiloGlobalAccess@@@Z @ 0x140159780 (-InitializeWin32SiloGlobals@@YAJW4SiloGlobalAccess@@@Z.c)
 *     RetrieveCurrentDisplayState @ 0x14015B918 (RetrieveCurrentDisplayState.c)
 *     InitDwmInputProcessing @ 0x14015D614 (InitDwmInputProcessing.c)
 *     McGenEventRegister_EtwRegister @ 0x14015DE54 (McGenEventRegister_EtwRegister.c)
 *     ?InitializeDCEGlobals@@YAJXZ @ 0x1401606D8 (-InitializeDCEGlobals@@YAJXZ.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1401617E4 (DestroySharedUserCritDeferredUnlockList.c)
 *     ?Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x140169710 (-Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     ?InitializeProcessThreadGlobals@@YAJXZ @ 0x14017705C (-InitializeProcessThreadGlobals@@YAJXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     FreeWin32kApiSetTable @ 0x1401A0514 (FreeWin32kApiSetTable.c)
 *     SysEntryRegisterWin32kBaseDriverUnload @ 0x1401A0D30 (SysEntryRegisterWin32kBaseDriverUnload.c)
 *     ??4?$SGRDPgpsemSwitchInProgressWaiters@PEAU_KSEMAPHORE@@@@QEAAAEAPEAU_KSEMAPHORE@@AEBQEAU1@@Z @ 0x1401A0E9C (--4-$SGRDPgpsemSwitchInProgressWaiters@PEAU_KSEMAPHORE@@@@QEAAAEAPEAU_KSEMAPHORE@@AEBQEAU1@@Z.c)
 *     ??4?$SGRDPgcSwitchInProgressWaiters@K@@QEAAAEAKAEBK@Z @ 0x1401A0F14 (--4-$SGRDPgcSwitchInProgressWaiters@K@@QEAAAEAKAEBK@Z.c)
 *     IsInitTimerCoalescingSupported @ 0x1401A0FF8 (IsInitTimerCoalescingSupported.c)
 *     IsInitializePointerPredictionSupported @ 0x1401A1068 (IsInitializePointerPredictionSupported.c)
 *     IsInitializePointerDevicesPresenceStateSupported @ 0x1401A10A0 (IsInitializePointerDevicesPresenceStateSupported.c)
 *     IsDDCCIInitializeSupported @ 0x1401A1148 (IsDDCCIInitializeSupported.c)
 *     IsInitDwmInputProcessingSupported @ 0x1401A1180 (IsInitDwmInputProcessingSupported.c)
 *     ?RegisterEx@InputTraceLogging@@SAJP6AXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z @ 0x1401A1988 (-RegisterEx@InputTraceLogging@@SAJP6AXPEBU_GUID@@KE_K1PEAU_EVENT_FILTER_DESCRIPTOR@@PEAX@Z@Z.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline @ 0x1401A7290 (Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline.c)
 *     ?Initialize@CoreMessagingKPort@@SAJXZ @ 0x1401AAE70 (-Initialize@CoreMessagingKPort@@SAJXZ.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401AC178 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     ?ReportUsageForAllVelocityKeys@@YAXXZ @ 0x1401B3254 (-ReportUsageForAllVelocityKeys@@YAXXZ.c)
 *     Feature_HostServiceSessionInitFailure__private_IsEnabledDeviceUsageNoInline @ 0x1401B3454 (Feature_HostServiceSessionInitFailure__private_IsEnabledDeviceUsageNoInline.c)
 *     ?InitializeWin32PoolTracking@@YAHXZ @ 0x1401C254C (-InitializeWin32PoolTracking@@YAHXZ.c)
 *     InputInitialize @ 0x14021C368 (InputInitialize.c)
 *     DDCCIInitializeWrap @ 0x14023E748 (DDCCIInitializeWrap.c)
 *     EnableUserkTraceLogging @ 0x14023EC6C (EnableUserkTraceLogging.c)
 *     InitializeNavigationWindowRegistry @ 0x14023EDA0 (InitializeNavigationWindowRegistry.c)
 *     InitializePointerDevicesPresenceState @ 0x14023EDD8 (InitializePointerDevicesPresenceState.c)
 *     InitializePointerPrediction @ 0x14023EE10 (InitializePointerPrediction.c)
 *     InitializeWin32kFullTelemetryAsserts @ 0x14023EE44 (InitializeWin32kFullTelemetryAsserts.c)
 *     IsTelemetryAssertsSupported @ 0x14023EF90 (IsTelemetryAssertsSupported.c)
 *     IsUserkTraceLoggingSupported @ 0x14023F000 (IsUserkTraceLoggingSupported.c)
 *     SysEntryPsEstablishWin32Callouts @ 0x14023F55C (SysEntryPsEstablishWin32Callouts.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     TlgRegisterAggregateProviderEx @ 0x1402CA0BC (TlgRegisterAggregateProviderEx.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1402CA314 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     InitCreateUserCrit @ 0x1402EB1A4 (InitCreateUserCrit.c)
 *     Win32UserInitialize @ 0x1402EB804 (Win32UserInitialize.c)
 *     InitializeGre @ 0x1402EC79C (InitializeGre.c)
 */

__int64 __fastcall Win32kBaseDriverEntryOrFault(struct _KSEMAPHORE *a1, __int64 a2, int a3, unsigned __int8 a4)
{
  unsigned int v4; // esi
  unsigned int v5; // r15d
  __int64 v6; // r12
  __int64 SessionState; // rax
  int Win32kApiSetTable; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  ULONG_PTR v11; // rbx
  __int64 v12; // rcx
  __int64 v13; // rax
  char v15; // r13
  __int64 UserSessionState; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rax
  int v20; // eax
  ULONG_PTR v21; // rbx
  __int64 v22; // rdx
  __int64 v23; // rcx
  NTSTATUS v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  BOOL v32; // eax
  NTSTATUS v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rbx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  struct _DRIVER_OBJECT *v43; // rcx
  int v44; // eax
  ULONG_PTR v45; // rdi
  __int64 v46; // rdx
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rax
  NTSTATUS v52; // eax
  __int64 v53; // rdx
  __int64 v54; // rcx
  ULONG_PTR v55; // rbx
  __int64 v56; // rdx
  int IsEnabledDeviceUsageNoInline; // eax
  char v58; // al
  __int64 v59; // rdx
  __int64 QuadPart; // rcx
  int v61; // eax
  __int64 v62; // rdx
  __int64 v63; // rcx
  int v64; // eax
  __int64 v65; // rdx
  __int64 v66; // rcx
  int v67; // eax
  void (*v68)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // rcx
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // rbx
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // rax
  _BYTE *PagedLookasideList; // rax
  __int64 v76; // rdx
  _BYTE *v77; // rcx
  bool v78; // r15
  bool v79; // r12
  __int64 v80; // rax
  int v81; // r8d
  int v82; // edx
  int v83; // eax
  __int64 v84; // rbx
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // rdx
  __int64 v88; // rcx
  int v89; // eax
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 v94; // rdx
  __int64 v95; // rcx
  unsigned __int64 v96; // rbx
  __int64 Pool2; // rbx
  __int64 v98; // rdx
  __int64 v99; // rcx
  __int64 v100; // rdx
  __int64 v101; // rcx
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int64 v104; // rcx
  __int64 v105; // rdx
  __int64 v106; // rcx
  _QWORD *v107; // rdi
  __int64 v108; // rax
  __int64 v109; // rbx
  __int64 v110; // rdx
  int v111; // eax
  __int64 v112; // rdx
  __int64 v113; // rdx
  __int64 v114; // rdx
  __int64 v115; // rcx
  int v116; // ebx
  __int64 v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // r8
  int v122; // eax
  __int64 v123; // rdx
  __int64 v124; // rcx
  int v125; // eax
  __int64 v126; // rdx
  __int64 v127; // rcx
  PVOID KernelEventObject; // rbx
  __int64 v129; // rdx
  __int64 v130; // rcx
  __int64 v131; // rdx
  __int64 v132; // rcx
  __int64 v133; // rcx
  PVOID v134; // rbx
  __int64 v135; // rdx
  __int64 v136; // rcx
  __int64 v137; // rdx
  __int64 v138; // rcx
  struct _KEVENT *KernelEvent; // rbx
  __int64 v140; // rdx
  __int64 v141; // rcx
  __int64 v142; // rdx
  __int64 v143; // rcx
  struct _KEVENT *v144; // rbx
  __int64 v145; // rdx
  __int64 v146; // rcx
  __int64 v147; // rdx
  __int64 v148; // rcx
  struct _KEVENT *v149; // rbx
  __int64 v150; // rdx
  __int64 v151; // rcx
  __int64 v152; // rdx
  __int64 v153; // rcx
  struct _KEVENT *v154; // rbx
  __int64 v155; // rdx
  __int64 v156; // rcx
  __int64 v157; // rdx
  __int64 v158; // rcx
  __int64 v159; // rcx
  struct _KEVENT *v160; // rbx
  __int64 v161; // rcx
  __int64 v162; // rcx
  __int64 v163; // rcx
  __int64 v164; // rcx
  __int64 v165; // rdx
  __int64 v166; // rcx
  __int64 v167; // rdx
  __int64 v168; // rcx
  struct _KSEMAPHORE *v169; // rbx
  __int64 v170; // rdx
  __int64 v171; // rcx
  __int64 v172; // rdx
  __int64 v173; // rcx
  void *v174; // rcx
  char v175; // bl
  bool v176; // si
  __int64 v177; // rax
  int v178; // r8d
  int v179; // edx
  __int64 v180; // rdx
  bool v181; // bl
  __int64 v182; // rax
  int v183; // r8d
  int v184; // edx
  __int64 v185; // rdx
  __int64 v186; // rcx
  __int64 v187; // rax
  int v188; // eax
  __int64 v189; // rdx
  __int64 v190; // rcx
  __int64 v191; // rbx
  NTSTATUS v192; // eax
  __int64 v193; // rdx
  __int64 v194; // rcx
  __int64 v195; // rdx
  __int64 v196; // rcx
  __int64 v197; // rcx
  struct _EX_RUNDOWN_REF *v198; // rax
  int v199; // eax
  __int64 v200; // rcx
  int v201; // eax
  __int64 v202; // rdx
  __int64 v203; // rcx
  __int64 v204; // rdx
  __int64 v205; // rcx
  int v206; // eax
  __int64 v207; // rdx
  __int64 v208; // rcx
  int inited; // eax
  int v210; // eax
  __int64 v211; // rdx
  __int64 v212; // rcx
  __int64 v213; // rax
  __int64 v214; // rdx
  __int64 v215; // rcx
  __int64 SystemInformation; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v217; // [rsp+58h] [rbp-A8h] BYREF
  struct _KSEMAPHORE *KernelSemaphore; // [rsp+60h] [rbp-A0h] BYREF
  struct _CLIENT_ID JobInformation; // [rsp+68h] [rbp-98h] BYREF
  __int64 v220; // [rsp+88h] [rbp-78h]
  struct _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v223[160]; // [rsp+D0h] [rbp-30h] BYREF

  v4 = a4;
  v5 = a3;
  v217 = a3;
  v6 = (__int64)a1;
  KernelSemaphore = a1;
  SessionState = W32GetSessionState(a1);
  Win32kApiSetTable = CreateWin32kApiSetTable((__int64 *)(SessionState + 152));
  v11 = Win32kApiSetTable;
  if ( Win32kApiSetTable < 0 )
  {
    if ( (unsigned int)Feature_HostServiceSessionInitFailure__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( (_BYTE)v4 )
        KeBugCheckEx(0x164u, 0x3EuLL, v11, 0LL, 0LL);
    }
    v13 = W32GetSessionState(v12);
    FreeWin32kApiSetTable((PVOID **)(v13 + 152));
    return 3221225473LL;
  }
  v15 = 1;
  JobInformation.UniqueThread = (HANDLE)7;
  JobInformation.UniqueProcess = (HANDLE)0x100000001LL;
  UserSessionState = W32GetUserSessionState(v10, v9);
  *(struct _CLIENT_ID *)(UserSessionState + 42544) = JobInformation;
  *(_DWORD *)(UserSessionState + 42560) = 0;
  *(_DWORD *)(W32GetUserGdiSessionState(v17) + 28) = 1;
  v19 = W32GetSessionState(v18);
  v20 = CreatePerSessionWin32kCall((__int64 *)(v19 + 152));
  v21 = v20;
  if ( v20 < 0 )
  {
    if ( (unsigned int)Feature_HostServiceSessionInitFailure__private_IsEnabledDeviceUsageNoInline() && (_BYTE)v4 )
      KeBugCheckEx(0x164u, 0x3EuLL, v21, 0LL, 0LL);
    return (unsigned int)v21;
  }
  if ( IsCurrentSessionInServerSilo() )
  {
    v220 = 0LL;
    memset(&JobInformation, 0, 32);
    v24 = ZwQueryInformationJobObject(0LL, JobObjectEndOfJobTimeInformation|0x20, &JobInformation, 0x28u, 0LL);
    if ( v24 < 0 )
      KeBugCheckEx(0x164u, v24, 0LL, 0LL, 0LL);
    v27 = W32GetUserSessionState(v26, v25);
    v29 = (unsigned int)v220;
    *(_DWORD *)(v27 + 71176) = v220;
  }
  else
  {
    v29 = W32GetUserSessionState(v23, v22);
    *(_DWORD *)(v29 + 71176) = MEMORY[0xFFFFF78000000260];
  }
  if ( *(_DWORD *)(W32GetUserSessionState(v29, v28) + 71176) < 0x4F7Cu
    || *(_DWORD *)(W32GetUserSessionState(v31, v30) + 71176) >= 0x55F0u )
  {
    *(_WORD *)(W32GetUserSessionState(v31, v30) + 71180) = 0;
  }
  else
  {
    *(_WORD *)(W32GetUserSessionState(v31, v30) + 71180) = 320;
  }
  if ( (_BYTE)v4 )
    InitializeTelemetryAssertsKMByName();
  v32 = IsServiceSession(v5);
  v33 = InitializeWin32SiloGlobals(!v32);
  v21 = v33;
  if ( v33 < 0 )
  {
    if ( (unsigned int)Feature_HostServiceSessionInitFailure__private_IsEnabledDeviceUsageNoInline() && (_BYTE)v4 )
      KeBugCheckEx(0x164u, 0x3EuLL, v21, 0LL, 0LL);
    return (unsigned int)v21;
  }
  EnsureRequiredApiSetExtensions(v35, v34);
  v38 = W32GetUserSessionState(v37, v36) + 14080;
  *(_QWORD *)(W32GetUserSessionState(v40, v39) + 14064) = v38;
  *(_QWORD *)(W32GetUserSessionState(v42, v41) + 14200) = &ausMouseVKey;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Driver\\Win32k");
  if ( (_BYTE)v4 )
  {
    IoCreateDriver(&DestinationString, Win32kPnPDriverEntry);
    if ( (int)IsTelemetryAssertsSupported() >= 0 )
      InitializeWin32kFullTelemetryAsserts();
  }
  v44 = InitializeWppLogging(v43);
  v45 = v44;
  if ( v44 < 0 )
  {
    LODWORD(SystemInformation) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3003);
    if ( (unsigned int)Feature_HostServiceSessionInitFailure__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( (_BYTE)v4 )
        KeBugCheckEx(0x164u, 0x3EuLL, v45, 0LL, 0LL);
      goto LABEL_36;
    }
    goto LABEL_96;
  }
  if ( (unsigned int)InitializeWin32PoolTracking() )
  {
    if ( !(unsigned int)InitCreateUserCrit() )
    {
      LODWORD(v45) = -1073741801;
      IsEnabledDeviceUsageNoInline = Feature_HostServiceSessionInitFailure__private_IsEnabledDeviceUsageNoInline();
LABEL_169:
      if ( !IsEnabledDeviceUsageNoInline )
        goto LABEL_116;
      if ( !(_BYTE)v4 )
        goto LABEL_171;
      goto LABEL_194;
    }
    if ( !(_BYTE)v4 )
      goto LABEL_52;
    SystemInformation = 8LL;
    if ( ZwQuerySystemInformation(MaxSystemInfoClass|SystemProcessInformation, &SystemInformation, 8u, 0LL) < 0
      || (v58 = 1, (SystemInformation & 0x200000000LL) == 0) )
    {
      v58 = 0;
    }
    gbOSTestSigningEnabled = v58;
    if ( ZwPowerInformation(ProcessorInformation|0x40, 0LL, 0, &gPlatformRole, 4u) < 0 )
    {
      gPlatformRole = PlatformRoleDesktop;
      WdInitialize();
    }
    else
    {
LABEL_52:
      WdInitialize();
      if ( !(_BYTE)v4 )
      {
LABEL_54:
        v61 = InitializeDCEGlobals(QuadPart, v59);
        v45 = v61;
        if ( v61 < 0 )
        {
          if ( (unsigned int)Feature_HostServiceSessionInitFailure__private_IsEnabledDeviceUsageNoInline() )
          {
            if ( (_BYTE)v4 )
              KeBugCheckEx(0x164u, 0x3EuLL, v45, 0LL, 0LL);
            goto LABEL_171;
          }
          goto LABEL_116;
        }
        v64 = InitializeCursorGlobals(v63, v62);
        v45 = v64;
        if ( v64 < 0 )
        {
          if ( (unsigned int)Feature_HostServiceSessionInitFailure__private_IsEnabledDeviceUsageNoInline() )
          {
            if ( (_BYTE)v4 )
              KeBugCheckEx(0x164u, 0x3EuLL, v45, 0LL, 0LL);
            goto LABEL_171;
          }
          goto LABEL_116;
        }
        v67 = InitializeProcessThreadGlobals(v66, v65);
        v45 = v67;
        if ( v67 < 0 )
        {
          if ( (unsigned int)Feature_HostServiceSessionInitFailure__private_IsEnabledDeviceUsageNoInline() )
          {
            if ( (_BYTE)v4 )
              KeBugCheckEx(0x164u, 0x3EuLL, v45, 0LL, 0LL);
            goto LABEL_171;
          }
          goto LABEL_116;
        }
        if ( (_BYTE)v4 )
        {
          McGenEventRegister_EtwRegister();
          DCEInUseCountTelemetryInit();
          if ( (int)IsUserkTraceLoggingSupported() >= 0 )
            EnableUserkTraceLogging();
          if ( (int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_14029EF38) < 0 )
          {
            LODWORD(SystemInformation) = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3160);
          }
          if ( (int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_14029EF00) < 0 )
          {
            LODWORD(SystemInformation) = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3165);
          }
          if ( (int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_14029EE90) < 0 )
          {
            LODWORD(SystemInformation) = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3170);
          }
          if ( (int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_14029EE58) < 0 )
          {
            LODWORD(SystemInformation) = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3175);
          }
          if ( (int)InputTraceLogging::RegisterEx(v68) < 0 )
          {
            LODWORD(SystemInformation) = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3180);
          }
          TlgRegisterAggregateProviderEx(&dword_14029EEC8);
        }
        else
        {
          DCEInUseCountTelemetryInit();
        }
        v71 = W32GetUserSessionState(v70, v69);
        v74 = W32GetUserSessionState(v73, v72);
        PagedLookasideList = NSInstrumentation::CLeakTrackingAllocator::AllocatePagedLookasideList(
                               (NSInstrumentation::CPointerHashTable **)(v74 + 72032),
                               0x48uLL,
                               0x616C7355u,
                               0x696C7455u,
                               0x10u);
        *(_QWORD *)(v71 + 19344) = PagedLookasideList;
        v77 = PagedLookasideList;
        if ( PagedLookasideList )
        {
          LODWORD(v45) = 0;
        }
        else
        {
          LODWORD(v45) = -1073741801;
          v78 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
          v79 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          if ( v78 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v80 = W32GetUserSessionState(WPP_GLOBAL_Control, v76);
            LOBYTE(v81) = v79;
            LOBYTE(v82) = v78;
            WPP_RECORDER_AND_TRACE_SF_d(
              *((_QWORD *)WPP_GLOBAL_Control + 3),
              v82,
              v81,
              *(_QWORD *)(v80 + 69144),
              2,
              14,
              16,
              (__int64)&WPP_fa6b8f79bf1f3a7ddecd36172dbcfaf7_Traceguids,
              23);
          }
          if ( (unsigned int)Feature_HostServiceSessionInitFailure__private_IsEnabledDeviceUsageNoInline() && (_BYTE)v4 )
            KeBugCheckEx(0x164u, 0x3EuLL, 0xFFFFFFFFC0000017uLL, 0LL, 0LL);
          v6 = (__int64)KernelSemaphore;
          v5 = v217;
        }
        *(_DWORD *)(W32GetUserSessionState(v77, v76) + 69864) = 1;
        goto LABEL_96;
      }
    }
    TlgRegisterAggregateProviderEx(&dword_14029EDE8);
    KeQueryPerformanceCounter(&gliQpcFreq);
    QuadPart = gliQpcFreq.QuadPart;
    v59 = ((unsigned __int64)gliQpcFreq.QuadPart * (unsigned __int128)0x624DD2F1A9FBE77uLL) >> 64;
    W32kEtwUserCritAcquireDelayTimeoutQPC = gliQpcFreq.QuadPart / 0x3E8uLL;
    W32KEtwUserCritTelemetryThrottleQPC = 3600 * gliQpcFreq.QuadPart;
    goto LABEL_54;
  }
  LODWORD(v45) = -1073741801;
  if ( !(unsigned int)Feature_HostServiceSessionInitFailure__private_IsEnabledDeviceUsageNoInline() )
  {
LABEL_96:
    if ( (_BYTE)v4 )
    {
      W32PageEntireDriver(Win32kBaseDriverEntry);
      hModuleWinKernel = (PVOID)0x140000000LL;
    }
    if ( (v45 & 0x80000000) == 0LL )
    {
      v83 = InitializeGraphicsInfrastructure(hModuleWinKernel);
      v45 = v83;
      if ( v83 < 0
        && (unsigned int)Feature_HostServiceSessionInitFailure__private_IsEnabledDeviceUsageNoInline()
        && (_BYTE)v4 )
      {
        KeBugCheckEx(0x164u, 0x3EuLL, v45, 0LL, 0LL);
      }
    }
    goto LABEL_36;
  }
  if ( (_BYTE)v4 )
    goto LABEL_194;
LABEL_36:
  HYDRA_HINT(1LL, v46);
  if ( (_BYTE)v4 )
    gpvWin32kImageBase = *(PVOID *)(v6 + 24);
  if ( (int)IsInitializePointerPredictionSupported(v48, v47) >= 0 )
    InitializePointerPrediction();
  v51 = W32GetUserSessionState(v50, v49);
  v52 = BCryptGenRandom(0LL, (PUCHAR)(v51 + 42568), 1u, 2u);
  v55 = v52;
  if ( v52 < 0 )
  {
    if ( (unsigned int)Feature_HostServiceSessionInitFailure__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( (_BYTE)v4 )
        KeBugCheckEx(0x164u, 0x3EuLL, v55, 0LL, 0LL);
      goto LABEL_171;
    }
LABEL_116:
    if ( (_BYTE)v4 )
    {
LABEL_117:
      if ( (unsigned int)Feature_HostServiceSessionInitFailure__private_IsEnabledDeviceUsageNoInline() )
        KeBugCheckEx(0x164u, 0x3EuLL, (int)v45, 0LL, 0LL);
    }
LABEL_171:
    v174 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
      || (v175 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u) )
    {
      v175 = 0;
    }
    v176 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v175 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v177 = W32GetUserSessionState(WPP_GLOBAL_Control, v56);
      LOBYTE(v178) = v176;
      LOBYTE(v179) = v175;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v179,
        v178,
        *(_QWORD *)(v177 + 69144),
        2,
        14,
        17,
        (__int64)&WPP_fa6b8f79bf1f3a7ddecd36172dbcfaf7_Traceguids,
        v45);
    }
    if ( *(_QWORD *)(W32GetUserSessionState(v174, v56) + 69144) )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v15 = 0;
      }
      v181 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v182 = W32GetUserSessionState(WPP_GLOBAL_Control, v180);
        LOBYTE(v183) = v181;
        LOBYTE(v184) = v15;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v184,
          v183,
          *(_QWORD *)(v182 + 69144),
          2,
          14,
          18,
          (__int64)&WPP_fa6b8f79bf1f3a7ddecd36172dbcfaf7_Traceguids,
          v45);
      }
    }
    Win32KBaseDriverUnload(0LL, v180);
    if ( (_DWORD)v45 == -1073741822 )
      LODWORD(v45) = -1073741637;
    return (unsigned int)v45;
  }
  v84 = *(_QWORD *)(W32GetUserSessionState(v54, v53) + 42568) & 0x7FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(W32GetUserSessionState(v86, v85) + 42568) = v84;
  if ( (int)IsInitializePointerDevicesPresenceStateSupported(v88, v87) >= 0 )
    InitializePointerDevicesPresenceState();
  if ( (v45 & 0x80000000) != 0LL )
  {
    if ( (unsigned int)Feature_HostServiceSessionInitFailure__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( (_BYTE)v4 )
        KeBugCheckEx(0x164u, 0x3EuLL, (int)v45, 0LL, 0LL);
      goto LABEL_171;
    }
    goto LABEL_116;
  }
  v89 = CheckInitialSessions();
  v45 = v89;
  if ( v89 && v89 != -1073741771 )
  {
    if ( (unsigned int)Feature_HostServiceSessionInitFailure__private_IsEnabledDeviceUsageNoInline() && (_BYTE)v4 )
      KeBugCheckEx(0x164u, 0x3EuLL, v45, 0LL, 0LL);
    if ( (v45 & 0x80000000) == 0LL )
      LODWORD(v45) = -1073741823;
    goto LABEL_116;
  }
  if ( !*(_DWORD *)(W32GetUserSessionState(v91, v90) + 68612) || *(_DWORD *)(W32GetUserSessionState(v93, v92) + 68620) )
    RtlSetActiveConsoleId(v5);
  if ( (_BYTE)v4 )
    SysEntryRegisterWin32kBaseDriverUnload(v95, v94);
  v96 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  *(_DWORD *)(W32GetUserSessionState(0xFFFFF78000000004uLL, v94) + 57584) = v96;
  Pool2 = ExAllocatePool2(64LL, 56LL, 1716220757LL);
  *(_QWORD *)(W32GetUserSessionState(v99, v98) + 42536) = Pool2;
  if ( !*(_QWORD *)(W32GetUserSessionState(v101, v100) + 42536) )
    goto LABEL_168;
  v104 = *(_QWORD *)(W32GetUserSessionState(v103, v102) + 42536);
  *(_DWORD *)v104 = 1;
  *(_QWORD *)(v104 + 8) = 0LL;
  *(_DWORD *)(v104 + 16) = 0;
  KeInitializeEvent((PRKEVENT)(v104 + 24), SynchronizationEvent, 0);
  if ( !(unsigned int)InitSmartObjectRefLookaside() || !InitializeUserTypeIsolation() )
    goto LABEL_168;
  v107 = (_QWORD *)W32GetUserSessionState(v106, v105);
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
    v108 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
             v107,
             1,
             0,
             (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  else
    v108 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(v107, 0);
  v109 = v108;
  v107[3] = v108;
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !v109 )
      goto LABEL_136;
  }
  else
  {
    if ( !v109 )
      goto LABEL_136;
    *(_BYTE *)(v109 + 1708) = 1;
  }
  if ( UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v109) )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(v107 + 2461), v110);
    DestroyDeferredUnlockObjectAssignmentList(v107 + 2468);
    DestroyDeferredUnlockObjectAssignmentList(v107 + 2466);
  }
LABEL_136:
  v111 = InitializeWin32KSyscallFilter();
  v45 = v111;
  if ( v111 < 0 )
  {
    if ( (unsigned int)Feature_HostServiceSessionInitFailure__private_IsEnabledDeviceUsageNoInline() && (_BYTE)v4 )
      KeBugCheckEx(0x164u, 0x3EuLL, v45, 0LL, 0LL);
    UserSessionSwitchLeaveCritWithNonPaged(0LL, v113);
    goto LABEL_116;
  }
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v112);
  if ( (_BYTE)v4 )
  {
    SysEntryPsEstablishWin32Callouts();
    DbgkLkmdRegisterCallback(W32pLkmdDataCollectionCallback, 0LL, 5LL);
  }
  if ( (int)RtlIsApiSetImplemented("ext-ms-win-composition-init-l1-1-0") < 0
    || (v116 = 1, (int)VerifyDWMApiSetImplementation() < 0) )
  {
    v116 = 0;
  }
  *(_DWORD *)(W32GetUserSessionState(v115, v114) + 19096) = v116;
  RIMInitialize(v118, v117);
  v122 = CoreMsgInitialize(v120, v119, v121);
  v45 = v122;
  if ( v122 < 0 )
  {
    if ( (unsigned int)Feature_HostServiceSessionInitFailure__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( (_BYTE)v4 )
        KeBugCheckEx(0x164u, 0x3EuLL, v45, 0LL, 0LL);
      goto LABEL_171;
    }
    goto LABEL_116;
  }
  if ( (unsigned int)Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !(_BYTE)v4 )
      goto LABEL_157;
    v125 = CoreMessagingKPort::Initialize(v124, v123);
    v45 = v125;
    if ( v125 < 0 )
    {
      if ( (unsigned int)Feature_HostServiceSessionInitFailure__private_IsEnabledDeviceUsageNoInline() )
        KeBugCheckEx(0x164u, 0x3EuLL, v45, 0LL, 0LL);
      goto LABEL_117;
    }
  }
  else if ( !(_BYTE)v4 )
  {
    goto LABEL_157;
  }
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(&dword_14029F1A0);
LABEL_157:
  if ( (int)IsInitTimerCoalescingSupported(v124, v123) >= 0 )
    InitTimerCoalescing(v127, v126);
  KernelEventObject = CreateKernelEventObject(v127, 0);
  *(_QWORD *)(W32GetUserSessionState(v130, v129) + 16824) = KernelEventObject;
  if ( !*(_QWORD *)(W32GetUserSessionState(v132, v131) + 16824) )
    goto LABEL_168;
  v134 = CreateKernelEventObject(v133, 0);
  *(_QWORD *)(W32GetUserSessionState(v136, v135) + 19440) = v134;
  if ( !*(_QWORD *)(W32GetUserSessionState(v138, v137) + 19440) )
    goto LABEL_168;
  KernelEvent = CreateKernelEvent(NotificationEvent, 0);
  *(_QWORD *)(W32GetUserSessionState(v141, v140) + 68384) = KernelEvent;
  if ( !*(_QWORD *)(W32GetUserSessionState(v143, v142) + 68384) )
    goto LABEL_168;
  v144 = CreateKernelEvent(NotificationEvent, 0);
  *(_QWORD *)(W32GetUserSessionState(v146, v145) + 68392) = v144;
  if ( !*(_QWORD *)(W32GetUserSessionState(v148, v147) + 68392) )
    goto LABEL_168;
  v149 = CreateKernelEvent(NotificationEvent, 1u);
  *(_QWORD *)(W32GetUserSessionState(v151, v150) + 68400) = v149;
  if ( !*(_QWORD *)(W32GetUserSessionState(v153, v152) + 68400) )
    goto LABEL_168;
  v154 = CreateKernelEvent(NotificationEvent, 0);
  *(_QWORD *)(W32GetUserSessionState(v156, v155) + 18704) = v154;
  if ( !*(_QWORD *)(W32GetUserSessionState(v158, v157) + 18704) )
    goto LABEL_168;
  *(_BYTE *)(W32GetUserGdiSessionState(v159) + 1) = 0;
  v160 = CreateKernelEvent(NotificationEvent, 1u);
  *(_QWORD *)(W32GetUserGdiSessionState(v161) + 8) = v160;
  if ( !*(_QWORD *)(W32GetUserGdiSessionState(v162) + 8)
    || (v217 = 0,
        SGRDPgcSwitchInProgressWaiters<unsigned long>::operator=(v163, (int *)&v217),
        KernelSemaphore = CreateKernelSemaphore(0, 0x7FFFFFFF),
        SGRDPgpsemSwitchInProgressWaiters<_KSEMAPHORE *>::operator=(v164, (__int64 *)&KernelSemaphore),
        !*(_QWORD *)(W32GetUserSessionState(v166, v165) + 68872))
    || (*(_DWORD *)(W32GetUserSessionState(v168, v167) + 18784) = 0,
        v169 = CreateKernelSemaphore(0, 0x7FFFFFFF),
        *(_QWORD *)(W32GetUserSessionState(v171, v170) + 18776) = v169,
        !*(_QWORD *)(W32GetUserSessionState(v173, v172) + 18776)) )
  {
LABEL_168:
    LODWORD(v45) = -1073741801;
    IsEnabledDeviceUsageNoInline = Feature_HostServiceSessionInitFailure__private_IsEnabledDeviceUsageNoInline();
    goto LABEL_169;
  }
  RtlLoadStringOrError(0x268u, v223, 80, 0);
  if ( (_BYTE)v4 )
    hModuleWin = (void *)MmUserProbeAddress;
  if ( !(unsigned __int8)InitializeGre() )
  {
    LODWORD(v45) = -1073741801;
    if ( !(unsigned int)Feature_HostServiceSessionInitFailure__private_IsEnabledDeviceUsageNoInline() )
      goto LABEL_116;
    if ( !(_BYTE)v4 )
      goto LABEL_171;
LABEL_194:
    KeBugCheckEx(0x164u, 0x3EuLL, 0xFFFFFFFFC0000017uLL, 0LL, 0LL);
  }
  v187 = W32GetUserSessionState(v186, v185);
  *(_WORD *)(v187 + 20606) = 1;
  *(_QWORD *)(v187 + 20552) = v187 + 20520;
  v188 = Win32UserInitialize(v4);
  v45 = v188;
  if ( v188 < 0 )
  {
    if ( (unsigned int)Feature_HostServiceSessionInitFailure__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( (_BYTE)v4 )
        KeBugCheckEx(0x164u, 0x3EuLL, v45, 0LL, 0LL);
      goto LABEL_171;
    }
    goto LABEL_116;
  }
  v191 = MEMORY[0xFFFFF78000000008];
  *(_QWORD *)(W32GetUserSessionState(v190, v189) + 63464) = v191;
  v192 = InitializePowerGlobals();
  v45 = v192;
  if ( v192 < 0 )
  {
    if ( (unsigned int)Feature_HostServiceSessionInitFailure__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( (_BYTE)v4 )
        KeBugCheckEx(0x164u, 0x3EuLL, v45, 0LL, 0LL);
      goto LABEL_171;
    }
    goto LABEL_116;
  }
  if ( !*(_DWORD *)(W32GetUserSessionState(v194, v193) + 68612)
    || *(_DWORD *)(W32GetUserSessionState(v196, v195) + 68620) )
  {
    LODWORD(v45) = RetrieveCurrentDisplayState(v196, v195);
    if ( (v45 & 0x80000000) != 0LL )
      goto LABEL_116;
    LODWORD(SystemInformation) = *(_DWORD *)(W32GetUserSessionState(v197, v56) + 2752) != 0 ? 3 : 0;
    ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &SystemInformation, 4LL, 0LL, 0LL);
  }
  v198 = (struct _EX_RUNDOWN_REF *)W32GetUserSessionState(v196, v195);
  ExInitializeRundownProtection(v198 + 7941);
  v199 = InputInitialize();
  v45 = v199;
  if ( v199 < 0 )
  {
    if ( (unsigned int)Feature_HostServiceSessionInitFailure__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( (_BYTE)v4 )
        KeBugCheckEx(0x164u, 0x3EuLL, v45, 0LL, 0LL);
      goto LABEL_171;
    }
    goto LABEL_116;
  }
  v201 = OPMInitialize(v200);
  v45 = v201;
  if ( v201 < 0 )
  {
    if ( (unsigned int)Feature_HostServiceSessionInitFailure__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( (_BYTE)v4 )
        KeBugCheckEx(0x164u, 0x3EuLL, v45, 0LL, 0LL);
      goto LABEL_171;
    }
    goto LABEL_116;
  }
  if ( (int)IsDDCCIInitializeSupported(v203, v202) >= 0 )
  {
    v206 = DDCCIInitializeWrap();
    v45 = v206;
    if ( v206 < 0 )
    {
      if ( (unsigned int)Feature_HostServiceSessionInitFailure__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( (_BYTE)v4 )
          KeBugCheckEx(0x164u, 0x3EuLL, v45, 0LL, 0LL);
        goto LABEL_171;
      }
      goto LABEL_116;
    }
  }
  if ( (int)IsInitDwmInputProcessingSupported(v205, v204) >= 0 )
  {
    inited = InitDwmInputProcessing(v208, v207);
    v45 = inited;
    if ( inited < 0 )
    {
      if ( (unsigned int)Feature_HostServiceSessionInitFailure__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( (_BYTE)v4 )
          KeBugCheckEx(0x164u, 0x3EuLL, v45, 0LL, 0LL);
        goto LABEL_171;
      }
      goto LABEL_116;
    }
  }
  if ( (int)IsInitializeNavigationWindowRegistrySupported(v208, v207) >= 0 )
  {
    v210 = InitializeNavigationWindowRegistry();
    v45 = v210;
    if ( v210 < 0 )
    {
      if ( (unsigned int)Feature_HostServiceSessionInitFailure__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( (_BYTE)v4 )
          KeBugCheckEx(0x164u, 0x3EuLL, v45, 0LL, 0LL);
        goto LABEL_171;
      }
      goto LABEL_116;
    }
  }
  if ( !(_BYTE)v4 )
  {
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    JobInformation = (struct _CLIENT_ID)(unsigned __int64)PsGetCurrentProcessId();
    v213 = W32GetUserSessionState(v212, v211);
    if ( ZwOpenProcess((PHANDLE)(v213 + 36384), 0x1000u, &ObjectAttributes, &JobInformation) < 0 )
      *(_QWORD *)(W32GetUserSessionState(v215, v214) + 36384) = 0LL;
  }
  ReportUsageForAllVelocityKeys();
  return 0LL;
}
