/*
 * XREFs of UserThreadCallout @ 0x14016AE90
 * Callers:
 *     <none>
 * Callees:
 *     ?DispBrokerAsyncSessionStateChanged@@YAJQEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14002B8D0 (-DispBrokerAsyncSessionStateChanged@@YAJQEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x1400F7E74 (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     RtlGetExpWinVer @ 0x1400FFD3C (RtlGetExpWinVer.c)
 *     GreCleanDC @ 0x1401083E0 (GreCleanDC.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14010EDF8 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1401617E4 (DestroySharedUserCritDeferredUnlockList.c)
 *     xxxCreateThreadInfo @ 0x140162D44 (xxxCreateThreadInfo.c)
 *     xxxDestroyThreadInfo @ 0x140164194 (xxxDestroyThreadInfo.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401AC178 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 */

__int64 __fastcall UserThreadCallout(PETHREAD Thread, __int64 a2)
{
  unsigned int ThreadInfo; // r14d
  char v4; // si
  void *v5; // rcx
  bool v6; // bl
  bool v7; // di
  __int64 UserSessionState; // rax
  int v9; // r8d
  int v10; // edx
  _QWORD *v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rbx
  __int64 *ThreadWin32Thread; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  void *v22; // rcx
  bool v23; // bl
  bool v24; // di
  __int64 v25; // rax
  int v26; // r8d
  int v27; // edx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rbx
  PEPROCESS ThreadProcess; // rax
  PEPROCESS v36; // rdi
  __int64 ProcessSectionBaseAddress; // rax
  _QWORD *v38; // rdi
  __int64 v39; // rax
  __int64 v40; // rbx
  __int64 v41; // rdx
  __int64 v42; // rbx
  __int64 *v43; // rax
  bool v44; // bl
  __int64 v45; // rax
  int v46; // r8d
  int v47; // edx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v48[2]; // [rsp+40h] [rbp-28h] BYREF

  ThreadInfo = 0;
  v4 = 1;
  if ( (_DWORD)a2 )
  {
    if ( (_DWORD)a2 != 1 )
      goto LABEL_60;
    v5 = WPP_GLOBAL_Control;
    v6 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v7 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v6 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
      LOBYTE(v9) = v7;
      LOBYTE(v10) = v6;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v10,
        v9,
        *(_QWORD *)(UserSessionState + 69144),
        4,
        14,
        28,
        (__int64)&WPP_487a223bc39130559c367c5765389d92_Traceguids);
    }
    v11 = (_QWORD *)W32GetUserSessionState(v5, a2);
    if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
      v12 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
              v11,
              1LL,
              0LL,
              _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
    else
      v12 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(v11, 0LL);
    v13 = v12;
    v11[3] = v12;
    if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( v13 )
      {
LABEL_18:
        if ( (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v13) )
        {
          DestroySharedUserCritDeferredUnlockList((__int64)(v11 + 2461), v14);
          DestroyDeferredUnlockObjectAssignmentList(v11 + 2468);
          DestroyDeferredUnlockObjectAssignmentList(v11 + 2466);
        }
      }
    }
    else if ( v13 )
    {
      *(_BYTE *)(v13 + 1708) = 1;
      goto LABEL_18;
    }
    v15 = 0LL;
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(Thread);
    if ( ThreadWin32Thread )
      v15 = *ThreadWin32Thread;
    _InterlockedOr((volatile signed __int32 *)(v15 + 528), 1u);
    if ( !*(_DWORD *)(W32GetUserSessionState(v18, v17) + 68612) || *(_DWORD *)(W32GetUserGdiSessionState(v20) + 32) )
    {
      v21 = W32GetUserSessionState(v20, v19);
      GreCleanDC(*(HDC *)(*(_QWORD *)(v21 + 56968) + 64LL));
    }
    if ( (*(_BYTE *)(v15 + 1360) & 2) != 0 )
    {
      *(_DWORD *)(W32GetUserGdiSessionState(v20) + 36) = 0;
      LOBYTE(v48[0]) = 0;
      CDisplayScenarioContextScope::ContextScopeConstructor(v48, 0LL, 0x4Fu, 0);
      DispBrokerAsyncSessionStateChanged(v48[1]);
      CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v48);
    }
    if ( (*(_BYTE *)(v15 + 1360) & 1) == 0 )
      xxxDestroyThreadInfo();
    goto LABEL_29;
  }
  v22 = WPP_GLOBAL_Control;
  v23 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v24 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v25 = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    LOBYTE(v26) = v24;
    LOBYTE(v27) = v23;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v27,
      v26,
      *(_QWORD *)(v25 + 69144),
      4,
      14,
      27,
      (__int64)&WPP_487a223bc39130559c367c5765389d92_Traceguids);
  }
  if ( *(_DWORD *)(W32GetUserSessionState(v22, a2) + 2732) )
    return 3221225473LL;
  if ( !*(_DWORD *)(W32GetUserSessionState(v29, v28) + 68408) )
  {
    v42 = 0LL;
    v43 = (__int64 *)PsGetThreadWin32Thread(Thread);
    if ( v43 )
      v42 = *v43;
    _interlockedbittestandset((volatile signed __int32 *)(v42 + 1360), 0);
    goto LABEL_60;
  }
  v31 = (__int64 *)PsGetThreadWin32Thread(Thread);
  if ( v31 )
  {
    v34 = *v31;
    if ( *v31 )
    {
      ThreadProcess = PsGetThreadProcess(Thread);
      v36 = ThreadProcess;
      if ( ThreadProcess && PsGetProcessPeb(ThreadProcess) )
      {
        ProcessSectionBaseAddress = PsGetProcessSectionBaseAddress(v36);
        *(_DWORD *)(v34 + 672) = RtlGetExpWinVer(ProcessSectionBaseAddress);
      }
      else
      {
        *(_DWORD *)(v34 + 672) = 0;
      }
    }
  }
  v38 = (_QWORD *)W32GetUserSessionState(v33, v32);
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
    v39 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
            v38,
            1LL,
            0LL,
            _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  else
    v39 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(v38, 0LL);
  v40 = v39;
  v38[3] = v39;
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( v40 )
    {
LABEL_54:
      if ( (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v40) )
      {
        DestroySharedUserCritDeferredUnlockList((__int64)(v38 + 2461), v41);
        DestroyDeferredUnlockObjectAssignmentList(v38 + 2468);
        DestroyDeferredUnlockObjectAssignmentList(v38 + 2466);
      }
    }
  }
  else if ( v40 )
  {
    *(_BYTE *)(v40 + 1708) = 1;
    goto LABEL_54;
  }
  ThreadInfo = xxxCreateThreadInfo(Thread);
LABEL_29:
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v19);
LABEL_60:
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v4 = 0;
  }
  v44 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v45 = W32GetUserSessionState(WPP_GLOBAL_Control, a2);
    LOBYTE(v46) = v44;
    LOBYTE(v47) = v4;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v47,
      v46,
      *(_QWORD *)(v45 + 69144),
      4,
      14,
      29,
      (__int64)&WPP_487a223bc39130559c367c5765389d92_Traceguids);
  }
  return ThreadInfo;
}
