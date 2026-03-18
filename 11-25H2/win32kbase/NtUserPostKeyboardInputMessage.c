/*
 * XREFs of NtUserPostKeyboardInputMessage @ 0x1401BF660
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x140037A30 (HMUnlockObject.c)
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     SetLastNtError @ 0x14009DA54 (SetLastNtError.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1400CD3B0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     ?HandleLeftRightVKs@CKeyboardProcessor@@SAEE@Z @ 0x14011C85C (-HandleLeftRightVKs@CKeyboardProcessor@@SAEE@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RtlCopyFromUser @ 0x1401A4E78 (RtlCopyFromUser.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 *     ApiSetEditionPostKeyboardInputMessage @ 0x140225C08 (ApiSetEditionPostKeyboardInputMessage.c)
 */

__int64 __fastcall NtUserPostKeyboardInputMessage(__int64 a1, void *a2, __int64 a3)
{
  int v5; // r14d
  _QWORD *UserSessionState; // rdi
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v12; // rax
  char v13; // al
  int **v14; // rbx
  __int64 v15; // rdx
  int v17; // edx
  int v18; // r8d
  __int16 v19; // r9
  __int16 v20; // r10
  __int16 v21; // r11
  unsigned int v22; // ebx
  ULONG v23; // eax
  __int64 v24; // rdx
  __int128 v25; // [rsp+60h] [rbp-68h] BYREF
  int v26; // [rsp+70h] [rbp-58h]
  __int128 v27; // [rsp+80h] [rbp-48h]
  int v28; // [rsp+90h] [rbp-38h]

  v5 = a1;
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
  if ( !(unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !v8 )
      goto LABEL_22;
    *(_BYTE *)(v8 + 1708) = 1;
  }
  if ( v8 )
  {
    if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v8 + 528), 0, 0) & 0x1000000) != 0
      && *(char *)(v8 + 1360) >= 0 )
    {
      CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v10);
      if ( !CurrentProcessWin32Process )
        goto LABEL_22;
      v9 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      v12 = v9 & CurrentProcessWin32Process;
      if ( !v12 )
        goto LABEL_22;
      v13 = *(_BYTE *)(v12 + 1176);
      if ( v13 != 1 )
        goto LABEL_22;
    }
    else
    {
      v13 = 0;
    }
    if ( v13 )
    {
      while ( 1 )
      {
        v14 = (int **)UserSessionState[2464];
        if ( !v14 )
          break;
        UserSessionState[2464] = v14[2];
        v14[2] = 0LL;
        if ( !(*v14)[2] )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4686);
        HMUnlockObject(*v14, v9);
      }
      DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2468);
      DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2466);
    }
  }
LABEL_22:
  v27 = 0LL;
  v28 = 0;
  if ( (unsigned int)IsCurrentProcessDwm() )
  {
    v25 = 0LL;
    v26 = 0;
    RtlCopyFromUser(&v25, a2, 0x14uLL);
    v27 = v25;
    v28 = v26;
    LOBYTE(v17) = CKeyboardProcessor::HandleLeftRightVKs(BYTE8(v25));
    v22 = ApiSetEditionPostKeyboardInputMessage(v5, v17, v18, (unsigned __int16)v25, v21, v19, v26, v18, v20, a3);
    v23 = RtlNtStatusToDosError(v22);
    UserSetLastError(v23);
    UserSessionSwitchLeaveCritWithNonPaged(0LL, v24);
    return v22;
  }
  else
  {
    UserSessionSwitchLeaveCritWithNonPaged(0LL, v15);
    return 3221225506LL;
  }
}
