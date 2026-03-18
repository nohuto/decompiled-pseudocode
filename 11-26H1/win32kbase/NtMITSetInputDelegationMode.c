/*
 * XREFs of NtMITSetInputDelegationMode @ 0x1401B9F60
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     IsInputThread @ 0x140067910 (IsInputThread.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     ProcessInfoFromPID @ 0x14015E684 (ProcessInfoFromPID.c)
 *     Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline @ 0x140198440 (Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline.c)
 *     ?GetProcessInfo@CLockProcessByPid@@QEBAPEAUtagPROCESSINFO@@XZ @ 0x14019C1D0 (-GetProcessInfo@CLockProcessByPid@@QEBAPEAUtagPROCESSINFO@@XZ.c)
 *     CitEnableKeyboardDelegation @ 0x1401B3410 (CitEnableKeyboardDelegation.c)
 *     ??0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z @ 0x1401B6974 (--0CLockProcessByPid@@QEAA@PEAXKKW4LockProcessOptions@@_K@Z.c)
 *     ??1CLockProcessByPid@@QEAA@XZ @ 0x1401C5030 (--1CLockProcessByPid@@QEAA@XZ.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     SetInputDelegationModeImpl @ 0x14021C0D0 (SetInputDelegationModeImpl.c)
 */

__int64 __fastcall NtMITSetInputDelegationMode(unsigned int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  __int64 v5; // r14
  __int64 v7; // rbp
  _QWORD *UserSessionState; // rbx
  __int64 v9; // rax
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  int v16; // ecx
  int v17; // edi
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  int v22; // edx
  int v23; // ecx
  int v24; // r8d
  __int64 v25; // rax
  __int64 v26; // r9
  __int64 v27; // r9
  struct _CIT_PROCESS **ProcessInfo; // rbx
  struct _CIT_PROCESS **v29; // rax
  struct _CIT_PROCESS **v30; // rbx
  struct _CIT_PROCESS **v31; // rax
  _BYTE v33[80]; // [rsp+30h] [rbp-A8h] BYREF
  _BYTE v34[80]; // [rsp+80h] [rbp-58h] BYREF

  v5 = a2;
  v7 = a1;
  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2, a3);
  v9 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         0LL,
         0LL,
         _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v9;
  if ( v9 )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v10, v12);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
  }
  if ( !IsInputThread(v11, v10, v12) )
    goto LABEL_4;
  if ( a4 )
  {
    if ( !(_DWORD)v7 || !a3 || (a4 & 0xFFFFFFF8) != 0 )
    {
      v16 = 87;
      goto LABEL_5;
    }
    if ( !*(_QWORD *)(W32GetUserSessionState(v14, v13, v15) + 18944)
      || (v25 = W32GetUserSessionState(v23, v22, v24),
          (_DWORD)v7 != ((unsigned int)PsGetThreadProcessId(**(PETHREAD **)(v25 + 18944)) & 0xFFFFFFFC)) )
    {
LABEL_4:
      v16 = 5;
LABEL_5:
      v17 = 0;
      UserSetLastError(v16);
      goto LABEL_18;
    }
  }
  v17 = SetInputDelegationModeImpl((unsigned int)v7, (unsigned int)v5, a3, a4);
  if ( v17 && (_DWORD)v5 )
  {
    if ( (unsigned int)Feature_ResponsiblePid__private_IsEnabledDeviceUsageNoInline() )
    {
      CLockProcessByPid::CLockProcessByPid((__int64)v34, v7, 0, v26, 1, 0LL);
      CLockProcessByPid::CLockProcessByPid((__int64)v33, v5, 0, v27, 1, 0LL);
      ProcessInfo = (struct _CIT_PROCESS **)CLockProcessByPid::GetProcessInfo((CLockProcessByPid *)v33);
      v29 = (struct _CIT_PROCESS **)CLockProcessByPid::GetProcessInfo((CLockProcessByPid *)v34);
      CitEnableKeyboardDelegation(a4 & 1, v29, ProcessInfo);
      CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)v33);
      CLockProcessByPid::~CLockProcessByPid((CLockProcessByPid *)v34);
    }
    else
    {
      v30 = (struct _CIT_PROCESS **)ProcessInfoFromPID(v5);
      v31 = (struct _CIT_PROCESS **)ProcessInfoFromPID(v7);
      CitEnableKeyboardDelegation(a4 & 1, v31, v30);
    }
  }
LABEL_18:
  UserSessionSwitchLeaveCritWithNonPaged(v19, v18, v20, v21);
  return v17;
}
