/*
 * XREFs of ?SetRelativeSize@CVisual@@QEAAXMM@Z @ 0x1801B32D0
 * Callers:
 *     ?SetProperty@CVisual@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801112C0 (-SetProperty@CVisual@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessSetRelativeSize@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETRELATIVESIZE@@@Z @ 0x1801B32AC (-ProcessSetRelativeSize@CVisual@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_VISUAL_SETRELATIVESIZE@@.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x180021C20 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180022E18 (-InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x180026744 (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?GetRelativeLayoutSizeInternal@CVisual@@QEBA?AUD2D_SIZE_F@@XZ @ 0x18008DBC0 (-GetRelativeLayoutSizeInternal@CVisual@@QEBA-AUD2D_SIZE_F@@XZ.c)
 *     ?SetRelativeLayoutSizeInternal@CVisual@@QEAAXUD2D_SIZE_F@@@Z @ 0x18011021C (-SetRelativeLayoutSizeInternal@CVisual@@QEAAXUD2D_SIZE_F@@@Z.c)
 *     ?NotifyVector2PropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@AEBUD2DVector2@@@Z @ 0x180111700 (-NotifyVector2PropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@AEBUD2DVe.c)
 */

// local variable allocation has failed, the output may be wrong!
void __fastcall CVisual::SetRelativeSize(CVisual *this, double a2, double a3)
{
  unsigned __int64 v4; // [rsp+68h] [rbp+20h] BYREF

  CVisual::GetRelativeLayoutSizeInternal(this, &v4);
  if ( *(float *)&v4 != *(float *)&a2 || *((float *)&v4 + 1) != *(float *)&a3 )
  {
    CVisual::SetRelativeLayoutSizeInternal(
      this,
      (struct D2D_SIZE_F)*(_OWORD *)&_mm_unpacklo_ps(*(__m128 *)&a2, *(__m128 *)&a3));
    CVisual::PropagateFlags((__int64)this, 5u);
    CVisual::OnOuterTransformChanged(this);
    v4 = __PAIR64__(LODWORD(a3), LODWORD(a2));
    CPropertyChangeResource::NotifyVector2PropertyChanged((__int64)this, 0x1Fu, (__int64 *)&v4);
    if ( *((_QWORD *)this + 6) )
      CResource::InvalidateConsumingAnimationsInternal((__int64)this);
  }
}
