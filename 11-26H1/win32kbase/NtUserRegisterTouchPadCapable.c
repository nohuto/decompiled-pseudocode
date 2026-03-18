/*
 * XREFs of NtUserRegisterTouchPadCapable @ 0x1401A01A0
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x1400494CC (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 */

__int64 __fastcall NtUserRegisterTouchPadCapable(int a1, int a2, int a3)
{
  _QWORD *UserSessionState; // rbx
  __int64 v5; // rax
  int v6; // edx
  int v7; // r8d
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int16 v13; // ax
  __int64 v14; // rbx
  __int16 v15; // ax
  __int16 v16; // ax
  _BYTE v18[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v19; // [rsp+28h] [rbp-10h]

  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2, a3);
  v5 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         0LL,
         0LL,
         _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v5;
  v8 = v5;
  if ( v5 )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v6, v7);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
  }
  v18[0] = 0;
  v19 = 0LL;
  AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v18, v6, v7);
  if ( a1 )
  {
    v13 = *(_WORD *)(v8 + 1266);
    v10 = 0xFFFFLL;
    if ( v13 != -1 )
    {
      v14 = 1LL;
      v15 = v13 + 1;
LABEL_8:
      *(_WORD *)(v8 + 1266) = v15;
      goto LABEL_10;
    }
  }
  v16 = *(_WORD *)(v8 + 1266);
  if ( v16 )
  {
    v14 = 1LL;
    v15 = v16 - 1;
    goto LABEL_8;
  }
  UserSetLastError(87);
  v14 = 0LL;
LABEL_10:
  if ( v18[0] )
  {
    v10 = v19;
    --*(_DWORD *)(v19 + 28);
  }
  UserSessionSwitchLeaveCritWithNonPaged(v10, v9, v11, v12);
  return v14;
}
