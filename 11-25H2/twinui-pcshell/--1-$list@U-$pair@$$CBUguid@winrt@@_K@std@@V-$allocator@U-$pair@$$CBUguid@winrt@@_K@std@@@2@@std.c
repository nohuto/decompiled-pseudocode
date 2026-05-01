/*
 * XREFs of ??1?$list@U?$pair@$$CBUguid@winrt@@_K@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@_K@std@@@2@@std@@QEAA@XZ @ 0x180215630
 * Callers:
 *     _winrt::Windows::Internal::Shell::implementation::WindowTabHost::RemoveWindowTabDataModel_::_1_::dtor$3 @ 0x1806AE119 (_winrt--Windows--Internal--Shell--implementation--WindowTabHost--RemoveWindowTabDat_ea_1806AE119.c)
 *     _std::_Hash_std::_Umap_traits_unsigned___int64_winrt::guid_std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__winrt::guid____0___::_Hash_std::_Umap_traits_unsigned___int64_winrt::guid_std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__winrt::guid____0____::_1_::dtor$0 @ 0x1806AE197 (_std--_Hash_std--_Umap_traits_unsigned___int64_winrt--guid_std--_Uhash_compare_unsigned___int64_.c)
 *     _CShellSnapComponent::CShellSnapComponent_::_1_::dtor$54 @ 0x1806CFBB4 (_CShellSnapComponent--CShellSnapComponent_--_1_--dtor$54.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CB_KUguid@winrt@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KUguid@winrt@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KUguid@winrt@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18021565C (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CB_KUguid@winrt@@@std@@PEAX@std@@@std@@@-.c)
 */

void __fastcall std::list<std::pair<winrt::guid const,unsigned __int64>>::~list<std::pair<winrt::guid const,unsigned __int64>>(
        void **a1)
{
  std::_List_node<std::pair<unsigned __int64 const,winrt::guid>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned __int64 const,winrt::guid>,void *>>>(
    a1,
    *a1);
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x28);
}
