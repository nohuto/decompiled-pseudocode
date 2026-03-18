/*
 * XREFs of ?UserInitialize@@YAJXZ @ 0x140170DB4
 * Callers:
 *     Win32kBaseUserInitialize @ 0x1401D8B30 (Win32kBaseUserInitialize.c)
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     InitLoadResources @ 0x140080CE4 (InitLoadResources.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     FastGetProfileIntFromID @ 0x1400E12A0 (FastGetProfileIntFromID.c)
 *     FastGetProfileDwordEx @ 0x1400E1800 (FastGetProfileDwordEx.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1400E2300 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1400E2B44 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14011F640 (-SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14014B830 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     CreateKernelEvent @ 0x14016CAE0 (CreateKernelEvent.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x14017BECC (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     ?InitializeRemoteSessionOcclusionEvent@@YAJXZ @ 0x140193948 (-InitializeRemoteSessionOcclusionEvent@@YAJXZ.c)
 *     xxxCreateThreadInfo @ 0x1401A6A18 (xxxCreateThreadInfo.c)
 *     InitVideo @ 0x1401AAB00 (InitVideo.c)
 *     xxxSystemParametersInfo @ 0x1401ACFA0 (xxxSystemParametersInfo.c)
 *     ?ReserveUserSessionViews@@YAJPEAPEAX0@Z @ 0x1401B4F34 (-ReserveUserSessionViews@@YAJPEAPEAX0@Z.c)
 *     LW_BrushInit @ 0x1401C4FFC (LW_BrushInit.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     ?DrvDriverFailure@@YAJXZ @ 0x1401D7CA4 (-DrvDriverFailure@@YAJXZ.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     InitCreateObjectDirectory @ 0x1402F560C (InitCreateObjectDirectory.c)
 */

__int64 UserInitialize(void)
{
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v0; // r15
  int v1; // edx
  int v2; // ecx
  int v3; // r8d
  int v4; // ecx
  int v5; // r8d
  __int64 UserSessionState; // r14
  int v7; // edx
  char v8; // di
  char v9; // bl
  bool v10; // si
  __int64 v11; // rax
  int v12; // r8d
  int v13; // edx
  _QWORD *v14; // rbx
  __int64 v15; // rax
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  __int64 v22; // rax
  int v23; // edx
  int v24; // ecx
  int v25; // r8d
  __int64 v26; // rax
  int v27; // edx
  int v28; // ecx
  int v29; // r8d
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  int ObjectDirectory; // ebx
  int v34; // r8d
  __int64 v35; // rax
  int v36; // edx
  int v37; // ecx
  int v38; // r8d
  __int64 v39; // rax
  struct _KEVENT *KernelEvent; // rbx
  int v41; // edx
  int v42; // ecx
  int v43; // r8d
  int v44; // edx
  int v45; // ecx
  int v46; // r8d
  int v47; // edx
  int v48; // ecx
  int v49; // r8d
  int v50; // edx
  int v51; // ecx
  int v52; // r8d
  __int64 v53; // rcx
  int v54; // edx
  int v55; // ecx
  int v56; // r8d
  __int64 v57; // rax
  int v58; // edx
  int v59; // ecx
  int v60; // r8d
  __int64 v61; // rax
  int v62; // edx
  int v63; // ecx
  int v64; // r8d
  int v65; // edx
  int v66; // ecx
  int v67; // r8d
  int v68; // edx
  int v69; // ecx
  int v70; // r8d
  int v71; // ecx
  int v72; // ecx
  int v73; // edx
  int v74; // ecx
  int v75; // r8d
  __int64 v76; // rcx
  int v77; // edx
  int v78; // ecx
  int v79; // r8d
  int v80; // edx
  __int64 v81; // rcx
  int v82; // r8d
  __int64 v83; // rcx
  void (*v84)(void); // rax
  __int64 v85; // rax
  __int64 v86; // rdx
  __int64 v87; // r8
  __int64 v88; // r9
  CTouchProcessor *v89; // rcx
  bool v90; // si
  __int64 v91; // rax
  int v92; // r8d
  int v93; // edx
  ULONG OutputBufferLength[2]; // [rsp+28h] [rbp-39h]
  __int64 v96; // [rsp+48h] [rbp-19h] BYREF
  PVOID MappedBase; // [rsp+50h] [rbp-11h] BYREF
  PVOID Object; // [rsp+58h] [rbp-9h] BYREF
  __int64 InputBuffer; // [rsp+60h] [rbp-1h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v100; // [rsp+68h] [rbp+7h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v101; // [rsp+70h] [rbp+Fh] BYREF
  GUID ActivityId; // [rsp+78h] [rbp+17h] BYREF

  LOBYTE(v100) = 0;
  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  DisplayScenarioContextEnsureAndAssociate(&ActivityId, 0x1Cu, 0, &v101, (unsigned __int8 *)&v100);
  v0 = v101;
  Object = 0LL;
  MappedBase = 0LL;
  LODWORD(v96) = 0;
  InputBuffer = 0LL;
  UserSessionState = W32GetUserSessionState(v2, v1, v3);
  v7 = (int)WPP_GLOBAL_Control;
  v8 = 1;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
    || (v9 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v9 = 0;
  }
  v10 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v11 = W32GetUserSessionState(v4, (_DWORD)WPP_GLOBAL_Control, v5);
    LOBYTE(v12) = v10;
    LOBYTE(v13) = v9;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v13,
      v12,
      *(_QWORD *)(v11 + 69136),
      4,
      14,
      24,
      (__int64)&WPP_22204904a72d327c556410354d40f3d0_Traceguids);
  }
  v14 = (_QWORD *)W32GetUserSessionState(v4, v7, v5);
  v15 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
          v14,
          1LL,
          0LL,
          _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  v14[3] = v15;
  if ( v15 && (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v15) )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(v14 + 2465), v16, v18);
    DestroyDeferredUnlockObjectAssignmentList(v14 + 2472);
    DestroyDeferredUnlockObjectAssignmentList(v14 + 2470);
  }
  if ( *(_QWORD *)(W32GetUserSessionState(v17, v16, v18) + 36424) && *(_QWORD *)(UserSessionState + 63536) )
  {
    v22 = W32GetUserSessionState(v20, v19, v21);
    ZwClose(*(HANDLE *)(v22 + 36424));
    *(_QWORD *)(W32GetUserSessionState(v24, v23, v25) + 36424) = 0LL;
  }
  v26 = W32GetUserSessionState(v20, v19, v21);
  *(_DWORD *)(v26 + 68928) |= 2u;
  if ( *(_DWORD *)(W32GetUserSessionState(v28, v27, v29) + 68604) )
  {
    OutputBufferLength[0] = W32GetCurrentWin32kSessionId(v30);
    RtlStringCchPrintfW(
      (unsigned __int16 *)(UserSessionState + 63600),
      256LL,
      L"%ws\\%ld%ws",
      L"\\Sessions",
      *(_QWORD *)OutputBufferLength,
      L"\\Windows\\WindowStations");
  }
  else
  {
    RtlStringCchCopyW((char *)(UserSessionState + 63600), 256LL, (char *)L"\\Windows\\WindowStations");
  }
  ObjectDirectory = InitCreateObjectDirectory();
  if ( ObjectDirectory >= 0 )
  {
    v35 = W32GetUserSessionState(v32, v31, v34);
    FastGetProfileIntFromID(0, 52, 0x26Fu, 5000, (PULONG)(v35 + 36444), 0);
    v39 = W32GetUserSessionState(v37, v36, v38);
    *(_DWORD *)(*(_QWORD *)(v39 + 19904) + 2236LL) |= 4u;
    KernelEvent = CreateKernelEvent(SynchronizationEvent, 0);
    *(_QWORD *)(W32GetUserSessionState(v42, v41, v43) + 62800) = KernelEvent;
    if ( *(_QWORD *)(W32GetUserSessionState(v45, v44, v46) + 62800) )
    {
      if ( !*(_DWORD *)(W32GetUserSessionState(v32, v31, v34) + 68604)
        || *(_DWORD *)(W32GetUserSessionState(v48, v47, v49) + 68612) )
      {
        ObjectDirectory = ReserveUserSessionViews(&Object, &MappedBase);
        if ( ObjectDirectory < 0 )
          goto LABEL_45;
        if ( !InitVideo((__int64)v0) )
        {
          ObjectDirectory = DrvDriverFailure();
          MmUnmapViewInSessionSpace(MappedBase);
          ObfDereferenceObject(Object);
          goto LABEL_45;
        }
        MmUnmapViewInSessionSpace(MappedBase);
        ObfDereferenceObject(Object);
        *(_DWORD *)(W32GetUserGdiSessionState(v53) + 32) = 1;
        InputBuffer = 2LL;
        ZwPowerInformation(SystemPowerStateLogging|0x40, &InputBuffer, 8u, 0LL, 0);
      }
      *(_DWORD *)(W32GetUserSessionState(v51, v50, v52) + 68400) = 1;
      ObjectDirectory = xxxCreateThreadInfo(KeGetCurrentThread());
      if ( ObjectDirectory >= 0 )
      {
        if ( *(_DWORD *)(W32GetUserSessionState(v32, v31, v34) + 2676) )
        {
          v57 = W32GetUserSessionState(v55, v54, v56);
          xxxSystemParametersInfo(0x51u, *(_DWORD *)(v57 + 2676));
          v61 = W32GetUserSessionState(v59, v58, v60);
          xxxSystemParametersInfo(0x52u, *(_DWORD *)(v61 + 2676));
          *(_DWORD *)(W32GetUserSessionState(v63, v62, v64) + 2676) = 0;
        }
        ObjectDirectory = InitializeRemoteSessionOcclusionEvent();
        if ( ObjectDirectory >= 0 )
        {
          if ( !*(_DWORD *)(W32GetUserSessionState(v32, v31, v34) + 68604)
            || *(_DWORD *)(W32GetUserSessionState(v66, v65, v67) + 68612) )
          {
            LW_BrushInit();
          }
          if ( *(_DWORD *)(W32GetUserSessionState(v69, v68, v70) + 68404)
            || !*(_DWORD *)(W32GetUserSessionState(v71, v31, v34) + 68604)
            || !*(_DWORD *)(W32GetUserSessionState(v72, v31, v34) + 68612)
            || (ObjectDirectory = SetDPIinSetup(v0), ObjectDirectory >= 0) )
          {
            InitLoadResources(0, v31, v34);
            FastGetProfileDwordEx(0LL, 51, L"ConvertibleSlateMode", 0, 0, &v96, 0LL);
            v76 = *(_QWORD *)(W32GetUserSessionState(v74, v73, v75) + 19904);
            if ( (_DWORD)v96 )
              *(_DWORD *)(v76 + 2236) |= 8u;
            else
              *(_DWORD *)(v76 + 2236) &= ~8u;
            FastGetProfileDwordEx(0LL, 51, L"SystemDockMode", 0, 0, &v96, 0LL);
            v81 = *(_QWORD *)(W32GetUserSessionState(v78, v77, v79) + 19904);
            if ( (_DWORD)v96 )
              *(_DWORD *)(v81 + 2236) |= 0x10u;
            else
              *(_DWORD *)(v81 + 2236) &= ~0x10u;
            *(_DWORD *)(W32GetUserSessionState(v81, v80, v82) + 69104) = 5000;
            v32 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v83) + 48);
            v84 = *(void (**)(void))(v32 + 208);
            if ( v84 )
              v84();
          }
        }
      }
    }
    else
    {
      ObjectDirectory = -1073741801;
    }
  }
LABEL_45:
  v85 = W32GetUserSessionState(v32, v31, v34);
  KeSetEvent(*(PRKEVENT *)(v85 + 68376), 1, 0);
  v89 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v8 = 0;
  }
  v90 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v91 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v86, v87);
    LOBYTE(v92) = v90;
    LOBYTE(v93) = v8;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v93,
      v92,
      *(_QWORD *)(v91 + 69136),
      4,
      14,
      25,
      (__int64)&WPP_22204904a72d327c556410354d40f3d0_Traceguids);
  }
  UserSessionSwitchLeaveCritWithNonPaged((__int64)v89, v86, v87, v88);
  CDisplayScenarioContextScope::~CDisplayScenarioContextScope(&v100);
  return (unsigned int)ObjectDirectory;
}
