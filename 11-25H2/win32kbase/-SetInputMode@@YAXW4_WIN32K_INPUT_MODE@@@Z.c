/*
 * XREFs of ?SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x14014D7E0
 * Callers:
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x14007FE94 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     UserPowerInfoCallout @ 0x1401B1014 (UserPowerInfoCallout.c)
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1401617E4 (DestroySharedUserCritDeferredUnlockList.c)
 *     ?SetInputModeWithCrit@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x14016959C (-SetInputModeWithCrit@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401AC178 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 */

void __fastcall SetInputMode(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  _QWORD *UserSessionState; // rdi
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rdx

  v2 = a1;
  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2);
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
      goto LABEL_10;
  }
  else
  {
    if ( !v5 )
      goto LABEL_10;
    *(_BYTE *)(v5 + 1708) = 1;
  }
  if ( (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v5) )
  {
    DestroySharedUserCritDeferredUnlockList(UserSessionState + 2461);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2468);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2466);
  }
LABEL_10:
  SetInputModeWithCrit(v2);
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v6);
}
