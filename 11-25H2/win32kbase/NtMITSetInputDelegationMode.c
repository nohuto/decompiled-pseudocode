/*
 * XREFs of NtMITSetInputDelegationMode @ 0x14016E740
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     IsInputThread @ 0x1400BD250 (IsInputThread.c)
 *     ProcessInfoFromPID @ 0x140123230 (ProcessInfoFromPID.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1401617E4 (DestroySharedUserCritDeferredUnlockList.c)
 *     ??1CLockProcessByPid@@QEAA@XZ @ 0x140161A8C (--1CLockProcessByPid@@QEAA@XZ.c)
 *     SetInputDelegationModeImpl @ 0x14018CB3C (SetInputDelegationModeImpl.c)
 *     CitEnableKeyboardDelegation @ 0x140199788 (CitEnableKeyboardDelegation.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     ??0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z @ 0x1401A5DE4 (--0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z.c)
 *     Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline @ 0x1401AA348 (Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 *     ?GetProcessInfo@CLockProcessByPid@@QEBAPEAUtagPROCESSINFO@@XZ @ 0x1401B6B20 (-GetProcessInfo@CLockProcessByPid@@QEBAPEAUtagPROCESSINFO@@XZ.c)
 */

__int64 __fastcall NtMITSetInputDelegationMode(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // r14
  __int64 v7; // rbp
  _QWORD *UserSessionState; // rbx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // ecx
  int v17; // edi
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  struct tagPROCESSINFO *ProcessInfo; // rbx
  struct tagPROCESSINFO *v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rax
  _BYTE v27[80]; // [rsp+30h] [rbp-B8h] BYREF
  _BYTE v28[80]; // [rsp+80h] [rbp-68h] BYREF

  v5 = (unsigned int)a2;
  v7 = (unsigned int)a1;
  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2);
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    v10 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
            UserSessionState,
            0LL,
            0LL,
            _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  }
  else
  {
    LOBYTE(v9) = 1;
    v10 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(UserSessionState, v9);
  }
  v11 = v10;
  UserSessionState[3] = v10;
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( v11 )
      goto LABEL_8;
  }
  else if ( v11 )
  {
    *(_BYTE *)(v11 + 1708) = 1;
LABEL_8:
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2461), v12);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2468);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2466);
  }
  if ( !IsInputThread(v13, v12) )
    goto LABEL_10;
  if ( a4 )
  {
    if ( !(_DWORD)v7 || !a3 || (a4 & 0xFFFFFFF8) != 0 )
    {
      v16 = 87;
      goto LABEL_11;
    }
    if ( !*(_QWORD *)(W32GetUserSessionState(v15, v14) + 18904)
      || (v21 = W32GetUserSessionState(v20, v19),
          (_DWORD)v7 != ((unsigned int)PsGetThreadProcessId(**(PETHREAD **)(v21 + 18904)) & 0xFFFFFFFC)) )
    {
LABEL_10:
      v16 = 5;
LABEL_11:
      v17 = 0;
      UserSetLastError(v16);
      goto LABEL_24;
    }
  }
  v17 = SetInputDelegationModeImpl((unsigned int)v7, (unsigned int)v5, a3, a4);
  if ( v17 && (_DWORD)v5 )
  {
    if ( (unsigned int)Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline() )
    {
      CLockProcessByPid::CLockProcessByPid(v28, v7, 0LL);
      CLockProcessByPid::CLockProcessByPid(v27, v5, 0LL);
      ProcessInfo = CLockProcessByPid::GetProcessInfo((CLockProcessByPid *)v27);
      v23 = CLockProcessByPid::GetProcessInfo((CLockProcessByPid *)v28);
      CitEnableKeyboardDelegation(a4 & 1, v23, ProcessInfo);
      CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)v27);
      CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)v28);
    }
    else
    {
      v24 = ProcessInfoFromPID(v5);
      v25 = ProcessInfoFromPID(v7);
      CitEnableKeyboardDelegation(a4 & 1, v25, v24);
    }
  }
LABEL_24:
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v18);
  return v17;
}
