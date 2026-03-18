/*
 * XREFs of NtKSTInitialize @ 0x1401BA280
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     IsKSTThread @ 0x1400BD2E0 (IsKSTThread.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1400CD3B0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1401617E4 (DestroySharedUserCritDeferredUnlockList.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 *     UserKSTInitialize @ 0x140219140 (UserKSTInitialize.c)
 */

__int64 __fastcall NtKSTInitialize(void *a1, void *a2)
{
  _QWORD *UserSessionState; // rsi
  unsigned int v5; // edi
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  HANDLE v11; // rbx
  __int64 v12; // rdx

  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2);
  v5 = 0;
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
    v6 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
           UserSessionState,
           0,
           0,
           (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  else
    v6 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(UserSessionState, 1);
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
  DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2461), v8);
  DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2468);
  DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2466);
LABEL_9:
  if ( ((unsigned int)IsCurrentProcessDwm()
     || (v11 = *(HANDLE *)(W32GetUserSessionState(v10, v9) + 63544), PsGetCurrentProcessId() == v11))
    && *(_DWORD *)(W32GetUserSessionState(v10, v9) + 19096) )
  {
    if ( !IsKSTThread(v10, v9) )
    {
      v5 = UserKSTInitialize(a1, a2);
      goto LABEL_17;
    }
  }
  else if ( !*(_DWORD *)(W32GetUserSessionState(v10, v9) + 19096) )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 5022);
  }
  UserSetLastError(5);
LABEL_17:
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v12);
  return v5;
}
