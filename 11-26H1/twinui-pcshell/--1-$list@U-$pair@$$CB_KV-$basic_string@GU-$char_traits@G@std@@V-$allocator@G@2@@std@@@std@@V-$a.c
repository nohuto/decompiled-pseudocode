/*
 * XREFs of ??1?$list@U?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@V?$allocator@U?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@QEAA@XZ @ 0x1801FF458
 * Callers:
 *     _std::_Hash_std::_Umap_traits_unsigned___int64_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short________0___::_Hash_std::_Umap_traits_unsigned___int64_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short________0____::_1_::dtor$0 @ 0x1806D9772 (_std--_Hash_std--_Umap_traits_unsigned___int64_std--basic_string_unsigned_short_std_ea_1806D9772.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1801FF484 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CB_KV-$basic_string@GU-$char_traits@G@std.c)
 */

__int64 __fastcall std::list<std::pair<unsigned __int64 const,std::wstring>>::~list<std::pair<unsigned __int64 const,std::wstring>>(
        _QWORD *a1)
{
  std::_List_node<std::pair<unsigned __int64 const,std::wstring>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned __int64 const,std::wstring>,void *>>>(
    a1,
    *a1);
  return std::_Deallocate<16>(*a1, 56LL);
}
