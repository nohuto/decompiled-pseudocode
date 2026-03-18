/*
 * XREFs of UserProcessTimerStatisticsCallout @ 0x1401A76B0
 * Callers:
 *     W32CalloutDispatchWorker @ 0x1400DB04C (W32CalloutDispatchWorker.c)
 * Callees:
 *     HMUnlockObject @ 0x140037A30 (HMUnlockObject.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 */

__int64 __fastcall UserProcessTimerStatisticsCallout(__int64 a1, __int64 a2)
{
  _QWORD *UserSessionState; // rsi
  unsigned int v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v9; // rdx
  int *v10; // rax
  __int64 v11; // rdi
  __int64 ProcessWin32Process; // rax
  __int64 v13; // rdx

  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2);
  v4 = 0;
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
    v5 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
           UserSessionState,
           1LL,
           0LL,
           _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  else
    v5 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(UserSessionState, 0LL);
  v6 = v5;
  UserSessionState[3] = v5;
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !v6 )
      goto LABEL_19;
  }
  else
  {
    if ( !v6 )
      goto LABEL_19;
    *(_BYTE *)(v6 + 1708) = 1;
  }
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v6 + 528), 0, 0) & 0x1000000) != 0
    && *(char *)(v6 + 1360) >= 0 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v7);
    if ( CurrentProcessWin32Process )
    {
      if ( *(_QWORD *)CurrentProcessWin32Process && *(_BYTE *)(CurrentProcessWin32Process + 1176) == 1 )
      {
        while ( 1 )
        {
          v11 = UserSessionState[2464];
          if ( !v11 )
            break;
          UserSessionState[2464] = *(_QWORD *)(v11 + 16);
          v10 = *(int **)v11;
          *(_QWORD *)(v11 + 16) = 0LL;
          if ( !v10[2] )
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4686);
          HMUnlockObject(*(int **)v11, v9);
        }
        DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2468);
        DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2466);
      }
    }
  }
LABEL_19:
  ProcessWin32Process = PsGetProcessWin32Process(*(_QWORD *)(a1 + 16));
  if ( ProcessWin32Process && *(_QWORD *)ProcessWin32Process )
    *(_DWORD *)(a1 + 24) = *(_DWORD *)(ProcessWin32Process + 1032);
  else
    v4 = -1073741558;
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v13);
  return v4;
}
