/*
 * XREFs of ?SetTransform@CNineGridBrush@@QEAAXAEBUD2D_MATRIX_3X2_F@@@Z @ 0x1801DB114
 * Callers:
 *     ?AdjustNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCNineGridBrush@@AEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801988A4 (-AdjustNineGridBrush@CProjectedShadow@@AEAAJPEAVCDrawingContext@@PEAVCNineGridBrush@@AEBV-$TMilR.c)
 * Callees:
 *     <none>
 */

void __fastcall CNineGridBrush::SetTransform(CNineGridBrush *this, const struct D2D_MATRIX_3X2_F *a2)
{
  __int64 v2; // rax
  void (__fastcall *v3)(CNineGridBrush *, __int64, CNineGridBrush *); // rax

  v2 = *(_QWORD *)this;
  *(_OWORD *)((char *)this + 152) = *(_OWORD *)&a2->m11;
  v3 = *(void (__fastcall **)(CNineGridBrush *, __int64, CNineGridBrush *))(v2 + 80);
  *((_QWORD *)this + 21) = *(_QWORD *)&a2->m[2][0];
  v3(this, 6LL, this);
}
