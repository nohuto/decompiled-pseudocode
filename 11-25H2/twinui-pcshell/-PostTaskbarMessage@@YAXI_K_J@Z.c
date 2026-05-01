/*
 * XREFs of ?PostTaskbarMessage@@YAXI_K_J@Z @ 0x180220B30
 * Callers:
 *     ?PostCortanaOrSearchVisibility@XamlLauncherState@@AEAAX_NPEAUHMONITOR__@@@Z @ 0x1801F0AD0 (-PostCortanaOrSearchVisibility@XamlLauncherState@@AEAAX_NPEAUHMONITOR__@@@Z.c)
 *     ?OnCortanaShown@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUICortanaShownEventArgs@3456@@Z @ 0x180455870 (-OnCortanaShown@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@.c)
 * Callees:
 *     <none>
 */

void __fastcall PostTaskbarMessage(__int64 a1, WPARAM a2, LPARAM a3)
{
  HWND WindowW; // rax

  WindowW = (HWND)qword_18089DF98;
  if ( !qword_18089DF98 )
  {
    WindowW = FindWindowW(L"Shell_TrayWnd", 0LL);
    qword_18089DF98 = (__int64)WindowW;
  }
  PostMessageW(WindowW, 0x5D1u, a2, a3);
}
