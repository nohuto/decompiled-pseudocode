/*
 * XREFs of ??$_Reallocate@$0A@@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@AEAAXAEA_K@Z @ 0x180019BF0
 * Callers:
 *     ?reserve@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@QEAAX_K@Z @ 0x180019B90 (-reserve@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@QEAAX_K@Z.c)
 *     ?GatherEffectInputs@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAV?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@@Z @ 0x18001AAD4 (-GatherEffectInputs@CBrushRenderingGraph@@IEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAV-$vector.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@IPEAVCDrawListCache@@@Z @ 0x18001B858 (-RenderSubgraphs@CBrushRenderingGraph@@QEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800E95D0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?_Change_array@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@AEAAXQEAUEffectInput@@_K1@Z @ 0x1801A3618 (-_Change_array@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@AEAAXQEAUEffectInpu.c)
 *     ??$_Uninitialized_copy@PEAUEffectInput@@PEAU1@V?$allocator@UEffectInput@@@std@@@std@@YAPEAUEffectInput@@PEAU1@00AEAV?$allocator@UEffectInput@@@0@@Z @ 0x1801B356C (--$_Uninitialized_copy@PEAUEffectInput@@PEAU1@V-$allocator@UEffectInput@@@std@@@std@@YAPEAUEffec.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x180209E38 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     ??1_Simple_reallocation_guard@?$vector@UEffectInput@@V?$allocator@UEffectInput@@@std@@@std@@QEAA@XZ @ 0x1802883D4 (--1_Simple_reallocation_guard@-$vector@UEffectInput@@V-$allocator@UEffectInput@@@std@@@std@@QEAA.c)
 */

__int64 __fastcall std::vector<EffectInput>::_Reallocate<0>(__int64 a1, _QWORD *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  v4 = 0x6DB6DB6DB6DB6DB7LL * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 4);
  if ( *a2 > 0x249249249249249uLL )
    std::_Throw_bad_array_new_length();
  v5 = std::_Allocate<16,std::_Default_allocate_traits>(112LL * *a2);
  v8 = *a2;
  std::_Uninitialized_copy<EffectInput *,EffectInput *,std::allocator<EffectInput>>(*(struct EffectInput **)a1);
  std::vector<EffectInput>::_Change_array(a1, v5, v4, *a2, a1, 0LL, v8);
  return std::vector<EffectInput>::_Simple_reallocation_guard::~_Simple_reallocation_guard(&v7);
}
