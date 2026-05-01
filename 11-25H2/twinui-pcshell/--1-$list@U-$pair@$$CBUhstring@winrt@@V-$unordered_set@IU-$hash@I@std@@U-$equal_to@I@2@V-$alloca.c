/*
 * XREFs of ??1?$list@U?$pair@$$CBUhstring@winrt@@V?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@@std@@@2@@std@@QEAA@XZ @ 0x180623FC0
 * Callers:
 *     _std::_Hash_std::_Umap_traits_winrt::hstring_std::unordered_set_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int__std::allocator_unsigned_int____std::_Uhash_compare_winrt::hstring_std::hash_winrt::hstring__std::equal_to_winrt::hstring____std::allocator_std::pair_winrt::hstring_const__std::unordered_set_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int__std::allocator_unsigned_int________0___::_Hash_std::_Umap_traits_winrt::hstring_std::unordered_set_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int__std::allocator_unsigned_int____std::_Uhash_compare_winrt::hstring_std::hash_winrt::hstring__std::equal_to_winrt::hstring____std::allocator_std::pair_winrt::hstring_const__std::unordered_set_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int__std::allocator_unsigned_int________0____std::allocator_std::_List_node_std::pair_winrt::hstring_const__std::unordered_set_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int__std::allocator_unsigned_int______void________::_1_::dtor$0 @ 0x1806DBDA9 (_std--_Hash_std--_Umap_traits_winrt--hstring_std--unordered_set_unsigned_int_std--h_ea_1806DBDA9.c)
 *     _winrt::Windows::Internal::Shell::implementation::RemoteSessionPersistenceHelper::RemoteSessionPersistenceHelper_::_1_::dtor$15 @ 0x1806DBEC2 (_winrt--Windows--Internal--Shell--implementation--RemoteSessionPersistenceHelper--R_ea_1806DBEC2.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@V?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBUhstring@winrt@@V?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@V?$unordered_set@_KU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@_K@2@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18061F35C (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBUhstring@winrt@@V-$unordered_set@_KU-$h.c)
 */

void __fastcall std::list<std::pair<winrt::hstring const,std::unordered_set<unsigned int>>>::~list<std::pair<winrt::hstring const,std::unordered_set<unsigned int>>>(
        __int64 *a1)
{
  std::_List_node<std::pair<winrt::hstring const,std::unordered_set<unsigned __int64>>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<winrt::hstring const,std::unordered_set<unsigned __int64>>,void *>>>(
    (__int64)a1,
    *a1);
  std::_Deallocate<16,0>((void *)*a1, (const struct std::nothrow_t *)0x58);
}
