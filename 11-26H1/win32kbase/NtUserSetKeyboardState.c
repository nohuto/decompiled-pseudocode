/*
 * XREFs of NtUserSetKeyboardState @ 0x14017C0C0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z @ 0x14006D78C (-CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z.c)
 *     EtwTraceUIPIInputError @ 0x14006F600 (EtwTraceUIPIInputError.c)
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     _SetKeyboardState @ 0x14014729C (_SetKeyboardState.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 */

__int64 __fastcall NtUserSetKeyboardState(volatile void *Address, int a2, int a3)
{
  _QWORD *UserSessionState; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // r8d
  int v9; // edi
  struct tagTHREADINFO *v10; // rbx
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v18; // [rsp+50h] [rbp-18h] BYREF
  int v19; // [rsp+58h] [rbp-10h]

  UserSessionState = (_QWORD *)W32GetUserSessionState((_DWORD)Address, a2, a3);
  v5 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         0LL,
         0LL,
         _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v5;
  v9 = 0;
  if ( v5 )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v6, v8);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
  }
  v10 = PtiCurrent(v7, v6);
  v11 = *((_QWORD *)v10 + 58);
  ProbeForRead(Address, 1uLL, 1u);
  if ( UIPrivilegeIsolation::CheckAccessEx(
         (UIPrivilegeIsolation *)(*((_QWORD *)v10 + 57) + 864LL),
         (const struct tagUIPI_INFO *)(v11 + 472),
         0LL)
    || (*(_DWORD *)(v11 + 436) & 0x2000000) != 0 )
  {
    v9 = SetKeyboardState((__int64)Address, v12);
  }
  else
  {
    v18 = *(_QWORD *)(v11 + 472);
    v19 = *(_DWORD *)(v11 + 480);
    EtwTraceUIPIInputError((__int64)v10, 0LL, v11, &v18, 3);
  }
  UserSessionSwitchLeaveCritWithNonPaged(v14, v13, v15, v16);
  return v9;
}
