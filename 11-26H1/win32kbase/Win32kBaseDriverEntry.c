/*
 * XREFs of Win32kBaseDriverEntry @ 0x1402F04E0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     ??0CTempW32ThreadNonPaged@@QEAA@XZ @ 0x140059BB8 (--0CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     CreateKernelSemaphore @ 0x14005D890 (CreateKernelSemaphore.c)
 *     ??1CTempW32ThreadNonPaged@@QEAA@XZ @ 0x1400910B4 (--1CTempW32ThreadNonPaged@@QEAA@XZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x140099D08 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     CoreMsgInitialize @ 0x1400DA980 (CoreMsgInitialize.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     InitSmartObjectRefLookaside @ 0x14010E6A4 (InitSmartObjectRefLookaside.c)
 *     ?AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z @ 0x14010EB20 (-AllocatePagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAX_KIII@Z.c)
 *     RIMInitialize @ 0x14010F990 (RIMInitialize.c)
 *     RtlLoadStringOrError @ 0x14013AC70 (RtlLoadStringOrError.c)
 *     InitializeWin32KSyscallFilter @ 0x140141B80 (InitializeWin32KSyscallFilter.c)
 *     ?InitializeWppLogging@@YAJPEAU_DRIVER_OBJECT@@@Z @ 0x140142028 (-InitializeWppLogging@@YAJPEAU_DRIVER_OBJECT@@@Z.c)
 *     IsCurrentSessionHostServiceSession @ 0x140142338 (IsCurrentSessionHostServiceSession.c)
 *     IsHostServiceSession @ 0x140142354 (IsHostServiceSession.c)
 *     ?CheckInitialSessions@@YAJXZ @ 0x140165D48 (-CheckInitialSessions@@YAJXZ.c)
 *     IsServiceSession @ 0x140165EF4 (IsServiceSession.c)
 *     CreateKernelEvent @ 0x14016CAE0 (CreateKernelEvent.c)
 *     CreateWin32kApiSetTable @ 0x140179020 (CreateWin32kApiSetTable.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x14017BECC (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     RetrieveCurrentDisplayState @ 0x14017D4FC (RetrieveCurrentDisplayState.c)
 *     ?InitializePowerGlobals@@YAJXZ @ 0x140180184 (-InitializePowerGlobals@@YAJXZ.c)
 *     DCEInUseCountTelemetryInit @ 0x140185858 (DCEInUseCountTelemetryInit.c)
 *     IsCurrentSessionInServerSilo @ 0x140186404 (IsCurrentSessionInServerSilo.c)
 *     InitializeTelemetryAssertsKMByName @ 0x140188094 (InitializeTelemetryAssertsKMByName.c)
 *     ?VerifyDWMApiSetImplementation@@YAJXZ @ 0x140189774 (-VerifyDWMApiSetImplementation@@YAJXZ.c)
 *     ?InitializeUserTypeIsolation@@YA_NXZ @ 0x140191774 (-InitializeUserTypeIsolation@@YA_NXZ.c)
 *     CreatePerSessionWin32kCall @ 0x140191CF4 (CreatePerSessionWin32kCall.c)
 *     ?InitializeCursorGlobals@@YAJXZ @ 0x140193790 (-InitializeCursorGlobals@@YAJXZ.c)
 *     InputInitialize @ 0x140194D38 (InputInitialize.c)
 *     ?InitializeWin32SiloGlobals@@YAJW4SiloGlobalAccess@@@Z @ 0x140195BB0 (-InitializeWin32SiloGlobals@@YAJW4SiloGlobalAccess@@@Z.c)
 *     OPMInitialize @ 0x140196BD0 (OPMInitialize.c)
 *     ?EnsureRequiredApiSetExtensions@@YAXXZ @ 0x140198720 (-EnsureRequiredApiSetExtensions@@YAXXZ.c)
 *     Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline @ 0x14019B32C (Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline.c)
 *     ?Create@CLeakTrackingAllocator@NSInstrumentation@@SAPEAV12@PEAX_N@Z @ 0x14019B958 (-Create@CLeakTrackingAllocator@NSInstrumentation@@SAPEAV12@PEAX_N@Z.c)
 *     McGenEventRegister_EtwRegister @ 0x1401A1790 (McGenEventRegister_EtwRegister.c)
 *     ?InitializeDCEGlobals@@YAJXZ @ 0x1401A5614 (-InitializeDCEGlobals@@YAJXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     CreateKernelEventObject @ 0x1401BC480 (CreateKernelEventObject.c)
 *     FreeWin32kApiSetTable @ 0x1401C36A0 (FreeWin32kApiSetTable.c)
 *     ?Initialize@CoreMessagingKPort@@SAJXZ @ 0x1401CDC30 (-Initialize@CoreMessagingKPort@@SAJXZ.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     ?ReportUsageForAllVelocityKeys@@YAXXZ @ 0x1401D6CB4 (-ReportUsageForAllVelocityKeys@@YAXXZ.c)
 *     ?Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1401D6EE0 (-Win32KBaseDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     ?IsWin32kRefreshed@@YA_NXZ @ 0x1401EB030 (-IsWin32kRefreshed@@YA_NXZ.c)
 *     ?InitializeProcessThreadGlobals@@YAJXZ @ 0x1401EC424 (-InitializeProcessThreadGlobals@@YAJXZ.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     TlgRegisterAggregateProviderEx @ 0x1402D3480 (TlgRegisterAggregateProviderEx.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1402D36E4 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     wil_InitializeFeatureStaging @ 0x1402F1B48 (wil_InitializeFeatureStaging.c)
 *     InitCreateUserCrit @ 0x1402F1D28 (InitCreateUserCrit.c)
 *     Win32UserInitialize @ 0x1402F23AC (Win32UserInitialize.c)
 *     InitializeGre @ 0x1402F3768 (InitializeGre.c)
 */

__int64 __fastcall Win32kBaseDriverEntry(_QWORD *a1)
{
  _QWORD *UniqueProcess; // r12
  __int64 v2; // rcx
  unsigned int v3; // r15d
  __int64 v4; // rcx
  char v5; // r13
  unsigned __int8 v6; // si
  int v7; // eax
  __int64 SessionState; // rax
  int Win32kApiSetTable; // eax
  int v10; // edx
  __int64 v11; // rcx
  int v12; // r8d
  __int64 v13; // rax
  ULONG_PTR v14; // rdi
  __int64 UserSessionState; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  int v19; // eax
  int v20; // edx
  int v21; // ecx
  int v22; // r8d
  NTSTATUS v23; // eax
  int v24; // edx
  int v25; // ecx
  int v26; // r8d
  __int64 v27; // rax
  int v28; // edx
  int v29; // r8d
  __int64 v30; // rcx
  int v31; // edx
  int v32; // ecx
  int v33; // r8d
  BOOL v34; // eax
  NTSTATUS v35; // eax
  __int64 v36; // rcx
  int v37; // edx
  int v38; // ecx
  int v39; // r8d
  __int64 v40; // rbx
  int v41; // edx
  int v42; // ecx
  int v43; // r8d
  int v44; // edx
  int v45; // ecx
  int v46; // r8d
  struct _DRIVER_OBJECT *v47; // rcx
  char v48; // bl
  __int64 v49; // rcx
  int (*v50)(void); // rax
  void (*v51)(void); // rax
  int v52; // eax
  __int64 v53; // rcx
  int v54; // edx
  int v55; // ecx
  int v56; // r8d
  __int64 Pool2; // rbx
  int v58; // edx
  int v59; // ecx
  int v60; // r8d
  __int64 v61; // rax
  __int64 v62; // r8
  unsigned int v63; // r9d
  int v64; // edx
  int v65; // r8d
  int v66; // ecx
  bool v67; // si
  __int64 v68; // rax
  int v69; // r8d
  int v70; // edx
  int v71; // edx
  int v72; // r8d
  bool v73; // bl
  __int64 v74; // rax
  int v75; // r8d
  int v76; // edx
  char v78; // al
  __int64 v79; // rdx
  DWORD LowPart; // ecx
  int v81; // r8d
  int v82; // eax
  int v83; // ecx
  int v84; // eax
  int v85; // ecx
  int v86; // eax
  __int64 v87; // rcx
  int (*v88)(void); // rax
  __int64 v89; // rcx
  void (*v90)(void); // rax
  int v91; // edx
  int v92; // ecx
  int v93; // r8d
  int v94; // edx
  int v95; // ecx
  int v96; // r8d
  __int64 v97; // rax
  _BYTE *PagedLookasideList; // rax
  int v99; // edx
  int v100; // r8d
  _UNKNOWN **v101; // rcx
  bool v102; // r15
  bool v103; // r12
  __int64 v104; // rax
  int v105; // r8d
  int v106; // edx
  int v107; // eax
  __int64 v108; // rax
  __int64 v109; // rcx
  int v110; // edx
  __int64 v111; // rcx
  int v112; // r8d
  int (*v113)(void); // rax
  void (*v114)(void); // rax
  __int64 v115; // rax
  NTSTATUS v116; // eax
  int v117; // ecx
  int v118; // edx
  int v119; // r8d
  __int64 v120; // rcx
  int (*v121)(void); // rax
  __int64 v122; // rcx
  void (__fastcall *v123)(__int64); // rax
  int v124; // eax
  int v125; // ecx
  int v126; // edx
  int v127; // ecx
  int v128; // r8d
  int v129; // edx
  __int64 v130; // rcx
  int v131; // r8d
  __int64 Win32kBaseApiSetTable; // rax
  void (__fastcall *v133)(void (__fastcall *)(struct _DRIVER_OBJECT *, int, int)); // rax
  unsigned __int64 v134; // rbx
  int v135; // edx
  int v136; // ecx
  int v137; // r8d
  int v138; // edx
  int v139; // ecx
  int v140; // r8d
  int v141; // ecx
  __int64 v142; // rcx
  int v143; // edx
  int v144; // ecx
  int v145; // r8d
  int v146; // ecx
  _QWORD *v147; // rbx
  __int64 v148; // rax
  int v149; // edx
  int v150; // r8d
  int v151; // eax
  __int64 v152; // rdx
  __int64 v153; // rcx
  __int64 v154; // r8
  __int64 v155; // r9
  __int64 v156; // rcx
  void (*v157)(void); // rax
  int v158; // edx
  int v159; // ecx
  int v160; // r8d
  int v161; // edx
  int v162; // ecx
  int v163; // r8d
  __int64 v164; // rdx
  __int64 v165; // rcx
  __int64 v166; // r8
  int v167; // eax
  int v168; // edx
  __int64 v169; // rcx
  int v170; // r8d
  int v171; // eax
  __int64 v172; // rcx
  int (*v173)(void); // rax
  void (*v174)(void); // rax
  int v175; // edx
  int v176; // ecx
  int v177; // r8d
  int v178; // edx
  int v179; // ecx
  int v180; // r8d
  __int64 v181; // rcx
  int v182; // edx
  int v183; // ecx
  int v184; // r8d
  int v185; // edx
  int v186; // ecx
  int v187; // r8d
  int v188; // edx
  int v189; // ecx
  int v190; // r8d
  int v191; // edx
  int v192; // ecx
  int v193; // r8d
  int v194; // edx
  int v195; // ecx
  int v196; // r8d
  int v197; // edx
  int v198; // ecx
  int v199; // r8d
  int v200; // edx
  int v201; // ecx
  int v202; // r8d
  int v203; // edx
  int v204; // ecx
  int v205; // r8d
  int v206; // edx
  int v207; // ecx
  int v208; // r8d
  int v209; // edx
  int v210; // ecx
  int v211; // r8d
  __int64 v212; // rcx
  __int64 v213; // rcx
  __int64 v214; // rcx
  int v215; // ecx
  int v216; // edx
  int v217; // ecx
  int v218; // r8d
  int v219; // edx
  int v220; // ecx
  int v221; // r8d
  int v222; // edx
  int v223; // ecx
  int v224; // r8d
  int v225; // edx
  int v226; // ecx
  int v227; // r8d
  int v228; // ecx
  int v229; // edx
  int v230; // ecx
  int v231; // r8d
  int v232; // edx
  int v233; // ecx
  int v234; // r8d
  int v235; // ecx
  __int64 v236; // rax
  int v237; // eax
  int v238; // ecx
  NTSTATUS v239; // eax
  int v240; // ecx
  int v241; // edx
  int v242; // ecx
  int v243; // r8d
  NTSTATUS CurrentDisplayState; // eax
  int v245; // ecx
  struct _EX_RUNDOWN_REF *v246; // rax
  int v247; // eax
  __int64 v248; // rcx
  int v249; // eax
  __int64 v250; // rcx
  __int64 v251; // rcx
  int (*v252)(void); // rax
  __int64 (*v253)(void); // rax
  int v254; // eax
  __int64 v255; // rcx
  int (*v256)(void); // rax
  __int64 (*v257)(void); // rax
  int v258; // eax
  int (*v259)(void); // rax
  __int64 v260; // rcx
  __int64 (*v261)(void); // rax
  int v262; // eax
  int v263; // edx
  int v264; // ecx
  int v265; // r8d
  __int64 v266; // rax
  int v267; // edx
  int v268; // ecx
  int v269; // r8d
  int SystemInformation; // [rsp+58h] [rbp-B0h] BYREF
  int v271; // [rsp+5Ch] [rbp-ACh]
  int JobInformation; // [rsp+60h] [rbp-A8h] BYREF
  struct _OBJECT_ATTRIBUTES JobInformation_8; // [rsp+68h] [rbp-A0h] BYREF
  struct _CLIENT_ID ClientId; // [rsp+98h] [rbp-70h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-60h] BYREF
  _BYTE v276[256]; // [rsp+B8h] [rbp-50h] BYREF
  char v277[160]; // [rsp+1B8h] [rbp+B0h] BYREF

  UniqueProcess = a1;
  ClientId.UniqueProcess = a1;
  CTempW32ThreadNonPaged::CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v276);
  if ( (unsigned int)W32GetDebugState() )
    KeBugCheckEx(0x164u, 0x3AuLL, 0LL, 0LL, 0LL);
  JobInformation = W32GetCurrentWin32kSessionId(v2);
  v3 = JobInformation;
  v5 = 1;
  if ( IsHostServiceSession(JobInformation) )
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
  SessionState = W32GetSessionState(v4);
  Win32kApiSetTable = CreateWin32kApiSetTable((__int64 *)(SessionState + 152));
  if ( Win32kApiSetTable < 0 )
  {
    if ( v6 )
      KeBugCheckEx(0x164u, 0x3EuLL, Win32kApiSetTable, 0LL, 0LL);
    v13 = W32GetSessionState(v11);
    FreeWin32kApiSetTable((PVOID **)(v13 + 152));
    LODWORD(v14) = -1073741823;
LABEL_58:
    CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v276);
    return (unsigned int)v14;
  }
  *(_QWORD *)&JobInformation_8.Length = 0x100000001LL;
  JobInformation_8.RootDirectory = (HANDLE)7;
  UserSessionState = W32GetUserSessionState(v11, v10, v12);
  *(_OWORD *)(UserSessionState + 42568) = *(_OWORD *)&JobInformation_8.Length;
  *(_DWORD *)(UserSessionState + 42584) = 0;
  *(_DWORD *)(W32GetUserGdiSessionState(v16) + 28) = 1;
  v18 = W32GetSessionState(v17);
  v19 = CreatePerSessionWin32kCall((__int64 *)(v18 + 152));
  LODWORD(v14) = v19;
  if ( v19 < 0 )
  {
    if ( v6 )
      KeBugCheckEx(0x164u, 0x3EuLL, v19, 0LL, 0LL);
    goto LABEL_58;
  }
  if ( IsCurrentSessionInServerSilo() )
  {
    memset(&JobInformation_8, 0, 40);
    v23 = ZwQueryInformationJobObject(0LL, JobObjectEndOfJobTimeInformation|0x20, &JobInformation_8, 0x28u, 0LL);
    if ( v23 < 0 )
      KeBugCheckEx(0x164u, v23, 0LL, 0LL, 0LL);
    v27 = W32GetUserSessionState(v25, v24, v26);
    LODWORD(v30) = JobInformation_8.SecurityDescriptor;
    *(_DWORD *)(v27 + 71160) = JobInformation_8.SecurityDescriptor;
  }
  else
  {
    v30 = W32GetUserSessionState(v21, v20, v22);
    *(_DWORD *)(v30 + 71160) = MEMORY[0xFFFFF78000000260];
  }
  if ( *(_DWORD *)(W32GetUserSessionState(v30, v28, v29) + 71160) < 0x4F7Cu
    || *(_DWORD *)(W32GetUserSessionState(v32, v31, v33) + 71160) >= 0x55F0u )
  {
    *(_WORD *)(W32GetUserSessionState(v32, v31, v33) + 71164) = 0;
  }
  else
  {
    *(_WORD *)(W32GetUserSessionState(v32, v31, v33) + 71164) = 320;
  }
  if ( v6 )
    InitializeTelemetryAssertsKMByName();
  v34 = IsServiceSession(v3);
  v35 = InitializeWin32SiloGlobals(!v34);
  LODWORD(v14) = v35;
  if ( v35 < 0 )
  {
    if ( v6 )
      KeBugCheckEx(0x164u, 0x3EuLL, v35, 0LL, 0LL);
    goto LABEL_58;
  }
  EnsureRequiredApiSetExtensions(v36);
  v40 = W32GetUserSessionState(v38, v37, v39) + 14072;
  *(_QWORD *)(W32GetUserSessionState(v42, v41, v43) + 14056) = v40;
  *(_QWORD *)(W32GetUserSessionState(v45, v44, v46) + 14192) = &ausMouseVKey;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Driver\\Win32k");
  v48 = 0;
  if ( v6 )
  {
    IoCreateDriver(&DestinationString, Win32kPnPDriverEntry);
    v47 = *(struct _DRIVER_OBJECT **)(W32GetWin32kBaseApiSetTable(v49) + 48);
    v50 = (int (*)(void))v47[11].MajorFunction[10];
    if ( v50 )
    {
      if ( v50() >= 0 )
      {
        v47 = *(struct _DRIVER_OBJECT **)(W32GetWin32kBaseApiSetTable(v47) + 48);
        v51 = (void (*)(void))v47[11].MajorFunction[11];
        if ( v51 )
          v51();
      }
    }
    v48 = 0;
  }
  v52 = InitializeWppLogging(v47);
  v14 = v52;
  if ( v52 < 0 )
  {
    SystemInformation = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 2172);
    LOBYTE(Pool2) = 0;
    if ( v6 )
      KeBugCheckEx(0x164u, 0x3EuLL, v14, 0LL, 0LL);
    goto LABEL_112;
  }
  if ( (unsigned int)IsCurrentSessionHostServiceSession(v53) )
    v48 = IsWin32kRefreshed();
  v61 = W32GetUserSessionState(v59, v58, v60);
  NSInstrumentation::CLeakTrackingAllocator::Create(
    (struct NSInstrumentation::CLeakTrackingAllocator *)(v61 + 72016),
    v48,
    v62,
    v63);
  LOBYTE(Pool2) = 0;
  if ( !(unsigned int)InitCreateUserCrit() )
  {
    LODWORD(v14) = -1073741801;
    if ( v6 )
      goto LABEL_142;
    goto LABEL_41;
  }
  if ( v6 )
  {
    v271 = 0;
    SystemInformation = 8;
    if ( ZwQuerySystemInformation(MaxSystemInfoClass|SystemProcessInformation, &SystemInformation, 8u, 0LL) < 0
      || (v78 = 1, (v271 & 2) == 0) )
    {
      v78 = 0;
    }
    gbOSTestSigningEnabled = v78;
    if ( ZwPowerInformation(ProcessorInformation|0x40, 0LL, 0, &gPlatformRole, 4u) < 0 )
    {
      gPlatformRole = PlatformRoleDesktop;
      WdInitialize();
LABEL_66:
      TlgRegisterAggregateProviderEx(&dword_1402A9E08);
      KeQueryPerformanceCounter(&gliQpcFreq);
      LowPart = gliQpcFreq.LowPart;
      v79 = ((unsigned __int64)gliQpcFreq.QuadPart * (unsigned __int128)0x624DD2F1A9FBE77uLL) >> 64;
      W32kEtwUserCritAcquireDelayTimeoutQPC = gliQpcFreq.QuadPart / 0x3E8uLL;
      W32KEtwUserCritTelemetryThrottleQPC = 3600 * gliQpcFreq.QuadPart;
      goto LABEL_67;
    }
  }
  WdInitialize();
  if ( v6 )
    goto LABEL_66;
LABEL_67:
  v82 = InitializeDCEGlobals(LowPart, v79, v81);
  LODWORD(v14) = v82;
  if ( v82 < 0 )
  {
    if ( v6 )
      KeBugCheckEx(0x164u, 0x3EuLL, v82, 0LL, 0LL);
    goto LABEL_41;
  }
  v84 = InitializeCursorGlobals(v83, v64, v65);
  LODWORD(v14) = v84;
  if ( v84 < 0 )
  {
    if ( v6 )
      KeBugCheckEx(0x164u, 0x3EuLL, v84, 0LL, 0LL);
    goto LABEL_41;
  }
  v86 = InitializeProcessThreadGlobals(v85, v64, v65);
  LODWORD(v14) = v86;
  if ( v86 < 0 )
  {
    if ( v6 )
      KeBugCheckEx(0x164u, 0x3EuLL, v86, 0LL, 0LL);
    goto LABEL_41;
  }
  if ( v6 )
  {
    McGenEventRegister_EtwRegister();
    DCEInUseCountTelemetryInit();
    v88 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v87) + 48) + 3864LL);
    if ( v88 )
    {
      if ( v88() >= 0 )
      {
        v90 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v89) + 48) + 3872LL);
        if ( v90 )
          v90();
      }
    }
    if ( (int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
                (char *)&dword_1402A9F58,
                (__int64)W32kTraceLoggingEnableCallback,
                0LL) < 0 )
    {
      SystemInformation = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 2329);
    }
    if ( (int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_1402A9F20, 0LL, 0LL) < 0 )
    {
      SystemInformation = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 2334);
    }
    if ( (int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_1402A9EB0, 0LL, 0LL) < 0 )
    {
      SystemInformation = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 2339);
    }
    if ( (int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
                (char *)&dword_1402A9E78,
                (__int64)W32kBaseInputEnableCallback,
                0LL) < 0 )
    {
      SystemInformation = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 2344);
    }
    if ( (int)TraceLoggingRegisterEx_EtwRegister_EtwSetInformation(
                (char *)&dword_1402A9E40,
                (__int64)InputCoreProviderCallback,
                0LL) < 0 )
    {
      SystemInformation = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 2349);
    }
    TlgRegisterAggregateProviderEx(&dword_1402A9EE8);
  }
  else
  {
    DCEInUseCountTelemetryInit();
  }
  Pool2 = W32GetUserSessionState(v92, v91, v93);
  v97 = W32GetUserSessionState(v95, v94, v96);
  PagedLookasideList = NSInstrumentation::CLeakTrackingAllocator::AllocatePagedLookasideList(
                         (NSInstrumentation::CPointerHashTable **)(v97 + 72016),
                         0x48uLL,
                         0x616C7355u,
                         0x696C7455u,
                         0x10u);
  *(_QWORD *)(Pool2 + 19376) = PagedLookasideList;
  LODWORD(v101) = (_DWORD)PagedLookasideList;
  LOBYTE(Pool2) = 0;
  if ( PagedLookasideList )
  {
    LODWORD(v14) = 0;
  }
  else
  {
    LODWORD(v14) = -1073741801;
    v102 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
    v101 = &WPP_RECORDER_INITIALIZED;
    v103 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v102 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v104 = W32GetUserSessionState((unsigned int)&WPP_RECORDER_INITIALIZED, v99, v100);
      LOBYTE(v105) = v103;
      LOBYTE(v106) = v102;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v106,
        v105,
        *(_QWORD *)(v104 + 69136),
        2,
        14,
        13,
        (__int64)&WPP_1694f8648fb7338eb8af492443ee6fcc_Traceguids,
        23);
    }
    if ( v6 )
      KeBugCheckEx(0x164u, 0x3EuLL, 0xFFFFFFFFC0000017uLL, 0LL, 0LL);
    v3 = JobInformation;
    LOBYTE(Pool2) = 0;
    UniqueProcess = ClientId.UniqueProcess;
  }
  *(_DWORD *)(W32GetUserSessionState((_DWORD)v101, v99, v100) + 69856) = 1;
  if ( v6 )
  {
    W32PageEntireDriver(Win32kBaseDriverEntry);
    hModuleWinKernel = (PVOID)0x140000000LL;
  }
  if ( (v14 & 0x80000000) == 0LL )
  {
    v107 = InitializeGraphicsInfrastructure(hModuleWinKernel);
    LODWORD(v14) = v107;
    if ( v107 < 0 )
    {
      if ( v6 )
        KeBugCheckEx(0x164u, 0x3EuLL, v107, 0LL, 0LL);
    }
  }
LABEL_112:
  v108 = W32GetUserSessionState(v55, v54, v56);
  *(_DWORD *)(v108 + 68928) |= 1u;
  if ( v6 )
    gpvWin32kImageBase = (PVOID)UniqueProcess[3];
  v111 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v109) + 48);
  v113 = *(int (**)(void))(v111 + 344);
  if ( v113 )
  {
    if ( v113() >= 0 )
    {
      v111 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v111) + 48);
      v114 = *(void (**)(void))(v111 + 352);
      if ( v114 )
        v114();
    }
  }
  v115 = W32GetUserSessionState(v111, v110, v112);
  v116 = BCryptGenRandom(0LL, (PUCHAR)(v115 + 42592), 1u, 2u);
  if ( v116 < 0 )
  {
    if ( v6 )
      KeBugCheckEx(0x164u, 0x3EuLL, v116, 0LL, 0LL);
    goto LABEL_41;
  }
  Pool2 = *(_QWORD *)(W32GetUserSessionState(v117, v64, v65) + 42592) & 0x7FFFFFFFFFFFFFFFLL;
  *(_QWORD *)(W32GetUserSessionState(-1, v118, v119) + 42592) = Pool2;
  LOBYTE(Pool2) = 0;
  v121 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v120) + 48) + 424LL);
  if ( v121 )
  {
    if ( v121() >= 0 )
    {
      v123 = *(void (__fastcall **)(__int64))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v122) + 48) + 432LL);
      if ( v123 )
        v123(1LL);
    }
  }
  if ( (v14 & 0x80000000) != 0LL )
  {
    if ( v6 )
      KeBugCheckEx(0x164u, 0x3EuLL, (int)v14, 0LL, 0LL);
    goto LABEL_41;
  }
  v124 = CheckInitialSessions();
  LODWORD(v14) = v124;
  if ( v124 && v124 != -1073741771 )
  {
    if ( v6 )
      KeBugCheckEx(0x164u, 0x3EuLL, v124, 0LL, 0LL);
    if ( v124 >= 0 )
      LODWORD(v14) = -1073741823;
    goto LABEL_41;
  }
  if ( !*(_DWORD *)(W32GetUserSessionState(v125, v64, v65) + 68604)
    || *(_DWORD *)(W32GetUserSessionState(v127, v126, v128) + 68612) )
  {
    RtlSetActiveConsoleId(v3);
  }
  if ( v6 )
  {
    Win32kBaseApiSetTable = W32GetWin32kBaseApiSetTable(v130);
    v129 = 3 * ext_ms_win_moderncore_win32k_base_sysentry_l1_ApiSetTableIndex;
    v133 = *(void (__fastcall **)(void (__fastcall *)(struct _DRIVER_OBJECT *, int, int)))(*(_QWORD *)(Win32kBaseApiSetTable + 24LL * ext_ms_win_moderncore_win32k_base_sysentry_l1_ApiSetTableIndex)
                                                                                         + 96LL);
    if ( v133 )
      v133(Win32KBaseDriverUnload);
  }
  v134 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  *(_DWORD *)(W32GetUserSessionState(4, v129, v131) + 57576) = v134;
  Pool2 = ExAllocatePool2(64LL, 56LL, 1716220757LL);
  *(_QWORD *)(W32GetUserSessionState(v136, v135, v137) + 42560) = Pool2;
  LOBYTE(Pool2) = 0;
  if ( !*(_QWORD *)(W32GetUserSessionState(v139, v138, v140) + 42560)
    || (v142 = *(_QWORD *)(W32GetUserSessionState(v141, v64, v65) + 42560),
        *(_DWORD *)v142 = 1,
        *(_QWORD *)(v142 + 8) = 0LL,
        *(_DWORD *)(v142 + 16) = 0,
        KeInitializeEvent((PRKEVENT)(v142 + 24), SynchronizationEvent, 0),
        !(unsigned int)InitSmartObjectRefLookaside(v144, v143, v145))
    || !InitializeUserTypeIsolation() )
  {
LABEL_141:
    LODWORD(v14) = -1073741801;
    if ( v6 )
LABEL_142:
      KeBugCheckEx(0x164u, 0x3EuLL, 0xFFFFFFFFC0000017uLL, 0LL, 0LL);
LABEL_41:
    v66 = (int)WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u )
    {
      LOBYTE(Pool2) = 1;
    }
    v67 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( (_BYTE)Pool2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v68 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v64, v65);
      LOBYTE(v69) = v67;
      LOBYTE(v70) = Pool2;
      WPP_RECORDER_AND_TRACE_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v70,
        v69,
        *(_QWORD *)(v68 + 69136),
        2,
        14,
        14,
        (__int64)&WPP_1694f8648fb7338eb8af492443ee6fcc_Traceguids,
        v14);
    }
    if ( *(_QWORD *)(W32GetUserSessionState(v66, v64, v65) + 69136) )
    {
      if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v5 = 0;
      }
      v73 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v74 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v71, v72);
        LOBYTE(v75) = v73;
        LOBYTE(v76) = v5;
        WPP_RECORDER_AND_TRACE_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v76,
          v75,
          *(_QWORD *)(v74 + 69136),
          2,
          14,
          15,
          (__int64)&WPP_1694f8648fb7338eb8af492443ee6fcc_Traceguids,
          v14);
      }
    }
    Win32KBaseDriverUnload(0LL, v71, v72);
    if ( (_DWORD)v14 == -1073741822 )
      LODWORD(v14) = -1073741637;
    goto LABEL_58;
  }
  v147 = (_QWORD *)W32GetUserSessionState(v146, v64, v65);
  v148 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
           v147,
           1LL,
           0,
           (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  v147[3] = v148;
  if ( v148 && UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v148) )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(v147 + 2465), v149, v150);
    DestroyDeferredUnlockObjectAssignmentList(v147 + 2472);
    DestroyDeferredUnlockObjectAssignmentList(v147 + 2470);
  }
  v151 = InitializeWin32KSyscallFilter();
  LODWORD(Pool2) = 0;
  LODWORD(v14) = v151;
  if ( v151 < 0 )
  {
    if ( v6 )
      KeBugCheckEx(0x164u, 0x3EuLL, v151, 0LL, 0LL);
    UserSessionSwitchLeaveCritWithNonPaged(v153, v152, v154, v155);
    goto LABEL_41;
  }
  UserSessionSwitchLeaveCritWithNonPaged(v153, v152, v154, v155);
  if ( v6 )
  {
    v157 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v156)
                                        + 24LL * ext_ms_win_moderncore_win32k_base_sysentry_l1_ApiSetTableIndex)
                            + 72LL);
    if ( v157 )
      v157();
    DbgkLkmdRegisterCallback(W32pLkmdDataCollectionCallback, 0LL, 5LL);
  }
  if ( (int)RtlIsApiSetImplemented("ext-ms-win-composition-init-l1-1-0") >= 0
    && (int)VerifyDWMApiSetImplementation() >= 0 )
  {
    LODWORD(Pool2) = 1;
  }
  *(_DWORD *)(W32GetUserSessionState(v159, v158, v160) + 19136) = Pool2;
  RIMInitialize(v162, v161, v163);
  v167 = CoreMsgInitialize(v165, v164, v166);
  LOBYTE(Pool2) = 0;
  LODWORD(v14) = v167;
  if ( v167 < 0 )
  {
    if ( v6 )
      KeBugCheckEx(0x164u, 0x3EuLL, v167, 0LL, 0LL);
    goto LABEL_41;
  }
  if ( (unsigned int)Feature_Win32ProcessCapabilities__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( v6 )
    {
      v171 = CoreMessagingKPort::Initialize(v169, v168, v170);
      if ( v171 < 0 )
        KeBugCheckEx(0x164u, 0x3EuLL, v171, 0LL, 0LL);
      goto LABEL_167;
    }
  }
  else if ( v6 )
  {
LABEL_167:
    TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_1402AA1C0, 0LL, 0LL);
  }
  v172 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v169) + 48);
  v173 = *(int (**)(void))(v172 + 376);
  if ( v173 )
  {
    if ( v173() >= 0 )
    {
      v172 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v172) + 48);
      v174 = *(void (**)(void))(v172 + 384);
      if ( v174 )
        v174();
    }
  }
  Pool2 = (__int64)CreateKernelEventObject(v172, 0);
  *(_QWORD *)(W32GetUserSessionState(v176, v175, v177) + 16816) = Pool2;
  LOBYTE(Pool2) = 0;
  if ( !*(_QWORD *)(W32GetUserSessionState(v179, v178, v180) + 16816) )
    goto LABEL_141;
  Pool2 = (__int64)CreateKernelEventObject(v181, 0);
  *(_QWORD *)(W32GetUserSessionState(v183, v182, v184) + 19472) = Pool2;
  LOBYTE(Pool2) = 0;
  if ( !*(_QWORD *)(W32GetUserSessionState(v186, v185, v187) + 19472) )
    goto LABEL_141;
  Pool2 = (__int64)CreateKernelEvent(NotificationEvent, 0);
  *(_QWORD *)(W32GetUserSessionState(v189, v188, v190) + 68376) = Pool2;
  LOBYTE(Pool2) = 0;
  if ( !*(_QWORD *)(W32GetUserSessionState(v192, v191, v193) + 68376) )
    goto LABEL_141;
  Pool2 = (__int64)CreateKernelEvent(NotificationEvent, 0);
  *(_QWORD *)(W32GetUserSessionState(v195, v194, v196) + 68384) = Pool2;
  LOBYTE(Pool2) = 0;
  if ( !*(_QWORD *)(W32GetUserSessionState(v198, v197, v199) + 68384) )
    goto LABEL_141;
  Pool2 = (__int64)CreateKernelEvent(NotificationEvent, 1u);
  *(_QWORD *)(W32GetUserSessionState(v201, v200, v202) + 68392) = Pool2;
  LOBYTE(Pool2) = 0;
  if ( !*(_QWORD *)(W32GetUserSessionState(v204, v203, v205) + 68392) )
    goto LABEL_141;
  Pool2 = (__int64)CreateKernelEvent(NotificationEvent, 0);
  *(_QWORD *)(W32GetUserSessionState(v207, v206, v208) + 18752) = Pool2;
  LOBYTE(Pool2) = 0;
  if ( !*(_QWORD *)(W32GetUserSessionState(v210, v209, v211) + 18752) )
    goto LABEL_141;
  *(_BYTE *)(W32GetUserGdiSessionState(v212) + 1) = 0;
  Pool2 = (__int64)CreateKernelEvent(NotificationEvent, 1u);
  *(_QWORD *)(W32GetUserGdiSessionState(v213) + 8) = Pool2;
  LOBYTE(Pool2) = 0;
  if ( !*(_QWORD *)(W32GetUserGdiSessionState(v214) + 8) )
    goto LABEL_141;
  *(_DWORD *)(W32GetUserSessionState(v215, v64, v65) + 68872) = 0;
  W32GetUserSessionState(v217, v216, v218);
  Pool2 = (__int64)CreateKernelSemaphore(0, 0x7FFFFFFF);
  *(_QWORD *)(W32GetUserSessionState(v220, v219, v221) + 68864) = Pool2;
  W32GetUserSessionState(v223, v222, v224);
  LOBYTE(Pool2) = 0;
  if ( !*(_QWORD *)(W32GetUserSessionState(v226, v225, v227) + 68864) )
    goto LABEL_141;
  *(_DWORD *)(W32GetUserSessionState(v228, v64, v65) + 18832) = 0;
  Pool2 = (__int64)CreateKernelSemaphore(0, 0x7FFFFFFF);
  *(_QWORD *)(W32GetUserSessionState(v230, v229, v231) + 18824) = Pool2;
  LOBYTE(Pool2) = 0;
  if ( !*(_QWORD *)(W32GetUserSessionState(v233, v232, v234) + 18824) )
    goto LABEL_141;
  RtlLoadStringOrError(0x268u, v277, 80, 0);
  if ( v6 )
    hModuleWin = (void *)MmUserProbeAddress;
  if ( !(unsigned __int8)InitializeGre() )
    goto LABEL_141;
  v236 = W32GetUserSessionState(v235, v64, v65);
  *(_WORD *)(v236 + 20638) = 1;
  *(_QWORD *)(v236 + 20584) = v236 + 20552;
  v237 = Win32UserInitialize(v6);
  LODWORD(v14) = v237;
  if ( v237 < 0 )
  {
    if ( v6 )
      KeBugCheckEx(0x164u, 0x3EuLL, v237, 0LL, 0LL);
    goto LABEL_41;
  }
  Pool2 = MEMORY[0xFFFFF78000000008];
  *(_QWORD *)(W32GetUserSessionState(v238, v64, v65) + 63472) = Pool2;
  v239 = InitializePowerGlobals();
  LOBYTE(Pool2) = 0;
  LODWORD(v14) = v239;
  if ( v239 < 0 )
  {
    if ( v6 )
      KeBugCheckEx(0x164u, 0x3EuLL, v239, 0LL, 0LL);
    goto LABEL_41;
  }
  if ( !*(_DWORD *)(W32GetUserSessionState(v240, v64, v65) + 68604)
    || *(_DWORD *)(W32GetUserSessionState(v242, v241, v243) + 68612) )
  {
    CurrentDisplayState = RetrieveCurrentDisplayState(v242, v241, v243);
    LODWORD(v14) = CurrentDisplayState;
    if ( CurrentDisplayState < 0 )
    {
      if ( v6 )
        KeBugCheckEx(0x164u, 0x3EuLL, CurrentDisplayState, 0LL, 0LL);
      goto LABEL_41;
    }
    JobInformation = *(_DWORD *)(W32GetUserSessionState(v245, v64, v65) + 2748) != 0 ? 3 : 0;
    ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &JobInformation, 4LL, 0LL, 0LL, 0, 0);
  }
  v246 = (struct _EX_RUNDOWN_REF *)W32GetUserSessionState(v242, v241, v243);
  ExInitializeRundownProtection(v246 + 7940);
  v247 = InputInitialize();
  LODWORD(v14) = v247;
  if ( v247 < 0 )
  {
    if ( v6 )
      KeBugCheckEx(0x164u, 0x3EuLL, v247, 0LL, 0LL);
    goto LABEL_41;
  }
  v249 = OPMInitialize(v248);
  LODWORD(v14) = v249;
  if ( v249 < 0 )
  {
    if ( v6 )
      KeBugCheckEx(0x164u, 0x3EuLL, v249, 0LL, 0LL);
    goto LABEL_41;
  }
  v251 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v250) + 48);
  v252 = *(int (**)(void))(v251 + 392);
  if ( v252 && v252() >= 0 )
  {
    v253 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v251) + 48) + 400LL);
    if ( !v253 )
    {
      v254 = -1073741637;
      LODWORD(v14) = -1073741637;
      goto LABEL_206;
    }
    v254 = v253();
    LODWORD(v14) = v254;
    if ( v254 < 0 )
    {
LABEL_206:
      if ( v6 )
        KeBugCheckEx(0x164u, 0x3EuLL, v254, 0LL, 0LL);
      goto LABEL_41;
    }
  }
  v255 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v251) + 48);
  v256 = *(int (**)(void))(v255 + 408);
  if ( v256 && v256() >= 0 )
  {
    v257 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v255) + 48) + 416LL);
    if ( !v257 )
    {
      v258 = -1073741637;
      LODWORD(v14) = -1073741637;
      goto LABEL_214;
    }
    v258 = v257();
    LODWORD(v14) = v258;
    if ( v258 < 0 )
    {
LABEL_214:
      if ( v6 )
        KeBugCheckEx(0x164u, 0x3EuLL, v258, 0LL, 0LL);
      goto LABEL_41;
    }
  }
  v259 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v255) + 48) + 3832LL);
  if ( v259 && v259() >= 0 )
  {
    v261 = *(__int64 (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v260) + 48) + 3840LL);
    if ( !v261 )
    {
      v262 = -1073741637;
      LODWORD(v14) = -1073741637;
      goto LABEL_222;
    }
    v262 = v261();
    LODWORD(v14) = v262;
    if ( v262 < 0 )
    {
LABEL_222:
      if ( v6 )
        KeBugCheckEx(0x164u, 0x3EuLL, v262, 0LL, 0LL);
      goto LABEL_41;
    }
  }
  if ( !v6 )
  {
    *(_QWORD *)&JobInformation_8.Length = 48LL;
    *(_OWORD *)&JobInformation_8.SecurityDescriptor = 0LL;
    *(_QWORD *)&JobInformation_8.Attributes = 512LL;
    *(_OWORD *)&JobInformation_8.RootDirectory = 0uLL;
    ClientId.UniqueProcess = PsGetCurrentProcessId();
    ClientId.UniqueThread = 0LL;
    v266 = W32GetUserSessionState(v264, v263, v265);
    if ( ZwOpenProcess((PHANDLE)(v266 + 36424), 0x1000u, &JobInformation_8, &ClientId) < 0 )
      *(_QWORD *)(W32GetUserSessionState(v268, v267, v269) + 36424) = 0LL;
  }
  ReportUsageForAllVelocityKeys();
  CTempW32ThreadNonPaged::~CTempW32ThreadNonPaged((CTempW32ThreadNonPaged *)v276);
  return 0LL;
}
