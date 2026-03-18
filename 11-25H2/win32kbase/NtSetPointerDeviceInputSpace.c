/*
 * XREFs of NtSetPointerDeviceInputSpace @ 0x1401BBD50
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x140037A30 (HMUnlockObject.c)
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1400620B0 (RawInputManagerDeviceObjectResolveHandle.c)
 *     SetLastNtError @ 0x14009DA54 (SetLastNtError.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RtlCopyFromUser @ 0x1401A4E78 (RtlCopyFromUser.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 *     RIMSetPointerDeviceInputSpace @ 0x1401E54C8 (RIMSetPointerDeviceInputSpace.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

__int64 __fastcall NtSetPointerDeviceInputSpace(char *a1, void *a2, void *a3)
{
  _QWORD *UserSessionState; // rsi
  __int64 v7; // rax
  int v8; // edi
  __int64 v9; // r14
  __int64 v10; // rdx
  int **v11; // r14
  __int64 v12; // rdx
  PVOID v13; // rsi
  NTSTATUS v14; // eax
  ULONG v15; // eax
  PVOID Object; // [rsp+20h] [rbp-A8h] BYREF
  __int64 v18; // [rsp+30h] [rbp-98h] BYREF
  __int64 v19; // [rsp+38h] [rbp-90h] BYREF
  __int128 v20; // [rsp+50h] [rbp-78h] BYREF
  __int128 v21; // [rsp+70h] [rbp-58h] BYREF

  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2);
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    v7 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
           UserSessionState,
           0,
           0,
           (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
    v8 = 1;
  }
  else
  {
    v8 = 1;
    v7 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(UserSessionState, 1);
  }
  v9 = v7;
  UserSessionState[3] = v7;
  if ( !(unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !v9 )
      goto LABEL_14;
    *(_BYTE *)(v9 + 1708) = 1;
  }
  if ( v9 )
  {
    while ( 1 )
    {
      v11 = (int **)UserSessionState[2464];
      if ( !v11 )
        break;
      UserSessionState[2464] = v11[2];
      v11[2] = 0LL;
      if ( !(*v11)[2] )
      {
        LODWORD(Object) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4686);
      }
      HMUnlockObject(*v11, v10);
    }
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2468);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2466);
  }
LABEL_14:
  Object = 0LL;
  v19 = 0LL;
  v21 = 0LL;
  if ( (int)RawInputManagerDeviceObjectResolveHandle(a1, 3u, 1, &Object) >= 0 )
  {
    if ( a2 )
    {
      v18 = 0LL;
      RtlCopyFromUser(&v18, a2, 8uLL);
      v19 = v18;
    }
    if ( a3 )
    {
      v20 = 0LL;
      RtlCopyFromUser(&v20, a3, 0x10uLL);
      v21 = v20;
    }
    v13 = Object;
    v14 = RIMSetPointerDeviceInputSpace(
            Object,
            (unsigned __int64)&v19 & -(__int64)(a2 != 0LL),
            (unsigned __int64)&v21 & -(__int64)(a3 != 0LL));
    if ( v14 < 0 )
    {
      v8 = 0;
      v15 = RtlNtStatusToDosError(v14);
      UserSetLastError(v15);
    }
  }
  else
  {
    v8 = 0;
    UserSetLastError(87);
    v13 = Object;
  }
  if ( v13 )
    ObfDereferenceObject(v13);
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v12);
  return v8;
}
