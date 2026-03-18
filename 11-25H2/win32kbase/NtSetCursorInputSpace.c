/*
 * XREFs of NtSetCursorInputSpace @ 0x1401BBB70
 * Callers:
 *     <none>
 * Callees:
 *     HMUnlockObject @ 0x140037A30 (HMUnlockObject.c)
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1400CD3B0 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     ?OnDisplayStateChange@CCursorClip@@QEAAXW4CursorDisplayChangeOptions@@@Z @ 0x1400CF310 (-OnDisplayStateChange@CCursorClip@@QEAAXW4CursorDisplayChangeOptions@@@Z.c)
 *     ?FindInputSpace@CMouseConfig@CInputConfig@@QEAAXXZ @ 0x14012FF64 (-FindInputSpace@CMouseConfig@CInputConfig@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     ?CheckCapability@UIPrivilegeIsolation@@YAJPEBG@Z @ 0x1401A8B80 (-CheckCapability@UIPrivilegeIsolation@@YAJPEBG@Z.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 */

__int64 __fastcall NtSetCursorInputSpace(__int64 a1, __int64 a2)
{
  _QWORD *UserSessionState; // rbx
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rdx
  int *v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  NTSTATUS v12; // eax
  __int64 v13; // rcx
  ULONG v14; // ecx
  __int64 v15; // rdx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax

  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2);
  v4 = 0LL;
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
    v9 = UserSessionState[2464];
    if ( !v9 )
      break;
    UserSessionState[2464] = *(_QWORD *)(v9 + 16);
    v8 = *(int **)v9;
    *(_QWORD *)(v9 + 16) = 0LL;
    if ( !v8[2] )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 4686);
    HMUnlockObject(*(int **)v9, v7);
  }
  DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2468);
  DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2466);
LABEL_14:
  if ( (unsigned int)IsCurrentProcessDwm() )
    goto LABEL_22;
  v12 = UIPrivilegeIsolation::CheckCapability(L"shellExperienceComposer", (const unsigned __int16 *)v10);
  if ( v12 >= 0 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v13);
    if ( CurrentProcessWin32Process )
    {
      v11 = -*(_QWORD *)CurrentProcessWin32Process;
      v10 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      CurrentProcessWin32Process &= v10;
    }
    if ( (*(_BYTE *)(CurrentProcessWin32Process + 808) & 0x30) == 0 )
    {
      v14 = 5;
      goto LABEL_17;
    }
LABEL_22:
    v17 = *(_QWORD *)(W32GetUserSessionState(v11, v10) + 18632);
    v20 = W32GetUserSessionState(v19, v18);
    ExEnterCriticalRegionAndAcquireResourceExclusive(*(PERESOURCE *)(v20 + 18640));
    *(_QWORD *)(v17 + 16) = a1;
    CInputConfig::CMouseConfig::FindInputSpace((CInputConfig::CMouseConfig *)(v17 + 16), v21);
    ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(v20 + 18640));
    LOBYTE(v20) = *(_BYTE *)(v17 + 1505);
    v24 = W32GetUserSessionState(v23, v22);
    LOBYTE(v4) = (_BYTE)v20 != 0;
    CCursorClip::OnDisplayStateChange(*(_QWORD *)(v24 + 36240), v4);
    v4 = 1LL;
    goto LABEL_23;
  }
  v14 = RtlNtStatusToDosError(v12);
LABEL_17:
  UserSetLastError(v14);
LABEL_23:
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v15);
  return v4;
}
