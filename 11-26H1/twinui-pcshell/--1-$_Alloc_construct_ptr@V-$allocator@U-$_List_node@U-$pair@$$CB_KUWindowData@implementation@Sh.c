/*
 * XREFs of ??1?$_Alloc_construct_ptr@V?$allocator@U?$_List_node@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1802BD8C0
 * Callers:
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1802BD890 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CB_KUWindowData@implementation@.c)
 *     _std::_Hash_std::_Umap_traits_unsigned___int64_winrt::Windows::Internal::Shell::implementation::WindowData_std::_Uhash_compare_unsigned___int64_std::hash_unsigned___int64__std::equal_to_unsigned___int64____std::allocator_std::pair_unsigned___int64_const__winrt::Windows::Internal::Shell::implementation::WindowData____0___::_Try_emplace_unsigned___int64_const_&_winrt::com_ptr_winrt::Windows::Internal::Shell::implementation::TabProxyWindowFactory__&_winrt::Windows::Internal::UI::Shell::WindowTabDataModel_&_winrt::event_token_&_winrt::event_token_&__::_1_::dtor$1 @ 0x1806D7B17 (_std--_Hash_std--_Umap_traits_unsigned___int64_winrt--Windows--Internal--Shell--imp_ea_1806D7B17.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>,void *>>>(
        __int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 )
    std::_Deallocate<16>(v1, (struct std::nothrow_t *)0xF0);
}
