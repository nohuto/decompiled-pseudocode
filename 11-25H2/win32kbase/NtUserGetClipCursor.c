/*
 * XREFs of NtUserGetClipCursor @ 0x140063870
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x140042BB0 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ApiSetCheckCursorClipAccess @ 0x1400637E8 (ApiSetCheckCursorClipAccess.c)
 *     PhysicalToLogicalDPIRect @ 0x140063C70 (PhysicalToLogicalDPIRect.c)
 *     GuessMonitorOverrideForCoordinateConversions @ 0x140064A30 (GuessMonitorOverrideForCoordinateConversions.c)
 *     ?GetClip@CCursorClip@@QEBA?AUtagRECT@@XZ @ 0x140064ED0 (-GetClip@CCursorClip@@QEBA-AUtagRECT@@XZ.c)
 *     SetLastNtError @ 0x14009DA54 (SetLastNtError.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14019B238 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserGetClipCursor(ULONG64 a1)
{
  int v1; // ebx
  _BYTE *v2; // rdx
  __int64 UserSessionState; // rax
  __int64 CurrentThreadDpiAwarenessContext; // rbx
  __int64 v5; // rdx
  __int64 v7; // [rsp+30h] [rbp-58h]
  __int64 v9; // [rsp+48h] [rbp-40h] BYREF
  _BYTE v10[16]; // [rsp+50h] [rbp-38h] BYREF
  struct tagRECT v11; // [rsp+60h] [rbp-28h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(v10, 1LL);
  v1 = 0;
  if ( (unsigned int)ApiSetCheckCursorClipAccess(1u, 0) )
  {
    v2 = (_BYTE *)a1;
    if ( a1 >= MmUserProbeAddress )
      v2 = (_BYTE *)MmUserProbeAddress;
    *v2 = *v2;
    v2[15] = v2[15];
    UserSessionState = W32GetUserSessionState(MmUserProbeAddress, v2);
    CCursorClip::GetClip(*(CCursorClip **)(UserSessionState + 36240), &v11);
    LODWORD(v7) = (v11.left + v11.right) / 2;
    HIDWORD(v7) = (v11.top + v11.bottom) / 2;
    CurrentThreadDpiAwarenessContext = (unsigned int)W32GetCurrentThreadDpiAwarenessContext();
    v9 = GuessMonitorOverrideForCoordinateConversions(v7, CurrentThreadDpiAwarenessContext, 1LL);
    PhysicalToLogicalDPIRect(a1, &v11, (unsigned int)CurrentThreadDpiAwarenessContext, &v9);
    v1 = 1;
  }
  else
  {
    UserSetLastError(5);
  }
  UserSessionSwitchLeaveCritWithNonPaged(0LL, v5);
  return v1;
}
