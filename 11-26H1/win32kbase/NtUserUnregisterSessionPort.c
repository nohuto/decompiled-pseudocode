/*
 * XREFs of NtUserUnregisterSessionPort @ 0x1401E9F00
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1400D7D60 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1401FBD50 (-xxxDwmProcessShutdown@@YAJH@Z.c)
 */

__int64 __fastcall NtUserUnregisterSessionPort(int a1, int a2, int a3)
{
  _QWORD *UserSessionState; // rbx
  __int64 v4; // rax
  int v5; // edx
  __int64 v6; // rcx
  int v7; // r8d
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9

  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2, a3);
  v4 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         0LL,
         0,
         (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  v8 = 0LL;
  UserSessionState[3] = v4;
  if ( v4 )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v5, v7);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
  }
  if ( (unsigned int)IsCurrentProcessDwm(v6) )
  {
    xxxDwmProcessShutdown(0);
    v8 = 1LL;
  }
  else
  {
    UserSetLastError(5);
  }
  UserSessionSwitchLeaveCritWithNonPaged(v10, v9, v11, v12);
  return v8;
}
