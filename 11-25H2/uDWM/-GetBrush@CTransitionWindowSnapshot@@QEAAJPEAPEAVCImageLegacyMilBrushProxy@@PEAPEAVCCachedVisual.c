/*
 * XREFs of ?GetBrush@CTransitionWindowSnapshot@@QEAAJPEAPEAVCImageLegacyMilBrushProxy@@PEAPEAVCCachedVisualImageProxy@@PEAM@Z @ 0x18007E558
 * Callers:
 *     ?GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCRectResourceProxy@@1PEAPEAVCDoubleResourceProxy@@PEAPEAVCSizeResourceProxy@@PEAPEAVCCachedVisualImageProxy@@PEAPEAVCImageLegacyMilBrushProxy@@@Z @ 0x18001ED6C (-GetBrush@CSecondaryWindowRepresentation@@QEAAJW4Enum@MilStretch@@PEAPEAVCRectResourceProxy@@1PE.c)
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x180025F08 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x180008530 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 */

__int64 __fastcall CTransitionWindowSnapshot::GetBrush(
        CTransitionWindowSnapshot *this,
        struct CImageLegacyMilBrushProxy **a2,
        struct CCachedVisualImageProxy **a3,
        float *a4)
{
  unsigned int v4; // ebx
  CMILRefCountBase *v9; // rcx
  CMILRefCountBase *v10; // rcx

  v4 = 0;
  if ( a2 && a3 && *((_QWORD *)this + 32) && *((_QWORD *)this + 31) )
  {
    if ( *a2 )
      CBaseObject::Release(*a2);
    *a2 = (struct CImageLegacyMilBrushProxy *)*((_QWORD *)this + 32);
    v9 = (CMILRefCountBase *)*((_QWORD *)this + 32);
    if ( v9 )
      CMILRefCountBase::AddRef(v9);
    if ( *a3 )
      CBaseObject::Release(*a3);
    *a3 = (struct CCachedVisualImageProxy *)*((_QWORD *)this + 31);
    v10 = (CMILRefCountBase *)*((_QWORD *)this + 31);
    if ( v10 )
      CMILRefCountBase::AddRef(v10);
    *a4 = *((float *)this + 78);
  }
  else
  {
    return (unsigned int)-2147024809;
  }
  return v4;
}
