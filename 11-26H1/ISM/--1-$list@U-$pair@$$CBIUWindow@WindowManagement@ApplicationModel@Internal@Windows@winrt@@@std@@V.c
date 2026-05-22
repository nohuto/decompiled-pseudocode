/*
 * XREFs of ??1?$list@U?$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@V?$allocator@U?$pair@$$CBIUWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@@2@@std@@QEAA@XZ @ 0x1800A6058
 * Callers:
 *     _ViewHierarchyWithWindowManager::ViewHierarchyWithWindowManager_::_1_::dtor$13 @ 0x1801D6CAA (_ViewHierarchyWithWindowManager--ViewHierarchyWithWindowManager_--_1_--dtor$13.c)
 *     _std::_Hash_std::_Umap_traits_unsigned_int_winrt::Windows::Internal::ApplicationModel::WindowManagement::Window_std::_Uhash_compare_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int____std::allocator_std::pair_unsigned_int_const__winrt::Windows::Internal::ApplicationModel::WindowManagement::Window____0___::_Hash_std::_Umap_traits_unsigned_int_winrt::Windows::Internal::ApplicationModel::WindowManagement::Window_std::_Uhash_compare_unsigned_int_std::hash_unsigned_int__std::equal_to_unsigned_int____std::allocator_std::pair_unsigned_int_const__winrt::Windows::Internal::ApplicationModel::WindowManagement::Window____0____::_1_::dtor$0 @ 0x1801D71B8 (_std--_Hash_std--_Umap_traits_unsigned_int_winrt--Windows--Internal--ApplicationMod_ea_1801D71B8.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@U?$pair@$$CBIUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBIUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBIUAppView@WindowManagement@ApplicationModel@Internal@Windows@winrt@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800956D0 (--$_Free_non_head@V-$allocator@U-$_List_node@U-$pair@$$CBIUAppView@WindowManagement@ApplicationM.c)
 */

void __fastcall std::list<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window>>::~list<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::Window>>(
        __int64 *a1)
{
  std::_List_node<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppView>,void *>::_Free_non_head<std::allocator<std::_List_node<std::pair<unsigned int const,winrt::Windows::Internal::ApplicationModel::WindowManagement::AppView>,void *>>>(
    (__int64)a1,
    *a1);
  std::_Deallocate<16>((void *)*a1, (struct std::nothrow_t *)0x20);
}
