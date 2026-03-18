/*
 * XREFs of NtUserSetProcessMousewheelRoutingMode @ 0x1401E9950
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 */

__int64 __fastcall NtUserSetProcessMousewheelRoutingMode(int a1, int a2, int a3)
{
  _QWORD *UserSessionState; // rbx
  __int64 v5; // rax
  int v6; // edx
  __int64 v7; // rcx
  int v8; // r8d
  __int64 v9; // rdi
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // esi
  __int64 v15; // rcx

  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2, a3);
  v5 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         0LL,
         0,
         (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  v9 = 0LL;
  UserSessionState[3] = v5;
  if ( v5 )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v6, v8);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
  }
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v7);
  if ( !CurrentProcessWin32Process || !*CurrentProcessWin32Process )
    goto LABEL_13;
  if ( !a1 )
  {
    CurrentProcessWin32Process[101] &= ~0x10000uLL;
    goto LABEL_11;
  }
  v14 = a1 - 1;
  if ( v14 )
  {
    if ( v14 == 1 )
    {
      CurrentProcessWin32Process[101] |= 0x10000uLL;
LABEL_11:
      v15 = CurrentProcessWin32Process[101] & 0xFFFFFFFFFFFF7FFFuLL;
      goto LABEL_12;
    }
LABEL_13:
    UserSetLastError(87);
    goto LABEL_14;
  }
  CurrentProcessWin32Process[101] &= ~0x10000uLL;
  v15 = CurrentProcessWin32Process[101] | 0x8000LL;
LABEL_12:
  CurrentProcessWin32Process[101] = v15;
  v9 = 1LL;
LABEL_14:
  UserSessionSwitchLeaveCritWithNonPaged(v15, v11, v12, v13);
  return v9;
}
