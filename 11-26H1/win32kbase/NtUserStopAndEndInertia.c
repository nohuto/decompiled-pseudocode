/*
 * XREFs of NtUserStopAndEndInertia @ 0x1401E9D80
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     ?IsCurrentProcessDwm@@YAHXZ @ 0x1400D7D60 (-IsCurrentProcessDwm@@YAHXZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     ?StopAndEndInertia@CTouchProcessor@@QEAAHIPEAX@Z @ 0x140216654 (-StopAndEndInertia@CTouchProcessor@@QEAAHIPEAX@Z.c)
 */

__int64 __fastcall NtUserStopAndEndInertia(int a1, unsigned int a2, int a3)
{
  _QWORD *UserSessionState; // rbx
  __int64 v5; // rax
  int v6; // edx
  __int64 v7; // rcx
  int v8; // r8d
  int v9; // edi
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  void *v18; // r8

  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2, a3);
  v5 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         0LL,
         0,
         (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  v9 = 0;
  UserSessionState[3] = v5;
  if ( v5 )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v6, v8);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
  }
  if ( (unsigned int)IsCurrentProcessDwm(v7) )
  {
    v17 = W32GetUserSessionState(v11, v10, v12);
    v9 = CTouchProcessor::StopAndEndInertia(*(CTouchProcessor **)(v17 + 3256), a2, v18);
  }
  else
  {
    UserSetLastError(5);
  }
  UserSessionSwitchLeaveCritWithNonPaged(v14, v13, v15, v16);
  return v9;
}
