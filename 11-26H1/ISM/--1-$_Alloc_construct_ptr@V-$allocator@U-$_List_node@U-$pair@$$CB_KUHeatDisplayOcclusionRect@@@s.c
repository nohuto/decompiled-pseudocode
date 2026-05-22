/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_List_node@U?$pair@$$CB_KUHeatDisplayOcclusionRect@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180197110
 * Callers:
 *     ??$emplace@AEA_KUHeatDisplayOcclusionRect@@@?$_Hash@V?$_Umap_traits@_KUHeatDisplayOcclusionRect@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUHeatDisplayOcclusionRect@@@std@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUHeatDisplayOcclusionRect@@@std@@@std@@@std@@@std@@_N@1@AEA_K$$QEAUHeatDisplayOcclusionRect@@@Z @ 0x180196A10 (--$emplace@AEA_KUHeatDisplayOcclusionRect@@@-$_Hash@V-$_Umap_traits@_KUHeatDisplayOcclusionRect@.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CB_KUHeatDisplayOcclusionRect@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180197190 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CB_KUHeatDisplayOcclusionRect@@.c)
 *     _std::_List_node_emplace_op2_std::allocator_std::_List_node_std::pair_unsigned___int64_const__HeatDisplayOcclusionRect__void_______::_List_node_emplace_op2_std::allocator_std::_List_node_std::pair_unsigned___int64_const__HeatDisplayOcclusionRect__void________unsigned___int64_&_HeatDisplayOcclusionRect__::_1_::dtor$0 @ 0x1801DC7FE (_std--_List_node_emplace_op2_std--allocator_std--_List_node_std--pair_unsigned___int64_const__He.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<unsigned __int64 const,HeatDisplayOcclusionRect>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<unsigned __int64 const,HeatDisplayOcclusionRect>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16>(v1, (struct std::nothrow_t *)0xB0);
}
