/*
 * XREFs of ?InvalidateTransformParent@CVisual@@IEAAXPEBVCVisualTree@@@Z @ 0x1800D4488
 * Callers:
 *     ?CalcTransform@CPreWalkVisual@@AEAAXPEAVCVisual@@PEBVCVisualTree@@_K@Z @ 0x1801E4FF0 (-CalcTransform@CPreWalkVisual@@AEAAXPEAVCVisual@@PEBVCVisualTree@@_K@Z.c)
 * Callees:
 *     ?PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z @ 0x180021C20 (-PropagateFlags@CVisual@@IEAAXW4VisualDirty@@@Z.c)
 *     ?GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ @ 0x1800CAED0 (-GetTransformParentDataInternal@CVisual@@QEBAPEAUTransformParentData@@XZ.c)
 *     ?EnsureTreeData@CVisual@@QEAAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x1800D47B0 (-EnsureTreeData@CVisual@@QEAAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 */

void __fastcall CVisual::InvalidateTransformParent(CVisual *this, CVisual **a2)
{
  const struct CVisualTree *v3; // r10
  struct CTreeData *v4; // rdi
  bool v5; // zf
  __int64 v6; // rcx

  if ( this != a2[9] && CVisual::GetTransformParentDataInternal(this) )
  {
    v4 = CVisual::EnsureTreeData(this, v3);
    v5 = *((_BYTE *)v4 + 13) == 0;
    v6 = *((_QWORD *)v4 + 31);
    *((_BYTE *)v4 + 12) = 0;
    *((_QWORD *)v4 + 29) = *(_QWORD *)(*(_QWORD *)(v6 + 24) + 880LL);
    if ( !v5 )
    {
      CVisual::PropagateFlags((__int64)this, 5u);
      *((_BYTE *)v4 + 137) = 1;
    }
  }
}
