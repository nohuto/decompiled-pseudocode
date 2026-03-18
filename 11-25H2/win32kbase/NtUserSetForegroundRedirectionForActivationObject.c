/*
 * XREFs of NtUserSetForegroundRedirectionForActivationObject @ 0x1401BFEA0
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x140037A30 (HMUnlockObject.c)
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     SetLastNtError @ 0x14009DA54 (SetLastNtError.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RtlCopyFromUser @ 0x1401A4E78 (RtlCopyFromUser.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     ?SetForegroundRedirectionLuid@CActivationObjectManager@@QEAAJAEBU_LUID@@0@Z @ 0x1401AA0FC (-SetForegroundRedirectionLuid@CActivationObjectManager@@QEAAJAEBU_LUID@@0@Z.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 */

__int64 __fastcall NtUserSetForegroundRedirectionForActivationObject(void *Src, void *a2)
{
  _QWORD *UserSessionState; // rbx
  __int64 v5; // rax
  int v6; // edi
  __int64 v7; // rsi
  __int64 v8; // rdx
  int **v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  NTSTATUS v13; // eax
  __int64 v14; // rdx
  ULONG v15; // eax
  struct _LUID v17; // [rsp+30h] [rbp-48h] BYREF
  struct _LUID v18; // [rsp+38h] [rbp-40h] BYREF
  struct _LUID v19; // [rsp+90h] [rbp+18h] BYREF
  struct _LUID v20; // [rsp+98h] [rbp+20h] BYREF

  UserSessionState = (_QWORD *)W32GetUserSessionState(Src, a2);
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    v5 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
           UserSessionState,
           0,
           0,
           (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
    v6 = 1;
  }
  else
  {
    v6 = 1;
    v5 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(UserSessionState, 1);
  }
  v7 = v5;
  UserSessionState[3] = v5;
  if ( !(unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !v7 )
      goto LABEL_14;
    *(_BYTE *)(v7 + 1708) = 1;
  }
  if ( v7 )
  {
    while ( 1 )
    {
      v9 = (int **)UserSessionState[2464];
      if ( !v9 )
        break;
      UserSessionState[2464] = v9[2];
      v9[2] = 0LL;
      if ( !(*v9)[2] )
      {
        v19.LowPart = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4686);
      }
      HMUnlockObject(*v9, v8);
    }
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2468);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2466);
  }
LABEL_14:
  v19 = 0LL;
  RtlCopyFromUser(&v19, Src, 8uLL);
  v18 = v19;
  v20 = 0LL;
  RtlCopyFromUser(&v20, a2, 8uLL);
  v17 = v20;
  v12 = W32GetUserSessionState(v11, v10);
  v13 = CActivationObjectManager::SetForegroundRedirectionLuid(*(CActivationObjectManager **)(v12 + 18864), &v18, &v17);
  if ( v13 < 0 )
  {
    v6 = 0;
    v15 = RtlNtStatusToDosError(v13);
    UserSetLastError(v15);
  }
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v14);
  return v6;
}
