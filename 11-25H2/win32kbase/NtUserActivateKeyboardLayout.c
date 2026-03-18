/*
 * XREFs of NtUserActivateKeyboardLayout @ 0x14016E970
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ApiSetEditionGetProcessWindowStation @ 0x140048E08 (ApiSetEditionGetProcessWindowStation.c)
 *     xxxActivateKeyboardLayout @ 0x14009F180 (xxxActivateKeyboardLayout.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1401617E4 (DestroySharedUserCritDeferredUnlockList.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline @ 0x1401A53B4 (Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 *     ?HasUILimit@tagPROCESSINFO@@QEBA_NK@Z @ 0x1401AC114 (-HasUILimit@tagPROCESSINFO@@QEBA_NK@Z.c)
 */

struct tagKL *__fastcall NtUserActivateKeyboardLayout(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  _QWORD *UserSessionState; // rsi
  __int64 v5; // rdx
  struct tagKL *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rdx
  bool v10; // zf
  __int64 v11; // rdx
  struct tagWINDOWSTATION *ProcessWindowStation; // rax

  v2 = a2;
  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2);
  v6 = 0LL;
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    v7 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
           UserSessionState,
           0LL,
           0LL,
           _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  }
  else
  {
    LOBYTE(v5) = 1;
    v7 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(UserSessionState, v5);
  }
  v8 = v7;
  UserSessionState[3] = v7;
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !v8 )
      goto LABEL_9;
  }
  else
  {
    if ( !v8 )
      goto LABEL_9;
    *(_BYTE *)(v8 + 1708) = 1;
  }
  DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2461), v9);
  DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2468);
  DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2466);
LABEL_9:
  if ( (unsigned int)Feature_UserJobImprovement__private_IsEnabledDeviceUsageNoInline() )
  {
    v10 = !tagPROCESSINFO::HasUILimit(*(tagPROCESSINFO **)(v8 + 464), 1u);
  }
  else
  {
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)PtiCurrent() + 132, 0, 0) & 0x20000000) == 0 )
      goto LABEL_15;
    v10 = (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)PtiCurrent() + 58) + 752LL) + 24LL) & 1) == 0;
  }
  if ( v10 )
  {
LABEL_15:
    ProcessWindowStation = (struct tagWINDOWSTATION *)ApiSetEditionGetProcessWindowStation();
    v6 = xxxActivateKeyboardLayout(ProcessWindowStation, a1, v2, 0LL);
    goto LABEL_16;
  }
  UserSetLastError(5);
LABEL_16:
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v11);
  return v6;
}
