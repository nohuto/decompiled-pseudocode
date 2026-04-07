/*
 * XREFs of ?EnsureThemeStatics@CWindowIconic@@SAJXZ @ 0x180031ED4
 * Callers:
 *     ?LoadTheme@CDesktopManager@@AEAAJXZ @ 0x180030B7C (-LoadTheme@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV?$DynArray@PEAVCBitmapSource@@$0A@@@@Z @ 0x180006260 (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV-$DynArray@PEAVCBi.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x18004B474 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 */

__int64 __fastcall CWindowIconic::EnsureThemeStatics(__int64 a1, __int64 a2)
{
  void *Theme; // rax
  int BitmapsFromAtlasImageStrip; // eax
  unsigned int v4; // ebx

  Theme = (void *)CDesktopManager::GetTheme(0LL, a2);
  BitmapsFromAtlasImageStrip = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(
                                 Theme,
                                 58,
                                 0x12u,
                                 0LL,
                                 (struct CBitmapSource ***)&CWindowIconic::s_rgpBitmapPendingImages);
  v4 = BitmapsFromAtlasImageStrip;
  if ( BitmapsFromAtlasImageStrip < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, BitmapsFromAtlasImageStrip, 0x340u, 0LL);
  return v4;
}
