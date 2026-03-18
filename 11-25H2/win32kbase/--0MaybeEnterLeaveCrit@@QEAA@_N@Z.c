/*
 * XREFs of ??0MaybeEnterLeaveCrit@@QEAA@_N@Z @ 0x1400E4F64
 * Callers:
 *     ?OnReadNotification@CBaseInput@@AEAAJXZ @ 0x14018A660 (-OnReadNotification@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1401617E4 (DestroySharedUserCritDeferredUnlockList.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401AC178 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 */

MaybeEnterLeaveCrit *__fastcall MaybeEnterLeaveCrit::MaybeEnterLeaveCrit(MaybeEnterLeaveCrit *this, __int64 a2)
{
  _QWORD *UserSessionState; // rdi
  __int64 v4; // rax
  __int64 v5; // rbx

  *(_BYTE *)this = a2;
  if ( (_BYTE)a2 )
  {
    UserSessionState = (_QWORD *)W32GetUserSessionState(this, a2);
    if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
      v4 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
             UserSessionState,
             1LL,
             0LL,
             _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
    else
      v4 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(UserSessionState, 0LL);
    v5 = v4;
    UserSessionState[3] = v4;
    if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( !v5 )
        return this;
    }
    else
    {
      if ( !v5 )
        return this;
      *(_BYTE *)(v5 + 1708) = 1;
    }
    if ( (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v5) )
    {
      DestroySharedUserCritDeferredUnlockList(UserSessionState + 2461);
      DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2468);
      DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2466);
    }
  }
  return this;
}
