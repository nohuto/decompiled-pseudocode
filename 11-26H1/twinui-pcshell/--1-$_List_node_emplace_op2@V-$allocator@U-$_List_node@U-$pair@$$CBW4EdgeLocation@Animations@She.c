/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBW4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@V?$vector@W4ShellView@Shell@UI@WindowsUdk@winrt@@V?$allocator@W4ShellView@Shell@UI@WindowsUdk@winrt@@@std@@@std@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1802C424C
 * Callers:
 *     _std::_Hash_std::_Umap_traits_enum_winrt::Windows::Internal::Shell::Animations::EdgeLocation_std::vector_enum_winrt::WindowsUdk::UI::Shell::ShellView_std::allocator_enum_winrt::WindowsUdk::UI::Shell::ShellView____std::_Uhash_compare_enum_winrt::Windows::Internal::Shell::Animations::EdgeLocation_std::hash_enum_winrt::Windows::Internal::Shell::Animations::EdgeLocation__std::equal_to_enum_winrt::Windows::Internal::Shell::Animations::EdgeLocation____std::allocator_std::pair_enum_winrt::Windows::Internal::Shell::Animations::EdgeLocation_const__std::vector_enum_winrt::WindowsUdk::UI::Shell::ShellView_std::allocator_enum_winrt::WindowsUdk::UI::Shell::ShellView________0___::emplace_std::pair_enum_winrt::Windows::Internal::Shell::Animations::EdgeLocation_const__std::vector_enum_winrt::WindowsUdk::UI::Shell::ShellView_std::allocator_enum_winrt::WindowsUdk::UI::Shell::ShellView______const_&__::_1_::dtor$0 @ 0x1806D5CFD (_std--_Hash_std--_Umap_traits_enum_winrt--Windows--Internal--Shell--Animations--Edg_ea_1806D5CFD.c)
 * Callees:
 *     ?_Tidy@?$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@V?$allocator@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@std@@@std@@AEAAXXZ @ 0x18012BE08 (-_Tidy@-$vector@W4CollectionOfficeSKU@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@.c)
 */

__int64 __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<enum winrt::Windows::Internal::Shell::Animations::EdgeLocation const,std::vector<enum winrt::WindowsUdk::UI::Shell::ShellView>>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<enum winrt::Windows::Internal::Shell::Animations::EdgeLocation const,std::vector<enum winrt::WindowsUdk::UI::Shell::ShellView>>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    std::vector<enum WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::CollectionOfficeSKU>::_Tidy((__int64 *)(v2 + 24));
  return std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>,void *>>>(a1);
}
