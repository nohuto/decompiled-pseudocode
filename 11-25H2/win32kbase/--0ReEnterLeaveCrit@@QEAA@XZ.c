/*
 * XREFs of ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x1400E1960
 * Callers:
 *     UserDeleteW32Thread @ 0x140084340 (UserDeleteW32Thread.c)
 *     UserGetDesktopDC @ 0x140098B10 (UserGetDesktopDC.c)
 *     ?RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z @ 0x1400E1830 (-RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1400E1920 (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     ResetAccessibilityCountersOnMouseInput @ 0x1400EBCC0 (ResetAccessibilityCountersOnMouseInput.c)
 *     UserDeleteW32Process @ 0x140162C50 (UserDeleteW32Process.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1401B6C6C (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     DeactivateKSTInputProcessingHelper @ 0x140218FA0 (DeactivateKSTInputProcessingHelper.c)
 * Callees:
 *     ?IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ @ 0x14003F5E0 (-IS_USERCRIT_OWNED_EXCLUSIVE@@YA_NXZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1401617E4 (DestroySharedUserCritDeferredUnlockList.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401AC178 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 */

ReEnterLeaveCrit *__fastcall ReEnterLeaveCrit::ReEnterLeaveCrit(ReEnterLeaveCrit *this)
{
  bool v2; // al
  __int64 v3; // rdx
  __int64 v4; // rcx
  _QWORD *UserSessionState; // rdi
  __int64 v6; // rax
  __int64 v7; // rbx

  v2 = IS_USERCRIT_OWNED_EXCLUSIVE();
  *(_BYTE *)this = v2;
  if ( !v2 )
  {
    UserSessionState = (_QWORD *)W32GetUserSessionState(v4, v3);
    if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
      v6 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
             UserSessionState,
             1LL,
             0LL,
             _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
    else
      v6 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(UserSessionState, 0LL);
    v7 = v6;
    UserSessionState[3] = v6;
    if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( !v7 )
        return this;
    }
    else
    {
      if ( !v7 )
        return this;
      *(_BYTE *)(v7 + 1708) = 1;
    }
    if ( (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v7) )
    {
      DestroySharedUserCritDeferredUnlockList(UserSessionState + 2461);
      DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2468);
      DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2466);
    }
  }
  return this;
}
