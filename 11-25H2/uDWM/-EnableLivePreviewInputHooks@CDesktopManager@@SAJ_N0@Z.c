/*
 * XREFs of ?EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z @ 0x180045C40
 * Callers:
 *     ?Activate@CLivePreview@@QEAAJXZ @ 0x180045718 (-Activate@CLivePreview@@QEAAJXZ.c)
 *     ?DeActivate@CLivePreview@@QEAAJ_N@Z @ 0x180045A38 (-DeActivate@CLivePreview@@QEAAJ_N@Z.c)
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x18008F8D0 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?EnableInputHooksHelper@CDesktopManager@@SAJ_N0PEBGPEAPEAUHWND__@@@Z @ 0x180045DC0 (-EnableInputHooksHelper@CDesktopManager@@SAJ_N0PEBGPEAPEAUHWND__@@@Z.c)
 *     ?OnLivePreviewDismissed@CIconicBitmapRegistry@@QEAAXXZ @ 0x1800460A8 (-OnLivePreviewDismissed@CIconicBitmapRegistry@@QEAAXXZ.c)
 */

__int64 __fastcall CDesktopManager::EnableLivePreviewInputHooks(bool a1, bool a2, const unsigned __int16 *a3)
{
  HWND v5; // rcx
  unsigned int v6; // edi
  HWND v8; // rcx

  if ( !a1 )
  {
    CIconicBitmapRegistry::OnLivePreviewDismissed(*((CIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance
                                                  + 28));
    v5 = (HWND)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 142);
    if ( v5 )
      RemovePropW(v5, aLivepreviewwin);
  }
  v6 = CDesktopManager::EnableInputHooksHelper(a1, a2, a3, (HWND *)CDesktopManager::s_pDesktopManagerInstance + 142);
  if ( a1 )
  {
    v8 = (HWND)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 142);
    if ( v8 )
      SetPropW(v8, aLivepreviewwin, HANDLE_FLAG_INHERIT);
  }
  return v6;
}
