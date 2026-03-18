/*
 * XREFs of NtUserSetProcessMousewheelRoutingMode @ 0x1401C0B10
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x140037A30 (HMUnlockObject.c)
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 */

__int64 __fastcall NtUserSetProcessMousewheelRoutingMode(__int64 a1, __int64 a2)
{
  int v2; // esi
  _QWORD *UserSessionState; // rdi
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rbp
  __int64 v7; // rdx
  __int64 v8; // rcx
  int *v9; // rax
  __int64 v10; // r14
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v12; // rdx
  int v13; // esi
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax

  v2 = a1;
  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2);
  v4 = 0LL;
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
  CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v8);
  v12 = (__int64)CurrentProcessWin32Process;
  if ( !CurrentProcessWin32Process || !*CurrentProcessWin32Process )
    goto LABEL_24;
  if ( !v2 )
  {
    v14 = CurrentProcessWin32Process[101] & 0xFFFFFFFFFFFEFFFFuLL;
    goto LABEL_22;
  }
  v13 = v2 - 1;
  if ( v13 )
  {
    if ( v13 == 1 )
    {
      v14 = CurrentProcessWin32Process[101] | 0x10000LL;
LABEL_22:
      *(_QWORD *)(v12 + 808) = v14;
      v16 = v14 & 0xFFFFFFFFFFFF7FFFuLL;
      goto LABEL_23;
    }
LABEL_24:
    UserSetLastError(87);
    goto LABEL_25;
  }
  v15 = CurrentProcessWin32Process[101] & 0xFFFFFFFFFFFEFFFFuLL;
  *(_QWORD *)(v12 + 808) = v15;
  v16 = v15 | 0x8000;
LABEL_23:
  *(_QWORD *)(v12 + 808) = v16;
  v4 = 1LL;
LABEL_25:
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v12);
  return v4;
}
