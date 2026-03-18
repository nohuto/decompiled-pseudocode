/*
 * XREFs of CheckWinstaAttributeAccess @ 0x14005FF00
 * Callers:
 *     _SetCaretBlinkTime @ 0x14005EE60 (_SetCaretBlinkTime.c)
 *     ?zzzSetCursorPos@@YA_NHH@Z @ 0x14005F190 (-zzzSetCursorPos@@YA_NHH@Z.c)
 *     CheckCursorClipAccess @ 0x14005FB50 (CheckCursorClipAccess.c)
 *     ?xxxGetCursorPos@@YAHPEAUtagPOINT@@K@Z @ 0x14005FDAC (-xxxGetCursorPos@@YAHPEAUtagPOINT@@K@Z.c)
 *     xxxSystemParametersInfoWorker @ 0x140197AB8 (xxxSystemParametersInfoWorker.c)
 *     _SetDoubleClickTime @ 0x14021B824 (_SetDoubleClickTime.c)
 *     NtUserGetCursorInfo @ 0x140249780 (NtUserGetCursorInfo.c)
 *     ?zzzSetSystemCursor@@YA_NPEAUtagCURSOR@@K@Z @ 0x140273DD8 (-zzzSetSystemCursor@@YA_NPEAUtagCURSOR@@K@Z.c)
 *     ?_RegisterHotKey@@YA_NPEAUtagWND@@P6A?AW4tagHotKeyCallBackResult@@_K_J@ZHIIPEAUHWND__@@@Z @ 0x14028ACB4 (-_RegisterHotKey@@YA_NPEAUtagWND@@P6A-AW4tagHotKeyCallBackResult@@_K_J@ZHIIPEAUHWND__@@@Z.c)
 *     NtUserLockWorkStation @ 0x14029B0B0 (NtUserLockWorkStation.c)
 *     NtUserShowSystemCursor @ 0x1402A2770 (NtUserShowSystemCursor.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 */

__int64 __fastcall CheckWinstaAttributeAccess(__int64 DesiredAccess)
{
  ACCESS_MASK v1; // esi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdi
  HANDLE v6; // rbx
  int v7; // ecx

  v1 = DesiredAccess;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(DesiredAccess);
  v5 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
  {
    v3 = -*(_QWORD *)CurrentProcessWin32Process;
    v5 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  }
  v6 = *(HANDLE *)(W32GetUserSessionState(v4, v3) + 63544);
  if ( PsGetCurrentProcessId() != v6 )
  {
    if ( (*(_DWORD *)(v5 + 12) & 0x40000) == 0 )
    {
      v7 = 1459;
LABEL_6:
      UserSetLastError(v7);
      return 0LL;
    }
    if ( !RtlAreAllAccessesGranted(*(_DWORD *)(v5 + 664), v1) )
    {
      v7 = 5;
      goto LABEL_6;
    }
  }
  return 1LL;
}
