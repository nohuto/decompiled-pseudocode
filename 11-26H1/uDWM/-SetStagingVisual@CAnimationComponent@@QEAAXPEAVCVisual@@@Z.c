/*
 * XREFs of ?SetStagingVisual@CAnimationComponent@@QEAAXPEAVCVisual@@@Z @ 0x180098EA8
 * Callers:
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x18006B854 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?GetSurfaceFromExistingAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@PEBUtagRECT@@_NPEAVCVisualBrush@@PEA_NPEAUD2D_POINT_3F@@@Z @ 0x1800CF7D8 (-GetSurfaceFromExistingAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationCompon.c)
 * Callees:
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CAnimationComponent::SetStagingVisual(CAnimationComponent *this, struct CVisual *a2)
{
  *((_QWORD *)this + 4) = a2;
  if ( a2 )
    CBaseObject::AddRef(a2);
}
