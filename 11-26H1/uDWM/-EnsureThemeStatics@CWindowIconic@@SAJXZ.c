/*
 * XREFs of ?EnsureThemeStatics@CWindowIconic@@SAJXZ @ 0x1800031E0
 * Callers:
 *     ?LoadTheme@CDesktopManager@@AEAAJXZ @ 0x1800ABDD4 (-LoadTheme@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV?$DynArray@PEAVCBitmapSource@@$0A@@@@Z @ 0x180004A98 (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@AEAV-$DynArray@PEAVCBi.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 */

__int64 CWindowIconic::EnsureThemeStatics(void)
{
  int BitmapsFromAtlasImageStrip; // eax
  unsigned int v1; // ebx

  BitmapsFromAtlasImageStrip = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(
                                 *((void **)CDesktopManager::s_pDesktopManagerInstance + 70),
                                 58,
                                 0x12u,
                                 0LL,
                                 (__int64)&CWindowIconic::s_rgpBitmapPendingImages);
  v1 = BitmapsFromAtlasImageStrip;
  if ( BitmapsFromAtlasImageStrip < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, BitmapsFromAtlasImageStrip, 0x360u, 0LL);
  return v1;
}
