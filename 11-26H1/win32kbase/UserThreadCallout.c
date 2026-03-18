/*
 * XREFs of UserThreadCallout @ 0x140139A60
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ?DispBrokerAsyncSessionStateChanged@@YAJQEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14007CD00 (-DispBrokerAsyncSessionStateChanged@@YAJQEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     xxxDestroyThreadInfo @ 0x1400BA274 (xxxDestroyThreadInfo.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     W32GetThreadWin32Thread @ 0x14011A324 (W32GetThreadWin32Thread.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x14013DAF4 (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     RtlGetExpWinVer @ 0x140141754 (RtlGetExpWinVer.c)
 *     GreCleanDC @ 0x140148000 (GreCleanDC.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14014B830 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x14017BECC (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     xxxCreateThreadInfo @ 0x1401A6A18 (xxxCreateThreadInfo.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 */

__int64 __fastcall UserThreadCallout(PETHREAD Thread, int a2)
{
  unsigned int ThreadInfo; // r14d
  _UNKNOWN **v3; // r8
  char v5; // di
  int v6; // ecx
  bool v7; // bl
  bool v8; // si
  __int64 UserSessionState; // rax
  int v10; // r8d
  int v11; // edx
  _QWORD *v12; // rbx
  __int64 v13; // rax
  int v14; // edx
  int v15; // r8d
  __int64 ThreadWin32Thread; // rbx
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rax
  int v25; // ecx
  bool v26; // bl
  bool v27; // si
  __int64 v28; // rax
  int v29; // r8d
  int v30; // edx
  int v31; // edx
  int v32; // ecx
  int v33; // r8d
  int v35; // edx
  int v36; // ecx
  __int64 v37; // rbx
  int v38; // r8d
  PEPROCESS ThreadProcess; // rax
  PEPROCESS v40; // rsi
  __int64 ProcessSectionBaseAddress; // rax
  _QWORD *v42; // rbx
  __int64 v43; // rax
  int v44; // edx
  int v45; // r8d
  bool v46; // bl
  __int64 v47; // rax
  int v48; // r8d
  int v49; // edx
  _BYTE v50[8]; // [rsp+40h] [rbp-28h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v51; // [rsp+48h] [rbp-20h]

  ThreadInfo = 0;
  v3 = &WPP_RECORDER_INITIALIZED;
  v5 = 1;
  if ( a2 )
  {
    if ( a2 != 1 )
      goto LABEL_43;
    v6 = (int)WPP_GLOBAL_Control;
    v7 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
    v8 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, 1, (unsigned int)&WPP_RECORDER_INITIALIZED);
      LOBYTE(v10) = v8;
      LOBYTE(v11) = v7;
      WPP_RECORDER_AND_TRACE_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v11,
        v10,
        *(_QWORD *)(UserSessionState + 69136),
        4,
        14,
        28,
        (__int64)&WPP_22204904a72d327c556410354d40f3d0_Traceguids);
    }
    v12 = (_QWORD *)W32GetUserSessionState(v6, a2, (_DWORD)v3);
    v13 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
            v12,
            1LL,
            0LL,
            _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
    v12[3] = v13;
    if ( v13 && (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v13) )
    {
      DestroySharedUserCritDeferredUnlockList((__int64)(v12 + 2465), v14, v15);
      DestroyDeferredUnlockObjectAssignmentList(v12 + 2472);
      DestroyDeferredUnlockObjectAssignmentList(v12 + 2470);
    }
    ThreadWin32Thread = W32GetThreadWin32Thread((__int64)Thread);
    _InterlockedOr((volatile signed __int32 *)(ThreadWin32Thread + 520), 1u);
    if ( !*(_DWORD *)(W32GetUserSessionState(v18, v17, v19) + 68604) || *(_DWORD *)(W32GetUserGdiSessionState(v21) + 32) )
    {
      v24 = W32GetUserSessionState(v21, v20, v22);
      GreCleanDC(*(HDC *)(*(_QWORD *)(v24 + 56968) + 56LL));
    }
    if ( (*(_BYTE *)(ThreadWin32Thread + 1360) & 2) != 0 )
    {
      *(_DWORD *)(W32GetUserGdiSessionState(v21) + 36) = 0;
      v50[0] = 0;
      CDisplayScenarioContextScope::ContextScopeConstructor((CDisplayScenarioContextScope *)v50, 0LL, 0x4Fu, 0);
      DispBrokerAsyncSessionStateChanged(v51);
      CDisplayScenarioContextScope::~CDisplayScenarioContextScope((CDisplayScenarioContextScope *)v50);
    }
    if ( (*(_BYTE *)(ThreadWin32Thread + 1360) & 1) == 0 )
      xxxDestroyThreadInfo();
    goto LABEL_21;
  }
  v25 = (int)WPP_GLOBAL_Control;
  v26 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
     && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) != 0
     && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 4u;
  v27 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v26 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v28 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, 0, (unsigned int)&WPP_RECORDER_INITIALIZED);
    LOBYTE(v29) = v27;
    LOBYTE(v30) = v26;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v30,
      v29,
      *(_QWORD *)(v28 + 69136),
      4,
      14,
      27,
      (__int64)&WPP_22204904a72d327c556410354d40f3d0_Traceguids);
  }
  if ( *(_DWORD *)(W32GetUserSessionState(v25, a2, (_DWORD)v3) + 2732) )
    return 3221225473LL;
  if ( *(_DWORD *)(W32GetUserSessionState(v32, v31, v33) + 68400) )
  {
    v37 = W32GetThreadWin32Thread((__int64)Thread);
    if ( v37 )
    {
      ThreadProcess = PsGetThreadProcess(Thread);
      v40 = ThreadProcess;
      if ( ThreadProcess && PsGetProcessPeb(ThreadProcess) )
      {
        ProcessSectionBaseAddress = PsGetProcessSectionBaseAddress(v40);
        *(_DWORD *)(v37 + 664) = RtlGetExpWinVer(ProcessSectionBaseAddress);
      }
      else
      {
        *(_DWORD *)(v37 + 664) = 0;
      }
    }
    v42 = (_QWORD *)W32GetUserSessionState(v36, v35, v38);
    v43 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
            v42,
            1LL,
            0LL,
            _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
    v42[3] = v43;
    if ( v43 && (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v43) )
    {
      DestroySharedUserCritDeferredUnlockList((__int64)(v42 + 2465), v44, v45);
      DestroyDeferredUnlockObjectAssignmentList(v42 + 2472);
      DestroyDeferredUnlockObjectAssignmentList(v42 + 2470);
    }
    ThreadInfo = xxxCreateThreadInfo(Thread);
LABEL_21:
    UserSessionSwitchLeaveCritWithNonPaged(v21, v20, v22, v23);
    goto LABEL_43;
  }
  _interlockedbittestandset((volatile signed __int32 *)(W32GetThreadWin32Thread((__int64)Thread) + 1360), 0);
LABEL_43:
  if ( WPP_GLOBAL_Control == (CTouchProcessor *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x2000) == 0
    || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
  {
    v5 = 0;
  }
  v46 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v47 = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, a2, (unsigned int)&WPP_RECORDER_INITIALIZED);
    LOBYTE(v48) = v46;
    LOBYTE(v49) = v5;
    WPP_RECORDER_AND_TRACE_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v49,
      v48,
      *(_QWORD *)(v47 + 69136),
      4,
      14,
      29,
      (__int64)&WPP_22204904a72d327c556410354d40f3d0_Traceguids);
  }
  return ThreadInfo;
}
