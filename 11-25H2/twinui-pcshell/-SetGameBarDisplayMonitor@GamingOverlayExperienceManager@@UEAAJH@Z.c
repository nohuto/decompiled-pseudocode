/*
 * XREFs of ?SetGameBarDisplayMonitor@GamingOverlayExperienceManager@@UEAAJH@Z @ 0x18034F4B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?WorkAreaChanged@GamingOverlayExperienceManager@@UEAAJKPEBUtagRECT@@@Z @ 0x18020F810 (-WorkAreaChanged@GamingOverlayExperienceManager@@UEAAJKPEBUtagRECT@@@Z.c)
 *     ?GetDisplayMonitors@GamingOverlayExperienceManager@@UEAAJ_KPEAPEAU?$IVectorView@PEAUHSTRING__@@@Collections@Foundation@Windows@@PEAH@Z @ 0x1802446E0 (-GetDisplayMonitors@GamingOverlayExperienceManager@@UEAAJ_KPEAPEAU-$IVectorView@PEAUHSTRING__@@@.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::SetGameBarDisplayMonitor(
        GamingOverlayExperienceManager *this,
        int a2)
{
  int DisplayMonitors; // ebx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((_DWORD *)this + 328) = a2;
  DisplayMonitors = GamingOverlayExperienceManager::GetDisplayMonitors((__int64)this, *((HWND *)this + 168), 0LL, 0LL);
  if ( DisplayMonitors < 0 )
  {
    v4 = 2837LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (int)"pcshell\\twinui\\GamingOverlayExperienceManager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)(unsigned int)DisplayMonitors);
    return (unsigned int)DisplayMonitors;
  }
  DisplayMonitors = GamingOverlayExperienceManager::WorkAreaChanged(
                      (GamingOverlayExperienceManager *)((char *)this - 16),
                      0LL,
                      0LL);
  if ( DisplayMonitors < 0 )
  {
    v4 = 2839LL;
    goto LABEL_3;
  }
  return 0LL;
}
