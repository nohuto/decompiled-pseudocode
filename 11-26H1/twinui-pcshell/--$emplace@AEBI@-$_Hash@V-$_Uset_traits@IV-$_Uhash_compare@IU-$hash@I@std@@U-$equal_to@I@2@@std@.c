/*
 * XREFs of ??$emplace@AEBI@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@I@std@@@std@@@std@@_N@1@AEBI@Z @ 0x180145B94
 * Callers:
 *     ?InitializeIds@KBViewInfo@@QEAAXXZ @ 0x18014531C (-InitializeIds@KBViewInfo@@QEAAXXZ.c)
 *     _lambda_76f340d5d82a2ae937276f5837d7f307_::operator() @ 0x18046A598 (_lambda_76f340d5d82a2ae937276f5837d7f307_--operator().c)
 *     ??$?0V?$allocator@U?$_List_node@IPEAX@std@@@std@@@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAA@AEBV01@AEBV?$allocator@U?$_List_node@IPEAX@std@@@1@@Z @ 0x1806615EC (--$-0V-$allocator@U-$_List_node@IPEAX@std@@@std@@@-$_Hash@V-$_Uset_traits@IV-$_Uhash_compare@IU-.c)
 * Callees:
 *     ?_Check_rehash_required_1@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@4@$0A@@std@@@std@@IEBA_NXZ @ 0x18002CA0C (-_Check_rehash_required_1@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@V-$basic_string@GU-$char_trait.c)
 *     ?_Insert_new_node_before@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAAPEAU?$_List_node@IPEAX@2@_KQEAU32@1@Z @ 0x180145CA8 (-_Insert_new_node_before@-$_Hash@V-$_Uset_traits@IV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@.c)
 *     ?_Check_max_size@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@IEBAXXZ @ 0x180145D00 (-_Check_max_size@-$_Hash@V-$_Uset_traits@IV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std.c)
 *     ??$_Find_last@I@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@IPEAX@std@@@1@AEBI_K@Z @ 0x1801B64CC (--$_Find_last@I@-$_Hash@V-$_Uset_traits@IV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??R?$_Conditionally_enabled_hash@W4ShellView@Shell@UI@WindowsUdk@winrt@@$00@std@@SA_KAEBW4ShellView@Shell@UI@WindowsUdk@winrt@@@Z @ 0x1802A28B0 (--R-$_Conditionally_enabled_hash@W4ShellView@Shell@UI@WindowsUdk@winrt@@$00@std@@SA_KAEBW4ShellV.c)
 *     ?_Rehash_for_1@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAAXXZ @ 0x1804744BC (-_Rehash_for_1@-$_Hash@V-$_Uset_traits@IV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Uset_traits<unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<unsigned int>,0>>::emplace<unsigned int const &>(
        _QWORD *a1,
        __int64 a2,
        unsigned __int8 *a3)
{
  __int64 v6; // r12
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rbp
  _QWORD *v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+28h] [rbp-20h]

  v6 = std::_Conditionally_enabled_hash<enum winrt::WindowsUdk::UI::Shell::ShellView,1>::operator()(a3);
  v7 = a1[3];
  v8 = *(_QWORD *)(v7 + 16 * (v6 & a1[6]) + 8);
  v9 = a1[1];
  if ( v8 == v9 )
  {
LABEL_7:
    std::_Hash<std::_Uset_traits<unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<unsigned int>,0>>::_Check_max_size(a1);
    v13 = a1 + 1;
    v11 = std::_Allocate<16,std::_Default_allocate_traits>(24LL);
    v14 = v11;
    *(_DWORD *)(v11 + 16) = *(_DWORD *)a3;
    if ( std::_Hash<std::_Umap_traits<winrt::hstring,std::wstring,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,std::wstring>>,0>>::_Check_rehash_required_1((__int64)a1) )
    {
      std::_Hash<std::_Uset_traits<unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<unsigned int>,0>>::_Rehash_for_1(a1);
      v9 = *(_QWORD *)((__int64 (__fastcall *)(_QWORD *, _QWORD **, __int64, __int64))std::_Hash<std::_Uset_traits<unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<unsigned int>,0>>::_Find_last<unsigned int>)(
                        a1,
                        &v13,
                        v11 + 16,
                        v6);
    }
    *(_QWORD *)a2 = std::_Hash<std::_Uset_traits<unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<unsigned int>,0>>::_Insert_new_node_before(
                      a1,
                      v6,
                      v9,
                      v11,
                      v13,
                      v14);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    v10 = *(_QWORD *)(v7 + 16 * (v6 & a1[6]));
    while ( *(_DWORD *)a3 != *(_DWORD *)(v8 + 16) )
    {
      if ( v8 == v10 )
      {
        v9 = v8;
        goto LABEL_7;
      }
      v8 = *(_QWORD *)(v8 + 8);
    }
    *(_QWORD *)a2 = v8;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
