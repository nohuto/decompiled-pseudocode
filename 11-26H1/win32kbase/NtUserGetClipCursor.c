/*
 * XREFs of NtUserGetClipCursor @ 0x140082750
 * Callers:
 *     <none>
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14003D7B0 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     ?GetClip@CCursorClip@@QEBA?AUtagRECT@@XZ @ 0x14006E950 (-GetClip@CCursorClip@@QEBA-AUtagRECT@@XZ.c)
 *     GuessMonitorOverrideForCoordinateConversions @ 0x140082550 (GuessMonitorOverrideForCoordinateConversions.c)
 *     PhysicalToLogicalDPIRect @ 0x140083DF0 (PhysicalToLogicalDPIRect.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x140085350 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     SetLastNtError @ 0x140087ACC (SetLastNtError.c)
 *     ApiSetCheckCursorClipAccess @ 0x1401BEB4C (ApiSetCheckCursorClipAccess.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     RtlCopyToUser @ 0x1402D2054 (RtlCopyToUser.c)
 */

__int64 __fastcall NtUserGetClipCursor(void *a1)
{
  int v2; // edx
  int v3; // ecx
  int v4; // r8d
  int v5; // edi
  __int64 UserSessionState; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int CurrentThreadDpiAwarenessContext; // edi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v15; // [rsp+30h] [rbp-48h]
  __int64 v16; // [rsp+38h] [rbp-40h] BYREF
  struct tagRECT v17; // [rsp+40h] [rbp-38h] BYREF
  __int128 Src; // [rsp+50h] [rbp-28h] BYREF

  EnterLeaveCritShared::EnterLeaveCritShared(&v16);
  v5 = 0;
  if ( (unsigned int)ApiSetCheckCursorClipAccess(1LL) )
  {
    UserSessionState = W32GetUserSessionState(v3, v2, v4);
    CCursorClip::GetClip(*(struct tagRECT **)(UserSessionState + 36272), &v17);
    LODWORD(v15) = (v17.left + v17.right) / 2;
    v7 = (unsigned int)((v17.top + v17.bottom) >> 31);
    LODWORD(v7) = (v17.top + v17.bottom) % 2;
    HIDWORD(v15) = (v17.top + v17.bottom) / 2;
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext(v8, v7);
    v16 = GuessMonitorOverrideForCoordinateConversions(v15, CurrentThreadDpiAwarenessContext, 1);
    Src = 0LL;
    PhysicalToLogicalDPIRect(&Src, &v17, CurrentThreadDpiAwarenessContext, &v16);
    RtlCopyToUser(a1, &Src, 0x10uLL);
    v5 = 1;
  }
  else
  {
    UserSetLastError(5LL);
  }
  UserSessionSwitchLeaveCritWithNonPaged(v11, v10, v12, v13);
  return v5;
}
