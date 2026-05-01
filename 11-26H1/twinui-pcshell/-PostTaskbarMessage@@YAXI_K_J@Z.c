/*
 * XREFs of ?PostTaskbarMessage@@YAXI_K_J@Z @ 0x180210C48
 * Callers:
 *     ?PostCortanaOrSearchVisibility@XamlLauncherState@@AEAAX_NPEAUHMONITOR__@@@Z @ 0x1801E273C (-PostCortanaOrSearchVisibility@XamlLauncherState@@AEAAX_NPEAUHMONITOR__@@@Z.c)
 *     ?OnCortanaShown@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@3456@@Z @ 0x1804621F0 (-OnCortanaShown@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@.c)
 * Callees:
 *     <none>
 */

void __fastcall PostTaskbarMessage(__int64 a1, WPARAM a2, LPARAM a3)
{
  HWND WindowW; // rax

  WindowW = (HWND)qword_1808DE640;
  if ( !qword_1808DE640 )
  {
    WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
    qword_1808DE640 = (__int64)WindowW;
  }
  PostMessageW(WindowW, 0x5D1u, a2, a3);
}
