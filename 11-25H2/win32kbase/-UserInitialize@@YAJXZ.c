/*
 * XREFs of ?UserInitialize@@YAJXZ @ 0x140135AA0
 * Callers:
 *     Win32kBaseUserInitialize @ 0x14016B320 (Win32kBaseUserInitialize.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     W32GetCurrentWin32kSessionId @ 0x140049A34 (W32GetCurrentWin32kSessionId.c)
 *     xxxSystemParametersInfo @ 0x1400A70D0 (xxxSystemParametersInfo.c)
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1400A87F8 (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     FastGetProfileIntFromID @ 0x1400A9170 (FastGetProfileIntFromID.c)
 *     FastGetProfileDwordEx @ 0x1400A97B0 (FastGetProfileDwordEx.c)
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1400AA420 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14010EDF8 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     InitLoadResources @ 0x14011FE88 (InitLoadResources.c)
 *     CreateKernelEvent @ 0x140135730 (CreateKernelEvent.c)
 *     ?HYDRA_HINT@@YAXW4HydraHint@@@Z @ 0x14014CA8C (-HYDRA_HINT@@YAXW4HydraHint@@@Z.c)
 *     ?InitializeRemoteSessionOcclusionEvent@@YAJXZ @ 0x14014E940 (-InitializeRemoteSessionOcclusionEvent@@YAJXZ.c)
 *     ?SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14015ED90 (-SetDPIinSetup@@YAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1401617E4 (DestroySharedUserCritDeferredUnlockList.c)
 *     xxxCreateThreadInfo @ 0x140162D44 (xxxCreateThreadInfo.c)
 *     ?ReserveUserSessionViews@@YAJPEAPEAX0@Z @ 0x14019ADD8 (-ReserveUserSessionViews@@YAJPEAPEAX0@Z.c)
 *     LW_BrushInit @ 0x1401A13F0 (LW_BrushInit.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401AC178 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     ?DrvDriverFailure@@YAJXZ @ 0x1401B55F8 (-DrvDriverFailure@@YAJXZ.c)
 *     InitVideo @ 0x1401B6588 (InitVideo.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 *     InitCreateObjectDirectory @ 0x1402EB048 (InitCreateObjectDirectory.c)
 */

__int64 UserInitialize(void)
{
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v0; // r15
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 UserSessionState; // r14
  void *v5; // rdx
  char v6; // si
  char v7; // bl
  bool v8; // di
  __int64 v9; // rax
  int v10; // r8d
  int v11; // edx
  _QWORD *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  int ObjectDirectory; // ebx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  struct _KEVENT *KernelEvent; // rbx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rcx
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rdx
  __int64 v65; // rcx
  void (*v66)(void); // rax
  __int64 v67; // rax
  __int64 v68; // rdx
  bool v69; // di
  __int64 v70; // rax
  int v71; // r8d
  int v72; // edx
  ULONG OutputBufferLength[2]; // [rsp+28h] [rbp-39h]
  __int64 v75; // [rsp+48h] [rbp-19h] BYREF
  PVOID MappedBase; // [rsp+50h] [rbp-11h] BYREF
  PVOID Object; // [rsp+58h] [rbp-9h] BYREF
  __int64 InputBuffer; // [rsp+60h] [rbp-1h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v79; // [rsp+68h] [rbp+7h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v80; // [rsp+70h] [rbp+Fh] BYREF
  GUID ActivityId; // [rsp+78h] [rbp+17h] BYREF

  LOBYTE(v79) = 0;
  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  DisplayScenarioContextEnsureAndAssociate(&ActivityId, 0x1Cu, 0, &v80, (unsigned __int8 *)&v79);
  v0 = v80;
  Object = 0LL;
  MappedBase = 0LL;
  LODWORD(v75) = 0;
  InputBuffer = 0LL;
  UserSessionState = W32GetUserSessionState(v2, v1);
  v5 = WPP_GLOBAL_Control;
  v6 = 1;
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
    || (v7 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v7 = 0;
  }
  v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = W32GetUserSessionState(v3, WPP_GLOBAL_Control);
    LOBYTE(v10) = v8;
    LOBYTE(v11) = v7;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v11,
      v10,
      *(_QWORD *)(v9 + 69144),
      4,
      14,
      24,
      (__int64)&WPP_487a223bc39130559c367c5765389d92_Traceguids);
  }
  v12 = (_QWORD *)W32GetUserSessionState(v3, v5);
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
    v13 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
            v12,
            1LL,
            0LL,
            _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  else
    v13 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(v12, 0LL);
  v14 = v13;
  v12[3] = v13;
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !v14 )
      goto LABEL_17;
  }
  else
  {
    if ( !v14 )
      goto LABEL_17;
    *(_BYTE *)(v14 + 1708) = 1;
  }
  if ( (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v14) )
  {
    DestroySharedUserCritDeferredUnlockList(v12 + 2461);
    DestroyDeferredUnlockObjectAssignmentList(v12 + 2468);
    DestroyDeferredUnlockObjectAssignmentList(v12 + 2466);
  }
LABEL_17:
  if ( *(_QWORD *)(W32GetUserSessionState(v16, v15) + 36384) && *(_QWORD *)(UserSessionState + 63544) )
  {
    v19 = W32GetUserSessionState(v18, v17);
    ZwClose(*(HANDLE *)(v19 + 36384));
    *(_QWORD *)(W32GetUserSessionState(v21, v20) + 36384) = 0LL;
  }
  HYDRA_HINT(2LL);
  if ( *(_DWORD *)(W32GetUserSessionState(v23, v22) + 68612) )
  {
    OutputBufferLength[0] = W32GetCurrentWin32kSessionId();
    RtlStringCchPrintfW(
      (unsigned __int16 *)(UserSessionState + 63608),
      256LL,
      L"%ws\\%ld%ws",
      L"\\Sessions",
      *(_QWORD *)OutputBufferLength,
      L"\\Windows\\WindowStations");
  }
  else
  {
    RtlStringCchCopyW((char *)(UserSessionState + 63608), 256LL, (char *)L"\\Windows\\WindowStations");
  }
  ObjectDirectory = InitCreateObjectDirectory();
  if ( ObjectDirectory >= 0 )
  {
    v27 = W32GetUserSessionState(v25, v24);
    FastGetProfileIntFromID(0, 52, 0x26Fu, 5000, (PULONG)(v27 + 36404), 0);
    v30 = W32GetUserSessionState(v29, v28);
    *(_DWORD *)(*(_QWORD *)(v30 + 19872) + 2236LL) |= 4u;
    KernelEvent = CreateKernelEvent(SynchronizationEvent, 0);
    *(_QWORD *)(W32GetUserSessionState(v33, v32) + 62808) = KernelEvent;
    if ( *(_QWORD *)(W32GetUserSessionState(v35, v34) + 62808) )
    {
      if ( !*(_DWORD *)(W32GetUserSessionState(v25, v24) + 68612)
        || *(_DWORD *)(W32GetUserSessionState(v37, v36) + 68620) )
      {
        ObjectDirectory = ReserveUserSessionViews(&Object, &MappedBase);
        if ( ObjectDirectory < 0 )
          goto LABEL_51;
        if ( !InitVideo(v0) )
        {
          ObjectDirectory = DrvDriverFailure();
          MmUnmapViewInSessionSpace(MappedBase);
          ObfDereferenceObject(Object);
          goto LABEL_51;
        }
        MmUnmapViewInSessionSpace(MappedBase);
        ObfDereferenceObject(Object);
        *(_DWORD *)(W32GetUserGdiSessionState(v40) + 32) = 1;
        InputBuffer = 2LL;
        ZwPowerInformation(SystemPowerStateLogging|0x40, &InputBuffer, 8u, 0LL, 0);
      }
      *(_DWORD *)(W32GetUserSessionState(v39, v38) + 68408) = 1;
      ObjectDirectory = xxxCreateThreadInfo(KeGetCurrentThread());
      if ( ObjectDirectory >= 0 )
      {
        if ( *(_DWORD *)(W32GetUserSessionState(v25, v24) + 2676) )
        {
          v43 = W32GetUserSessionState(v42, v41);
          xxxSystemParametersInfo(0x51u, *(_DWORD *)(v43 + 2676), 0LL, 0);
          v46 = W32GetUserSessionState(v45, v44);
          xxxSystemParametersInfo(0x52u, *(_DWORD *)(v46 + 2676), 0LL, 0);
          *(_DWORD *)(W32GetUserSessionState(v48, v47) + 2676) = 0;
        }
        ObjectDirectory = InitializeRemoteSessionOcclusionEvent();
        if ( ObjectDirectory >= 0 )
        {
          if ( !*(_DWORD *)(W32GetUserSessionState(v25, v24) + 68612)
            || *(_DWORD *)(W32GetUserSessionState(v50, v49) + 68620) )
          {
            LW_BrushInit();
          }
          if ( *(_DWORD *)(W32GetUserSessionState(v52, v51) + 68412)
            || !*(_DWORD *)(W32GetUserSessionState(v54, v53) + 68612)
            || !*(_DWORD *)(W32GetUserSessionState(v56, v55) + 68620)
            || (ObjectDirectory = SetDPIinSetup(v0), ObjectDirectory >= 0) )
          {
            InitLoadResources(0LL);
            FastGetProfileDwordEx(0LL, 51LL, L"ConvertibleSlateMode", 0, 0, &v75, 0LL);
            v59 = *(_QWORD *)(W32GetUserSessionState(v58, v57) + 19872);
            if ( (_DWORD)v75 )
              *(_DWORD *)(v59 + 2236) |= 8u;
            else
              *(_DWORD *)(v59 + 2236) &= ~8u;
            FastGetProfileDwordEx(0LL, 51LL, L"SystemDockMode", 0, 0, &v75, 0LL);
            v63 = *(_QWORD *)(W32GetUserSessionState(v61, v60) + 19872);
            if ( (_DWORD)v75 )
              *(_DWORD *)(v63 + 2236) |= 0x10u;
            else
              *(_DWORD *)(v63 + 2236) &= ~0x10u;
            *(_DWORD *)(W32GetUserSessionState(v63, v62) + 69112) = 5000;
            v25 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v65, v64) + 48);
            v66 = *(void (**)(void))(v25 + 208);
            if ( v66 )
              v66();
          }
        }
      }
    }
    else
    {
      ObjectDirectory = -1073741801;
    }
  }
LABEL_51:
  v67 = W32GetUserSessionState(v25, v24);
  KeSetEvent(*(PRKEVENT *)(v67 + 68384), 1, 0);
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v6 = 0;
  }
  v69 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v70 = W32GetUserSessionState(WPP_GLOBAL_Control, v68);
    LOBYTE(v71) = v69;
    LOBYTE(v72) = v6;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v72,
      v71,
      *(_QWORD *)(v70 + 69144),
      4,
      14,
      25,
      (__int64)&WPP_487a223bc39130559c367c5765389d92_Traceguids);
  }
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v68);
  CDisplayScenarioContextScope::~CDisplayScenarioContextScope(&v79);
  return (unsigned int)ObjectDirectory;
}
