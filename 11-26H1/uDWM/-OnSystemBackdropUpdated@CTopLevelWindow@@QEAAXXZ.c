/*
 * XREFs of ?OnSystemBackdropUpdated@CTopLevelWindow@@QEAAXXZ @ 0x18004DEF8
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18003C3A0 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?OnSystemBackdropUpdated@CWindowData@@QEAAXXZ @ 0x18004DEDC (-OnSystemBackdropUpdated@CWindowData@@QEAAXXZ.c)
 * Callees:
 *     ??$ConvertDirtyEnumToFlag@$MW4ATVDirtyFlags@CAnimatedTransitionVisual@@0L@$00@@YA?AVDirtyFlags@@XZ @ 0x180015DD8 (--$ConvertDirtyEnumToFlag@$MW4ATVDirtyFlags@CAnimatedTransitionVisual@@0L@$00@@YA-AVDirtyFlags@@.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4ToplevelWindowDirtyFlags@CTopLevelWindow@@0BB@$00@@YA?AVDirtyFlags@@XZ @ 0x180015E64 (--$ConvertDirtyEnumToFlag@$MW4ToplevelWindowDirtyFlags@CTopLevelWindow@@0BB@$00@@YA-AVDirtyFlags.c)
 *     ?SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z @ 0x180015F50 (-SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z.c)
 *     ?InternalRelease@?$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ @ 0x18001727C (-InternalRelease@-$ComPtr@VCSpriteVisual@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z @ 0x180025A2C (-RemoveChild@CContainerVisual@@QEAAJPEAVCVisual@@@Z.c)
 *     ??$?9UICompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL@Microsoft@@YA_NAEBV?$ComPtr@UICompositionProjectedShadowReceiver@Composition@UI@Windows@@@01@$$T@Z @ 0x1800357D0 (--$-9UICompositionProjectedShadowReceiver@Composition@UI@Windows@@@WRL@Microsoft@@YA_NAEBV-$ComP.c)
 */

void __fastcall CTopLevelWindow::OnSystemBackdropUpdated(CContainerVisual **this)
{
  int *v2; // rax
  int *v3; // rax
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = ___ConvertDirtyEnumToFlag__MW4ATVDirtyFlags_CAnimatedTransitionVisual__0L__00__YA_AVDirtyFlags__XZ(&v4);
  CVisual::SetDirtyFlags((CVisual *)this, *v2);
  v3 = ___ConvertDirtyEnumToFlag__MW4ToplevelWindowDirtyFlags_CTopLevelWindow__0BB__00__YA_AVDirtyFlags__XZ(&v4);
  CVisual::SetDirtyFlags((CVisual *)this, *v3);
  if ( Microsoft::WRL::operator!=<Windows::UI::Composition::ICompositionProjectedShadowReceiver>(this + 33) )
  {
    CContainerVisual::RemoveChild(this[29], this[33]);
    Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(this + 33);
  }
}
