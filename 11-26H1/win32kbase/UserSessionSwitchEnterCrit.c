/*
 * XREFs of UserSessionSwitchEnterCrit @ 0x14000A1D0
 * Callers:
 *     AcquireCriticalSectionAndCheckState @ 0x140009730 (AcquireCriticalSectionAndCheckState.c)
 *     ?NtUserEnumDisplaySettingsExclusive@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z @ 0x14013C400 (-NtUserEnumDisplaySettingsExclusive@@YAJPEAU_UNICODE_STRING@@KPEAU_devicemodeW@@K@Z.c)
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1400D7D60 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1400EAAF4 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x14017BECC (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 */

__int64 UserSessionSwitchEnterCrit()
{
  __int64 UserSessionState; // rbx
  __int64 v1; // rax
  __int64 v2; // rax
  __int64 v3; // rax
  char v5; // [rsp+40h] [rbp+8h] BYREF

  UserSessionState = W32GetUserSessionState();
  v1 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         1LL,
         0LL,
         _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  *(_QWORD *)(UserSessionState + 24) = v1;
  if ( v1 && (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v1) )
  {
    DestroySharedUserCritDeferredUnlockList(UserSessionState + 19720);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 19776);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 19760);
  }
  while ( *(_DWORD *)(W32GetUserGdiSessionState() + 36) && !(unsigned int)IsCurrentProcessDwm() )
  {
    v2 = W32GetUserSessionState();
    v5 = 0;
    ++*(_DWORD *)(v2 + 68872);
    UserSessionSwitchLeaveCritWithNonPaged();
    v3 = W32GetUserSessionState();
    KeWaitForSingleObject(*(PVOID *)(v3 + 68864), UserRequest, 0, 0, 0LL);
    LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v5);
  }
  return 0LL;
}
