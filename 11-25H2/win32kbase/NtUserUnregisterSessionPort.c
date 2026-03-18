/*
 * XREFs of NtUserUnregisterSessionPort @ 0x1401C12B0
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x140037A30 (HMUnlockObject.c)
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ?xxxDwmProcessShutdown@@YAJH@Z @ 0x1400AEF0C (-xxxDwmProcessShutdown@@YAJH@Z.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1400CD3B0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 */

__int64 __fastcall NtUserUnregisterSessionPort(__int64 a1, __int64 a2)
{
  _QWORD *UserSessionState; // rdi
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rsi
  __int64 v6; // rdx
  int *v7; // rax
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rdx

  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2);
  v3 = 0LL;
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
    v4 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
           UserSessionState,
           0,
           0,
           (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  else
    v4 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(UserSessionState, 1);
  v5 = v4;
  UserSessionState[3] = v4;
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !v5 )
      goto LABEL_14;
  }
  else
  {
    if ( !v5 )
      goto LABEL_14;
    *(_BYTE *)(v5 + 1708) = 1;
  }
  while ( 1 )
  {
    v8 = UserSessionState[2464];
    if ( !v8 )
      break;
    UserSessionState[2464] = *(_QWORD *)(v8 + 16);
    v7 = *(int **)v8;
    *(_QWORD *)(v8 + 16) = 0LL;
    if ( !v7[2] )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4686);
    HMUnlockObject(*(int **)v8, v6);
  }
  DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2468);
  DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2466);
LABEL_14:
  if ( (unsigned int)IsCurrentProcessDwm() )
  {
    xxxDwmProcessShutdown(0LL, v9);
    v3 = 1LL;
  }
  else
  {
    UserSetLastError(5);
  }
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v10);
  return v3;
}
