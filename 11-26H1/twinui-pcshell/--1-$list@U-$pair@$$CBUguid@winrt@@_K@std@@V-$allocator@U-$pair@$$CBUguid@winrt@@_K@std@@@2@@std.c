/*
 * XREFs of ??1?$list@U?$pair@$$CBUguid@winrt@@_K@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@_K@std@@@2@@std@@QEAA@XZ @ 0x180207978
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::RemoveWindowTabDataModel_::_1_::dtor$3 @ 0x1806D7B89 (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--RemoveWindowTabDat_ea_1806D7B89.c)
 *     _std::_Hash_std::_Umap_traits_unsigned___int64_winrt::guid_std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__winrt::guid____0___::_Hash_std::_Umap_traits_unsigned___int64_winrt::guid_std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__winrt::guid____0____::_1_::dtor$0 @ 0x1806D7BC7 (_std--_Hash_std--_Umap_traits_unsigned___int64_winrt--guid_std--_Uhash_compare_unsigned___int64_.c)
 *     _CShellSnapComponent::CShellSnapComponent_::_1_::dtor$54 @ 0x1806F8436 (_CShellSnapComponent--CShellSnapComponent_--_1_--dtor$54.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CB_KUguid@winrt@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KUguid@winrt@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KUguid@winrt@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180285F00 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CB_KUguid@winrt@@@std@@PEAX@std@@@std@@@-.c)
 */

__int64 __fastcall std::list<std::pair<winrt::guid const,unsigned __int64>>::~list<std::pair<winrt::guid const,unsigned __int64>>(
        _QWORD *a1)
{
  std::_List_node<std::pair<unsigned __int64 const,winrt::guid>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned __int64 const,winrt::guid>,void *>>>(
    a1,
    *a1);
  return std::_Deallocate<16>(*a1, 40LL);
}
