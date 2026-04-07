/*
 * XREFs of ?GetWindowThemeAttributes@@YAKQEAUHWND__@@@Z @ 0x180073768
 * Callers:
 *     ?SyncWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@PEAVCWindowData@@@Z @ 0x1800930F0 (-SyncWindowData@CWindowList@@QEAAXPEAUIDwmWindow@@PEAVCWindowData@@@Z.c)
 * Callees:
 *     <none>
 */

HANDLE __fastcall GetWindowThemeAttributes(HWND a1)
{
  if ( a1 )
    return GetPropW(a1, (LPCWSTR)0xA914);
  else
    return 0LL;
}
