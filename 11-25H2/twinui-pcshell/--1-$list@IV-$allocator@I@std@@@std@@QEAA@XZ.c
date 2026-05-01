/*
 * XREFs of ??1?$list@IV?$allocator@I@std@@@std@@QEAA@XZ @ 0x1802C250C
 * Callers:
 *     _std::_Hash_std::_Umap_traits_enum_winrt::Windows::Internal::Shell::CloudPCState_unsigned_int_std::_Uhash_compare_enum_winrt::Windows::Internal::Shell::CloudPCState_std::hash_enum_winrt::Windows::Internal::Shell::CloudPCState__std::equal_to_enum_winrt::Windows::Internal::Shell::CloudPCState____std::allocator_std::pair_enum_winrt::Windows::Internal::Shell::CloudPCState_const__unsigned_int____0___::_Hash_std::_Umap_traits_enum_winrt::Windows::Internal::Shell::CloudPCState_unsigned_int_std::_Uhash_compare_enum_winrt::Windows::Internal::Shell::CloudPCState_std::hash_enum_winrt::Windows::Internal::Shell::CloudPCState__std::equal_to_enum_winrt::Windows::Internal::Shell::CloudPCState____std::allocator_std::pair_enum_winrt::Windows::Internal::Shell::CloudPCState_const__unsigned_int____0____::_1_::dtor$0 @ 0x1806B2A4C (_std--_Hash_std--_Umap_traits_enum_winrt--Windows--Internal--Shell--CloudPCState_un_ea_1806B2A4C.c)
 *     _std::unordered_map_enum_winrt::Windows::Internal::Shell::Animations::EdgeLocation_enum_winrt::WindowsUdk::UI::Shell::ShellView_std::hash_enum_winrt::Windows::Internal::Shell::Animations::EdgeLocation__std::equal_to_enum_winrt::Windows::Internal::Shell::Animations::EdgeLocation__std::allocator_std::pair_enum_winrt::Windows::Internal::Shell::Animations::EdgeLocation_const__enum_winrt::WindowsUdk::UI::Shell::ShellView_____::unordered_map_enum_winrt::Windows::Internal::Shell::Animations::EdgeLocation_enum_winrt::WindowsUdk::UI::Shell::ShellView_std::hash_enum_winrt::Windows::Internal::Shell::Animations::EdgeLocation__std::equal_to_enum_winrt::Windows::Internal::Shell::Animations::EdgeLocation__std::allocator_std::pair_enum_winrt::Windows::Internal::Shell::Animations::EdgeLocation_const__enum_winrt::WindowsUdk::UI::Shell::ShellView______::_1_::dtor$1 @ 0x1806B82A7 (_std--unordered_map_enum_winrt--Windows--Internal--Shell--Animations--EdgeLocation__ea_1806B82A7.c)
 *     _CShellSnapComponent::CShellSnapComponent_::_1_::dtor$63 @ 0x1806CFBE0 (_CShellSnapComponent--CShellSnapComponent_--_1_--dtor$63.c)
 * Callees:
 *     ??$_Free_non_head@V?$allocator@U?$_List_node@_KPEAX@std@@@std@@@?$_List_node@_KPEAX@std@@SAXAEAV?$allocator@U?$_List_node@_KPEAX@std@@@1@PEAU01@@Z @ 0x18020FAE4 (--$_Free_non_head@V-$allocator@U-$_List_node@_KPEAX@std@@@std@@@-$_List_node@_KPEAX@std@@SAXAEAV.c)
 */

void __fastcall std::list<unsigned int>::~list<unsigned int>(void **a1)
{
  std::_List_node<unsigned __int64,void *>::_Free_non_head<std::allocator<std::_List_node<unsigned __int64,void *>>>(
    (__int64)a1,
    (_QWORD **)*a1);
  std::_Deallocate<16,0>(*a1, (const struct std::nothrow_t *)0x18);
}
