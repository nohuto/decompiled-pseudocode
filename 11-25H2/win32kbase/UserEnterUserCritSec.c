/*
 * XREFs of UserEnterUserCritSec @ 0x1400F85F0
 * Callers:
 *     <none>
 * Callees:
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1401617E4 (DestroySharedUserCritDeferredUnlockList.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401AC178 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 */

_QWORD *__fastcall UserEnterUserCritSec(__int64 a1, __int64 a2)
{
  _QWORD *UserSessionState; // rdi
  __int64 v3; // rax
  __int64 v4; // rbx
  _QWORD *result; // rax

  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2);
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
    v3 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
           UserSessionState,
           1LL,
           0LL,
           _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  else
    v3 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(UserSessionState, 0LL);
  v4 = v3;
  UserSessionState[3] = v3;
  result = (_QWORD *)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline();
  if ( (_DWORD)result )
  {
    if ( !v4 )
      return result;
  }
  else
  {
    if ( !v4 )
      return result;
    *(_BYTE *)(v4 + 1708) = 1;
  }
  result = (_QWORD *)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v4);
  if ( (_BYTE)result )
  {
    DestroySharedUserCritDeferredUnlockList(UserSessionState + 2461);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2468);
    return DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2466);
  }
  return result;
}
