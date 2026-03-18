/*
 * XREFs of NtUserSetKeyboardState @ 0x140147150
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     EtwTraceUIPIInputError @ 0x140060E40 (EtwTraceUIPIInputError.c)
 *     SetLastNtError @ 0x14009DA54 (SetLastNtError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     _SetKeyboardState @ 0x140108F0C (_SetKeyboardState.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1401617E4 (DestroySharedUserCritDeferredUnlockList.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     ?CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z @ 0x1401A8AA8 (-CheckAccessEx@UIPrivilegeIsolation@@YA_NAEBUtagUIPI_INFO@@0_N@Z.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 */

__int64 __fastcall NtUserSetKeyboardState(_BYTE *a1, __int64 a2)
{
  _QWORD *UserSessionState; // rdi
  __int64 v4; // rdx
  int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // rsi
  struct tagTHREADINFO *v8; // rdi
  __int64 v9; // rsi
  bool v10; // r9
  __int64 v11; // rdx
  __int64 v13; // [rsp+50h] [rbp-18h] BYREF
  int v14; // [rsp+58h] [rbp-10h]

  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2);
  v5 = 0;
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    v6 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
           UserSessionState,
           0LL,
           0LL,
           _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  }
  else
  {
    LOBYTE(v4) = 1;
    v6 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(UserSessionState, v4);
  }
  v7 = v6;
  UserSessionState[3] = v6;
  if ( !(unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !v7 )
      goto LABEL_9;
    *(_BYTE *)(v7 + 1708) = 1;
  }
  if ( v7 )
  {
    DestroySharedUserCritDeferredUnlockList(UserSessionState + 2461);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2468);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2466);
  }
LABEL_9:
  v8 = PtiCurrent();
  v9 = *((_QWORD *)v8 + 59);
  if ( UIPrivilegeIsolation::CheckAccessEx(
         (UIPrivilegeIsolation *)(*((_QWORD *)v8 + 58) + 864LL),
         (const struct tagUIPI_INFO *)(v9 + 448),
         0LL,
         v10)
    || (*(_DWORD *)(v9 + 412) & 0x2000000) != 0 )
  {
    v5 = SetKeyboardState(a1);
  }
  else
  {
    v13 = *(_QWORD *)(v9 + 448);
    v14 = *(_DWORD *)(v9 + 456);
    EtwTraceUIPIInputError((__int64)v8, 0LL, v9, &v13, 3);
  }
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v11);
  return v5;
}
