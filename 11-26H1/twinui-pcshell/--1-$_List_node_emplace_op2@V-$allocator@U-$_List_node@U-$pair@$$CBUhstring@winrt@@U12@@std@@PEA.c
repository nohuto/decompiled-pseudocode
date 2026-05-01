/*
 * XREFs of ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x1806498C8
 * Callers:
 *     ??$emplace@AEBUhstring@winrt@@AEBU12@@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@U12@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBUhstring@winrt@@U12@@std@@@std@@@std@@@std@@_N@1@AEBUhstring@winrt@@0@Z @ 0x1806460CC (--$emplace@AEBUhstring@winrt@@AEBU12@@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@U12@V-$_Uhash_comp.c)
 *     _std::_Hash_std::_Umap_traits_winrt::hstring_winrt::hstring_std::_Uhash_compare_winrt::hstring_std::hash_winrt::hstring__std::equal_to_winrt::hstring____std::allocator_std::pair_winrt::hstring_const__winrt::hstring____0___::emplace_winrt::hstring_const_&_winrt::hstring_const_&__::_1_::dtor$0 @ 0x180703AB9 (_std--_Hash_std--_Umap_traits_winrt--hstring_winrt--hstring_std--_Uhash_compare_winrt--hstring_s.c)
 * Callees:
 *     ??1XmlnsDefinition@Markup@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x1802C5740 (--1XmlnsDefinition@Markup@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 */

__int64 __fastcall std::_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<winrt::hstring const,winrt::hstring>,void *>>>::~_List_node_emplace_op2<std::allocator<std::_List_node<std::pair<winrt::hstring const,winrt::hstring>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    winrt::Windows::UI::Xaml::Markup::XmlnsDefinition::~XmlnsDefinition((volatile signed __int32 **)(v2 + 16));
  return std::_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<winrt::hstring const,bool>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_List_node<std::pair<winrt::hstring const,bool>,void *>>>(a1);
}
