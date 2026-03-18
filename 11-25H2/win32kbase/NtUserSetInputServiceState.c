/*
 * XREFs of NtUserSetInputServiceState @ 0x140111350
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     HandleDeferredInput @ 0x1400C1830 (HandleDeferredInput.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1401617E4 (DestroySharedUserCritDeferredUnlockList.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 *     UserCritInternal::_anonymous_namespace_::IsValidGuiContext @ 0x1401AC178 (UserCritInternal--_anonymous_namespace_--IsValidGuiContext.c)
 */

__int64 __fastcall NtUserSetInputServiceState(__int64 a1, __int64 a2)
{
  int v2; // r14d
  unsigned int v3; // ebp
  _QWORD *UserSessionState; // rsi
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdi
  struct tagTHREADINFO *v8; // rax
  __int64 v9; // rdx

  v2 = a2;
  v3 = a1;
  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2);
  v5 = 0LL;
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
    v6 = UserCritInternal::_anonymous_namespace_::EnterCritInternalEx(
           UserSessionState,
           1LL,
           0LL,
           _lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  else
    v6 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(UserSessionState, 0LL);
  v7 = v6;
  UserSessionState[3] = v6;
  if ( (unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !v7 )
      goto LABEL_10;
  }
  else
  {
    if ( !v7 )
      goto LABEL_10;
    *(_BYTE *)(v7 + 1708) = 1;
  }
  if ( (unsigned __int8)UserCritInternal::_anonymous_namespace_::IsValidGuiContext(v7) )
  {
    DestroySharedUserCritDeferredUnlockList(UserSessionState + 2461);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2468);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2466);
  }
LABEL_10:
  v8 = PtiCurrent();
  v9 = v3;
  if ( !v3 )
  {
    *((_QWORD *)v8 + 170) &= ~0x10000000uLL;
    goto LABEL_20;
  }
  v9 = v3 - 1;
  if ( v3 == 1 )
  {
    *((_QWORD *)v8 + 170) |= 0x10000000uLL;
LABEL_20:
    v5 = 1LL;
    goto LABEL_21;
  }
  v9 = v3 - 2;
  if ( v3 == 2 || (v9 = v3 - 3, v3 == 3) || (v9 = v3 - 4, v3 == 4) || (v9 = v3 - 5, (unsigned int)v9 <= 1) )
  {
    if ( (*((_DWORD *)v8 + 340) & 0x10000000) != 0 )
      HandleDeferredInput((__int64)v8, v3, v2);
    goto LABEL_20;
  }
LABEL_21:
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v9);
  return v5;
}
