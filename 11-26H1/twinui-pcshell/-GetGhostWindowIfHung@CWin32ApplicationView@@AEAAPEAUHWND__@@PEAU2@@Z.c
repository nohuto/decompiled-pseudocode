/*
 * XREFs of ?GetGhostWindowIfHung@CWin32ApplicationView@@AEAAPEAUHWND__@@PEAU2@@Z @ 0x180089B54
 * Callers:
 *     ?CopyCloakableWindowsFromGatherer@CWin32ApplicationView@@AEAAJPEAIPEAPEAPEAUHWND__@@@Z @ 0x180089A44 (-CopyCloakableWindowsFromGatherer@CWin32ApplicationView@@AEAAJPEAIPEAPEAPEAUHWND__@@@Z.c)
 * Callees:
 *     <none>
 */

HWND __fastcall CWin32ApplicationView::GetGhostWindowIfHung(CWin32ApplicationView *this, HWND a2)
{
  HWND v2; // rbx
  __int64 v3; // rax

  v2 = a2;
  v3 = GhostWindowFromHungWindow(a2);
  if ( v3 )
    return (HWND)v3;
  return v2;
}
