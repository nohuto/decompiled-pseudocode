/*
 * XREFs of ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x180005F68
 * Callers:
 *     ?InitializeVisualTreeClone@CAccent@@IEAAJPEAV1@@Z @ 0x1800A03C0 (-InitializeVisualTreeClone@CAccent@@IEAAJPEAV1@@Z.c)
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x1800A0700 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 * Callees:
 *     ?GetInactiveFrame@CTopLevelWindow@@CAPEAUWindowFrame@1@XZ @ 0x180003C68 (-GetInactiveFrame@CTopLevelWindow@@CAPEAUWindowFrame@1@XZ.c)
 *     ?IsGlassSheetNCAreaPart@CTopLevelWindow@@CA_NI@Z @ 0x18000450C (-IsGlassSheetNCAreaPart@CTopLevelWindow@@CA_NI@Z.c)
 *     ?_IsShadowPartApplicableFromFlags@CAccent@@IEAA_NH@Z @ 0x180004520 (-_IsShadowPartApplicableFromFlags@CAccent@@IEAA_NH@Z.c)
 *     ?Create@CAtlasedImage@@SAJPEAPEAV1@@Z @ 0x18000461C (-Create@CAtlasedImage@@SAJPEAPEAV1@@Z.c)
 *     ?SetSize@CAtlasedImage@@QEAAXAEBUtagSIZE@@@Z @ 0x180004A88 (-SetSize@CAtlasedImage@@QEAAXAEBUtagSIZE@@@Z.c)
 *     ?GetWindowFramePart@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAUWindowFrame@1@I@Z @ 0x180005F30 (-GetWindowFramePart@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAUWindowFrame@1@I@Z.c)
 *     ?IsShadowNCAreaPart@CTopLevelWindow@@CA_NI@Z @ 0x18000616C (-IsShadowNCAreaPart@CTopLevelWindow@@CA_NI@Z.c)
 *     ?SetBitmapSource@CAtlasedImage@@QEAAXPEAVCBitmapSource@@@Z @ 0x1800066D8 (-SetBitmapSource@CAtlasedImage@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?SetHiddenMargins@CAtlasedImage@@QEAAXU?$TMILFlagsEnum@W4FlagsEnum@AtlasHiddenMargins@@@@@Z @ 0x180013CFC (-SetHiddenMargins@CAtlasedImage@@QEAAXU-$TMILFlagsEnum@W4FlagsEnum@AtlasHiddenMargins@@@@@Z.c)
 *     ?DisconnectFromParent@CAtlasedImage@@QEAAXXZ @ 0x18001E05C (-DisconnectFromParent@CAtlasedImage@@QEAAXXZ.c)
 *     ?InsertAfterAtlasImage@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@0@Z @ 0x1800642DC (-InsertAfterAtlasImage@CAtlasedRectsVisual@@QEAAJPEAVCAtlasedImage@@0@Z.c)
 */

__int64 __fastcall CAccent::_UpdateBorderShadowParts(struct CAtlasedImage **this)
{
  unsigned int v2; // ebp
  struct CAtlasedImage *v3; // r12
  struct CTopLevelWindow::WindowFrame *InactiveFrame; // r15
  unsigned int i; // esi
  struct CAtlasedImage **v6; // rdi
  int v7; // eax
  int v8; // eax
  struct tagSIZE *WindowFramePart; // r14
  int v10; // ecx
  struct CAtlasedImage *v12; // rcx
  struct CAtlasedImage *v13; // rcx
  struct CAtlasedImage *v14; // rcx
  struct CAtlasedImage *v15; // rcx
  struct CAtlasedImage *v16; // rcx
  struct CAtlasedImage *v17; // rcx
  struct CAtlasedImage *v18; // rcx
  struct CAtlasedImage *v19; // rcx

  v2 = 0;
  v3 = 0LL;
  InactiveFrame = CTopLevelWindow::GetInactiveFrame();
  for ( i = 0; i < 0x16; ++i )
  {
    v6 = &this[i + 45];
    if ( !*v6 )
    {
      v7 = CAtlasedImage::Create(&this[i + 45]);
      v2 = v7;
      if ( v7 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x12Du, 0LL);
        return v2;
      }
      *((_DWORD *)*v6 + 30) = i;
      v8 = CAtlasedRectsVisual::InsertAfterAtlasImage(this[43], *v6, v3);
      v2 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x134u, 0LL);
        return v2;
      }
    }
    if ( InactiveFrame )
      WindowFramePart = (struct tagSIZE *)CTopLevelWindow::GetWindowFramePart(InactiveFrame, i);
    else
      WindowFramePart = 0LL;
    CAtlasedImage::SetBitmapSource(*v6, (struct CBitmapSource *)WindowFramePart);
    if ( (!CTopLevelWindow::IsShadowNCAreaPart(i) || *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 17))
      && WindowFramePart
      && !CTopLevelWindow::IsGlassSheetNCAreaPart(v10)
      && CAccent::_IsShadowPartApplicableFromFlags((CAccent *)this, i) )
    {
      CAtlasedImage::SetSize((struct tagSIZE *)*v6, WindowFramePart + 3);
      v3 = *v6;
    }
    else
    {
      CAtlasedImage::DisconnectFromParent(*v6);
      if ( *v6 )
      {
        CBaseObject::Release(*v6);
        *v6 = 0LL;
      }
    }
  }
  v12 = this[45];
  if ( v12 )
    CAtlasedImage::SetHiddenMargins(v12, 0LL);
  v13 = this[46];
  if ( v13 )
    CAtlasedImage::SetHiddenMargins(v13, 0LL);
  v14 = this[47];
  if ( v14 )
    CAtlasedImage::SetHiddenMargins(v14, 0LL);
  v15 = this[48];
  if ( v15 )
    CAtlasedImage::SetHiddenMargins(v15, 0LL);
  v16 = this[49];
  if ( v16 )
    CAtlasedImage::SetHiddenMargins(v16, 0LL);
  v17 = this[50];
  if ( v17 )
    CAtlasedImage::SetHiddenMargins(v17, 0LL);
  v18 = this[51];
  if ( v18 )
    CAtlasedImage::SetHiddenMargins(v18, 0LL);
  v19 = this[52];
  if ( v19 )
    CAtlasedImage::SetHiddenMargins(v19, 0LL);
  return v2;
}
