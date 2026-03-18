/*
 * XREFs of ?SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1400A361C
 * Callers:
 *     NtCompositionSetDropTarget @ 0x1400A36F0 (NtCompositionSetDropTarget.c)
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ?LockForWrite@CompositionInputObject@@QEAAJPEAPEAVCInputSink@@@Z @ 0x14006ED00 (-LockForWrite@CompositionInputObject@@QEAAJPEAPEAVCInputSink@@@Z.c)
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x14006F370 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     ?SetDropTarget@CInputSink@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x14016EA78 (-SetDropTarget@CInputSink@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x14017BECC (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 */

__int64 __fastcall CompositionInputObject::SetDropTarget(
        char *Object,
        const struct COMPOSITION_INPUT_QUEUE *a2,
        int a3)
{
  __int64 UserSessionState; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // ebx
  __int64 v10; // r8
  __int64 v11; // r9
  CInputSink *v13; // [rsp+40h] [rbp+18h] BYREF

  v13 = 0LL;
  UserSessionState = W32GetUserSessionState((_DWORD)Object, (_DWORD)a2, a3);
  v6 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         1LL,
         0LL,
         _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  *(_QWORD *)(UserSessionState + 24) = v6;
  if ( v6 && (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v6) )
  {
    DestroySharedUserCritDeferredUnlockList(UserSessionState + 19720);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 19776);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 19760);
  }
  v9 = CompositionInputObject::LockForWrite(Object, &v13);
  if ( v9 >= 0 )
  {
    v9 = CInputSink::SetDropTarget(v13, a2);
    CInputSink::UnlockAndRelease(v13);
  }
  UserSessionSwitchLeaveCritWithNonPaged(v8, v7, v10, v11);
  return (unsigned int)v9;
}
