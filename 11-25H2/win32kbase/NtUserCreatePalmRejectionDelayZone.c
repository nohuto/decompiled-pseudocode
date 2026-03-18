/*
 * XREFs of NtUserCreatePalmRejectionDelayZone @ 0x1401BC1D0
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x140037A30 (HMUnlockObject.c)
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     SetLastNtError @ 0x14009DA54 (SetLastNtError.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 *     AddPalmRejectionDelayZone @ 0x140215710 (AddPalmRejectionDelayZone.c)
 */

__int64 __fastcall NtUserCreatePalmRejectionDelayZone(void *a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  _QWORD *UserSessionState; // rbx
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rdx
  int **v10; // rdi
  unsigned int v11; // ebx
  __int64 v12; // rdx

  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2);
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
    v7 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
           UserSessionState,
           0,
           0,
           (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  else
    v7 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(UserSessionState, 1);
  v8 = v7;
  UserSessionState[3] = v7;
  if ( !(unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !v8 )
      goto LABEL_14;
    *(_BYTE *)(v8 + 1708) = 1;
  }
  if ( v8 )
  {
    while ( 1 )
    {
      v10 = (int **)UserSessionState[2464];
      if ( !v10 )
        break;
      UserSessionState[2464] = v10[2];
      v10[2] = 0LL;
      if ( !(*v10)[2] )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4686);
      HMUnlockObject(*v10, v9);
    }
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2468);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2466);
  }
LABEL_14:
  v11 = AddPalmRejectionDelayZone(a1, a5);
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v12);
  return v11;
}
