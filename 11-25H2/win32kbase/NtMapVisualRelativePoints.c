/*
 * XREFs of NtMapVisualRelativePoints @ 0x1401AE6E0
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x140037A30 (HMUnlockObject.c)
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     SetLastNtError @ 0x14009DA54 (SetLastNtError.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1400C16E0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     UserGetLastError @ 0x14015A8E8 (UserGetLastError.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 *     ?KernelMapVisualRelativePoint@@YAJ_J0PEBUVisualPoint@@PEAU1@@Z @ 0x1401ADD54 (-KernelMapVisualRelativePoint@@YAJ_J0PEBUVisualPoint@@PEAU1@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_ii @ 0x1401AEA5C (WPP_RECORDER_AND_TRACE_SF_ii.c)
 */

__int64 __fastcall NtMapVisualRelativePoints(char *a1, char *a2, unsigned int a3, __int64 a4, char *Address)
{
  _QWORD *UserSessionState; // rdi
  __int64 v6; // rax
  char v7; // si
  __int64 v8; // r14
  __int64 v9; // rdx
  int **v10; // r14
  char v11; // di
  bool v12; // r14
  __int64 v13; // rax
  int v14; // r8d
  int v15; // edx
  unsigned __int64 v16; // rdi
  __int64 CurrentProcessWow64Process; // rax
  __int64 v18; // rdx
  unsigned int i; // edi
  NTSTATUS v20; // eax
  int v21; // edi
  ULONG v22; // eax
  bool v23; // r14
  char LastError; // bl
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  int v28; // r8d
  int v29; // edx

  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2);
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    v6 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
           UserSessionState,
           0,
           0,
           (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
    v7 = 1;
  }
  else
  {
    v7 = 1;
    v6 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(UserSessionState, 1);
  }
  v8 = v6;
  UserSessionState[3] = v6;
  if ( !(unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !v8 )
      goto LABEL_13;
    *(_BYTE *)(v8 + 1708) = 1;
  }
  if ( v8 )
  {
    while ( 1 )
    {
      v10 = (int **)UserSessionState[2464];
      if ( !v10 )
        break;
      UserSessionState[2464] = v10[2];
      v10[2] = 0LL;
      if ( !(*v10)[2] )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4686);
      HMUnlockObject(*v10, v9);
    }
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2468);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2466);
  }
LABEL_13:
  if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
    || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
    || (v11 = 1, *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u) )
  {
    v11 = 0;
  }
  v12 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v13 = W32GetUserSessionState(WPP_GLOBAL_Control, v9);
    LOBYTE(v14) = v12;
    LOBYTE(v15) = v11;
    WPP_RECORDER_AND_TRACE_SF_ii(
      *((_QWORD *)WPP_GLOBAL_Control + 3),
      v15,
      v14,
      *(_QWORD *)(v13 + 69144),
      4,
      2,
      10,
      (__int64)&WPP_f8d355b3ab2236f38d0e596538285f9e_Traceguids,
      (char)a1,
      (char)a2);
  }
  v16 = 8LL * a3;
  if ( v16 > 0xFFFFFFFF )
  {
    v21 = 0;
    UserSetLastError(8);
  }
  else
  {
    if ( (_DWORD)v16 && ((PsGetCurrentProcessWow64Process() == 0 ? 3 : 0) & (unsigned __int8)a4) != 0 )
      ExRaiseDatatypeMisalignment();
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process();
    ProbeForWrite(Address, (unsigned int)v16, CurrentProcessWow64Process != 0 ? 1 : 4);
    for ( i = 0; i != a3; ++i )
    {
      v20 = KernelMapVisualRelativePoint(
              a1,
              a2,
              (const struct VisualPoint *)(a4 + 8LL * i),
              (struct VisualPoint *)&Address[8 * i]);
      if ( v20 < 0 )
      {
        v21 = 0;
        v22 = RtlNtStatusToDosError(v20);
        UserSetLastError(v22);
        goto LABEL_31;
      }
    }
    v21 = 1;
  }
LABEL_31:
  if ( !v21 )
  {
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 2) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v7 = 0;
    }
    v23 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    if ( v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LastError = UserGetLastError();
      v27 = W32GetUserSessionState(v26, v25);
      LOBYTE(v28) = v23;
      LOBYTE(v29) = v7;
      WPP_RECORDER_AND_TRACE_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v29,
        v28,
        *(_QWORD *)(v27 + 69144),
        2,
        2,
        11,
        (__int64)&WPP_f8d355b3ab2236f38d0e596538285f9e_Traceguids,
        LastError);
    }
  }
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v18);
  return v21;
}
