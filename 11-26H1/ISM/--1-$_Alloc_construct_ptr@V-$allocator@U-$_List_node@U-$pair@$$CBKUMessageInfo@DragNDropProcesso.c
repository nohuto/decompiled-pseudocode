/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_List_node@U?$pair@$$CBKUMessageInfo@DragNDropProcessor@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18014D710
 * Callers:
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBKUMessageInfo@DragNDropProcessor@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x18014D848 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CBKUMessageInfo@DragNDropProces.c)
 *     ??$_Try_emplace@AEBUDockInputIdentity@@$$V@?$map@UDockInputIdentity@@UDockInputInfo@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UDockInputInfo@@@std@@@4@@std@@AEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDockInputInfo@@@std@@PEAX@std@@_N@1@AEBUDockInputIdentity@@@Z @ 0x180182D14 (--$_Try_emplace@AEBUDockInputIdentity@@$$V@-$map@UDockInputIdentity@@UDockInputInfo@@U-$less@UDo.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_long_DragNDropProcessor::MessageInfo_std::_Uhash_compare_unsigned_long_std::hash_unsigned_long__std::equal_to_unsigned_long____std::allocator_std::pair_unsigned_long_const__DragNDropProcessor::MessageInfo____0___::_Try_emplace_unsigned_long_const_&__::_1_::dtor$1 @ 0x1801DB50F (_std--_Hash_std--_Umap_traits_unsigned_long_DragNDropProcessor--MessageInfo_std--_U_ea_1801DB50F.c)
 *     _std::map_DockInputIdentity_DockInputInfo_std::less_DockInputIdentity__std::allocator_std::pair_DockInputIdentity_const__DockInputInfo_____::_Try_emplace_DockInputIdentity_const_&__::_1_::dtor$2 @ 0x1801DC199 (_std--map_DockInputIdentity_DockInputInfo_std--less_DockInputIdentity__std--allocator_std--pair_.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<unsigned long const,DragNDropProcessor::MessageInfo>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<unsigned long const,DragNDropProcessor::MessageInfo>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16>(v1, (struct std::nothrow_t *)0x90);
}
