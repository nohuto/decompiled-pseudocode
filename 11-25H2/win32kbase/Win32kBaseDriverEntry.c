/*
 * XREFs of Win32kBaseDriverEntry @ 0x1402E85E0
 * Callers:
 *     <none>
 * Callees:
 *     InitSmartObjectRefLookaside @ 0x140029530 (InitSmartObjectRefLookaside.c)
 *     ?AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z @ 0x140029598 (-AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z.c)
 *     ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x140033190 (--1CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x140033310 (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1400366AC (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     W32GetCurrentWin32kSessionId @ 0x140049A34 (W32GetCurrentWin32kSessionId.c)
 *     RIMInitialize @ 0x14005E170 (RIMInitialize.c)
 *     IsServiceSession @ 0x140083934 (IsServiceSession.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     RtlLoadStringOrError @ 0x1400F3D50 (RtlLoadStringOrError.c)
 *     CoreMsgInitialize @ 0x1400FC350 (CoreMsgInitialize.c)
 *     InitializeWin32KSyscallFilter @ 0x140100E20 (InitializeWin32KSyscallFilter.c)
 *     ?InitializeWppLogging@@YAJPEAU_DRIVER_OBJECT@@@Z @ 0x140101280 (-InitializeWppLogging@@YAJPEAU_DRIVER_OBJECT@@@Z.c)
 *     IsHostServiceSession @ 0x1401014F4 (IsHostServiceSession.c)
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
 *     Win32kBaseDriverEntryOrFault @ 0x1401B34A8 (Win32kBaseDriverEntryOrFault.c)
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
 *     wil_UninitializeFeatureStaging @ 0x1402C9448 (wil_UninitializeFeatureStaging.c)
 *     TlgRegisterAggregateProviderEx @ 0x1402CA0BC (TlgRegisterAggregateProviderEx.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1402CA314 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     wil_InitializeFeatureStaging @ 0x1402E9618 (wil_InitializeFeatureStaging.c)
 *     InitCreateUserCrit @ 0x1402EB1A4 (InitCreateUserCrit.c)
 *     Win32UserInitialize @ 0x1402EB804 (Win32UserInitialize.c)
 *     InitializeGre @ 0x1402EC79C (InitializeGre.c)
 */

__int64 __fastcall Win32kBaseDriverEntry(struct _KSEMAPHORE *a1, __int64 a2)
{
  unsigned int v4; // r12d
  char v5; // r15
  unsigned __int8 v6; // r14
  int v7; // eax
  __int64 v8; // rcx
  int CurrentDisplayState; // edi
  __int64 SessionState; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 UserSessionState; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  NTSTATUS v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  BOOL v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  struct _DRIVER_OBJECT *v37; // rcx
  __int64 Pool2; // rbx
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 v43; // rdx
  void *v44; // rcx
  bool v45; // si
  __int64 v46; // rax
  int v47; // r8d
  int v48; // edx
  __int64 v49; // rdx
  bool v50; // bl
  __int64 v51; // rax
  int v52; // r8d
  int v53; // edx
  char v55; // al
  __int64 v56; // rdx
  __int64 QuadPart; // rcx
  __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rdx
  __int64 v63; // rcx
  void (*v64)(const struct _GUID *, unsigned int, unsigned __int8, unsigned __int64, unsigned __int64, struct _EVENT_FILTER_DESCRIPTOR *, void *); // rcx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rax
  _BYTE *PagedLookasideList; // rax
  __int64 v71; // rdx
  void *v72; // rcx
  bool v73; // r13
  __int64 v74; // rax
  int v75; // r8d
  int v76; // edx
  __int64 v77; // rdx
  __int64 v78; // rcx
  __int64 v79; // rdx
  __int64 v80; // rcx
  __int64 v81; // rax
  __int64 v82; // rcx
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // rdx
  __int64 v86; // rcx
  __int64 v87; // rcx
  int v88; // eax
  __int64 v89; // rcx
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // rdx
  __int64 v93; // rcx
  unsigned __int64 v94; // rbx
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // rdx
  __int64 v98; // rcx
  __int64 v99; // rcx
  __int64 v100; // rcx
  __int64 v101; // rcx
  _QWORD *v102; // rdi
  __int64 v103; // rax
  char IsValidGuiContext; // al
  __int64 v105; // rdx
  __int64 v106; // rdx
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // rdx
  __int64 v110; // rcx
  __int64 v111; // rdx
  __int64 v112; // rcx
  __int64 v113; // rdx
  __int64 v114; // rcx
  __int64 v115; // r8
  __int64 v116; // rcx
  __int64 v117; // rdx
  __int64 v118; // rcx
  __int64 v119; // rdx
  __int64 v120; // rcx
  __int64 v121; // rdx
  __int64 v122; // rcx
  __int64 v123; // rcx
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // rdx
  __int64 v127; // rcx
  __int64 v128; // rdx
  __int64 v129; // rcx
  __int64 v130; // rdx
  __int64 v131; // rcx
  __int64 v132; // rdx
  __int64 v133; // rcx
  __int64 v134; // rdx
  __int64 v135; // rcx
  __int64 v136; // rdx
  __int64 v137; // rcx
  __int64 v138; // rdx
  __int64 v139; // rcx
  __int64 v140; // rdx
  __int64 v141; // rcx
  __int64 v142; // rdx
  __int64 v143; // rcx
  __int64 v144; // rcx
  __int64 v145; // rcx
  __int64 v146; // rcx
  __int64 v147; // rcx
  __int64 v148; // rcx
  __int64 v149; // rdx
  __int64 v150; // rcx
  __int64 v151; // rcx
  __int64 v152; // rdx
  __int64 v153; // rcx
  __int64 v154; // rdx
  __int64 v155; // rcx
  __int64 v156; // rcx
  __int64 v157; // rax
  __int64 v158; // rcx
  __int64 v159; // rcx
  __int64 v160; // rdx
  __int64 v161; // rcx
  __int64 v162; // rcx
  struct _EX_RUNDOWN_REF *v163; // rax
  __int64 v164; // rcx
  __int64 v165; // rcx
  __int64 v166; // rcx
  __int64 v167; // rcx
  __int64 v168; // rdx
  __int64 v169; // rcx
  __int64 v170; // rdx
  __int64 v171; // rcx
  __int64 v172; // rax
  __int64 v173; // rdx
  __int64 v174; // rcx
  __int64 SystemInformation; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int CurrentWin32kSessionId; // [rsp+58h] [rbp-A8h] BYREF
  struct _KSEMAPHORE *KernelSemaphore; // [rsp+60h] [rbp-A0h] BYREF
  struct _CLIENT_ID JobInformation; // [rsp+68h] [rbp-98h] BYREF
  __int64 v179; // [rsp+88h] [rbp-78h]
  struct _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v182[256]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v183[160]; // [rsp+1D0h] [rbp+D0h] BYREF

  KernelSemaphore = a1;
  CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v182);
  if ( (unsigned int)W32GetDebugState() )
    KeBugCheckEx(0x164u, 0x3AuLL, 0LL, 0LL, 0LL);
  CurrentWin32kSessionId = W32GetCurrentWin32kSessionId();
  v4 = CurrentWin32kSessionId;
  v5 = 1;
  if ( IsHostServiceSession(CurrentWin32kSessionId) )
  {
    v6 = 1;
    v7 = wil_InitializeFeatureStaging();
    if ( v7 < 0 )
      KeBugCheckEx(0x164u, 0x3EuLL, v7, 0LL, 0LL);
  }
  else
  {
    v6 = 0;
  }
  if ( (unsigned int)Feature_HostServiceSessionInitFailure__private_IsEnabledDeviceUsageNoInline() )
  {
    CurrentDisplayState = Win32kBaseDriverEntryOrFault(a1, a2, CurrentWin32kSessionId, v6);
LABEL_52:
    CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v182);
    return (unsigned int)CurrentDisplayState;
  }
  SessionState = W32GetSessionState(v8);
  if ( (int)CreateWin32kApiSetTable((__int64 *)(SessionState + 152)) < 0 )
  {
    v13 = W32GetSessionState(v12);
    FreeWin32kApiSetTable((PVOID **)(v13 + 152));
    CurrentDisplayState = -1073741823;
    goto LABEL_52;
  }
  JobInformation.UniqueProcess = (HANDLE)0x100000001LL;
  JobInformation.UniqueThread = (HANDLE)7;
  UserSessionState = W32GetUserSessionState(v12, v11);
  *(struct _CLIENT_ID *)(UserSessionState + 42544) = JobInformation;
  *(_DWORD *)(UserSessionState + 42560) = 0;
  *(_DWORD *)(W32GetUserGdiSessionState(v15) + 28) = 1;
  v17 = W32GetSessionState(v16);
  CurrentDisplayState = CreatePerSessionWin32kCall((__int64 *)(v17 + 152));
  if ( CurrentDisplayState < 0 )
  {
LABEL_25:
    if ( v6 )
      wil_UninitializeFeatureStaging();
    goto LABEL_52;
  }
  if ( IsCurrentSessionInServerSilo() )
  {
    v179 = 0LL;
    memset(&JobInformation, 0, 32);
    v20 = ZwQueryInformationJobObject(0LL, JobObjectEndOfJobTimeInformation|0x20, &JobInformation, 0x28u, 0LL);
    if ( v20 < 0 )
      KeBugCheckEx(0x164u, v20, 0LL, 0LL, 0LL);
    v23 = W32GetUserSessionState(v22, v21);
    v25 = (unsigned int)v179;
    *(_DWORD *)(v23 + 71176) = v179;
  }
  else
  {
    v25 = W32GetUserSessionState(v19, v18);
    *(_DWORD *)(v25 + 71176) = MEMORY[0xFFFFF78000000260];
  }
  if ( *(_DWORD *)(W32GetUserSessionState(v25, v24) + 71176) < 0x4F7Cu
    || *(_DWORD *)(W32GetUserSessionState(v27, v26) + 71176) >= 0x55F0u )
  {
    *(_WORD *)(W32GetUserSessionState(v27, v26) + 71180) = 0;
  }
  else
  {
    *(_WORD *)(W32GetUserSessionState(v27, v26) + 71180) = 320;
  }
  if ( v6 )
    InitializeTelemetryAssertsKMByName();
  v28 = IsServiceSession(v4);
  CurrentDisplayState = InitializeWin32SiloGlobals(!v28);
  if ( CurrentDisplayState < 0 )
  {
    LODWORD(SystemInformation) = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2017);
    goto LABEL_25;
  }
  EnsureRequiredApiSetExtensions(v30, v29);
  Pool2 = W32GetUserSessionState(v32, v31) + 14080;
  *(_QWORD *)(W32GetUserSessionState(v34, v33) + 14064) = Pool2;
  *(_QWORD *)(W32GetUserSessionState(v36, v35) + 14200) = &ausMouseVKey;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Driver\\Win32k");
  LOBYTE(Pool2) = 0;
  if ( v6 )
  {
    IoCreateDriver(&DestinationString, Win32kPnPDriverEntry);
    if ( (int)IsTelemetryAssertsSupported(v40, v39) >= 0 )
      InitializeWin32kFullTelemetryAsserts((__int64)v37, v41);
  }
  CurrentDisplayState = InitializeWppLogging(v37);
  if ( CurrentDisplayState < 0 )
    goto LABEL_89;
  if ( !(unsigned int)InitializeWin32PoolTracking() )
  {
    CurrentDisplayState = -1073741801;
    goto LABEL_89;
  }
  if ( !(unsigned int)InitCreateUserCrit() )
  {
LABEL_34:
    CurrentDisplayState = -1073741801;
    goto LABEL_35;
  }
  if ( !v6 )
    goto LABEL_59;
  SystemInformation = 8LL;
  if ( ZwQuerySystemInformation(MaxSystemInfoClass|SystemProcessInformation, &SystemInformation, 8u, 0LL) < 0
    || (v55 = 1, (SystemInformation & 0x200000000LL) == 0) )
  {
    v55 = 0;
  }
  gbOSTestSigningEnabled = v55;
  if ( ZwPowerInformation(ProcessorInformation|0x40, 0LL, 0, &gPlatformRole, 4u) < 0 )
  {
    gPlatformRole = PlatformRoleDesktop;
    WdInitialize();
  }
  else
  {
LABEL_59:
    WdInitialize();
    if ( !v6 )
      goto LABEL_61;
  }
  TlgRegisterAggregateProviderEx(&dword_14029EDE8);
  KeQueryPerformanceCounter(&gliQpcFreq);
  QuadPart = gliQpcFreq.QuadPart;
  v56 = ((unsigned __int64)gliQpcFreq.QuadPart * (unsigned __int128)0x624DD2F1A9FBE77uLL) >> 64;
  W32kEtwUserCritAcquireDelayTimeoutQPC = gliQpcFreq.QuadPart / 0x3E8uLL;
  W32KEtwUserCritTelemetryThrottleQPC = 3600 * gliQpcFreq.QuadPart;
LABEL_61:
  CurrentDisplayState = InitializeDCEGlobals(QuadPart, v56);
  if ( CurrentDisplayState < 0 )
    goto LABEL_35;
  CurrentDisplayState = InitializeCursorGlobals(v58, v43);
  if ( CurrentDisplayState < 0 )
    goto LABEL_35;
  CurrentDisplayState = InitializeProcessThreadGlobals(v59, v43);
  if ( CurrentDisplayState < 0 )
    goto LABEL_35;
  if ( v6 )
  {
    McGenEventRegister_EtwRegister();
    DCEInUseCountTelemetryInit();
    if ( (int)IsUserkTraceLoggingSupported(v61, v60) >= 0 )
      EnableUserkTraceLogging(v63, v62);
    if ( (int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
                (char *)&dword_14029EF38,
                (__int64)W32kTraceLoggingEnableCallback,
                0LL) < 0 )
    {
      LODWORD(SystemInformation) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2252);
    }
    if ( (int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_14029EF00, 0LL, 0LL) < 0 )
    {
      LODWORD(SystemInformation) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2257);
    }
    if ( (int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_14029EE90, 0LL, 0LL) < 0 )
    {
      LODWORD(SystemInformation) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2262);
    }
    if ( (int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
                (char *)&dword_14029EE58,
                (__int64)W32kBaseInputEnableCallback,
                0LL) < 0 )
    {
      LODWORD(SystemInformation) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2267);
    }
    if ( (int)InputTraceLogging::RegisterEx(v64) < 0 )
    {
      LODWORD(SystemInformation) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2272);
    }
    TlgRegisterAggregateProviderEx(&dword_14029EEC8);
  }
  else
  {
    DCEInUseCountTelemetryInit();
  }
  Pool2 = W32GetUserSessionState(v66, v65);
  v69 = W32GetUserSessionState(v68, v67);
  PagedLookasideList = NSInstrumentation::CLeakTrackingAllocator::AllocatePagedLookasideList(
                         (NSInstrumentation::CPointerHashTable **)(v69 + 72032),
                         0x48uLL,
                         0x616C7355u,
                         0x696C7455u,
                         0x10u);
  *(_QWORD *)(Pool2 + 19344) = PagedLookasideList;
  v72 = PagedLookasideList;
  LOBYTE(Pool2) = 0;
  if ( PagedLookasideList )
  {
    CurrentDisplayState = 0;
  }
  else
  {
    CurrentDisplayState = -1073741801;
    v72 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0 )
      LOBYTE(Pool2) = *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v73 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)Pool2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v74 = W32GetUserSessionState(WPP_GLOBAL_Control, v71);
      LOBYTE(v75) = v73;
      LOBYTE(v76) = Pool2;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v76,
        v75,
        *(_QWORD *)(v74 + 69144),
        2,
        14,
        13,
        (__int64)&WPP_fa6b8f79bf1f3a7ddecd36172dbcfaf7_Traceguids,
        23);
    }
    v4 = CurrentWin32kSessionId;
    LOBYTE(Pool2) = 0;
  }
  *(_DWORD *)(W32GetUserSessionState(v72, v71) + 69864) = 1;
LABEL_89:
  if ( v6 )
  {
    W32PageEntireDriver(Win32kBaseDriverEntry);
    hModuleWinKernel = (PVOID)0x140000000LL;
  }
  if ( CurrentDisplayState >= 0 )
    CurrentDisplayState = InitializeGraphicsInfrastructure(hModuleWinKernel);
  HYDRA_HINT(1LL, v42);
  if ( v6 )
    gpvWin32kImageBase = *(PVOID *)&KernelSemaphore->Limit;
  if ( (int)IsInitializePointerPredictionSupported(v78, v77) >= 0 )
    InitializePointerPrediction(v80, v79);
  v81 = W32GetUserSessionState(v80, v79);
  if ( BCryptGenRandom(0LL, (PUCHAR)(v81 + 42568), 1u, 2u) < 0 )
    goto LABEL_35;
  Pool2 = *(_QWORD *)(W32GetUserSessionState(v82, v43) + 42568) & 0x7FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(W32GetUserSessionState(v84, v83) + 42568) = Pool2;
  LOBYTE(Pool2) = 0;
  if ( (int)IsInitializePointerDevicesPresenceStateSupported(v86, v85) >= 0 )
    InitializePointerDevicesPresenceState(v87, v43);
  if ( CurrentDisplayState < 0 )
    goto LABEL_35;
  v88 = CheckInitialSessions();
  CurrentDisplayState = v88;
  if ( v88 && v88 != -1073741771 )
  {
    if ( v88 >= 0 )
      CurrentDisplayState = -1073741823;
    goto LABEL_35;
  }
  if ( !*(_DWORD *)(W32GetUserSessionState(v89, v43) + 68612) || *(_DWORD *)(W32GetUserSessionState(v91, v90) + 68620) )
    RtlSetActiveConsoleId(v4);
  if ( v6 )
    SysEntryRegisterWin32kBaseDriverUnload(v93, v92);
  v94 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  *(_DWORD *)(W32GetUserSessionState(0xFFFFF78000000004uLL, v92) + 57584) = v94;
  Pool2 = ExAllocatePool2(64LL, 56LL, 1716220757LL);
  *(_QWORD *)(W32GetUserSessionState(v96, v95) + 42536) = Pool2;
  LOBYTE(Pool2) = 0;
  if ( !*(_QWORD *)(W32GetUserSessionState(v98, v97) + 42536) )
    goto LABEL_34;
  v100 = *(_QWORD *)(W32GetUserSessionState(v99, v43) + 42536);
  *(_DWORD *)v100 = 1;
  *(_QWORD *)(v100 + 8) = 0LL;
  *(_DWORD *)(v100 + 16) = 0;
  KeInitializeEvent((PRKEVENT)(v100 + 24), SynchronizationEvent, 0);
  if ( !(unsigned int)InitSmartObjectRefLookaside() || !InitializeUserTypeIsolation() )
    goto LABEL_34;
  v102 = (_QWORD *)W32GetUserSessionState(v101, v43);
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
    v103 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
             v102,
             1,
             0,
             (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  else
    v103 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(v102, 0);
  Pool2 = v103;
  v102[3] = v103;
  if ( !(unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( Pool2 )
    {
      *(_BYTE *)(Pool2 + 1708) = 1;
      goto LABEL_120;
    }
LABEL_122:
    LODWORD(Pool2) = 0;
    goto LABEL_123;
  }
  if ( !Pool2 )
    goto LABEL_122;
LABEL_120:
  IsValidGuiContext = UserCritInternal::_anonymous_namespace_::IsValidGuiContext(Pool2);
  LODWORD(Pool2) = 0;
  if ( IsValidGuiContext )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(v102 + 2461), v105);
    DestroyDeferredUnlockObjectAssignmentList(v102 + 2468);
    DestroyDeferredUnlockObjectAssignmentList(v102 + 2466);
  }
LABEL_123:
  CurrentDisplayState = InitializeWin32KSyscallFilter();
  if ( CurrentDisplayState < 0 )
  {
    UserSessionSwitchLeaveCritWithNonPaged(0LL, v106);
    goto LABEL_35;
  }
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v106);
  if ( v6 )
  {
    SysEntryPsEstablishWin32Callouts(v108, v107);
    DbgkLkmdRegisterCallback(W32pLkmdDataCollectionCallback, 0LL, 5LL);
  }
  if ( (int)RtlIsApiSetImplemented("ext-ms-win-composition-init-l1-1-0") >= 0
    && (int)VerifyDWMApiSetImplementation() >= 0 )
  {
    LODWORD(Pool2) = 1;
  }
  *(_DWORD *)(W32GetUserSessionState(v110, v109) + 19096) = Pool2;
  RIMInitialize(v112, v111);
  LOBYTE(Pool2) = 0;
  CurrentDisplayState = CoreMsgInitialize(v114, v113, v115);
  if ( CurrentDisplayState < 0 )
    goto LABEL_35;
  if ( (unsigned int)Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !v6 )
      goto LABEL_136;
    CurrentDisplayState = CoreMessagingKPort::Initialize(v116, v43);
    if ( CurrentDisplayState < 0 )
      goto LABEL_35;
  }
  if ( v6 )
    TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_14029F1A0, 0LL, 0LL);
LABEL_136:
  if ( (int)IsInitTimerCoalescingSupported(v116, v43) >= 0 )
    InitTimerCoalescing(v118, v117);
  Pool2 = (__int64)CreateKernelEventObject(v118, 0);
  *(_QWORD *)(W32GetUserSessionState(v120, v119) + 16824) = Pool2;
  LOBYTE(Pool2) = 0;
  if ( !*(_QWORD *)(W32GetUserSessionState(v122, v121) + 16824) )
    goto LABEL_34;
  Pool2 = (__int64)CreateKernelEventObject(v123, 0);
  *(_QWORD *)(W32GetUserSessionState(v125, v124) + 19440) = Pool2;
  LOBYTE(Pool2) = 0;
  if ( !*(_QWORD *)(W32GetUserSessionState(v127, v126) + 19440) )
    goto LABEL_34;
  Pool2 = (__int64)CreateKernelEvent(NotificationEvent, 0);
  *(_QWORD *)(W32GetUserSessionState(v129, v128) + 68384) = Pool2;
  LOBYTE(Pool2) = 0;
  if ( !*(_QWORD *)(W32GetUserSessionState(v131, v130) + 68384) )
    goto LABEL_34;
  Pool2 = (__int64)CreateKernelEvent(NotificationEvent, 0);
  *(_QWORD *)(W32GetUserSessionState(v133, v132) + 68392) = Pool2;
  LOBYTE(Pool2) = 0;
  if ( !*(_QWORD *)(W32GetUserSessionState(v135, v134) + 68392) )
    goto LABEL_34;
  Pool2 = (__int64)CreateKernelEvent(NotificationEvent, 1u);
  *(_QWORD *)(W32GetUserSessionState(v137, v136) + 68400) = Pool2;
  LOBYTE(Pool2) = 0;
  if ( !*(_QWORD *)(W32GetUserSessionState(v139, v138) + 68400) )
    goto LABEL_34;
  Pool2 = (__int64)CreateKernelEvent(NotificationEvent, 0);
  *(_QWORD *)(W32GetUserSessionState(v141, v140) + 18704) = Pool2;
  LOBYTE(Pool2) = 0;
  if ( !*(_QWORD *)(W32GetUserSessionState(v143, v142) + 18704) )
    goto LABEL_34;
  *(_BYTE *)(W32GetUserGdiSessionState(v144) + 1) = 0;
  Pool2 = (__int64)CreateKernelEvent(NotificationEvent, 1u);
  *(_QWORD *)(W32GetUserGdiSessionState(v145) + 8) = Pool2;
  LOBYTE(Pool2) = 0;
  if ( !*(_QWORD *)(W32GetUserGdiSessionState(v146) + 8) )
    goto LABEL_34;
  CurrentWin32kSessionId = 0;
  SGRDPgcSwitchInProgressWaiters<unsigned long>::operator=(v147, (int *)&CurrentWin32kSessionId);
  KernelSemaphore = CreateKernelSemaphore(0, 0x7FFFFFFF);
  SGRDPgpsemSwitchInProgressWaiters<_KSEMAPHORE *>::operator=(v148, (__int64 *)&KernelSemaphore);
  if ( !*(_QWORD *)(W32GetUserSessionState(v150, v149) + 68872) )
    goto LABEL_34;
  *(_DWORD *)(W32GetUserSessionState(v151, v43) + 18784) = 0;
  Pool2 = (__int64)CreateKernelSemaphore(0, 0x7FFFFFFF);
  *(_QWORD *)(W32GetUserSessionState(v153, v152) + 18776) = Pool2;
  LOBYTE(Pool2) = 0;
  if ( !*(_QWORD *)(W32GetUserSessionState(v155, v154) + 18776) )
    goto LABEL_34;
  RtlLoadStringOrError(0x268u, v183, 80, 0);
  if ( v6 )
    hModuleWin = (void *)MmUserProbeAddress;
  if ( !(unsigned __int8)InitializeGre() )
    goto LABEL_34;
  v157 = W32GetUserSessionState(v156, v43);
  *(_WORD *)(v157 + 20606) = 1;
  *(_QWORD *)(v157 + 20552) = v157 + 20520;
  CurrentDisplayState = Win32UserInitialize(v6);
  if ( CurrentDisplayState < 0 )
    goto LABEL_35;
  Pool2 = MEMORY[0xFFFFF78000000008];
  *(_QWORD *)(W32GetUserSessionState(v158, v43) + 63464) = Pool2;
  LOBYTE(Pool2) = 0;
  CurrentDisplayState = InitializePowerGlobals();
  if ( CurrentDisplayState < 0 )
    goto LABEL_35;
  if ( !*(_DWORD *)(W32GetUserSessionState(v159, v43) + 68612)
    || *(_DWORD *)(W32GetUserSessionState(v161, v160) + 68620) )
  {
    CurrentDisplayState = RetrieveCurrentDisplayState(v161, v160);
    if ( CurrentDisplayState >= 0 )
    {
      LODWORD(SystemInformation) = *(_DWORD *)(W32GetUserSessionState(v162, v43) + 2752) != 0 ? 3 : 0;
      ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &SystemInformation, 4LL, 0LL, 0LL);
      goto LABEL_156;
    }
LABEL_35:
    v44 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u )
    {
      LOBYTE(Pool2) = 1;
    }
    v45 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)Pool2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v46 = W32GetUserSessionState(WPP_GLOBAL_Control, v43);
      LOBYTE(v47) = v45;
      LOBYTE(v48) = Pool2;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v48,
        v47,
        *(_QWORD *)(v46 + 69144),
        2,
        14,
        14,
        (__int64)&WPP_fa6b8f79bf1f3a7ddecd36172dbcfaf7_Traceguids,
        CurrentDisplayState);
    }
    if ( *(_QWORD *)(W32GetUserSessionState(v44, v43) + 69144) )
    {
      if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v5 = 0;
      }
      v50 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v51 = W32GetUserSessionState(WPP_GLOBAL_Control, v49);
        LOBYTE(v52) = v50;
        LOBYTE(v53) = v5;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v53,
          v52,
          *(_QWORD *)(v51 + 69144),
          2,
          14,
          15,
          (__int64)&WPP_fa6b8f79bf1f3a7ddecd36172dbcfaf7_Traceguids,
          CurrentDisplayState);
      }
    }
    Win32KBaseDriverUnload(0LL, v49);
    if ( CurrentDisplayState == -1073741822 )
      CurrentDisplayState = -1073741637;
    goto LABEL_52;
  }
LABEL_156:
  v163 = (struct _EX_RUNDOWN_REF *)W32GetUserSessionState(v161, v160);
  ExInitializeRundownProtection(v163 + 7941);
  CurrentDisplayState = InputInitialize();
  if ( CurrentDisplayState < 0 )
    goto LABEL_35;
  CurrentDisplayState = OPMInitialize(v164);
  if ( CurrentDisplayState < 0 )
    goto LABEL_35;
  if ( (int)IsDDCCIInitializeSupported(v165, v43) >= 0 )
  {
    CurrentDisplayState = DDCCIInitializeWrap(v166, v43);
    if ( CurrentDisplayState < 0 )
      goto LABEL_35;
  }
  if ( (int)IsInitDwmInputProcessingSupported(v166, v43) >= 0 )
  {
    CurrentDisplayState = InitDwmInputProcessing(v167, v43);
    if ( CurrentDisplayState < 0 )
      goto LABEL_35;
  }
  if ( (int)IsInitializeNavigationWindowRegistrySupported(v167, v43) >= 0 )
  {
    CurrentDisplayState = InitializeNavigationWindowRegistry(v169, v168);
    if ( CurrentDisplayState < 0 )
      goto LABEL_35;
  }
  if ( !v6 )
  {
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    *(_QWORD *)&ObjectAttributes.Attributes = 512LL;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    JobInformation = (struct _CLIENT_ID)(unsigned __int64)PsGetCurrentProcessId();
    v172 = W32GetUserSessionState(v171, v170);
    if ( ZwOpenProcess((PHANDLE)(v172 + 36384), 0x1000u, &ObjectAttributes, &JobInformation) < 0 )
      *(_QWORD *)(W32GetUserSessionState(v174, v173) + 36384) = 0LL;
  }
  ReportUsageForAllVelocityKeys();
  CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v182);
  return 0LL;
}
