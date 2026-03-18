/*
 * XREFs of UserEnterUserCritSec @ 0x140141890
 * Callers:
 *     <none>
 * Callees:
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x14017BECC (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 */

_QWORD *__fastcall UserEnterUserCritSec(int a1, int a2, int a3)
{
  _QWORD *UserSessionState; // rbx
  _QWORD *result; // rax
  int v5; // edx
  int v6; // r8d

  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2, a3);
  result = (_QWORD *)UserCritInternal::_anonymous_namespace_::EnterCritInternal(
                       UserSessionState,
                       1LL,
                       0LL,
                       _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = result;
  if ( result )
  {
    result = (_QWORD *)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(result);
    if ( (_BYTE)result )
    {
      DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v5, v6);
      DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
      return DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
    }
  }
  return result;
}
