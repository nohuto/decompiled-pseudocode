/*
 * XREFs of NtUserCreateSystemThreads @ 0x140133580
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     xxxCreateSystemThreads @ 0x140081E00 (xxxCreateSystemThreads.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1401617E4 (DestroySharedUserCritDeferredUnlockList.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 */

__int64 __fastcall NtUserCreateSystemThreads(__int64 a1, __int64 a2)
{
  _QWORD *UserSessionState; // rbx
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 SystemThreads; // rbx
  __int64 v7; // rdx

  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2);
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    v4 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
           UserSessionState,
           0LL,
           0LL,
           _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  }
  else
  {
    LOBYTE(v3) = 1;
    v4 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(UserSessionState, v3);
  }
  v5 = v4;
  UserSessionState[3] = v4;
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( v5 )
      goto LABEL_8;
  }
  else if ( v5 )
  {
    *(_BYTE *)(v5 + 1708) = 1;
LABEL_8:
    DestroySharedUserCritDeferredUnlockList(UserSessionState + 2461);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2468);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2466);
  }
  SystemThreads = (int)xxxCreateSystemThreads();
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v7);
  return SystemThreads;
}
