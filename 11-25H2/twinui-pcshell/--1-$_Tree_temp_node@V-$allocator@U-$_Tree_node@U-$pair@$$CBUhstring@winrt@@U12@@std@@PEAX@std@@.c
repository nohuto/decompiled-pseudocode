/*
 * XREFs of ??1?$_Tree_temp_node@V?$allocator@U?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180338650
 * Callers:
 *     ??$_Emplace@AEBUhstring@winrt@@AEBU12@@?$_Tree@V?$_Tmap_traits@Uhstring@winrt@@U12@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@_N@1@AEBUhstring@winrt@@0@Z @ 0x180337B24 (--$_Emplace@AEBUhstring@winrt@@AEBU12@@-$_Tree@V-$_Tmap_traits@Uhstring@winrt@@U12@U-$less@Uhstr.c)
 *     ??$_Emplace@Uhstring@winrt@@U12@@?$_Tree@V?$_Tmap_traits@Uhstring@winrt@@U12@U?$less@Uhstring@winrt@@@std@@V?$allocator@U?$pair@$$CBUhstring@winrt@@U12@@std@@@4@$00@std@@@std@@IEAA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBUhstring@winrt@@U12@@std@@PEAX@std@@_N@1@$$QEAUhstring@winrt@@0@Z @ 0x180640F2C (--$_Emplace@Uhstring@winrt@@U12@@-$_Tree@V-$_Tmap_traits@Uhstring@winrt@@U12@U-$less@Uhstring@wi.c)
 *     _std::_Tree_std::_Tmap_traits_winrt::hstring_winrt::hstring_std::less_winrt::hstring__std::allocator_std::pair_winrt::hstring_const__winrt::hstring____1___::_Emplace_winrt::hstring_winrt::hstring__::_1_::dtor$0 @ 0x1806DC038 (_std--_Tree_std--_Tmap_traits_winrt--hstring_winrt--hstring_std--less_winrt--hstring__std--alloc.c)
 * Callees:
 *     ??1XmlnsDefinition@Markup@Xaml@UI@Windows@winrt@@QEAA@XZ @ 0x1802CE1F0 (--1XmlnsDefinition@Markup@Xaml@UI@Windows@winrt@@QEAA@XZ.c)
 */

void __fastcall std::_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<winrt::hstring const,winrt::hstring>,void *>>>::~_Tree_temp_node<std::allocator<std::_Tree_node<std::pair<winrt::hstring const,winrt::hstring>,void *>>>(
        __int64 a1)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 8);
  if ( v2 )
    winrt::Windows::UI::Xaml::Markup::XmlnsDefinition::~XmlnsDefinition((volatile signed __int32 **)(v2 + 32));
  std::_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>,void *>>>::~_Alloc_construct_ptr<std::allocator<std::_Tree_node<std::pair<unsigned long const,Microsoft::WRL::ComPtr<IApplicationFrame>>,void *>>>(a1);
}
