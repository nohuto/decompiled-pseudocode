/*
 * XREFs of ?AddTransientInkDirtyRegion@CDrawingContext@@QEAAXAEBVCRegion@@@Z @ 0x180172968
 * Callers:
 *     ?DrawFallback@CSuperWetInkScribbleBase@@UEAAJPEAVCDrawingContext@@PEAV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801725B0 (-DrawFallback@CSuperWetInkScribbleBase@@UEAAJPEAVCDrawingContext@@PEAV-$TMilRect_@MUD2D_RECT_F@@.c)
 * Callees:
 *     ?GetRectangles@CRegion@@QEBAIPEAV?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@@Z @ 0x1800566F0 (-GetRectangles@CRegion@@QEBAIPEAV-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@@Z.c)
 *     ??$_Reallocate@$0A@@?$vector@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAXAEA_K@Z @ 0x1800568E0 (--$_Reallocate@$0A@@-$vector@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@AEAAXAEA_K@Z.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ?AddRectangles@CRegion@@QEAAXPEBUtagRECT@@I@Z @ 0x1800EA51C (-AddRectangles@CRegion@@QEAAXPEBUtagRECT@@I@Z.c)
 *     std::transform_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_tagRECT______std::back_insert_iterator_std::vector_tagRECT_std::allocator_tagRECT_______CDrawingContext::AddTransientInkDirtyRegion_::_2_::_lambda_1___ @ 0x180172A74 (std--transform_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_tagRECT______std--back_.c)
 *     ?_Xlength@?$vector@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@CAXXZ @ 0x1801C2418 (-_Xlength@-$vector@V-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 */

void __fastcall CDrawingContext::AddTransientInkDirtyRegion(CDrawingContext *this, int **a2)
{
  __int64 v3; // r9
  int v4; // r8d
  int v5; // edx
  unsigned __int64 v6; // rax
  struct tagRECT *v7[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v8; // [rsp+40h] [rbp-20h]
  __int128 v9; // [rsp+48h] [rbp-18h] BYREF
  __int64 v10; // [rsp+58h] [rbp-8h]
  unsigned __int64 v11; // [rsp+80h] [rbp+20h] BYREF

  v10 = 0LL;
  v9 = 0LL;
  CRegion::GetRectangles(a2, &v9);
  v4 = DWORD2(v9);
  v5 = v9;
  v8 = 0LL;
  v6 = (__int64)(*((_QWORD *)&v9 + 1) - v9) >> 4;
  v11 = v6;
  *(_OWORD *)v7 = 0LL;
  if ( v6 )
  {
    if ( v6 > 0xFFFFFFFFFFFFFFFLL )
      std::vector<TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Xlength(
        0xFFFFFFFFFFFFFFFLL,
        v9,
        *((_QWORD *)&v9 + 1),
        v3);
    std::vector<tagRECT>::_Reallocate<0>((__int64 *)v7, &v11);
    v4 = DWORD2(v9);
    v5 = v9;
  }
  std::transform_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_tagRECT______std::back_insert_iterator_std::vector_tagRECT_std::allocator_tagRECT_______CDrawingContext::AddTransientInkDirtyRegion_::_2_::_lambda_1___(
    (unsigned int)&v11,
    v5,
    v4,
    (unsigned int)v7,
    (__int64)this);
  CRegion::AddRectangles((CDrawingContext *)((char *)this + 7992), v7[0], v7[1] - v7[0]);
  if ( v7[0] )
  {
    std::_Deallocate<16>(v7[0], (v8 - (unsigned __int64)v7[0]) & 0xFFFFFFFFFFFFFFF0uLL);
    v8 = 0LL;
    *(_OWORD *)v7 = 0LL;
  }
  if ( (_QWORD)v9 )
    std::_Deallocate<16>((void *)v9, (v10 - v9) & 0xFFFFFFFFFFFFFFF0uLL);
}
