/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_List_node@U?$pair@$$CBKUInitialPointerInfo@ResizeProcessor@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180153674
 * Callers:
 *     ??$_Try_emplace@AEBK$$V@?$_Hash@V?$_Umap_traits@KUInitialPointerInfo@ResizeProcessor@@V?$_Uhash_compare@KU?$hash@K@std@@U?$equal_to@K@2@@std@@V?$allocator@U?$pair@$$CBKUInitialPointerInfo@ResizeProcessor@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBKUInitialPointerInfo@ResizeProcessor@@@std@@PEAX@std@@_N@1@AEBK@Z @ 0x180152F84 (--$_Try_emplace@AEBK$$V@-$_Hash@V-$_Umap_traits@KUInitialPointerInfo@ResizeProcessor@@V-$_Uhash_.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBKUInitialPointerInfo@ResizeProcessor@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180153750 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CBKUInitialPointerInfo@ResizePr.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_long_ResizeProcessor::InitialPointerInfo_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__ResizeProcessor::InitialPointerInfo____0___::_Try_emplace_unsigned_long_const_&__::_1_::dtor$1 @ 0x1801DB812 (_std--_Hash_std--_Umap_traits_unsigned_long_ResizeProcessor--InitialPointerInfo_std_ea_1801DB812.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<unsigned long const,ResizeProcessor::InitialPointerInfo>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<unsigned long const,ResizeProcessor::InitialPointerInfo>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16>(v1, (struct std::nothrow_t *)0x60);
}
