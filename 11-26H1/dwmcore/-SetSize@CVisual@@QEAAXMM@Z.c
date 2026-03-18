/*
 * XREFs of ?SetSize@CVisual@@QEAAXMM@Z @ 0x18011165C
 * Callers:
 *     ?SetProperty@CVisual@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801112C0 (-SetProperty@CVisual@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x180021C20 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x180022E18 (-InvalidateConsumingAnimationsInternal@CResource@@AEAAXUDCOMPOSITION_PROPERTY_ID@@@Z.c)
 *     ?OnOuterTransformChanged@CVisual@@AEAAXXZ @ 0x180026744 (-OnOuterTransformChanged@CVisual@@AEAAXXZ.c)
 *     ?NotifyVector2PropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@AEBUD2DVector2@@@Z @ 0x180111700 (-NotifyVector2PropertyChanged@CPropertyChangeResource@@IEBAJUDCOMPOSITION_PROPERTY_ID@@AEBUD2DVe.c)
 */

void __fastcall CVisual::SetSize(CVisual *this, float a2, float a3)
{
  float *v3; // rax
  float v5; // [rsp+50h] [rbp+8h] BYREF
  float v6; // [rsp+54h] [rbp+Ch]

  v3 = (float *)((char *)this + 136);
  if ( *((float *)this + 33) != a2 || *v3 != a3 )
  {
    *((float *)this + 33) = a2;
    *v3 = a3;
    CVisual::PropagateFlags((__int64)this, 5u);
    CVisual::OnOuterTransformChanged(this);
    v5 = a2;
    v6 = a3;
    CPropertyChangeResource::NotifyVector2PropertyChanged(this, 29LL, &v5);
    if ( *((_QWORD *)this + 6) )
      CResource::InvalidateConsumingAnimationsInternal((__int64)this);
  }
}
