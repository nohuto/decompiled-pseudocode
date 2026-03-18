/*
 * XREFs of ?SetDropTarget@CompositionInputObject@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x14013676C
 * Callers:
 *     NtCompositionSetDropTarget @ 0x14012EAD0 (NtCompositionSetDropTarget.c)
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ?LockForWrite@CompositionInputObject@@QEAAJPEAPEAVCInputSink@@@Z @ 0x140064FD0 (-LockForWrite@CompositionInputObject@@QEAAJPEAPEAVCInputSink@@@Z.c)
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x140065DD0 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     ?SetDropTarget@CInputSink@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x14009D41C (-SetDropTarget@CInputSink@@QEAAJAEBUCOMPOSITION_INPUT_QUEUE@@@Z.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1401617E4 (DestroySharedUserCritDeferredUnlockList.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401AC178 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 */

__int64 __fastcall CompositionInputObject::SetDropTarget(char *Object, const struct COMPOSITION_INPUT_QUEUE *a2)
{
  _QWORD *UserSessionState; // rdi
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rdx
  int v8; // ebx
  CInputSink *v10; // [rsp+40h] [rbp+18h] BYREF

  v10 = 0LL;
  UserSessionState = (_QWORD *)W32GetUserSessionState(Object, a2);
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
    v5 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
           UserSessionState,
           1LL,
           0LL,
           _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  else
    v5 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(UserSessionState, 0LL);
  v6 = v5;
  UserSessionState[3] = v5;
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !v6 )
      goto LABEL_10;
  }
  else
  {
    if ( !v6 )
      goto LABEL_10;
    *(_BYTE *)(v6 + 1708) = 1;
  }
  if ( (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v6) )
  {
    DestroySharedUserCritDeferredUnlockList(UserSessionState + 2461);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2468);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2466);
  }
LABEL_10:
  v8 = CompositionInputObject::LockForWrite(Object, &v10);
  if ( v8 >= 0 )
  {
    v8 = CInputSink::SetDropTarget(v10, a2);
    CInputSink::UnlockAndRelease(v10);
  }
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v7);
  return (unsigned int)v8;
}
