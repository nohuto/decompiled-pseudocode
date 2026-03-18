/*
 * XREFs of NtUserUnloadKeyboardLayout @ 0x1401E9E40
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionGetProcessWindowStation @ 0x14003B90C (ApiSetEditionGetProcessWindowStation.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     HKLtoPKL @ 0x1400870A0 (HKLtoPKL.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     ?xxxInternalUnloadKeyboardLayout@@YA_NPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z @ 0x1401BBA70 (-xxxInternalUnloadKeyboardLayout@@YA_NPEAUtagWINDOWSTATION@@PEAUtagKL@@I@Z.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 */

__int64 __fastcall NtUserUnloadKeyboardLayout(__int64 a1, int a2, int a3)
{
  _QWORD *UserSessionState; // rbx
  __int64 v5; // rax
  int v6; // edx
  __int64 v7; // rcx
  int v8; // r8d
  unsigned __int8 v9; // di
  struct tagWINDOWSTATION *ProcessWindowStation; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct tagTHREADINFO *v13; // rax
  struct tagKL *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9

  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2, a3);
  v5 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         0LL,
         0,
         (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  v9 = 0;
  UserSessionState[3] = v5;
  if ( v5 )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v6, v8);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
  }
  ProcessWindowStation = (struct tagWINDOWSTATION *)ApiSetEditionGetProcessWindowStation(v7);
  v13 = PtiCurrent(v12, v11);
  v14 = (struct tagKL *)HKLtoPKL((__int64)v13, a1);
  if ( v14 )
    v9 = xxxInternalUnloadKeyboardLayout(ProcessWindowStation, v14, 0);
  UserSessionSwitchLeaveCritWithNonPaged(v16, v15, v17, v18);
  return v9;
}
