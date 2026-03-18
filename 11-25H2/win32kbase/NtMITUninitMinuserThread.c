/*
 * XREFs of NtMITUninitMinuserThread @ 0x1401BB9D0
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x140037A30 (HMUnlockObject.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     ProtectHandle @ 0x1400DDACC (ProtectHandle.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 */

__int64 __fastcall NtMITUninitMinuserThread(__int64 a1, __int64 a2)
{
  _QWORD *UserSessionState; // rsi
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // rdx
  int *v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rdx
  struct tagTHREADINFO *v12; // rdi
  __int64 v13; // rax
  void *v14; // rcx

  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2);
  v3 = 0LL;
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
    v4 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
           UserSessionState,
           1,
           0,
           (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  else
    v4 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(UserSessionState, 0);
  v5 = v4;
  UserSessionState[3] = v4;
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !v5 )
      goto LABEL_19;
  }
  else
  {
    if ( !v5 )
      goto LABEL_19;
    *(_BYTE *)(v5 + 1708) = 1;
  }
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v5 + 528), 0, 0) & 0x1000000) != 0
    && *(char *)(v5 + 1360) >= 0 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
    if ( CurrentProcessWin32Process )
    {
      if ( *(_QWORD *)CurrentProcessWin32Process && *(_BYTE *)(CurrentProcessWin32Process + 1176) == 1 )
      {
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
          HMUnlockObject(*(int **)v10, v8);
        }
        DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2468);
        DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2466);
      }
    }
  }
LABEL_19:
  v12 = PtiCurrent();
  v13 = *((_QWORD *)v12 + 170);
  if ( (v13 & 0x1000000) != 0 )
  {
    v14 = (void *)*((_QWORD *)v12 + 95);
    *((_QWORD *)v12 + 170) = v13 & 0xFFFFFFFFFEFFFFFFuLL;
    ProtectHandle(v14, v11, (struct _OBJECT_TYPE *)ExEventObjectType, 0);
    ObfDereferenceObject(*((PVOID *)v12 + 96));
    *((_QWORD *)v12 + 95) = 0LL;
    *((_QWORD *)v12 + 96) = 0LL;
    v3 = 1LL;
  }
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v11);
  return v3;
}
