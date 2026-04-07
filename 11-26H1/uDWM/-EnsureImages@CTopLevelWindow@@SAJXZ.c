/*
 * XREFs of ?EnsureImages@CTopLevelWindow@@SAJXZ @ 0x1800CB09C
 * Callers:
 *     ?LoadTheme@CDesktopManager@@AEAAJXZ @ 0x1800ABDD4 (-LoadTheme@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z @ 0x180003B34 (-GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z.c)
 *     ?CreateGlyphsFromAtlas@CTopLevelWindow@@CAJQEAX@Z @ 0x180004980 (-CreateGlyphsFromAtlas@CTopLevelWindow@@CAJQEAX@Z.c)
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x180004B90 (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180005198 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureWindowFrames@CTopLevelWindow@@CAJXZ @ 0x1800655C4 (-EnsureWindowFrames@CTopLevelWindow@@CAJXZ.c)
 *     ?ReadSystemColors@CTopLevelWindow@@SAXXZ @ 0x18006E9D8 (-ReadSystemColors@CTopLevelWindow@@SAXXZ.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ?Create@CBitmapSource@@SAJPEAUHINSTANCE__@@PEAXHPEAPEAV1@@Z @ 0x18009A87C (-Create@CBitmapSource@@SAJPEAUHINSTANCE__@@PEAXHPEAPEAV1@@Z.c)
 *     ?ReleaseDecoderCopyBuffers@CBitmapSource@@QEAA_NXZ @ 0x18009AD70 (-ReleaseDecoderCopyBuffers@CBitmapSource@@QEAA_NXZ.c)
 *     ?ForceAtlasInitialize@CContactManager@@QEAAXXZ @ 0x1800A8950 (-ForceAtlasInitialize@CContactManager@@QEAAXXZ.c)
 */

__int64 CTopLevelWindow::EnsureImages(void)
{
  unsigned int v0; // ebx
  void *Theme; // rdi
  void *v2; // rbp
  void *v3; // r14
  HINSTANCE v4; // rsi
  int NCAreaHelper; // eax
  __int64 v6; // r8
  __int64 v7; // r8
  __int64 v8; // r8
  int v9; // eax
  CBaseObject *v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // r9
  unsigned int iPropId; // [rsp+20h] [rbp-58h]
  MARGINS pMargins; // [rsp+48h] [rbp-30h] BYREF

  v0 = 0;
  if ( dword_1801159F0 )
    return v0;
  Theme = (void *)CDesktopManager::GetTheme(0);
  v2 = (void *)CDesktopManager::GetTheme(1);
  v3 = (void *)CDesktopManager::GetTheme(2);
  v4 = (HINSTANCE)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 136);
  NCAreaHelper = CTopLevelWindow::EnsureWindowFrames();
  v0 = NCAreaHelper;
  if ( NCAreaHelper < 0 )
  {
    iPropId = 673;
    goto LABEL_29;
  }
  NCAreaHelper = CBitmapSource::Create(v4, Theme, v6, &CTopLevelWindow::s_pbsNonClientAtlas);
  v0 = NCAreaHelper;
  if ( NCAreaHelper < 0 )
  {
    iPropId = 680;
    goto LABEL_29;
  }
  NCAreaHelper = CBitmapSource::Create(v4, v2, v7, &CTopLevelWindow::s_pbsTouchAtlas);
  v0 = NCAreaHelper;
  if ( NCAreaHelper < 0 )
  {
    iPropId = 687;
    goto LABEL_29;
  }
  NCAreaHelper = CBitmapSource::Create(v4, v3, v8, &CTopLevelWindow::s_pbsPenAtlas);
  v0 = NCAreaHelper;
  if ( NCAreaHelper < 0 )
  {
    iPropId = 694;
    goto LABEL_29;
  }
  if ( GetSystemMetrics(95) > 0 )
    CContactManager::ForceAtlasInitialize(*((CContactManager **)CDesktopManager::s_pDesktopManagerInstance + 20));
  CBitmapSource::ReleaseDecoderCopyBuffers(CTopLevelWindow::s_pbsTouchAtlas);
  CBitmapSource::ReleaseDecoderCopyBuffers(CTopLevelWindow::s_pbsPenAtlas);
  NCAreaHelper = CTopLevelWindow::GetNCAreaHelper(
                   Theme,
                   &dword_1800F9E70,
                   (int *)&dword_1800F9E68,
                   *(struct CTopLevelWindow::WindowFrame **)CTopLevelWindow::s_rgpwfWindowFrames[0],
                   *(struct CTopLevelWindow::WindowFrame **)(CTopLevelWindow::s_rgpwfWindowFrames[0] + 8LL));
  v0 = NCAreaHelper;
  if ( NCAreaHelper < 0 )
  {
    iPropId = 752;
    goto LABEL_29;
  }
  NCAreaHelper = CTopLevelWindow::GetNCAreaHelper(
                   Theme,
                   &dword_1800F9E10,
                   (int *)&dword_1800F9E08,
                   *(struct CTopLevelWindow::WindowFrame **)(CTopLevelWindow::s_rgpwfWindowFrames[0] + 16LL),
                   *(struct CTopLevelWindow::WindowFrame **)(CTopLevelWindow::s_rgpwfWindowFrames[0] + 24LL));
  v0 = NCAreaHelper;
  if ( NCAreaHelper < 0 )
  {
    iPropId = 796;
    goto LABEL_29;
  }
  CTopLevelWindow::ReadSystemColors();
  NCAreaHelper = CTopLevelWindow::GetNCAreaHelper(
                   Theme,
                   &dword_1800F9DB0,
                   (int *)&dword_1800F9E68,
                   *(struct CTopLevelWindow::WindowFrame **)(CTopLevelWindow::s_rgpwfWindowFrames[0] + 32LL),
                   *(struct CTopLevelWindow::WindowFrame **)(CTopLevelWindow::s_rgpwfWindowFrames[0] + 40LL));
  v0 = NCAreaHelper;
  if ( NCAreaHelper < 0 )
  {
    iPropId = 837;
    goto LABEL_29;
  }
  NCAreaHelper = CTopLevelWindow::CreateGlyphsFromAtlas(Theme);
  v0 = NCAreaHelper;
  if ( NCAreaHelper < 0 )
  {
    iPropId = 840;
    goto LABEL_29;
  }
  pMargins = 0LL;
  v9 = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(Theme, 45, 1u, &pMargins);
  v0 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x34Eu, 0LL);
    return v0;
  }
  NCAreaHelper = GetThemeMargins(Theme, 0LL, 45, 0, 3602, 0LL, &pMargins);
  v0 = NCAreaHelper;
  if ( NCAreaHelper < 0 )
  {
    iPropId = 851;
LABEL_29:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, NCAreaHelper, iPropId, 0LL);
    return v0;
  }
  v10 = 0LL;
  v11 = 6LL;
  v12 = 0LL;
  MEMORY[0x98] = pMargins;
  do
  {
    v13 = *(_QWORD *)(v12 + CTopLevelWindow::s_rgpwfWindowFrames[0]);
    if ( v13 )
    {
      *(_QWORD *)(v13 + 1832) = v10;
      CBaseObject::AddRef(v10);
    }
    v12 += 8LL;
    --v11;
  }
  while ( v11 );
  CBaseObject::Release(v10);
  return v0;
}
