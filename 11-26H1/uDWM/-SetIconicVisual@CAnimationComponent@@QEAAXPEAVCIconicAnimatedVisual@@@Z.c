/*
 * XREFs of ?SetIconicVisual@CAnimationComponent@@QEAAXPEAVCIconicAnimatedVisual@@@Z @ 0x180098E84
 * Callers:
 *     ?GetIconicThumbnailRepresentation@CTransitionVisualController@@QEAAJPEAVCWindowData@@PEAVCAnimationComponent@@PEBUtagRECT@@U?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAPEAVCVisual@@@Z @ 0x1800CF648 (-GetIconicThumbnailRepresentation@CTransitionVisualController@@QEAAJPEAVCWindowData@@PEAVCAnimat.c)
 * Callees:
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 */

void __fastcall CAnimationComponent::SetIconicVisual(CAnimationComponent *this, struct CIconicAnimatedVisual *a2)
{
  *((_QWORD *)this + 19) = a2;
  if ( a2 )
    CBaseObject::AddRef(a2);
}
