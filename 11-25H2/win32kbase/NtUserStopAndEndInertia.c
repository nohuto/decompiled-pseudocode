/*
 * XREFs of NtUserStopAndEndInertia @ 0x1401C1050
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x140037A30 (HMUnlockObject.c)
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1400CD3B0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 *     ?StopAndEndInertia@CTouchProcessor@@QEAAHIPEAX@Z @ 0x14020BB70 (-StopAndEndInertia@CTouchProcessor@@QEAAHIPEAX@Z.c)
 */

__int64 __fastcall NtUserStopAndEndInertia(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  _QWORD *UserSessionState; // rdi
  int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rdx
  int *v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rax
  void *v14; // r8

  v2 = a2;
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
  if ( (unsigned int)IsCurrentProcessDwm() )
  {
    v13 = W32GetUserSessionState(v11, v10);
    v4 = CTouchProcessor::StopAndEndInertia(*(CTouchProcessor **)(v13 + 3256), v2, v14);
  }
  else
  {
    UserSetLastError(5);
  }
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v12);
  return v4;
}
