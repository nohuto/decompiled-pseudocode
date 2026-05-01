/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@_N@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180612338
 * Callers:
 *     ??$_Try_emplace@AEBUhstring@winrt@@$$V@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@_NV?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@_N@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBUhstring@winrt@@_N@std@@PEAX@std@@_N@1@AEBUhstring@winrt@@@Z @ 0x18061184C (--$_Try_emplace@AEBUhstring@winrt@@$$V@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@_NV-$_Uhash_compa.c)
 *     ??$emplace@U?$pair@$$CBUhstring@winrt@@_N@std@@@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@_NV?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@_N@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@_N@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@$$CBUhstring@winrt@@_N@1@@Z @ 0x180611990 (--$emplace@U-$pair@$$CBUhstring@winrt@@_N@std@@@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@_NV-$_Uh.c)
 *     _std::_Hash_std::_Umap_traits_winrt::hstring_bool_std::_Uhash_compare_winrt::hstring_std::hash_winrt::hstring__std::equal_to_winrt::hstring____std::allocator_std::pair_winrt::hstring_const__bool____0___::_Try_emplace_winrt::hstring_const_&__::_1_::dtor$0 @ 0x180700F20 (_std--_Hash_std--_Umap_traits_winrt--hstring_bool_std--_Uhash_compare_winrt--hstring_std--hash_w.c)
 *     _std::_Hash_std::_Umap_traits_winrt::hstring_bool_std::_Uhash_compare_winrt::hstring_std::hash_winrt::hstring__std::equal_to_winrt::hstring____std::allocator_std::pair_winrt::hstring_const__bool____0___::emplace_std::pair_winrt::hstring_const__bool____::_1_::dtor$0 @ 0x180700F44 (_std--_Hash_std--_Umap_traits_winrt--hstring_bool_std--_Uhash_compare_winrt--hstrin_ea_180700F44.c)
 * Callees:
 *     ?close@?$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ @ 0x18002E610 (-close@-$handle_type@Uhstring_traits@impl@winrt@@@winrt@@QEAAXXZ.c)
 */

__int64 __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<winrt::hstring const,bool>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<winrt::hstring const,bool>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    winrt::handle_type<winrt::impl::hstring_traits>::close((volatile signed __int32 **)(v2 + 16));
  return std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<winrt::hstring const,bool>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<winrt::hstring const,bool>,void *>>>(a1);
}
