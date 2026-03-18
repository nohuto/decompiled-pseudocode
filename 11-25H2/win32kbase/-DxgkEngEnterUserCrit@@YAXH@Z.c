/*
 * XREFs of ?DxgkEngEnterUserCrit@@YAXH@Z @ 0x1400EC7B0
 * Callers:
 *     <none>
 * Callees:
 *     EnterSharedCrit @ 0x14008A250 (EnterSharedCrit.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1401617E4 (DestroySharedUserCritDeferredUnlockList.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401AC178 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 */

void __fastcall DxgkEngEnterUserCrit(__int64 a1, __int64 a2)
{
  _QWORD *UserSessionState; // rdi
  __int64 v3; // rax
  __int64 v4; // rbx

  if ( (_DWORD)a1 )
  {
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
    if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( !v4 )
        return;
    }
    else
    {
      if ( !v4 )
        return;
      *(_BYTE *)(v4 + 1708) = 1;
    }
    if ( (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v4) )
    {
      DestroySharedUserCritDeferredUnlockList(UserSessionState + 2461);
      DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2468);
      DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2466);
    }
  }
  else
  {
    EnterSharedCrit(1u, 1u);
  }
}
