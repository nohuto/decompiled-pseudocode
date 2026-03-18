/*
 * XREFs of ??1?$out_param_t@V?$unique_ptr@VCNineGridDrawListBrush@@U?$default_delete@VCNineGridDrawListBrush@@@std@@@std@@@details@wil@@QEAA@XZ @ 0x1801B7070
 * Callers:
 *     ?GenerateDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1801A76A0 (-GenerateDrawList@CDropShadow@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z.c)
 *     ?FillHollowRectangleWithSolidColor@CDrawingContext@@QEAAJAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@0AEBU_D3DCOLORVALUE@@PEBUD2D_MATRIX_3X2_F@@PEBV2@PEAVCDrawListEntryBuilder@@@Z @ 0x180235E6C (-FillHollowRectangleWithSolidColor@CDrawingContext@@QEAAJAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT.c)
 *     ?CreateLayoutGeometryDrawListBrush@CNineGridBrush@@MEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAPEAVCDrawListBrush@@@Z @ 0x18027CB10 (-CreateLayoutGeometryDrawListBrush@CNineGridBrush@@MEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::out_param_t<std::unique_ptr<CNineGridDrawListBrush>>::~out_param_t<std::unique_ptr<CNineGridDrawListBrush>>(
        __int64 a1)
{
  CNineGridDrawListBrush *v1; // rdx

  if ( *(_BYTE *)(a1 + 16) )
  {
    v1 = **(CNineGridDrawListBrush ***)a1;
    **(_QWORD **)a1 = *(_QWORD *)(a1 + 8);
    if ( v1 )
      std::default_delete<CNineGridDrawListBrush>::operator()(a1, v1);
  }
}
