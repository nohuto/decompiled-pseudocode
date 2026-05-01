/*
 * XREFs of ?UpdateOverlayDisplayModeFullscreen@GamingOverlayExperienceManager@@AEAAJ_N@Z @ 0x180355DF4
 * Callers:
 *     ?ResetWindowRect@GamingOverlayExperienceManager@@UEAAJXZ @ 0x180352980 (-ResetWindowRect@GamingOverlayExperienceManager@@UEAAJXZ.c)
 *     ?ResetWindowRegion@GamingOverlayExperienceManager@@UEAAJXZ @ 0x180352B30 (-ResetWindowRegion@GamingOverlayExperienceManager@@UEAAJXZ.c)
 *     ?SetCombinedWindowRegion@GamingOverlayExperienceManager@@UEAAJIPEAURect@Foundation@Windows@@@Z @ 0x180353810 (-SetCombinedWindowRegion@GamingOverlayExperienceManager@@UEAAJIPEAURect@Foundation@Windows@@@Z.c)
 *     ?SetWindowRect@GamingOverlayExperienceManager@@UEAAJHHHH@Z @ 0x180353D00 (-SetWindowRect@GamingOverlayExperienceManager@@UEAAJHHHH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E550 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateOverlayDisplayModeShared@GamingOverlayExperienceManager@@AEAAJXZ @ 0x180210F40 (-UpdateOverlayDisplayModeShared@GamingOverlayExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::UpdateOverlayDisplayModeFullscreen(
        GamingOverlayExperienceManager *this,
        char a2)
{
  int updated; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((_BYTE *)this + 1577) = a2;
  updated = GamingOverlayExperienceManager::UpdateOverlayDisplayModeShared((winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **)this);
  v3 = updated;
  if ( updated < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x114C,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)(unsigned int)updated);
  return v3;
}
