/*
 * XREFs of ??$_Emplace_reallocate@UFragmentInput@CRenderingTechniqueFragment@@@?$vector@UFragmentInput@CRenderingTechniqueFragment@@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@AEAAPEAUFragmentInput@CRenderingTechniqueFragment@@QEAU23@$$QEAU23@@Z @ 0x1801CE5C0
 * Callers:
 *     ?AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1800FB9F0 (-AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechnique.c)
 *     ??$emplace_back@UFragmentInput@CRenderingTechniqueFragment@@@?$vector@UFragmentInput@CRenderingTechniqueFragment@@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@QEAAAEAUFragmentInput@CRenderingTechniqueFragment@@$$QEAU23@@Z @ 0x1802B3958 (--$emplace_back@UFragmentInput@CRenderingTechniqueFragment@@@-$vector@UFragmentInput@CRenderingT.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x1800E8734 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_move@PEAUFragmentInput@CRenderingTechniqueFragment@@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@YAPEAUFragmentInput@CRenderingTechniqueFragment@@QEAU12@0PEAU12@AEAV?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@0@@Z @ 0x1800FB4A4 (--$_Uninitialized_move@PEAUFragmentInput@CRenderingTechniqueFragment@@V-$allocator@UFragmentInpu.c)
 *     ?_Change_array@?$vector@UFragmentInput@CRenderingTechniqueFragment@@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@AEAAXQEAUFragmentInput@CRenderingTechniqueFragment@@_K1@Z @ 0x1800FC640 (-_Change_array@-$vector@UFragmentInput@CRenderingTechniqueFragment@@V-$allocator@UFragmentInput@.c)
 *     ?_Xlength@?$vector@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@CAXXZ @ 0x1801C2418 (-_Xlength@-$vector@V-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ??1_Reallocation_guard@?$vector@UFragmentInput@CRenderingTechniqueFragment@@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@QEAA@XZ @ 0x18028BAF0 (--1_Reallocation_guard@-$vector@UFragmentInput@CRenderingTechniqueFragment@@V-$allocator@UFragme.c)
 */

char *__fastcall std::vector<CRenderingTechniqueFragment::FragmentInput>::_Emplace_reallocate<CRenderingTechniqueFragment::FragmentInput>(
        __int64 **a1,
        __int64 *a2,
        __int64 *a3)
{
  unsigned __int64 v3; // rbx
  signed __int64 v4; // r14
  __int64 v6; // rax
  unsigned __int64 v9; // rbp
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  SIZE_T size_of; // rax
  __int64 v13; // rdx
  char *v14; // rax
  __int64 v15; // rcx
  char *v16; // r14
  __int64 v17; // rsi
  char *v18; // r8
  __int64 v19; // rcx
  __int64 *v20; // rdx
  __int64 *v21; // rcx
  _QWORD v23[3]; // [rsp+20h] [rbp-58h] BYREF
  char *v24; // [rsp+38h] [rbp-40h]
  _QWORD *v25; // [rsp+40h] [rbp-38h]

  v3 = 0xFFFFFFFFFFFFFFFLL;
  v4 = (char *)a2 - (char *)*a1;
  v6 = ((char *)a1[1] - (char *)*a1) >> 4;
  if ( v6 == 0xFFFFFFFFFFFFFFFLL )
    std::vector<TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Xlength();
  v9 = v6 + 1;
  v10 = ((char *)a1[2] - (char *)*a1) >> 4;
  v11 = v10 >> 1;
  if ( v10 <= 0xFFFFFFFFFFFFFFFLL - (v10 >> 1) )
  {
    v3 = v11 + v10;
    if ( v11 + v10 < v9 )
      v3 = v6 + 1;
  }
  size_of = std::_Get_size_of_n<16>(v3);
  v14 = (char *)std::_Allocate<16,std::_Default_allocate_traits>(size_of, v13);
  v15 = *a3;
  v16 = &v14[v4 & 0xFFFFFFFFFFFFFFF0uLL];
  v23[0] = a1;
  v17 = (__int64)v14;
  v23[2] = v3;
  v24 = v16;
  v18 = v14;
  *(_QWORD *)v16 = v15;
  v19 = a3[1];
  a3[1] = 0LL;
  *((_QWORD *)v16 + 1) = v19;
  v20 = a1[1];
  v21 = *a1;
  v25 = v16 + 16;
  if ( a2 != v20 )
  {
    std::_Uninitialized_move<CRenderingTechniqueFragment::FragmentInput *>(v21, a2, v14);
    v20 = a1[1];
    v18 = v16 + 16;
    v21 = a2;
    v24 = (char *)v17;
  }
  std::_Uninitialized_move<CRenderingTechniqueFragment::FragmentInput *>(v21, v20, v18);
  v23[1] = 0LL;
  std::vector<CRenderingTechniqueFragment::FragmentInput>::_Change_array((__int64)a1, v17, v9, v3);
  std::vector<CRenderingTechniqueFragment::FragmentInput>::_Reallocation_guard::~_Reallocation_guard(v23);
  return v16;
}
