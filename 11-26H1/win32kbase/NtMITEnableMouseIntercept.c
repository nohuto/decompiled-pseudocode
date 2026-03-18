/*
 * XREFs of NtMITEnableMouseIntercept @ 0x1401E0E70
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     IsInputThread @ 0x140067910 (IsInputThread.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1400D0BF0 (_anonymous_namespace_--GetMouseProcessor.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     ?Enable@MouseInterceptState@CMouseProcessor@@QEAA_NW4_MOUSE_PREINTERCEPT_BEHAVIOR@@@Z @ 0x140223508 (-Enable@MouseInterceptState@CMouseProcessor@@QEAA_NW4_MOUSE_PREINTERCEPT_BEHAVIOR@@@Z.c)
 */

__int64 __fastcall NtMITEnableMouseIntercept(unsigned int a1, int a2, int a3)
{
  _QWORD *UserSessionState; // rbx
  __int64 v5; // rax
  int v6; // edx
  int v7; // ecx
  int v8; // r8d
  __int64 v9; // rdi
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  int v13; // ecx
  __int64 MouseProcessor; // rax
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
  v9 = 0LL;
  UserSessionState[3] = v5;
  if ( v5 )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v6, v8);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
  }
  if ( !IsInputThread(v7, v6, v8) )
  {
    v13 = 5;
LABEL_11:
    UserSetLastError(v13);
    goto LABEL_12;
  }
  if ( (a1 & 0xFFFFFFFE) != 0 )
  {
    v13 = 87;
    goto LABEL_11;
  }
  MouseProcessor = anonymous_namespace_::GetMouseProcessor(v11, v10, v12);
  if ( !MouseProcessor || !(unsigned __int8)CMouseProcessor::MouseInterceptState::Enable(MouseProcessor + 3912, a1) )
  {
    v13 = 5023;
    goto LABEL_11;
  }
  v9 = 1LL;
LABEL_12:
  UserSessionSwitchLeaveCritWithNonPaged(v16, v15, v17, v18);
  return v9;
}
