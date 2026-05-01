/*
 * XREFs of ??0?$unordered_map@W4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@W4ShellView@3UI@WindowsUdk@6@U?$hash@W4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@@std@@U?$equal_to@W4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@@std@@V?$allocator@U?$pair@$$CBW4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@W4ShellView@3UI@WindowsUdk@6@@std@@@std@@@std@@QEAA@V?$initializer_list@U?$pair@$$CBW4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@W4ShellView@3UI@WindowsUdk@6@@std@@@1@@Z @ 0x180675C44
 * Callers:
 *     ??0EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@QEAA@AEBUShellAnimationCoordinator@23456@@Z @ 0x1802158D0 (--0EdgeAnimationRelationshipManager@implementation@Animations@Shell@Internal@Windows@winrt@@QEAA.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x180029EEC (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180029F1C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@W4ShellView@3UI@WindowsUdk@6@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@W4ShellView@3UI@WindowsUdk@6@@std@@@std@@@std@@@2@@Z @ 0x18057FDA8 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_18057FDA8.c)
 *     ??$emplace@AEBU?$pair@$$CBW4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@W4ShellView@3UI@WindowsUdk@6@@std@@@?$_Hash@V?$_Umap_traits@W4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@W4ShellView@3UI@WindowsUdk@6@V?$_Uhash_compare@W4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@U?$hash@W4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@@std@@U?$equal_to@W4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@@8@@std@@V?$allocator@U?$pair@$$CBW4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@W4ShellView@3UI@WindowsUdk@6@@std@@@std@@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBW4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@W4ShellView@3UI@WindowsUdk@6@@std@@@std@@@std@@@std@@_N@1@AEBU?$pair@$$CBW4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@W4ShellView@3UI@WindowsUdk@6@@1@@Z @ 0x180675968 (--$emplace@AEBU-$pair@$$CBW4EdgeLocation@Animations@Shell@Internal@Windows@winrt@@W4ShellView@3U.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall std::unordered_map<enum winrt::Windows::Internal::Shell::Animations::EdgeLocation,enum winrt::WindowsUdk::UI::Shell::ShellView>::unordered_map<enum winrt::Windows::Internal::Shell::Animations::EdgeLocation,enum winrt::WindowsUdk::UI::Shell::ShellView>(
        __int64 a1,
        __m128i *a2)
{
  size_t size_of; // rax
  _QWORD *v5; // rax
  __m128i v6; // xmm0
  _QWORD *v7; // rbx
  unsigned __int64 v8; // xmm0_8
  _BYTE v10[24]; // [rsp+20h] [rbp-18h] BYREF

  *(_DWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  size_of = std::_Get_size_of_n<24>(1uLL);
  v5 = std::_Allocate<16,std::_Default_allocate_traits,0>(size_of);
  *v5 = v5;
  v5[1] = v5;
  *(_QWORD *)(a1 + 8) = v5;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_QWORD *)(a1 + 48) = 7LL;
  *(_QWORD *)(a1 + 56) = 8LL;
  *(_DWORD *)a1 = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<enum winrt::Windows::Internal::Shell::Animations::EdgeLocation const,enum winrt::WindowsUdk::UI::Shell::ShellView>>>>>>::_Assign_grow(
    a1 + 24,
    0x10uLL,
    *(_QWORD *)(a1 + 8));
  v6 = *a2;
  v7 = (_QWORD *)a2->m128i_i64[0];
  v8 = _mm_srli_si128(v6, 8).m128i_u64[0];
  while ( v7 != (_QWORD *)v8 )
    std::_Hash<std::_Umap_traits<enum winrt::Windows::Internal::Shell::Animations::EdgeLocation,enum winrt::WindowsUdk::UI::Shell::ShellView,std::_Uhash_compare<enum winrt::Windows::Internal::Shell::Animations::EdgeLocation,std::hash<enum winrt::Windows::Internal::Shell::Animations::EdgeLocation>,std::equal_to<enum winrt::Windows::Internal::Shell::Animations::EdgeLocation>>,std::allocator<std::pair<enum winrt::Windows::Internal::Shell::Animations::EdgeLocation const,enum winrt::WindowsUdk::UI::Shell::ShellView>>,0>>::emplace<std::pair<enum winrt::Windows::Internal::Shell::Animations::EdgeLocation const,enum winrt::WindowsUdk::UI::Shell::ShellView> const &>(
      (float *)a1,
      (__int64)v10,
      v7++);
  return a1;
}
