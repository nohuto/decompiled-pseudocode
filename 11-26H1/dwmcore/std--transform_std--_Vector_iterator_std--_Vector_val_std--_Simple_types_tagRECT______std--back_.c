/*
 * XREFs of std::transform_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_tagRECT______std::back_insert_iterator_std::vector_tagRECT_std::allocator_tagRECT_______CDrawingContext::AddTransientInkDirtyRegion_::_2_::_lambda_1___ @ 0x180172A74
 * Callers:
 *     ?AddTransientInkDirtyRegion@CDrawingContext@@QEAAXAEBVCRegion@@@Z @ 0x180172968 (-AddTransientInkDirtyRegion@CDrawingContext@@QEAAXAEBVCRegion@@@Z.c)
 * Callees:
 *     ?PixelAlign@@YA?AV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@AEBUD2D_RECT_F@@@Z @ 0x18008AF90 (-PixelAlign@@YA-AV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniq.c)
 *     ?CalcWorldSpaceClippedBounds@CDrawingContext@@QEBAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@PEAV2@@Z @ 0x180172B60 (-CalcWorldSpaceClippedBounds@CDrawingContext@@QEBAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD.c)
 *     ??$_Emplace_reallocate@UtagRECT@@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAPEAUtagRECT@@QEAU2@$$QEAU2@@Z @ 0x1801E57D0 (--$_Emplace_reallocate@UtagRECT@@@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@AEAAPEAU.c)
 */

_QWORD *__fastcall std::transform_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_tagRECT______std::back_insert_iterator_std::vector_tagRECT_std::allocator_tagRECT_______CDrawingContext::AddTransientInkDirtyRegion_::_2_::_lambda_1___(
        _QWORD *a1,
        int *a2,
        int *a3,
        __int64 a4,
        __int64 a5)
{
  double v5; // xmm2_8
  int *v9; // rsi
  _OWORD *v10; // rdx
  __int128 v12; // [rsp+20h] [rbp-40h]
  __int128 v13; // [rsp+30h] [rbp-30h] BYREF
  __int128 v14; // [rsp+40h] [rbp-20h] BYREF
  __int128 v15; // [rsp+50h] [rbp-10h] BYREF

  if ( a2 != a3 )
  {
    v9 = a2 + 2;
    do
    {
      *(float *)&v12 = (float)*(v9 - 2);
      *((float *)&v12 + 1) = (float)*(v9 - 1);
      *((float *)&v12 + 2) = (float)*v9;
      *((float *)&v12 + 3) = (float)v9[1];
      v13 = 0LL;
      v15 = v12;
      CDrawingContext::CalcWorldSpaceClippedBounds(a5, &v15, &v13);
      PixelAlign((int *)&v14, (unsigned int *)&v13, v5);
      v10 = *(_OWORD **)(a4 + 8);
      if ( v10 == *(_OWORD **)(a4 + 16) )
      {
        std::vector<tagRECT>::_Emplace_reallocate<tagRECT>(a4, v10, &v14);
      }
      else
      {
        *v10 = v14;
        *(_QWORD *)(a4 + 8) += 16LL;
      }
      v9 += 4;
    }
    while ( v9 - 2 != a3 );
  }
  *a1 = a4;
  return a1;
}
