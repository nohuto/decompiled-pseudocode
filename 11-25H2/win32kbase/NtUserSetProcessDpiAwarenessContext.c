/*
 * XREFs of NtUserSetProcessDpiAwarenessContext @ 0x140107FE0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ?UpdateWindowTreeDpiAwareness@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x140064B14 (-UpdateWindowTreeDpiAwareness@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     IsValidKernelDpiAwarenessContext @ 0x140100714 (IsValidKernelDpiAwarenessContext.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1401617E4 (DestroySharedUserCritDeferredUnlockList.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 */

__int64 __fastcall NtUserSetProcessDpiAwarenessContext(__int64 a1, __int64 a2)
{
  int v2; // ebp
  unsigned int v3; // esi
  _QWORD *UserSessionState; // rdi
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // rsi
  __int64 i; // rsi

  v2 = a2;
  v3 = a1;
  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2);
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    v6 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
           UserSessionState,
           0LL,
           0LL,
           _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  }
  else
  {
    LOBYTE(v5) = 1;
    v6 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(UserSessionState, v5);
  }
  v7 = v6;
  UserSessionState[3] = v6;
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( v7 )
      goto LABEL_8;
  }
  else if ( v7 )
  {
    *(_BYTE *)(v7 + 1708) = 1;
LABEL_8:
    DestroySharedUserCritDeferredUnlockList(UserSessionState + 2461);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2468);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2466);
  }
  if ( !IsValidKernelDpiAwarenessContext(v3) )
    goto LABEL_24;
  if ( (v3 & 0xF) == 1 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v8);
    v10 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v10 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
    if ( ((v3 >> 8) & 0x1FF) != *(_WORD *)(v10 + 272) )
    {
LABEL_24:
      UserSetLastError(87);
LABEL_25:
      v14 = 0LL;
      goto LABEL_26;
    }
  }
  v12 = *((_QWORD *)PtiCurrent() + 58);
  v13 = *(_QWORD *)(v12 + 808);
  if ( (v13 & 0x400000) != 0 && (!v2 || (v3 & 0xF) == 0 || *(_DWORD *)(v12 + 268) != 18) )
    goto LABEL_25;
  v14 = 1LL;
  *(_QWORD *)(v12 + 808) = v13 | 0x400000;
  if ( *(_DWORD *)(v12 + 268) != v3 )
  {
    *(_DWORD *)(v12 + 268) = v3;
    v15 = *(_QWORD *)(v12 + 648);
    if ( v15 )
    {
      for ( i = *(_QWORD *)(v15 + 16); i; i = *(_QWORD *)(i + 32) )
      {
        UpdateWindowTreeDpiAwareness((struct tagPROCESSINFO *)v12, *(struct tagWND **)(*(_QWORD *)(i + 8) + 24LL));
        UpdateWindowTreeDpiAwareness((struct tagPROCESSINFO *)v12, *(struct tagWND **)(i + 112));
      }
    }
  }
LABEL_26:
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v11);
  return v14;
}
