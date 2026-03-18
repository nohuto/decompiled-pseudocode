/*
 * XREFs of NtUserRegisterTouchPadCapable @ 0x14015C7F0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1401617E4 (DestroySharedUserCritDeferredUnlockList.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x1401A4F40 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 */

__int64 __fastcall NtUserRegisterTouchPadCapable(__int64 a1, __int64 a2)
{
  int v2; // ebp
  _QWORD *UserSessionState; // rsi
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int16 v9; // ax
  __int16 v10; // ax
  __int16 v11; // ax
  _BYTE v13[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v14; // [rsp+28h] [rbp-10h]

  v2 = a1;
  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2);
  v5 = 1LL;
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    v6 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
           UserSessionState,
           0LL,
           0LL,
           _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  }
  else
  {
    LOBYTE(v4) = 1;
    v6 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(UserSessionState, v4);
  }
  v7 = v6;
  UserSessionState[3] = v6;
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( v7 )
      goto LABEL_8;
  }
  else if ( v7 )
  {
    *(_BYTE *)(v7 + 1708) = 1;
LABEL_8:
    DestroySharedUserCritDeferredUnlockList(UserSessionState + 2461);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2468);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2466);
  }
  v13[0] = 0;
  v14 = 0LL;
  AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v13);
  if ( v2 )
  {
    v9 = *(_WORD *)(v7 + 1266);
    if ( v9 != -1 )
    {
      v10 = v9 + 1;
LABEL_14:
      *(_WORD *)(v7 + 1266) = v10;
      goto LABEL_16;
    }
  }
  v11 = *(_WORD *)(v7 + 1266);
  if ( v11 )
  {
    v10 = v11 - 1;
    goto LABEL_14;
  }
  UserSetLastError(87);
  v5 = 0LL;
LABEL_16:
  if ( v13[0] )
    --*(_DWORD *)(v14 + 28);
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v8);
  return v5;
}
