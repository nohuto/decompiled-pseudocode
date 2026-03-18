/*
 * XREFs of NtUserSetInputServiceState @ 0x140154100
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     HandleDeferredInput @ 0x1400E3510 (HandleDeferredInput.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x14017BECC (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 */

__int64 __fastcall NtUserSetInputServiceState(unsigned int a1, int a2, int a3)
{
  _QWORD *UserSessionState; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdi
  int v10; // r8d
  struct tagTHREADINFO *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx

  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2, a3);
  v6 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         1LL,
         0LL,
         _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  v9 = 0LL;
  UserSessionState[3] = v6;
  if ( v6 && (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v6) )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v7, v10);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
  }
  v11 = PtiCurrent(v8, v7);
  v14 = (__int64)v11;
  v15 = a1;
  if ( !a1 )
  {
    *((_QWORD *)v11 + 170) &= ~0x10000000uLL;
    goto LABEL_14;
  }
  v15 = a1 - 1;
  if ( a1 == 1 )
  {
    *((_QWORD *)v11 + 170) |= 0x10000000uLL;
LABEL_14:
    v9 = 1LL;
    goto LABEL_15;
  }
  v15 = a1 - 2;
  if ( a1 == 2 || (v15 = a1 - 3, a1 == 3) || (v15 = a1 - 4, a1 == 4) || (v15 = a1 - 5, (unsigned int)v15 <= 1) )
  {
    if ( (*((_DWORD *)v11 + 340) & 0x10000000) != 0 )
      HandleDeferredInput((__int64)v11, a1, a2);
    goto LABEL_14;
  }
LABEL_15:
  UserSessionSwitchLeaveCritWithNonPaged(v12, v15, v13, v14);
  return v9;
}
