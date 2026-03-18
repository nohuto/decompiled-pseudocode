/*
 * XREFs of NtUserClipCursor @ 0x1401E2460
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     GuessMonitorOverrideForCoordinateConversions @ 0x140082550 (GuessMonitorOverrideForCoordinateConversions.c)
 *     LogicalToPhysicalDPIRect @ 0x140082A40 (LogicalToPhysicalDPIRect.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x140085350 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 *     ?ClearClip@CCursorClip@@QEAAXXZ @ 0x14008AAB0 (-ClearClip@CCursorClip@@QEAAXXZ.c)
 *     ?SetClip@CCursorClip@@QEAAXUtagRECT@@@Z @ 0x14008AB10 (-SetClip@CCursorClip@@QEAAXUtagRECT@@@Z.c)
 *     DestroyDeferredUnlockObjectAssignmentList @ 0x1400E50F0 (DestroyDeferredUnlockObjectAssignmentList.c)
 *     DestroySharedUserCritDeferredUnlockList @ 0x1400EBF60 (DestroySharedUserCritDeferredUnlockList.c)
 *     ApiSetCheckCursorClipAccess @ 0x1401BEB4C (ApiSetCheckCursorClipAccess.c)
 *     RtlCopyFromUser @ 0x1401C9358 (RtlCopyFromUser.c)
 *     UserCritInternal::_anonymous_namespace_::EnterCritInternal @ 0x1401CE5E0 (UserCritInternal--_anonymous_namespace_--EnterCritInternal.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserClipCursor(void *Src, int a2, int a3)
{
  _QWORD *UserSessionState; // rdi
  __int64 v5; // rax
  int v6; // edx
  int v7; // r8d
  int v8; // esi
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned __int64 v16; // r8
  unsigned int CurrentThreadDpiAwarenessContext; // ebx
  int v18; // edx
  int v19; // ecx
  int v20; // r8d
  CCursorClip *v21; // rcx
  __int64 v22; // rax
  struct tagRECT v24; // [rsp+20h] [rbp-48h] BYREF
  struct tagRECT v25; // [rsp+40h] [rbp-28h] BYREF

  UserSessionState = (_QWORD *)W32GetUserSessionState((_DWORD)Src, a2, a3);
  v5 = UserCritInternal::_anonymous_namespace_::EnterCritInternal(
         UserSessionState,
         0LL,
         0,
         (void (__fastcall *)(_QWORD, __int64))_lambda_63b61c2369133a205197eda5bd671ee7_::_lambda_invoker_cdecl_);
  UserSessionState[3] = v5;
  v8 = 0;
  if ( v5 )
  {
    DestroySharedUserCritDeferredUnlockList((__int64)(UserSessionState + 2465), v6, v7);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2472);
    DestroyDeferredUnlockObjectAssignmentList(UserSessionState + 2470);
  }
  v25 = 0LL;
  if ( (unsigned int)ApiSetCheckCursorClipAccess(0LL, Src == 0LL) )
  {
    if ( Src )
    {
      v24 = 0LL;
      RtlCopyFromUser(&v24, Src, 0x10uLL);
      v25 = v24;
      v16 = *(_QWORD *)&v24.left;
      v24.left = (v24.left + v24.right) / 2;
      v16 >>= 32;
      v24.top = (v24.bottom + (int)v16) / 2;
      CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(
                                           HIDWORD(*(_QWORD *)&v24.right),
                                           (unsigned int)((v24.bottom + (int)v16) >> 31));
      *(_QWORD *)&v24.left = GuessMonitorOverrideForCoordinateConversions(
                               *(__int64 *)&v24.left,
                               CurrentThreadDpiAwarenessContext,
                               0);
      LogicalToPhysicalDPIRect((__int64)&v25, &v25, CurrentThreadDpiAwarenessContext, (__int64 *)&v24.left);
      v21 = *(CCursorClip **)(W32GetUserSessionState(v19, v18, v20) + 36272);
      v24 = v25;
      CCursorClip::SetClip(v21, &v24);
    }
    else
    {
      v22 = W32GetUserSessionState(v10, v9, v11);
      CCursorClip::ClearClip(*(CCursorClip **)(v22 + 36272));
    }
    v8 = 1;
  }
  else
  {
    UserSetLastError(5);
  }
  UserSessionSwitchLeaveCritWithNonPaged(v13, v12, v14, v15);
  return v8;
}
