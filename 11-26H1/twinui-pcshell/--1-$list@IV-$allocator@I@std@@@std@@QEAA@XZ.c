/*
 * XREFs of ??1?$list@IV?$allocator@I@std@@@std@@QEAA@XZ @ 0x180285914
 * Callers:
 *     _std::_Hash_std::_Umap_traits_enum_winrt::Windows::Internal::Shell::CloudPCState_unsigned_int_std::_Uhash_compare_enum_winrt::Windows::Internal::Shell::CloudPCState_std::hash_enum_winrt::Windows::Internal::Shell::CloudPCState__std::equal_to_enum_winrt::Windows::Internal::Shell::CloudPCState____std::allocator_std::pair_enum_winrt::Windows::Internal::Shell::CloudPCState_const__unsigned_int____0___::_Hash_std::_Umap_traits_enum_winrt::Windows::Internal::Shell::CloudPCState_unsigned_int_std::_Uhash_compare_enum_winrt::Windows::Internal::Shell::CloudPCState_std::hash_enum_winrt::Windows::Internal::Shell::CloudPCState__std::equal_to_enum_winrt::Windows::Internal::Shell::CloudPCState____std::allocator_std::pair_enum_winrt::Windows::Internal::Shell::CloudPCState_const__unsigned_int____0____::_1_::dtor$0 @ 0x1806D5124 (_std--_Hash_std--_Umap_traits_enum_winrt--Windows--Internal--Shell--CloudPCState_un_ea_1806D5124.c)
 *     _std::unordered_map_enum_winrt::Windows::Internal::Shell::Animations::EdgeLocation_enum_winrt::WindowsUdk::UI::Shell::ShellView_std::hash_enum_winrt::Windows::Internal::Shell::Animations::EdgeLocation__std::equal_to_enum_winrt::Windows::Internal::Shell::Animations::EdgeLocation__std::allocator_std::pair_enum_winrt::Windows::Internal::Shell::Animations::EdgeLocation_const__enum_winrt::WindowsUdk::UI::Shell::ShellView_____::unordered_map_enum_winrt::Windows::Internal::Shell::Animations::EdgeLocation_enum_winrt::WindowsUdk::UI::Shell::ShellView_std::hash_enum_winrt::Windows::Internal::Shell::Animations::EdgeLocation__std::equal_to_enum_winrt::Windows::Internal::Shell::Animations::EdgeLocation__std::allocator_std::pair_enum_winrt::Windows::Internal::Shell::Animations::EdgeLocation_const__enum_winrt::WindowsUdk::UI::Shell::ShellView______::_1_::dtor$1 @ 0x1806DF74F (_std--unordered_map_enum_winrt--Windows--Internal--Shell--Animations--EdgeLocation__ea_1806DF74F.c)
 *     _CShellSnapComponent::CShellSnapComponent_::_1_::dtor$63 @ 0x1806F8462 (_CShellSnapComponent--CShellSnapComponent_--_1_--dtor$63.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@_KPEAX@std@@@std@@@?$_List_node@_KPEAX@std@@SAXAEAV?$allocator@U?$_List_node@_KPEAX@std@@@1@PEAU01@@Z @ 0x18020260C (--$_Free_non_head@V-$allocator@U-$_List_node@_KPEAX@std@@@std@@@-$_List_node@_KPEAX@std@@SAXAEAV.c)
 */

__int64 __fastcall std::list<unsigned int>::~list<unsigned int>(__int64 *a1)
{
  std::_List_node<unsigned __int64,void *>::_Free_non_head<std::allocator<std::_List_node<unsigned __int64,void *>>>(
    (__int64)a1,
    *a1);
  return std::_Deallocate<16>(*a1, 24LL);
}
