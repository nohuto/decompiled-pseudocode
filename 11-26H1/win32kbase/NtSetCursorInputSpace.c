/*
 * XREFs of NtSetCursorInputSpace @ 0x1401E1A70
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1400D7D60 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     ?CheckCapability@UIPrivilegeIsolation@@YAJPEBG@Z @ 0x1401CC9B0 (-CheckCapability@UIPrivilegeIsolation@@YAJPEBG@Z.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     ?BindMouse@CInputConfig@@QEAAJU_LUID@@@Z @ 0x140211EDC (-BindMouse@CInputConfig@@QEAAJU_LUID@@@Z.c)
 */

__int64 __fastcall NtSetCursorInputSpace(struct _LUID a1, int a2, int a3)
{
  _QWORD *UserSessionState; // rdi
  __int64 v5; // rax
  int v6; // edx
  __int64 v7; // rcx
  int v8; // r8d
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // r8d
  NTSTATUS v13; // eax
  __int64 v14; // rcx
  ULONG v15; // ecx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 CurrentProcessWin32Process; // rax
  __int64 v21; // rax

  UserSessionState = (_QWORD *)W32GetUserSessionState(a1.LowPart, a2, a3);
  v5 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         0LL,
         0,
         (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  v9 = 0LL;
  UserSessionState[3] = v5;
  if ( v5 )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v6, v8);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
  }
  if ( (unsigned int)IsCurrentProcessDwm(v7) )
  {
LABEL_11:
    v21 = W32GetUserSessionState(v11, v10, v12);
    v13 = CInputConfig::BindMouse(*(CInputConfig **)(v21 + 18680), a1);
    if ( v13 >= 0 )
    {
      v9 = 1LL;
      goto LABEL_13;
    }
    goto LABEL_5;
  }
  v13 = UIPrivilegeIsolation::CheckCapability(L"shellExperienceComposer", (const unsigned __int16 *)v10);
  if ( v13 >= 0 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v14);
    if ( CurrentProcessWin32Process )
    {
      v11 = -*(_QWORD *)CurrentProcessWin32Process;
      v10 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      CurrentProcessWin32Process &= v10;
    }
    if ( (*(_BYTE *)(CurrentProcessWin32Process + 808) & 0x30) == 0 )
    {
      v15 = 5;
      goto LABEL_6;
    }
    goto LABEL_11;
  }
LABEL_5:
  v15 = RtlNtStatusToDosError(v13);
LABEL_6:
  UserSetLastError(v15);
LABEL_13:
  UserSessionSwitchLeaveCritWithNonPaged(v17, v16, v18, v19);
  return v9;
}
