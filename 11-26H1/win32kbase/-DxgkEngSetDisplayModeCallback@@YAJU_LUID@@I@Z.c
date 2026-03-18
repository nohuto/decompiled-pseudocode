/*
 * XREFs of ?DxgkEngSetDisplayModeCallback@@YAJU_LUID@@I@Z @ 0x14016C2F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     ?DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z @ 0x1401656D8 (-DrvUpdatePDevForWDDMVidPnSource@@YAXPEAU_LUID@@I@Z.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x14017BECC (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     IsUserResetPointerSupported @ 0x14017E380 (IsUserResetPointerSupported.c)
 *     UserResetPointer @ 0x140182B30 (UserResetPointer.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 */

__int64 __fastcall DxgkEngSetDisplayModeCallback(struct _LUID a1, int a2, int a3)
{
  _QWORD *UserSessionState; // rbx
  __int64 v5; // rax
  int v6; // edx
  int v7; // r8d
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  struct _LUID v13; // [rsp+30h] [rbp+8h] BYREF

  v13 = a1;
  UserSessionState = (_QWORD *)W32GetUserSessionState(a1.LowPart, a2, a3);
  v5 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         1LL,
         0LL,
         _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v5;
  if ( v5 && (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v5) )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v6, v7);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
  }
  if ( (int)IsUserResetPointerSupported() >= 0 )
    UserResetPointer();
  DrvUpdatePDevForWDDMVidPnSource(&v13, a2);
  UserSessionSwitchLeaveCritWithNonPaged(v9, v8, v10, v11);
  return 0LL;
}
