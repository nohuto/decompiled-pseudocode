/*
 * XREFs of ??$_Emplace_reallocate@AEBU_D3D11_PARAMETER_DESC@@@?$vector@U_D3D11_PARAMETER_DESC@@V?$allocator@U_D3D11_PARAMETER_DESC@@@std@@@std@@AEAAPEAU_D3D11_PARAMETER_DESC@@QEAU2@AEBU2@@Z @ 0x18025F350
 * Callers:
 *     ?Initialize@CShaderLinkingGraphBuilder@@QEAAJW4D3DShaderProfileVersion@@V?$span@$$CBUSignatureParameter@CShaderLinkingGraphBuilder@@$0?0@gsl@@@Z @ 0x1801473A4 (-Initialize@CShaderLinkingGraphBuilder@@QEAAJW4D3DShaderProfileVersion@@V-$span@$$CBUSignaturePa.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@VCShapeRenderTask@@V?$allocator@VCShapeRenderTask@@@std@@@std@@AEAAXQEAVCShapeRenderTask@@_K1@Z @ 0x1801512A0 (-_Change_array@-$vector@VCShapeRenderTask@@V-$allocator@VCShapeRenderTask@@@std@@@std@@AEAAXQEAV.c)
 *     ??$_Get_size_of_n@$0DI@@std@@YA_K_K@Z @ 0x180196E1C (--$_Get_size_of_n@$0DI@@std@@YA_K_K@Z.c)
 *     ??$_Uninitialized_move@PEAULayoutData@CContent@@V?$allocator@ULayoutData@CContent@@@std@@@std@@YAPEAULayoutData@CContent@@QEAU12@0PEAU12@AEAV?$allocator@ULayoutData@CContent@@@0@@Z @ 0x1801A5A84 (--$_Uninitialized_move@PEAULayoutData@CContent@@V-$allocator@ULayoutData@CContent@@@std@@@std@@Y.c)
 *     ?_Xlength@?$vector@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@CAXXZ @ 0x1801C2418 (-_Xlength@-$vector@V-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ??1_Reallocation_guard@?$vector@U_D3D11_PARAMETER_DESC@@V?$allocator@U_D3D11_PARAMETER_DESC@@@std@@@std@@QEAA@XZ @ 0x18025F4CC (--1_Reallocation_guard@-$vector@U_D3D11_PARAMETER_DESC@@V-$allocator@U_D3D11_PARAMETER_DESC@@@st.c)
 */

char *__fastcall std::vector<_D3D11_PARAMETER_DESC>::_Emplace_reallocate<_D3D11_PARAMETER_DESC const &>(
        void **a1,
        __int64 a2,
        __int128 *a3)
{
  unsigned __int64 v4; // rbx
  __int64 v7; // r14
  __int64 v8; // rbp
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  __int64 v13; // rdx
  char *v14; // rax
  __int128 v15; // xmm0
  __int64 v16; // rdi
  char *v17; // r8
  char *v18; // r14
  __int128 v19; // xmm1
  __int64 v20; // rdx
  void *v21; // rcx
  _QWORD v23[3]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v24; // [rsp+38h] [rbp-40h]
  char *v25; // [rsp+40h] [rbp-38h]

  v4 = 0x492492492492492LL;
  v7 = (a2 - (__int64)*a1) / 56;
  v8 = 0x6DB6DB6DB6DB6DB7LL * (((_BYTE *)a1[1] - (_BYTE *)*a1) >> 3);
  if ( v8 == 0x492492492492492LL )
    std::vector<TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Xlength();
  v9 = v8 + 1;
  v10 = 0x6DB6DB6DB6DB6DB7LL * (((_BYTE *)a1[2] - (_BYTE *)*a1) >> 3);
  v11 = v10 >> 1;
  if ( v10 <= 0x492492492492492LL - (v10 >> 1) )
  {
    v4 = v11 + v10;
    if ( v11 + v10 < v9 )
      v4 = v9;
  }
  size_of = std::_Get_size_of_n<56>(v4);
  v14 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of, v13);
  v15 = *a3;
  v16 = (__int64)v14;
  v23[0] = a1;
  v23[2] = v4;
  v17 = v14;
  v18 = &v14[56 * v7];
  v24 = (__int64)v18;
  *(_OWORD *)v18 = v15;
  v19 = a3[1];
  v25 = v18 + 56;
  *((_OWORD *)v18 + 1) = v19;
  *((_OWORD *)v18 + 2) = a3[2];
  *((_QWORD *)v18 + 6) = *((_QWORD *)a3 + 6);
  v20 = (__int64)a1[1];
  v21 = *a1;
  if ( a2 != v20 )
  {
    std::_Uninitialized_move<CContent::LayoutData *>(v21, a2, v14);
    v20 = (__int64)a1[1];
    v17 = v18 + 56;
    v21 = (void *)a2;
    v24 = v16;
  }
  std::_Uninitialized_move<CContent::LayoutData *>(v21, v20, v17);
  v23[1] = 0LL;
  std::vector<CShapeRenderTask>::_Change_array((__int64)a1, v16, v9, v4);
  std::vector<_D3D11_PARAMETER_DESC>::_Reallocation_guard::~_Reallocation_guard(v23);
  return v18;
}
