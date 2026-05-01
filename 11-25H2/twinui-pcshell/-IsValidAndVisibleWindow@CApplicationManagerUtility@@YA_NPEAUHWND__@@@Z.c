/*
 * XREFs of ?IsValidAndVisibleWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x1800D8E48
 * Callers:
 *     ?GetWindowForActivation@CClassicWindow@@UEBAJPEAPEAUHWND__@@PEAH@Z @ 0x1800D9B80 (-GetWindowForActivation@CClassicWindow@@UEBAJPEAPEAUHWND__@@PEAH@Z.c)
 *     ?_GetLastActiveClassicWindow@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@W4GetLastActiveClassicWindowReason@@PEAPEAUIClassicWindow@@@Z @ 0x1800D9E68 (-_GetLastActiveClassicWindow@CClassicWindowManager@@AEAAJPEAUIImmersiveMonitor@@W4GetLastActiveC.c)
 * Callees:
 *     ?IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z @ 0x1800D9130 (-IsValidWindow@CApplicationManagerUtility@@YA_NPEAUHWND__@@@Z.c)
 */

char __fastcall CApplicationManagerUtility::IsValidAndVisibleWindow(CApplicationManagerUtility *hWnd, HWND a2)
{
  char v3; // bl

  if ( hWnd == CApplicationManagerUtility::g_pIAMGlobals[12].Ptr )
    return 1;
  v3 = 0;
  if ( CApplicationManagerUtility::IsValidWindow(hWnd, a2) )
  {
    if ( IsWindowVisible((HWND)hWnd) )
      return 1;
  }
  return v3;
}
