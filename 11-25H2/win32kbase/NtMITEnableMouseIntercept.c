/*
 * XREFs of NtMITEnableMouseIntercept @ 0x1401BA980
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x140037A30 (HMUnlockObject.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x140039910 (_anonymous_namespace_--GetMouseProcessor.c)
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     IsInputThread @ 0x1400BD250 (IsInputThread.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 *     ?Enable@MouseInterceptState@CMouseProcessor@@QEAA_NW4_MOUSE_PREINTERCEPT_BEHAVIOR@@@Z @ 0x140220278 (-Enable@MouseInterceptState@CMouseProcessor@@QEAA_NW4_MOUSE_PREINTERCEPT_BEHAVIOR@@@Z.c)
 */

__int64 __fastcall NtMITEnableMouseIntercept(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebp
  _QWORD *UserSessionState; // rdi
  unsigned int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  int *v9; // rax
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // ecx
  __int64 MouseProcessor; // rax
  __int64 v15; // rdx

  v2 = a1;
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
    v10 = UserSessionState[2464];
    if ( !v10 )
      break;
    UserSessionState[2464] = *(_QWORD *)(v10 + 16);
    v9 = *(int **)v10;
    *(_QWORD *)(v10 + 16) = 0LL;
    if ( !v9[2] )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4686);
    HMUnlockObject(*(int **)v10, v7);
  }
  DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2468);
  DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2466);
LABEL_14:
  if ( !IsInputThread(v8, v7) )
  {
    v13 = 5;
LABEL_22:
    UserSetLastError(v13);
    goto LABEL_23;
  }
  if ( (v2 & 0xFFFFFFFE) != 0 )
  {
    v13 = 87;
    goto LABEL_22;
  }
  MouseProcessor = anonymous_namespace_::GetMouseProcessor(v12, v11);
  if ( !MouseProcessor || !(unsigned __int8)CMouseProcessor::MouseInterceptState::Enable(MouseProcessor + 3904, v2) )
  {
    v13 = 5023;
    goto LABEL_22;
  }
  v4 = 1;
LABEL_23:
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v15);
  return v4;
}
