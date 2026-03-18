/*
 * XREFs of NtUserRegisterSessionPort @ 0x140159960
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1401617E4 (DestroySharedUserCritDeferredUnlockList.c)
 *     ?xxxDwmProcessStartup@@YAJPEAX@Z @ 0x14017DD8C (-xxxDwmProcessStartup@@YAJPEAX@Z.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 */

__int64 __fastcall NtUserRegisterSessionPort(HANDLE Handle, __int64 a2)
{
  _QWORD *UserSessionState; // rsi
  __int64 v4; // rdx
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdi
  NTSTATUS v8; // eax
  __int64 v9; // rdx
  ULONG v10; // eax

  UserSessionState = (_QWORD *)W32GetUserSessionState(Handle, a2);
  v5 = 0LL;
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    v6 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
           UserSessionState,
           0LL,
           0LL,
           _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  }
  else
  {
    LOBYTE(v4) = 1;
    v6 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(UserSessionState, v4);
  }
  v7 = v6;
  UserSessionState[3] = v6;
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !v7 )
      goto LABEL_9;
  }
  else
  {
    if ( !v7 )
      goto LABEL_9;
    *(_BYTE *)(v7 + 1708) = 1;
  }
  DestroySharedUserCritDeferredUnlockList(UserSessionState + 2461);
  DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2468);
  DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2466);
LABEL_9:
  v8 = xxxDwmProcessStartup(Handle);
  if ( v8 >= 0 )
  {
    v5 = 1LL;
  }
  else
  {
    v10 = RtlNtStatusToDosError(v8);
    UserSetLastError(v10);
  }
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v9);
  return v5;
}
