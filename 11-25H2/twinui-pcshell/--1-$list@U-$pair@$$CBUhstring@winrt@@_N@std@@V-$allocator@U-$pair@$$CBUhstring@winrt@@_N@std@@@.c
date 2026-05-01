/*
 * XREFs of ??1?$list@U?$pair@$$CBUhstring@winrt@@_N@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@_N@std@@@2@@std@@QEAA@XZ @ 0x1802A96E0
 * Callers:
 *     _std::_Hash_std::_Umap_traits_winrt::hstring_bool_std::_Uhash_compare_winrt::hstring_std::hash_winrt::hstring__std::equal_to_winrt::hstring____std::allocator_std::pair_winrt::hstring_const__bool____0___::_Hash_std::_Umap_traits_winrt::hstring_bool_std::_Uhash_compare_winrt::hstring_std::hash_winrt::hstring__std::equal_to_winrt::hstring____std::allocator_std::pair_winrt::hstring_const__bool____0____::_1_::dtor$0 @ 0x1806D88F7 (_std--_Hash_std--_Umap_traits_winrt--hstring_bool_std--_Uhash_compare_winrt--hstrin_ea_1806D88F7.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@_N@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBUhstring@winrt@@_N@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@_N@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1802A9760 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBUhstring@winrt@@_N@std@@PEAX@std@@@std@.c)
 */

void __fastcall std::list<std::pair<winrt::hstring const,bool>>::~list<std::pair<winrt::hstring const,bool>>(void **a1)
{
  std::_List_node<std::pair<winrt::hstring const,bool>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<winrt::hstring const,bool>,void *>>>(
    a1,
    *a1);
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x20);
}
