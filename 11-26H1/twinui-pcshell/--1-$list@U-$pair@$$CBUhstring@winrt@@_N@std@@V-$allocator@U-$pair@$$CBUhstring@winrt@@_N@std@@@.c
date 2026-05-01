/*
 * XREFs of ??1?$list@U?$pair@$$CBUhstring@winrt@@_N@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@_N@std@@@2@@std@@QEAA@XZ @ 0x1802867C8
 * Callers:
 *     _std::_Hash_std::_Umap_traits_winrt::hstring_bool_std::_Uhash_compare_winrt::hstring_std::hash_winrt::hstring__std::equal_to_winrt::hstring____std::allocator_std::pair_winrt::hstring_const__bool____0___::_Hash_std::_Umap_traits_winrt::hstring_bool_std::_Uhash_compare_winrt::hstring_std::hash_winrt::hstring__std::equal_to_winrt::hstring____std::allocator_std::pair_winrt::hstring_const__bool____0____::_1_::dtor$0 @ 0x180700F56 (_std--_Hash_std--_Umap_traits_winrt--hstring_bool_std--_Uhash_compare_winrt--hstrin_ea_180700F56.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@_N@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBUhstring@winrt@@_N@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@_N@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18028620C (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBUhstring@winrt@@_N@std@@PEAX@std@@@std@.c)
 */

void __fastcall std::list<std::pair<winrt::hstring const,bool>>::~list<std::pair<winrt::hstring const,bool>>(
        __int64 *a1)
{
  std::_List_node<std::pair<winrt::hstring const,bool>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<winrt::hstring const,bool>,void *>>>(
    (__int64)a1,
    *a1);
  std::_Deallocate<16>((void *)*a1, (struct std::nothrow_t *)0x20);
}
