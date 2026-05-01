/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBUguid@winrt@@_K@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1802C390C
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::SyncGlobalTabOrder_::_1_::dtor$9 @ 0x1806CD8E6 (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--SyncGlobalTabOrder_ea_1806CD8E6.c)
 *     _std::_Hash_std::_Umap_traits_winrt::guid_unsigned___int64_std::_Uhash_compare_winrt::guid_std::hash_winrt::guid__std::equal_to_winrt::guid____std::allocator_std::pair_winrt::guid_const__unsigned___int64____0___::_Try_emplace_winrt::guid_const_&__::_1_::dtor$0 @ 0x1806D29D0 (_std--_Hash_std--_Umap_traits_winrt--guid_unsigned___int64_std--_Uhash_compare_winrt--guid_std--.c)
 *     _std::_Tree_std::_Tmap_traits_unsigned_int_unsigned_int_std::less_unsigned_int__std::allocator_std::pair_unsigned_int_const__unsigned_int____1___::_Emplace_std::pair_unsigned_int_unsigned_int____::_1_::dtor$0 @ 0x1806D7BB5 (_std--_Tree_std--_Tmap_traits_unsigned_int_unsigned_int_std--less_unsigned_int__std--allocator_s.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<winrt::guid const,unsigned __int64>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<winrt::guid const,unsigned __int64>,void *>>>(
        __int64 a1)
{
  return std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<wil::com_ptr_t<IApplicationView,wil::err_exception_policy>,void *>>>(a1);
}
