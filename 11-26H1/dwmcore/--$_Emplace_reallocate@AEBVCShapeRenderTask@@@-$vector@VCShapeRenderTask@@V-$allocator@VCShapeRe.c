/*
 * XREFs of ??$_Emplace_reallocate@AEBVCShapeRenderTask@@@?$vector@VCShapeRenderTask@@V?$allocator@VCShapeRenderTask@@@std@@@std@@AEAAPEAVCShapeRenderTask@@QEAV2@AEBV2@@Z @ 0x18019B418
 * Callers:
 *     ??$Walk@VCShapeDrawingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeDrawingContext@@@Z @ 0x180040BC0 (--$Walk@VCShapeDrawingContext@@@CShapeTreeIterator@@QEAAJPEAVCVectorShape@@PEAVCShapeDrawingCont.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@VCShapeRenderTask@@V?$allocator@VCShapeRenderTask@@@std@@@std@@AEAAXQEAVCShapeRenderTask@@_K1@Z @ 0x1801512A0 (-_Change_array@-$vector@VCShapeRenderTask@@V-$allocator@VCShapeRenderTask@@@std@@@std@@AEAAXQEAV.c)
 *     ?_Calculate_growth@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEBA_K_K@Z @ 0x18018FCBC (-_Calculate_growth@-$vector@ULayoutData@CContent@@V-$allocator@ULayoutData@CContent@@@std@@@std@.c)
 *     ??$_Get_size_of_n@$0DI@@std@@YA_K_K@Z @ 0x180196E1C (--$_Get_size_of_n@$0DI@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@YAPEAULayoutData@CContent@@QEAU12@0PEAU12@AEAV?$allocator@ULayoutData@CContent@@@0@@Z @ 0x1801A5A84 (--$_Uninitialized_move@PEAULayoutData@CContent@@V-$allocator@ULayoutData@CContent@@@std@@@std@@Y.c)
 *     ?_Xlength@?$vector@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@CAXXZ @ 0x1801C2418 (-_Xlength@-$vector@V-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ??1_Reallocation_guard@?$vector@U_D3D11_PARAMETER_DESC@@V?$allocator@U_D3D11_PARAMETER_DESC@@@std@@@std@@QEAA@XZ @ 0x18025F4CC (--1_Reallocation_guard@-$vector@U_D3D11_PARAMETER_DESC@@V-$allocator@U_D3D11_PARAMETER_DESC@@@st.c)
 */

char *__fastcall std::vector<CShapeRenderTask>::_Emplace_reallocate<CShapeRenderTask const &>(
        __int64 *a1,
        __int64 a2,
        __int128 *a3)
{
  __int64 v4; // r9
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 v9; // r15
  __int64 v10; // r14
  SIZE_T size_of; // rax
  __int64 v12; // rdx
  char *v13; // rax
  __int128 v14; // xmm0
  __int64 v15; // rbx
  char *v16; // r8
  char *v17; // rsi
  __int128 v18; // xmm1
  __int64 v19; // rdx
  __int64 v20; // rcx
  _QWORD v22[3]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v23; // [rsp+38h] [rbp-40h]
  char *v24; // [rsp+40h] [rbp-38h]

  v4 = a2 - *a1;
  v7 = v4 / 56;
  v8 = 0x6DB6DB6DB6DB6DB7LL * ((a1[1] - *a1) >> 3);
  if ( v8 == 0x492492492492492LL )
    std::vector<TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Xlength(
      0x492492492492492LL,
      (unsigned __int128)(v4 * (__int128)0x4924924924924925LL) >> 64,
      a3,
      v4);
  v9 = v8 + 1;
  v10 = std::vector<CContent::LayoutData>::_Calculate_growth(a1, v8 + 1);
  size_of = std::_Get_size_of_n<56>(v10);
  v13 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of, v12);
  v14 = *a3;
  v15 = (__int64)v13;
  v22[0] = a1;
  v22[2] = v10;
  v16 = v13;
  v17 = &v13[56 * v7];
  v23 = (__int64)v17;
  *(_OWORD *)v17 = v14;
  v18 = a3[1];
  v24 = v17 + 56;
  *((_OWORD *)v17 + 1) = v18;
  *((_OWORD *)v17 + 2) = a3[2];
  *((_QWORD *)v17 + 6) = *((_QWORD *)a3 + 6);
  v19 = a1[1];
  v20 = *a1;
  if ( a2 != v19 )
  {
    std::_Uninitialized_move<CContent::LayoutData *>(v20, a2, v13);
    v19 = a1[1];
    v16 = v17 + 56;
    v20 = a2;
    v23 = v15;
  }
  std::_Uninitialized_move<CContent::LayoutData *>(v20, v19, v16);
  v22[1] = 0LL;
  std::vector<CShapeRenderTask>::_Change_array((__int64)a1, v15, v9, v10);
  std::vector<_D3D11_PARAMETER_DESC>::_Reallocation_guard::~_Reallocation_guard(v22);
  return v17;
}
