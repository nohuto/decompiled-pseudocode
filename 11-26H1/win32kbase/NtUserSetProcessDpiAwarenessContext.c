/*
 * XREFs of NtUserSetProcessDpiAwarenessContext @ 0x140149330
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     IsValidKernelDpiAwarenessContext @ 0x140086440 (IsValidKernelDpiAwarenessContext.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     ?UpdateWindowTreeDpiAwareness@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1400FDD7C (-UpdateWindowTreeDpiAwareness@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 */

__int64 __fastcall NtUserSetProcessDpiAwarenessContext(unsigned int a1, int a2, int a3)
{
  _QWORD *UserSessionState; // rbx
  __int64 v6; // rax
  int v7; // edx
  int v8; // r8d
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 CurrentProcessWin32Process; // rax
  struct tagTHREADINFO *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rbx
  __int64 v20; // rdi
  __int64 i; // rdi

  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2, a3);
  v6 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         0LL,
         0LL,
         _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v6;
  if ( v6 )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v7, v8);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
  }
  if ( !(unsigned int)IsValidKernelDpiAwarenessContext(a1) )
    goto LABEL_18;
  if ( (a1 & 0xF) == 1 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v10);
    if ( CurrentProcessWin32Process )
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    v9 = 511LL;
    v10 = a1 >> 8;
    LOWORD(v10) = v10 & 0x1FF;
    if ( (_WORD)v10 != *(_WORD *)(CurrentProcessWin32Process + 272) )
    {
LABEL_18:
      UserSetLastError(87);
LABEL_19:
      v19 = 0LL;
      goto LABEL_20;
    }
  }
  v12 = PtiCurrent(v10, v9);
  v16 = 0x400000LL;
  v17 = *((_QWORD *)v12 + 57);
  v18 = *(_QWORD *)(v17 + 808);
  if ( (v18 & 0x400000) != 0 && (!a2 || (a1 & 0xF) == 0 || *(_DWORD *)(v17 + 268) != 18) )
    goto LABEL_19;
  v19 = 1LL;
  *(_QWORD *)(v17 + 808) = v18 | 0x400000;
  if ( *(_DWORD *)(v17 + 268) != a1 )
  {
    *(_DWORD *)(v17 + 268) = a1;
    v20 = *(_QWORD *)(v17 + 656);
    if ( v20 )
    {
      for ( i = *(_QWORD *)(v20 + 16); i; i = *(_QWORD *)(i + 32) )
      {
        UpdateWindowTreeDpiAwareness((struct tagPROCESSINFO *)v17, *(struct tagWND **)(*(_QWORD *)(i + 8) + 24LL));
        UpdateWindowTreeDpiAwareness((struct tagPROCESSINFO *)v17, *(struct tagWND **)(i + 112));
      }
    }
  }
LABEL_20:
  UserSessionSwitchLeaveCritWithNonPaged(v16, v13, v14, v15);
  return v19;
}
