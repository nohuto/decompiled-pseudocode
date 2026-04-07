/*
 * XREFs of ?EnsureImages@CTopLevelWindow@@SAJXZ @ 0x1800310F4
 * Callers:
 *     ?LoadTheme@CDesktopManager@@AEAAJXZ @ 0x180030B7C (-LoadTheme@CDesktopManager@@AEAAJXZ.c)
 * Callees:
 *     ?CreateGlyphsFromAtlas@CTopLevelWindow@@CAJQEAX@Z @ 0x1800059FC (-CreateGlyphsFromAtlas@CTopLevelWindow@@CAJQEAX@Z.c)
 *     ?CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@@Z @ 0x1800074A4 (-CreateBitmapsFromAtlasImageStrip@CTopLevelWindow@@SAJQEAXHIPEAU_MARGINS@@PEAPEAVCBitmapSource@@.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x180008530 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?EnsureWindowFrames@CTopLevelWindow@@CAJXZ @ 0x1800314A0 (-EnsureWindowFrames@CTopLevelWindow@@CAJXZ.c)
 *     ?Create@CBitmapSource@@SAJPEAUHINSTANCE__@@PEAXHPEAPEAV1@@Z @ 0x18003165C (-Create@CBitmapSource@@SAJPEAUHINSTANCE__@@PEAXHPEAPEAV1@@Z.c)
 *     ?ReleaseDecoderCopyBuffers@CBitmapSource@@QEAA_NXZ @ 0x180031E58 (-ReleaseDecoderCopyBuffers@CBitmapSource@@QEAA_NXZ.c)
 *     ?ReadSystemColors@CTopLevelWindow@@SAXXZ @ 0x180031F60 (-ReadSystemColors@CTopLevelWindow@@SAXXZ.c)
 *     ?GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z @ 0x18003230C (-GetNCAreaHelper@CTopLevelWindow@@CAJPEAXPEBH1PEAUWindowFrame@1@2@Z.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 */

__int64 CTopLevelWindow::EnsureImages(void)
{
  unsigned int v0; // ebx
  void *v1; // rdi
  void *v2; // rbp
  void *v3; // r14
  HINSTANCE v4; // rsi
  HRESULT NCAreaHelper; // eax
  int v6; // r8d
  int v7; // r8d
  int v8; // r8d
  int v10; // eax
  CMILRefCountBase *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned int iPropId; // [rsp+20h] [rbp-58h]
  MARGINS pMargins; // [rsp+48h] [rbp-30h] BYREF

  v0 = 0;
  if ( !dword_180119960 )
  {
    v1 = (void *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 69);
    v2 = (void *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 136);
    v3 = (void *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 137);
    v4 = (HINSTANCE)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 135);
    NCAreaHelper = CTopLevelWindow::EnsureWindowFrames();
    v0 = NCAreaHelper;
    if ( NCAreaHelper < 0 )
    {
      iPropId = 770;
      goto LABEL_8;
    }
    NCAreaHelper = CBitmapSource::Create(v4, v1, v6, &CTopLevelWindow::s_pbsNonClientAtlas);
    v0 = NCAreaHelper;
    if ( NCAreaHelper < 0 )
    {
      iPropId = 777;
      goto LABEL_8;
    }
    NCAreaHelper = CBitmapSource::Create(v4, v2, v7, &CTopLevelWindow::s_pbsTouchAtlas);
    v0 = NCAreaHelper;
    if ( NCAreaHelper < 0 )
    {
      iPropId = 784;
      goto LABEL_8;
    }
    NCAreaHelper = CBitmapSource::Create(v4, v3, v8, &CTopLevelWindow::s_pbsPenAtlas);
    v0 = NCAreaHelper;
    if ( NCAreaHelper < 0 )
    {
      iPropId = 791;
      goto LABEL_8;
    }
    CBitmapSource::ReleaseDecoderCopyBuffers(CTopLevelWindow::s_pbsTouchAtlas);
    CBitmapSource::ReleaseDecoderCopyBuffers(CTopLevelWindow::s_pbsPenAtlas);
    NCAreaHelper = CTopLevelWindow::GetNCAreaHelper(
                     v1,
                     &dword_1800F9CF0,
                     &dword_1800F9E10,
                     *(struct CTopLevelWindow::WindowFrame **)CTopLevelWindow::s_rgpwfWindowFrames,
                     *(struct CTopLevelWindow::WindowFrame **)(CTopLevelWindow::s_rgpwfWindowFrames + 8));
    v0 = NCAreaHelper;
    if ( NCAreaHelper < 0 )
    {
      iPropId = 843;
LABEL_8:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, NCAreaHelper, iPropId, 0LL);
      return v0;
    }
    NCAreaHelper = CTopLevelWindow::GetNCAreaHelper(
                     v1,
                     &dword_1800F9DB0,
                     &dword_1800F9E08,
                     *(struct CTopLevelWindow::WindowFrame **)(CTopLevelWindow::s_rgpwfWindowFrames + 16),
                     *(struct CTopLevelWindow::WindowFrame **)(CTopLevelWindow::s_rgpwfWindowFrames + 24));
    v0 = NCAreaHelper;
    if ( NCAreaHelper < 0 )
    {
      iPropId = 887;
      goto LABEL_8;
    }
    CTopLevelWindow::ReadSystemColors();
    NCAreaHelper = CTopLevelWindow::GetNCAreaHelper(
                     v1,
                     &dword_1800F9E20,
                     &dword_1800F9E10,
                     *(struct CTopLevelWindow::WindowFrame **)(CTopLevelWindow::s_rgpwfWindowFrames + 32),
                     *(struct CTopLevelWindow::WindowFrame **)(CTopLevelWindow::s_rgpwfWindowFrames + 40));
    v0 = NCAreaHelper;
    if ( NCAreaHelper < 0 )
    {
      iPropId = 928;
      goto LABEL_8;
    }
    NCAreaHelper = CTopLevelWindow::CreateGlyphsFromAtlas(v1);
    v0 = NCAreaHelper;
    if ( NCAreaHelper < 0 )
    {
      iPropId = 931;
      goto LABEL_8;
    }
    pMargins = 0LL;
    v10 = CTopLevelWindow::CreateBitmapsFromAtlasImageStrip(v1, 45, 1u, &pMargins);
    v0 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x3A9u, 0LL);
      return v0;
    }
    NCAreaHelper = GetThemeMargins(v1, 0LL, 45, 0, 3602, 0LL, &pMargins);
    v0 = NCAreaHelper;
    if ( NCAreaHelper < 0 )
    {
      iPropId = 942;
      goto LABEL_8;
    }
    v11 = 0LL;
    v12 = 0LL;
    v13 = 6LL;
    MEMORY[0x30] = pMargins;
    do
    {
      v14 = *(_QWORD *)(v12 + CTopLevelWindow::s_rgpwfWindowFrames);
      if ( v14 )
      {
        *(_QWORD *)(v14 + 1840) = v11;
        CMILRefCountBase::AddRef(v11);
      }
      v12 += 8LL;
      --v13;
    }
    while ( v13 );
    CBaseObject::Release(v11);
  }
  return v0;
}
