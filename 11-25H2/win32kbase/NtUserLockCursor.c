/*
 * XREFs of NtUserLockCursor @ 0x14011D610
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x140042BB0 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ApiSetCheckCursorClipAccess @ 0x1400637E8 (ApiSetCheckCursorClipAccess.c)
 *     LogicalToPhysicalDPIRect @ 0x140064490 (LogicalToPhysicalDPIRect.c)
 *     GuessMonitorOverrideForCoordinateConversions @ 0x140064A30 (GuessMonitorOverrideForCoordinateConversions.c)
 *     SetLastNtError @ 0x14009DA54 (SetLastNtError.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400AF2F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     ?ClearClip@CCursorClip@@QEAAXXZ @ 0x140120970 (-ClearClip@CCursorClip@@QEAAXXZ.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1401617E4 (DestroySharedUserCritDeferredUnlockList.c)
 *     Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline @ 0x1401A530C (Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401ABFE8 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternalEx @ 0x1401AC078 (UserCritInternal--_anonymous_namespace_--EnterCritInternalEx.c)
 *     ?LockCursor@CCursorClip@@QEAAXUtagRECT@@@Z @ 0x14020E4F8 (-LockCursor@CCursorClip@@QEAAXUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserLockCursor(struct tagRECT *a1, __int64 a2)
{
  struct tagRECT *v2; // r14
  _QWORD *UserSessionState; // rdi
  __int64 v4; // rdx
  int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned int CurrentThreadDpiAwarenessContext; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  CCursorClip *v14; // rcx
  __int64 v15; // rax
  struct tagRECT v17; // [rsp+30h] [rbp-48h] BYREF
  struct tagRECT v18; // [rsp+50h] [rbp-28h] BYREF

  v2 = a1;
  UserSessionState = (_QWORD *)W32GetUserSessionState(a1, a2);
  v5 = 0;
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
  if ( !(unsigned int)Feature_SharedUserCritAndUIPI__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( !v7 )
      goto LABEL_9;
    *(_BYTE *)(v7 + 1708) = 1;
  }
  if ( v7 )
  {
    DestroySharedUserCritDeferredUnlockList(UserSessionState + 2461);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2468);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2466);
  }
LABEL_9:
  v18 = 0LL;
  if ( (unsigned int)ApiSetCheckCursorClipAccess(2u, 0) )
  {
    if ( v2 )
    {
      if ( (unsigned __int64)v2 >= MmUserProbeAddress )
        v2 = (struct tagRECT *)MmUserProbeAddress;
      v18 = *v2;
      v17.left = (v18.right + v18.left) / 2;
      v17.top = (v18.bottom + v18.top) / 2;
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
      *(_QWORD *)&v17.left = GuessMonitorOverrideForCoordinateConversions(
                               *(__int64 *)&v17.left,
                               CurrentThreadDpiAwarenessContext,
                               0);
      LogicalToPhysicalDPIRect((__int64)&v18, &v18, CurrentThreadDpiAwarenessContext, (__int64 *)&v17.left);
      v14 = *(CCursorClip **)(W32GetUserSessionState(v13, v12) + 36240);
      v17 = v18;
      CCursorClip::LockCursor(v14, &v17);
    }
    else
    {
      v15 = W32GetUserSessionState(v9, v8);
      CCursorClip::ClearClip(*(CCursorClip **)(v15 + 36240));
    }
    v5 = 1;
  }
  else
  {
    UserSetLastError(5);
  }
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v10);
  return v5;
}
