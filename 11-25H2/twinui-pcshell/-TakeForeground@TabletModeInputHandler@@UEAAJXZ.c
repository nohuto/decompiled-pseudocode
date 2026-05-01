/*
 * XREFs of ?TakeForeground@TabletModeInputHandler@@UEAAJXZ @ 0x18050D440
 * Callers:
 *     ?RuntimeClassInitialize@TabletModeInputHandler@@QEAAJW4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@PEAUITabletModeInputCallback@@@Z @ 0x18050D198 (-RuntimeClassInitialize@TabletModeInputHandler@@QEAAJW4SHOW_WINDOW_ARRANGEMENT_VIEW_SOURCE@@PEAU.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TabletModeInputHandler::TakeForeground(HWND *this)
{
  const char *v1; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( SetForegroundWindow(this[3]) )
    return 0LL;
  else
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x75,
             (unsigned int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodeinputhandler.cpp",
             v1);
}
