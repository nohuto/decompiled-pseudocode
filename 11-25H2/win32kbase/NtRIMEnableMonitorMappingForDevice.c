/*
 * XREFs of NtRIMEnableMonitorMappingForDevice @ 0x1401D7E80
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x140037A30 (HMUnlockObject.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1401DA730 (RIMEnableMonitorMappingForDevice.c)
 */

__int64 __fastcall NtRIMEnableMonitorMappingForDevice(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *UserSessionState; // rdi
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v11; // rdx
  int *v12; // rax
  __int64 v13; // rbx
  unsigned int v14; // ebx
  __int64 v15; // rdx

  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2);
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
    v7 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
           UserSessionState,
           1,
           0,
           (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  else
    v7 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(UserSessionState, 0);
  v8 = v7;
  UserSessionState[3] = v7;
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !v8 )
      goto LABEL_19;
  }
  else
  {
    if ( !v8 )
      goto LABEL_19;
    *(_BYTE *)(v8 + 1708) = 1;
  }
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v8 + 528), 0, 0) & 0x1000000) != 0
    && *(char *)(v8 + 1360) >= 0 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v9);
    if ( CurrentProcessWin32Process )
    {
      if ( *(_QWORD *)CurrentProcessWin32Process && *(_BYTE *)(CurrentProcessWin32Process + 1176) == 1 )
      {
        while ( 1 )
        {
          v13 = UserSessionState[2464];
          if ( !v13 )
            break;
          UserSessionState[2464] = *(_QWORD *)(v13 + 16);
          v12 = *(int **)v13;
          *(_QWORD *)(v13 + 16) = 0LL;
          if ( !v12[2] )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4686);
          HMUnlockObject(*(int **)v13, v11);
        }
        DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2468);
        DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2466);
      }
    }
  }
LABEL_19:
  v14 = RIMEnableMonitorMappingForDevice(a1, a2, 1LL, a3);
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v15);
  return v14;
}
