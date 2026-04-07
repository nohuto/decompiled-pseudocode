/*
 * XREFs of ?SetDesktopThumbnailVisual@CAnimationComponent@@QEAAXPEAVCPerMonitorDesktopThumbnail@@@Z @ 0x180098E28
 * Callers:
 *     ?CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT@@_N2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@@Z @ 0x1800CE8B0 (-CreateDesktopAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@HAEBUtagRECT.c)
 * Callees:
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CAnimationComponent::SetDesktopThumbnailVisual(
        CAnimationComponent *this,
        struct CPerMonitorDesktopThumbnail *a2)
{
  *((_QWORD *)this + 6) = a2;
  if ( a2 )
    CBaseObject::AddRef(a2);
}
