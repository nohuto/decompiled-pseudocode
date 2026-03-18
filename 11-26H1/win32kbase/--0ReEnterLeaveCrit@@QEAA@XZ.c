/*
 * XREFs of ??0ReEnterLeaveCrit@@QEAA@XZ @ 0x140111814
 * Callers:
 *     UserGetDesktopDC @ 0x14000F79C (UserGetDesktopDC.c)
 *     ?GrepCreateCompatibleDC@@YAPEAUHDC__@@AEAVOPTAPIDCOBJ@@@Z @ 0x14003F770 (-GrepCreateCompatibleDC@@YAPEAUHDC__@@AEAVOPTAPIDCOBJ@@@Z.c)
 *     UserDeleteW32Thread @ 0x140091290 (UserDeleteW32Thread.c)
 *     ?RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z @ 0x1401113F0 (-RegisterDispatcherObject@CBaseInput@@QEAAJPEAVIRegisterInputDispatcherObjects@@@Z.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1401116D8 (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1401117CC (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     ResetAccessibilityCountersOnMouseInput @ 0x140134450 (ResetAccessibilityCountersOnMouseInput.c)
 *     UserDeleteW32Process @ 0x1401C0400 (UserDeleteW32Process.c)
 *     DeactivateKSTInputProcessingHelper @ 0x14021DE70 (DeactivateKSTInputProcessingHelper.c)
 * Callees:
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x140048BE0 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x14017BECC (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 */

ReEnterLeaveCrit *__fastcall ReEnterLeaveCrit::ReEnterLeaveCrit(ReEnterLeaveCrit *this, __int64 a2)
{
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  _QWORD *UserSessionState; // rbx
  __int64 v7; // rax
  int v8; // edx
  int v9; // r8d

  if ( (unsigned int)GET_USERCRIT_DISPOSITION((__int64)this, a2) == 2 )
  {
    *(_BYTE *)this = 1;
  }
  else
  {
    *(_BYTE *)this = 0;
    UserSessionState = (_QWORD *)W32GetUserSessionState(v4, v3, v5);
    v7 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
           UserSessionState,
           1LL,
           0LL,
           _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
    UserSessionState[3] = v7;
    if ( v7 && (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v7) )
    {
      DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v8, v9);
      DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
      DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
    }
  }
  return this;
}
