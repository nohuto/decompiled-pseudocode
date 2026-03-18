/*
 * XREFs of ??$_Resize_reallocate@U_Value_init_tag@std@@@?$vector@USubgraphOutput@CBrushRenderingGraphBuilder@@V?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@AEAAX_KAEBU_Value_init_tag@1@@Z @ 0x1801BE4BC
 * Callers:
 *     ?AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechniqueFragment@@@Z @ 0x1800FB9F0 (-AddEffectBrush@CBrushRenderingGraphBuilder@@AEAAJPEAVCEffectBrush@@_NPEAPEAVCRenderingTechnique.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BA@@std@@YA_K_K@Z @ 0x1800E8734 (--$_Get_size_of_n@$0BA@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@YAPEAUSubgraphOutput@CBrushRenderingGraphBuilder@@PEAU12@_KAEAV?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@0@@Z @ 0x1800FB250 (--$_Uninitialized_value_construct_n@V-$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@s.c)
 *     ??$_Destroy_range@V?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@YAXPEAUSubgraphOutput@CBrushRenderingGraphBuilder@@QEAU12@AEAV?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@0@@Z @ 0x1800FC604 (--$_Destroy_range@V-$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@YAXPEAUS.c)
 *     ?_Xlength@?$vector@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@V?$allocator@V?$TMil3DRect@MV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@UD3D_RECT_F@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@std@@@std@@CAXXZ @ 0x1801C2418 (-_Xlength@-$vector@V-$TMil3DRect@MV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@U.c)
 *     ?_Change_array@?$vector@USubgraphOutput@CBrushRenderingGraphBuilder@@V?$allocator@USubgraphOutput@CBrushRenderingGraphBuilder@@@std@@@std@@AEAAXQEAUSubgraphOutput@CBrushRenderingGraphBuilder@@_K1@Z @ 0x1801C906C (-_Change_array@-$vector@USubgraphOutput@CBrushRenderingGraphBuilder@@V-$allocator@USubgraphOutpu.c)
 *     ??1_Reallocation_guard@?$vector@UFragmentInput@CRenderingTechniqueFragment@@V?$allocator@UFragmentInput@CRenderingTechniqueFragment@@@std@@@std@@QEAA@XZ @ 0x18028BAF0 (--1_Reallocation_guard@-$vector@UFragmentInput@CRenderingTechniqueFragment@@V-$allocator@UFragme.c)
 */

__int64 __fastcall std::vector<CBrushRenderingGraphBuilder::SubgraphOutput>::_Resize_reallocate<std::_Value_init_tag>(
        _QWORD *a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4)
{
  unsigned __int64 v4; // rbx
  __int64 v7; // rbp
  unsigned __int64 v8; // rcx
  __int64 v9; // rbp
  unsigned __int64 v10; // rdx
  SIZE_T size_of; // rax
  __int64 v12; // rdx
  LPVOID v13; // rax
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rax
  _QWORD *v21; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int64 v22; // [rsp+30h] [rbp-28h]
  __int64 v23; // [rsp+38h] [rbp-20h]
  __int64 v24; // [rsp+40h] [rbp-18h]

  v4 = 0xFFFFFFFFFFFFFFFLL;
  if ( a2 > 0xFFFFFFFFFFFFFFFLL )
    std::vector<TMil3DRect<float,TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded>,D3D_RECT_F,MilPointAndSizeF,RectUniqueness::NotNeeded>>::_Xlength(
      a1,
      a2,
      a3,
      a4);
  v7 = a1[1] - *a1;
  v8 = (__int64)(a1[2] - *a1) >> 4;
  v9 = v7 >> 4;
  v10 = v8 >> 1;
  if ( v8 <= 0xFFFFFFFFFFFFFFFLL - (v8 >> 1) )
  {
    v4 = v10 + v8;
    if ( v10 + v8 < a2 )
      v4 = a2;
  }
  size_of = std::_Get_size_of_n<16>(v4);
  v13 = std::_Allocate<16,std::_Default_allocate_traits>(size_of, v12);
  v21 = a1;
  v22 = v4;
  v23 = (__int64)v13 + 16 * v9;
  v14 = (__int64)v13;
  v15 = std::_Uninitialized_value_construct_n<std::allocator<CBrushRenderingGraphBuilder::SubgraphOutput>>(v23, a2 - v9);
  v16 = a1[1];
  v17 = v14;
  v18 = *a1;
  v24 = v15;
  while ( v18 != v16 )
  {
    *(_DWORD *)v17 = *(_DWORD *)v18;
    v19 = *(_QWORD *)(v18 + 8);
    *(_QWORD *)(v18 + 8) = 0LL;
    *(_QWORD *)(v17 + 8) = v19;
    v17 += 16LL;
    v18 += 16LL;
  }
  std::_Destroy_range<std::allocator<CBrushRenderingGraphBuilder::SubgraphOutput>>(v17, v17);
  std::vector<CBrushRenderingGraphBuilder::SubgraphOutput>::_Change_array(a1, v14, a2, v4, v21, 0LL, v22, v23, v24);
  return std::vector<CRenderingTechniqueFragment::FragmentInput>::_Reallocation_guard::~_Reallocation_guard(&v21);
}
