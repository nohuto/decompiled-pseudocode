/*
 * XREFs of ??$_Emplace_reallocate@AEBULayoutData@CContent@@@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEAAPEAULayoutData@CContent@@QEAU23@AEBU23@@Z @ 0x18027D7D0
 * Callers:
 *     ?GetTextureMemoryLayoutData@CPrimitiveGroup@@UEBAJAEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x18027DD10 (-GetTextureMemoryLayoutData@CPrimitiveGroup@@UEBAJAEBUD2D_SIZE_F@@AEAV-$vector@ULayoutData@CCont.c)
 *     ?GetTextureMemoryLayoutData@CGradientBrush@@UEBAJAEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x18027E980 (-GetTextureMemoryLayoutData@CGradientBrush@@UEBAJAEBUD2D_SIZE_F@@AEAV-$vector@ULayoutData@CConte.c)
 *     ?GetTextureMemoryLayoutData@CBitmapRenderStrategy@@UEBAJPEBVCSurfaceBrush@@AEBUD2D_SIZE_F@@AEAV?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@@Z @ 0x180283AE0 (-GetTextureMemoryLayoutData@CBitmapRenderStrategy@@UEBAJPEBVCSurfaceBrush@@AEBUD2D_SIZE_F@@AEAV-.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Calculate_growth@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEBA_K_K@Z @ 0x18018FCBC (-_Calculate_growth@-$vector@ULayoutData@CContent@@V-$allocator@ULayoutData@CContent@@@std@@@std@.c)
 *     ??$_Get_size_of_n@$0DI@@std@@YA_K_K@Z @ 0x180196E1C (--$_Get_size_of_n@$0DI@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@YAPEAULayoutData@CContent@@QEAU12@0PEAU12@AEAV?$allocator@ULayoutData@CContent@@@0@@Z @ 0x1801A5A84 (--$_Uninitialized_move@PEAULayoutData@CContent@@V-$allocator@ULayoutData@CContent@@@std@@@std@@Y.c)
 *     ?_Xlength@?$vector@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@CAXXZ @ 0x1801C2418 (-_Xlength@-$vector@V-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ?_Change_array@?$vector@ULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@AEAAXQEAULayoutData@CContent@@_K1@Z @ 0x1801C5918 (-_Change_array@-$vector@ULayoutData@CContent@@V-$allocator@ULayoutData@CContent@@@std@@@std@@AEA.c)
 *     ??1_Reallocation_guard@?$vector@U_D3D11_PARAMETER_DESC@@V?$allocator@U_D3D11_PARAMETER_DESC@@@std@@@std@@QEAA@XZ @ 0x18025F4CC (--1_Reallocation_guard@-$vector@U_D3D11_PARAMETER_DESC@@V-$allocator@U_D3D11_PARAMETER_DESC@@@st.c)
 */

char *__fastcall std::vector<CContent::LayoutData>::_Emplace_reallocate<CContent::LayoutData const &>(
        void **a1,
        __int64 a2,
        __int128 *a3)
{
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // r15
  __int64 v9; // r14
  SIZE_T size_of; // rax
  __int64 v11; // rdx
  char *v12; // rax
  __int128 v13; // xmm0
  __int64 v14; // rbx
  char *v15; // r8
  char *v16; // rsi
  __int128 v17; // xmm1
  __int64 v18; // rdx
  void *v19; // rcx
  _QWORD v21[3]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v22; // [rsp+38h] [rbp-40h]
  char *v23; // [rsp+40h] [rbp-38h]

  v6 = (a2 - (__int64)*a1) / 56;
  v7 = 0x6DB6DB6DB6DB6DB7LL * (((_BYTE *)a1[1] - (_BYTE *)*a1) >> 3);
  if ( v7 == 0x492492492492492LL )
    std::vector<TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Xlength();
  v8 = v7 + 1;
  v9 = std::vector<CContent::LayoutData>::_Calculate_growth(a1, v7 + 1);
  size_of = std::_Get_size_of_n<56>(v9);
  v12 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of, v11);
  v13 = *a3;
  v14 = (__int64)v12;
  v21[0] = a1;
  v21[2] = v9;
  v15 = v12;
  v16 = &v12[56 * v6];
  v22 = (__int64)v16;
  *(_OWORD *)v16 = v13;
  v17 = a3[1];
  v23 = v16 + 56;
  *((_OWORD *)v16 + 1) = v17;
  *((_OWORD *)v16 + 2) = a3[2];
  *((_QWORD *)v16 + 6) = *((_QWORD *)a3 + 6);
  v18 = (__int64)a1[1];
  v19 = *a1;
  if ( a2 != v18 )
  {
    std::_Uninitialized_move<CContent::LayoutData *>(v19, a2, v12);
    v18 = (__int64)a1[1];
    v15 = v16 + 56;
    v19 = (void *)a2;
    v22 = v14;
  }
  std::_Uninitialized_move<CContent::LayoutData *>(v19, v18, v15);
  v21[1] = 0LL;
  std::vector<CContent::LayoutData>::_Change_array((__int64)a1, v14, v8, v9);
  std::vector<_D3D11_PARAMETER_DESC>::_Reallocation_guard::~_Reallocation_guard((__int64)v21);
  return v16;
}
