/*
 * XREFs of ?SetStagingVisual@CAnimationComponent@@QEAAXPEAVCVisual@@@Z @ 0x1800A654C
 * Callers:
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x180025F08 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?GetSurfaceFromExistingAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@PEBUtagRECT@@_NPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualImageProxy@@PEA_NPEAUD2D_POINT_3F@@@Z @ 0x180084524 (-GetSurfaceFromExistingAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationCompon.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x180008530 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 */

void __fastcall CAnimationComponent::SetStagingVisual(CAnimationComponent *this, struct CVisual *a2)
{
  *((_QWORD *)this + 4) = a2;
  if ( a2 )
    CMILRefCountBase::AddRef(a2);
}
