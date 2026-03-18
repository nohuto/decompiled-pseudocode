/*
 * XREFs of NtMITPostWindowEventMessage @ 0x1401BB1F0
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x140037A30 (HMUnlockObject.c)
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     HMValidateHandleNoSecure @ 0x140067260 (HMValidateHandleNoSecure.c)
 *     SetLastNtError @ 0x14009DA54 (SetLastNtError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     IsInputThread @ 0x1400BD250 (IsInputThread.c)
 *     _HMPkheFromObjectWorker @ 0x1400E3FE8 (_HMPkheFromObjectWorker.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RtlCopyFromUser @ 0x1401A4E78 (RtlCopyFromUser.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 *     PostEvent @ 0x140216918 (PostEvent.c)
 */

__int64 __fastcall NtMITPostWindowEventMessage(__int64 a1, void *a2, int a3, int a4, unsigned int a5)
{
  int v8; // r15d
  int v9; // edi
  _QWORD *UserSessionState; // rbx
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  int **v15; // rsi
  __int64 v16; // rdx
  int v17; // esi
  int *v18; // rax
  struct tagTHREADINFO *v19; // rbx
  _QWORD v21[3]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v22; // [rsp+48h] [rbp-30h]

  v8 = a1;
  v9 = 0;
  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2);
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
    v17 = 0;
    v22 = 0LL;
    if ( a2 )
    {
      v21[0] = 0LL;
      RtlCopyFromUser(v21, a2, 8uLL);
      v17 = v21[0];
      v22 = v21[0];
    }
    v18 = (int *)HMValidateHandleNoSecure(v8, 255);
    if ( v18 )
    {
      v19 = *(struct tagTHREADINFO **)(HMPkheFromObjectWorker(v18, v16) + 8);
      if ( v19 == PtiCurrent() )
        v9 = (unsigned __int8)PostEvent(v8, v17, a3, a4, a5);
    }
  }
  else
  {
    UserSetLastError(5);
  }
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v16);
  return v9;
}
