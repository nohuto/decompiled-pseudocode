/*
 * XREFs of NtMITPostThreadEventMessage @ 0x1401BB050
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x140037A30 (HMUnlockObject.c)
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     SetLastNtError @ 0x14009DA54 (SetLastNtError.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     IsInputThread @ 0x1400BD250 (IsInputThread.c)
 *     PtiFromThreadId @ 0x1400D8EE0 (PtiFromThreadId.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RtlCopyFromUser @ 0x1401A4E78 (RtlCopyFromUser.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 *     PostThreadEvent @ 0x140216A38 (PostThreadEvent.c)
 */

__int64 __fastcall NtMITPostThreadEventMessage(__int64 a1, void *a2, int a3, int a4, unsigned int a5)
{
  int v8; // r15d
  _QWORD *UserSessionState; // rdi
  int v10; // ebx
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  int **v15; // rsi
  int v16; // ecx
  __int64 v17; // rdx
  int v18; // edi
  __int64 v19; // rax
  _QWORD v21[3]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v22; // [rsp+48h] [rbp-30h]

  v8 = a1;
  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2);
  v10 = 0;
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
    v11 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
            UserSessionState,
            0,
            0,
            (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  else
    v11 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(UserSessionState, 1);
  v12 = v11;
  UserSessionState[3] = v11;
  if ( !(unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !v12 )
      goto LABEL_14;
    *(_BYTE *)(v12 + 1708) = 1;
  }
  if ( v12 )
  {
    while ( 1 )
    {
      v15 = (int **)UserSessionState[2464];
      if ( !v15 )
        break;
      UserSessionState[2464] = v15[2];
      v15[2] = 0LL;
      if ( !(*v15)[2] )
      {
        LODWORD(v21[0]) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4686);
      }
      HMUnlockObject(*v15, v13);
    }
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2468);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2466);
  }
LABEL_14:
  if ( IsInputThread(v14, v13) )
  {
    v18 = 0;
    v22 = 0LL;
    if ( a2 )
    {
      v21[0] = 0LL;
      RtlCopyFromUser(v21, a2, 8uLL);
      v18 = v21[0];
      v22 = v21[0];
    }
    v19 = PtiFromThreadId(v8);
    if ( v19 )
    {
      LOBYTE(v10) = (unsigned __int8)PostThreadEvent(v19, v18, a3, a4, a5) != 0;
      goto LABEL_22;
    }
    v16 = 87;
  }
  else
  {
    v16 = 5;
  }
  UserSetLastError(v16);
LABEL_22:
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v17);
  return v10;
}
