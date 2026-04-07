/*
 * XREFs of ?GetAtlasImageFromTheme@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAX@Z @ 0x18000744C
 * Callers:
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x1800074A4 (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@.c)
 *     ?CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x180033198 (-CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z.c)
 * Callees:
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x18004B474 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 */

struct CBitmapSource *__fastcall CTopLevelWindow::GetAtlasImageFromTheme(void *a1)
{
  __int64 Theme; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx

  if ( a1 == *((void **)CDesktopManager::s_pDesktopManagerInstance + 69) )
    return CTopLevelWindow::s_pbsNonClientAtlas;
  if ( a1 == *((void **)CDesktopManager::s_pDesktopManagerInstance + 136) )
    return CTopLevelWindow::s_pbsTouchAtlas;
  Theme = CDesktopManager::GetTheme(2LL, a1);
  v3 = 0LL;
  if ( v4 == Theme )
    return CTopLevelWindow::s_pbsPenAtlas;
  return (struct CBitmapSource *)v3;
}
