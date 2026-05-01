/*
 * XREFs of ?IsValidWindow@@YA_NPEAUHWND__@@@Z @ 0x1801B4480
 * Callers:
 *     ?OnShellHookMessage@UwpWindowEventDispatcher@@UEAAJ_K_J@Z @ 0x18024D520 (-OnShellHookMessage@UwpWindowEventDispatcher@@UEAAJ_K_J@Z.c)
 *     ?OnShellHookMessage@WindowEventDispatcher@@UEAAJ_K_J@Z @ 0x1804101B0 (-OnShellHookMessage@WindowEventDispatcher@@UEAAJ_K_J@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsValidWindow(HWND a1)
{
  int v2; // eax
  char v3; // bl

  SetLastError(0);
  v2 = IsWindowInDestroy(a1);
  v3 = 0;
  if ( !v2 )
    return GetLastError() != 1400;
  return v3;
}
