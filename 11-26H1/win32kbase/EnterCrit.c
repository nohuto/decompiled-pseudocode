/*
 * XREFs of EnterCrit @ 0x1401A8600
 * Callers:
 *     <none>
 * Callees:
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x14017BECC (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 */

__int64 __fastcall EnterCrit(unsigned int a1, unsigned int a2, int a3)
{
  _QWORD *UserSessionState; // rbp
  __int64 result; // rax
  int v7; // edx
  int v8; // r8d
  __int64 v9; // rdi

  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2, a3);
  result = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
             UserSessionState,
             a1,
             a2,
             _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = result;
  v9 = result;
  if ( result )
  {
    if ( !a1 || UserCritInternal::_anonymous_namespace_::IsValidGuiContext(result) )
    {
      DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v7, v8);
      DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
      DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
    }
    return v9;
  }
  return result;
}
