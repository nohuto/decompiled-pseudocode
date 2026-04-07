/*
 * XREFs of ?GetAtlasImageFromTheme@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAX@Z @ 0x180004F74
 * Callers:
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x180004B90 (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@.c)
 *     ?CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x18000504C (-CreateBitmapFromAtlas@CTopLevelWindow@@SAJQEAXHPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z.c)
 * Callees:
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180005198 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 */

struct CBitmapSource *__fastcall CTopLevelWindow::GetAtlasImageFromTheme(void *a1)
{
  __int64 Theme; // rax
  __int64 v3; // rcx
  __int64 v4; // rdx

  if ( a1 == *((void **)CDesktopManager::s_pDesktopManagerInstance + 70) )
    return CTopLevelWindow::s_pbsNonClientAtlas;
  if ( a1 == *((void **)CDesktopManager::s_pDesktopManagerInstance + 137) )
    return CTopLevelWindow::s_pbsTouchAtlas;
  Theme = CDesktopManager::GetTheme(2LL, a1);
  v3 = 0LL;
  if ( v4 == Theme )
    return CTopLevelWindow::s_pbsPenAtlas;
  return (struct CBitmapSource *)v3;
}
