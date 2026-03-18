/*
 * XREFs of NtMITSynthesizeTouchInput @ 0x1401BB800
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x140037A30 (HMUnlockObject.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x140039464 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x14003B014 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
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
 *     SynthesizeMitTouchInput @ 0x14021C740 (SynthesizeMitTouchInput.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memset @ 0x140243000 (memset.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

__int64 __fastcall NtMITSynthesizeTouchInput(void *Src)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  _QWORD *UserSessionState; // rbx
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rdx
  int **v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // ecx
  int v12; // ebx
  __int64 v13; // rdx
  unsigned __int8 v14; // al
  __int64 *v16[2]; // [rsp+38h] [rbp-B90h] BYREF
  _BYTE Srca[1464]; // [rsp+48h] [rbp-B80h] BYREF
  _BYTE v18[1456]; // [rsp+600h] [rbp-5C8h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v16, "MITSynthesizeTouchInput", 0LL);
  UserSessionState = (_QWORD *)W32GetUserSessionState(v3, v2);
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
  if ( !(unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !v6 )
      goto LABEL_14;
    *(_BYTE *)(v6 + 1708) = 1;
  }
  if ( v6 )
  {
    while ( 1 )
    {
      v8 = (int **)UserSessionState[2464];
      if ( !v8 )
        break;
      UserSessionState[2464] = v8[2];
      v8[2] = 0LL;
      if ( !(*v8)[2] )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4686);
      HMUnlockObject(*v8, v7);
    }
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2468);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2466);
  }
LABEL_14:
  memset(v18, 0, sizeof(v18));
  if ( IsInputThread(v10, v9) )
  {
    memset(Srca, 0, 0x5B0uLL);
    RtlCopyFromUser(Srca, Src, 0x5B0uLL);
    memmove(v18, Srca, 0x5B0uLL);
    v14 = SynthesizeMitTouchInput(v18);
    v12 = v14;
    if ( v14 )
      goto LABEL_19;
    v11 = 5023;
  }
  else
  {
    v11 = 5;
  }
  v12 = 0;
  UserSetLastError(v11);
LABEL_19:
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v13);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v16);
  return v12;
}
