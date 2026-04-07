/*
 * XREFs of ?OnSystemBackdropUpdated@CTopLevelWindow@@QEAAXXZ @ 0x180019CCC
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x180019E20 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?OnSystemBackdropUpdated@CWindowData@@QEAAXXZ @ 0x180088160 (-OnSystemBackdropUpdated@CWindowData@@QEAAXXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ @ 0x1800051C4 (-InternalRelease@-$ComPtr@VCAtlasedImage@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$?9UICompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL@Microsoft@@YA_NAEBV?$ComPtr@UICompositionProjectedShadowReceiver@Composition@UI@Windows@@@01@$$T@Z @ 0x18000F840 (--$-9UICompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL@Microsoft@@YA_NAEBV-$ComP.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001C060 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x18001C7A4 (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 */

void __fastcall CTopLevelWindow::OnSystemBackdropUpdated(CContainerVisual **this)
{
  CVisual::SetDirtyFlags((CVisual *)this, 0x4000u);
  CVisual::SetDirtyFlags((CVisual *)this, 0x100000u);
  if ( Microsoft::WRL::operator!=<Windows::UI::Composition::ICompositionProjectedShadowReceiver>(this + 35) )
  {
    CContainerVisual::RemoveChild(this[31], this[35]);
    Microsoft::WRL::ComPtr<CAtlasedImage>::InternalRelease(this + 35);
  }
}
