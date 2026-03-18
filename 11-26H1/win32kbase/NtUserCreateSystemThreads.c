/*
 * XREFs of NtUserCreateSystemThreads @ 0x140173E20
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     xxxCreateSystemThreads @ 0x1401C2200 (xxxCreateSystemThreads.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 */

__int64 __fastcall NtUserCreateSystemThreads(int a1, int a2, int a3)
{
  _QWORD *UserSessionState; // rbx
  __int64 v4; // rax
  int v5; // edx
  int v6; // r8d
  __int64 SystemThreads; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9

  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2, a3);
  v4 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         0LL,
         0LL,
         _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v4;
  if ( v4 )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v5, v6);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
  }
  SystemThreads = (int)xxxCreateSystemThreads();
  UserSessionSwitchLeaveCritWithNonPaged(v9, v8, v10, v11);
  return SystemThreads;
}
