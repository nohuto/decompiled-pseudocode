/*
 * XREFs of ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x180094B30
 * Callers:
 *     ?UpdateLayout@CAccent@@UEAAJ_N@Z @ 0x180062F20 (-UpdateLayout@CAccent@@UEAAJ_N@Z.c)
 *     ?InitializeVisualTreeClone@CAccent@@IEAAJPEAV1@@Z @ 0x18009444C (-InitializeVisualTreeClone@CAccent@@IEAAJPEAV1@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?_IsShadowPartApplicableFromFlags@CAccent@@IEAA_NH@Z @ 0x180059790 (-_IsShadowPartApplicableFromFlags@CAccent@@IEAA_NH@Z.c)
 *     ?GetWindowFramePart@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAUWindowFrame@1@I@Z @ 0x180063E18 (-GetWindowFramePart@CTopLevelWindow@@CAPEAVCBitmapSource@@PEAUWindowFrame@1@I@Z.c)
 *     ?IsShadowNCAreaPart@CTopLevelWindow@@CA_NI@Z @ 0x180065B38 (-IsShadowNCAreaPart@CTopLevelWindow@@CA_NI@Z.c)
 *     ?IsGlassSheetNCAreaPart@CTopLevelWindow@@CA_NI@Z @ 0x180065E7C (-IsGlassSheetNCAreaPart@CTopLevelWindow@@CA_NI@Z.c)
 *     ?SetBitmapSource@CNineGridImagePrimitive@@QEAAXPEAVCBitmapSource@@@Z @ 0x180072CA8 (-SetBitmapSource@CNineGridImagePrimitive@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     ?SetSize@CPrimitive@@QEAAXAEBUtagSIZE@@@Z @ 0x180072CDC (-SetSize@CPrimitive@@QEAAXAEBUtagSIZE@@@Z.c)
 *     ?GetInactiveFrame@CTopLevelWindow@@CAPEAUWindowFrame@1@XZ @ 0x1800738A8 (-GetInactiveFrame@CTopLevelWindow@@CAPEAUWindowFrame@1@XZ.c)
 *     ?Create@CThemePartPrimitive@@SAJPEAPEAV1@@Z @ 0x1800738BC (-Create@CThemePartPrimitive@@SAJPEAPEAV1@@Z.c)
 *     ?RemoveAllPrimitives@CPrimitiveGroupVisual@@QEAAXXZ @ 0x1800881CC (-RemoveAllPrimitives@CPrimitiveGroupVisual@@QEAAXXZ.c)
 *     ?SetHiddenMargins@CNineGridImagePrimitive@@QEAAXU?$TMILFlagsEnum@W4FlagsEnum@AtlasHiddenMargins@@@@@Z @ 0x18008DD88 (-SetHiddenMargins@CNineGridImagePrimitive@@QEAAXU-$TMILFlagsEnum@W4FlagsEnum@AtlasHiddenMargins@.c)
 *     ?AppendPrimitive@CPrimitiveGroupVisual@@QEAAXPEAVCPrimitive@@@Z @ 0x1800BDB34 (-AppendPrimitive@CPrimitiveGroupVisual@@QEAAXPEAVCPrimitive@@@Z.c)
 */

__int64 __fastcall CAccent::_UpdateBorderShadowParts(CPrimitiveGroupVisual **this)
{
  unsigned int v2; // r14d
  __int64 v3; // rcx
  struct CTopLevelWindow::WindowFrame *InactiveFrame; // r15
  unsigned int i; // edi
  struct tagSIZE *WindowFramePart; // rbp
  struct CThemePartPrimitive **v7; // rsi
  int v8; // ecx
  int v9; // eax
  CPrimitive *v10; // rcx
  CPrimitive *v11; // rcx
  CPrimitive *v12; // rcx
  CPrimitive *v13; // rcx
  CPrimitive *v14; // rcx
  CPrimitive *v15; // rcx
  CPrimitive *v16; // rcx
  CPrimitive *v17; // rcx

  v2 = 0;
  InactiveFrame = CTopLevelWindow::GetInactiveFrame();
  CPrimitiveGroupVisual::RemoveAllPrimitives(*(CPrimitiveGroupVisual **)(v3 + 288));
  for ( i = 0; i < 0x16; ++i )
  {
    if ( InactiveFrame )
      WindowFramePart = (struct tagSIZE *)CTopLevelWindow::GetWindowFramePart(InactiveFrame, i);
    else
      WindowFramePart = 0LL;
    v7 = &this[i + 38];
    if ( (!CTopLevelWindow::IsShadowNCAreaPart(i) || *((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 17))
      && WindowFramePart
      && !CTopLevelWindow::IsGlassSheetNCAreaPart(v8)
      && CAccent::_IsShadowPartApplicableFromFlags((CAccent *)this, i) )
    {
      if ( !*v7 )
      {
        v9 = CThemePartPrimitive::Create(v7);
        v2 = v9;
        if ( v9 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x134u, 0LL);
          return v2;
        }
        *((_DWORD *)*v7 + 18) = i;
      }
      CPrimitiveGroupVisual::AppendPrimitive(this[36], *v7);
      CNineGridImagePrimitive::SetBitmapSource(*v7, (struct CBitmapSource *)WindowFramePart);
      CPrimitive::SetSize((struct tagSIZE *)*v7, WindowFramePart + 16);
    }
    else if ( *v7 )
    {
      CBaseObject::Release(*v7);
      *v7 = 0LL;
    }
  }
  v10 = this[38];
  if ( v10 )
    CNineGridImagePrimitive::SetHiddenMargins(v10, 0);
  v11 = this[39];
  if ( v11 )
    CNineGridImagePrimitive::SetHiddenMargins(v11, 0);
  v12 = this[40];
  if ( v12 )
    CNineGridImagePrimitive::SetHiddenMargins(v12, 0);
  v13 = this[41];
  if ( v13 )
    CNineGridImagePrimitive::SetHiddenMargins(v13, 0);
  v14 = this[42];
  if ( v14 )
    CNineGridImagePrimitive::SetHiddenMargins(v14, 0);
  v15 = this[43];
  if ( v15 )
    CNineGridImagePrimitive::SetHiddenMargins(v15, 0);
  v16 = this[44];
  if ( v16 )
    CNineGridImagePrimitive::SetHiddenMargins(v16, 0);
  v17 = this[45];
  if ( v17 )
    CNineGridImagePrimitive::SetHiddenMargins(v17, 0);
  return v2;
}
