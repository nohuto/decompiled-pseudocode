/*
 * XREFs of NtMITPostMouseInputMessage @ 0x1401BAEA0
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x140037A30 (HMUnlockObject.c)
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     SetLastNtError @ 0x14009DA54 (SetLastNtError.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     IsInputThread @ 0x1400BD250 (IsInputThread.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RtlCopyFromUser @ 0x1401A4E78 (RtlCopyFromUser.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 *     PostMouseInputMessage @ 0x140216994 (PostMouseInputMessage.c)
 */

__int64 __fastcall NtMITPostMouseInputMessage(void *Src, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned int v6; // r12d
  _QWORD *UserSessionState; // rbx
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  int **v13; // rdi
  unsigned int v14; // ebx
  __int64 v15; // rdx
  __int64 v16; // rbx
  _QWORD v18[3]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v19; // [rsp+38h] [rbp-50h] BYREF
  _QWORD v20[4]; // [rsp+40h] [rbp-48h] BYREF

  v6 = a2;
  UserSessionState = (_QWORD *)W32GetUserSessionState(Src, a2);
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
    v9 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
           UserSessionState,
           0,
           0,
           (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  else
    v9 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(UserSessionState, 1);
  v10 = v9;
  UserSessionState[3] = v9;
  if ( !(unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !v10 )
      goto LABEL_14;
    *(_BYTE *)(v10 + 1708) = 1;
  }
  if ( v10 )
  {
    while ( 1 )
    {
      v13 = (int **)UserSessionState[2464];
      if ( !v13 )
        break;
      UserSessionState[2464] = v13[2];
      v13[2] = 0LL;
      if ( !(*v13)[2] )
      {
        LODWORD(v18[0]) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4686);
      }
      HMUnlockObject(*v13, v11);
    }
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2468);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2466);
  }
LABEL_14:
  if ( IsInputThread(v12, v11) )
  {
    v20[0] = 0LL;
    v18[0] = 0LL;
    RtlCopyFromUser(v18, Src, 8uLL);
    v16 = v18[0];
    v20[1] = v18[0];
    if ( a4 )
    {
      v19 = 0LL;
      RtlCopyFromUser(&v19, a4, 8uLL);
      v20[0] = v19;
      a4 = v20;
    }
    v14 = (unsigned __int8)PostMouseInputMessage(v16, v6, a3, a4) == 0 ? 0xC0000001 : 0;
  }
  else
  {
    v14 = -1073741823;
    UserSetLastError(5);
  }
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v15);
  return v14;
}
