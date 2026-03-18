/*
 * XREFs of NtUserUnloadKeyboardLayout @ 0x1401C1180
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x140037A30 (HMUnlockObject.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ApiSetEditionGetProcessWindowStation @ 0x140048E08 (ApiSetEditionGetProcessWindowStation.c)
 *     HKLtoPKL @ 0x14009F540 (HKLtoPKL.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YA_NPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x140212EE0 (-xxxInternalUnloadKeyboardLayout@@YA_NPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 */

_BOOL8 __fastcall NtUserUnloadKeyboardLayout(__int64 a1, __int64 a2)
{
  _QWORD *UserSessionState; // rdi
  bool v4; // bl
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rdx
  int *v8; // rax
  __int64 v9; // rsi
  struct tagWINDOWSTATION *ProcessWindowStation; // rdi
  struct tagTHREADINFO *v11; // rax
  struct tagKL *v12; // rax
  __int64 v13; // rdx

  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2);
  v4 = 0;
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
    v5 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
           UserSessionState,
           0,
           0,
           (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  else
    v5 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(UserSessionState, 1);
  v6 = v5;
  UserSessionState[3] = v5;
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !v6 )
      goto LABEL_14;
  }
  else
  {
    if ( !v6 )
      goto LABEL_14;
    *(_BYTE *)(v6 + 1708) = 1;
  }
  while ( 1 )
  {
    v9 = UserSessionState[2464];
    if ( !v9 )
      break;
    UserSessionState[2464] = *(_QWORD *)(v9 + 16);
    v8 = *(int **)v9;
    *(_QWORD *)(v9 + 16) = 0LL;
    if ( !v8[2] )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4686);
    HMUnlockObject(*(int **)v9, v7);
  }
  DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2468);
  DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2466);
LABEL_14:
  ProcessWindowStation = (struct tagWINDOWSTATION *)ApiSetEditionGetProcessWindowStation();
  v11 = PtiCurrent();
  v12 = (struct tagKL *)HKLtoPKL((__int64)v11, a1);
  if ( v12 )
    v4 = xxxInternalUnloadKeyboardLayout(ProcessWindowStation, v12, 0);
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v13);
  return v4;
}
