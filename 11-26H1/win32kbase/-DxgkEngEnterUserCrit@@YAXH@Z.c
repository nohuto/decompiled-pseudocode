/*
 * XREFs of ?DxgkEngEnterUserCrit@@YAXH@Z @ 0x140136490
 * Callers:
 *     <none>
 * Callees:
 *     EnterSharedCrit @ 0x14003D800 (EnterSharedCrit.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x14017BECC (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 */

void __fastcall DxgkEngEnterUserCrit(int a1, int a2, __int64 a3, __int64 a4)
{
  _QWORD *UserSessionState; // rbx
  __int64 v5; // rax
  int v6; // edx
  int v7; // r8d

  if ( a1 )
  {
    UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2, a3);
    v5 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
           UserSessionState,
           1LL,
           0LL,
           _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
    UserSessionState[3] = v5;
    if ( v5 )
    {
      if ( (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v5) )
      {
        DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v6, v7);
        DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
        DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
      }
    }
  }
  else
  {
    EnterSharedCrit(1LL, 1LL, a3, a4);
  }
}
