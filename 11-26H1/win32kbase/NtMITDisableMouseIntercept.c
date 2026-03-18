/*
 * XREFs of NtMITDisableMouseIntercept @ 0x1401E0DB0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     IsInputThread @ 0x140067910 (IsInputThread.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1400D0BF0 (_anonymous_namespace_--GetMouseProcessor.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     ?Disable@MouseInterceptState@CMouseProcessor@@QEAA_NW4DisableReason@12@@Z @ 0x140188FF4 (-Disable@MouseInterceptState@CMouseProcessor@@QEAA_NW4DisableReason@12@@Z.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 */

__int64 __fastcall NtMITDisableMouseIntercept(int a1, int a2, int a3)
{
  _QWORD *UserSessionState; // rbx
  __int64 v4; // rax
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  __int64 v8; // rdi
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // ecx
  __int64 MouseProcessor; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9

  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2, a3);
  v4 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         0LL,
         0,
         (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  v8 = 0LL;
  UserSessionState[3] = v4;
  if ( v4 )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v5, v7);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
  }
  if ( !IsInputThread(v6, v5, v7) )
  {
    v12 = 5;
LABEL_9:
    UserSetLastError(v12);
    goto LABEL_10;
  }
  MouseProcessor = anonymous_namespace_::GetMouseProcessor(v10, v9, v11);
  if ( !MouseProcessor || !CMouseProcessor::MouseInterceptState::Disable(MouseProcessor + 3912) )
  {
    v12 = 5023;
    goto LABEL_9;
  }
  v8 = 1LL;
LABEL_10:
  UserSessionSwitchLeaveCritWithNonPaged(v15, v14, v16, v17);
  return v8;
}
