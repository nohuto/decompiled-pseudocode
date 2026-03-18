/*
 * XREFs of NtUserEnableTouchPad @ 0x1401BD300
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x140037A30 (HMUnlockObject.c)
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     EtwTraceUIPISystemError @ 0x14016E1F0 (EtwTraceUIPISystemError.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x1401A5130 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     ?CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z @ 0x1401A8AA8 (-CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 *     EnablePTPDevices @ 0x1401B4DE0 (EnablePTPDevices.c)
 */

_BOOL8 __fastcall NtUserEnableTouchPad(__int64 a1, __int64 a2)
{
  int v2; // ebp
  _QWORD *UserSessionState; // rdi
  BOOL v4; // ebx
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  int *v9; // rax
  __int64 v10; // rsi
  __int64 CurrentThreadWin32Thread; // rdi
  struct tagTHREADINFO *v12; // rax
  struct tagTHREADINFO *v13; // rax
  __int64 v14; // rdx
  _DWORD v16[6]; // [rsp+30h] [rbp-18h] BYREF

  v2 = a1;
  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2);
  v4 = 0;
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
  if ( !*(_QWORD *)W32GetUserSessionState(v8, v7) || !(unsigned int)GET_USERCRIT_DISPOSITION() )
    KeBugCheckEx(0x164u, 0x2AuLL, 0LL, 0LL, 0LL);
  v16[0] = 0x2000;
  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread();
  v16[1] = -1;
  ++*(_DWORD *)(CurrentThreadWin32Thread + 28);
  v16[2] = 0;
  v12 = PtiCurrent();
  if ( UIPrivilegeIsolation::CheckAccessEx(
         (UIPrivilegeIsolation *)(*((_QWORD *)v12 + 58) + 864LL),
         (const struct tagUIPI_INFO *)v16,
         0LL) )
  {
    LOBYTE(v4) = v2 != 0;
    v4 = EnablePTPDevices(v4);
  }
  else
  {
    v13 = PtiCurrent();
    EtwTraceUIPISystemError(*((PEPROCESS **)v13 + 58), 0LL, 13);
    UserSetLastError(5);
  }
  --*(_DWORD *)(CurrentThreadWin32Thread + 28);
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v14);
  return v4;
}
