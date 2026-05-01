/*
 * XREFs of ??$emplace@AEBI@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@I@std@@@std@@@std@@_N@1@AEBI@Z @ 0x1800987DC
 * Callers:
 *     ?InitializeIds@KBViewInfo@@QEAAXXZ @ 0x180097F14 (-InitializeIds@KBViewInfo@@QEAAXXZ.c)
 *     _lambda_ff3af0abcf4100822182f80ac5bd56ae_::operator() @ 0x18045ED54 (_lambda_ff3af0abcf4100822182f80ac5bd56ae_--operator().c)
 *     ??$?0V?$allocator@U?$_List_node@IPEAX@std@@@std@@@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAA@AEBV01@AEBV?$allocator@U?$_List_node@IPEAX@std@@@1@@Z @ 0x18063BB4C (--$-0V-$allocator@U-$_List_node@IPEAX@std@@@std@@@-$_Hash@V-$_Uset_traits@IV-$_Uhash_compare@IU-.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180029F1C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??$?RH@?$_Uhash_compare@HU?$hash@H@std@@U?$equal_to@H@2@@std@@QEBA_KAEBH@Z @ 0x1800988F4 (--$-RH@-$_Uhash_compare@HU-$hash@H@std@@U-$equal_to@H@2@@std@@QEBA_KAEBH@Z.c)
 *     ?_Insert_new_node_before@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAAPEAU?$_List_node@IPEAX@2@_KQEAU32@1@Z @ 0x180098F6C (-_Insert_new_node_before@-$_Hash@V-$_Uset_traits@IV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@.c)
 *     ?_Check_rehash_required_1@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@4@$0A@@std@@@std@@IEBA_NXZ @ 0x180098FC4 (-_Check_rehash_required_1@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@V-$basic_string@GU-$char_trait.c)
 *     ?_Check_max_size@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@IEBAXXZ @ 0x18009902C (-_Check_max_size@-$_Hash@V-$_Uset_traits@IV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std.c)
 *     ??$_Find_last@I@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@IPEAX@std@@@1@AEBI_K@Z @ 0x1801BDC20 (--$_Find_last@I@-$_Hash@V-$_Uset_traits@IV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@.c)
 *     ?_Rehash_for_1@?$_Hash@V?$_Uset_traits@IV?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@I@2@$0A@@std@@@std@@IEAAXXZ @ 0x1804684B4 (-_Rehash_for_1@-$_Hash@V-$_Uset_traits@IV-$_Uhash_compare@IU-$hash@I@std@@U-$equal_to@I@2@@std@@.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Uset_traits<unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<unsigned int>,0>>::emplace<unsigned int const &>(
        _QWORD *a1,
        __int64 a2,
        _DWORD *a3)
{
  _DWORD *v6; // rdx
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 *v9; // r8
  __int64 *v10; // rdi
  __int64 *v11; // rax
  _DWORD *v12; // rbp
  _QWORD *v14; // [rsp+20h] [rbp-28h] BYREF
  _DWORD *v15; // [rsp+28h] [rbp-20h]

  v7 = std::_Uhash_compare<int,std::hash<int>,std::equal_to<int>>::operator()<int>(a1, a3);
  v8 = a1[3];
  v9 = *(__int64 **)(v8 + 16 * (v7 & a1[6]) + 8);
  v10 = (__int64 *)a1[1];
  if ( v9 == v10 )
    goto LABEL_10;
  v11 = *(__int64 **)(v8 + 16 * (v7 & a1[6]));
  while ( *v6 != *((_DWORD *)v9 + 4) )
  {
    if ( v9 == v11 )
    {
      v10 = v9;
      v9 = 0LL;
      goto LABEL_8;
    }
    v9 = (__int64 *)v9[1];
  }
  v10 = (__int64 *)*v9;
LABEL_8:
  if ( !v9 )
  {
LABEL_10:
    std::_Hash<std::_Uset_traits<unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<unsigned int>,0>>::_Check_max_size(a1);
    v14 = a1 + 1;
    v12 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x18uLL);
    v15 = v12;
    v12[4] = *a3;
    if ( (unsigned __int8)std::_Hash<std::_Umap_traits<winrt::hstring,std::wstring,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,std::wstring>>,0>>::_Check_rehash_required_1(a1) )
    {
      std::_Hash<std::_Uset_traits<unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<unsigned int>,0>>::_Rehash_for_1(a1);
      v10 = *(__int64 **)((__int64 (__fastcall *)(_QWORD *, _QWORD **, _DWORD *, __int64))std::_Hash<std::_Uset_traits<unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<unsigned int>,0>>::_Find_last<unsigned int>)(
                           a1,
                           &v14,
                           v12 + 4,
                           v7);
    }
    *(_QWORD *)a2 = std::_Hash<std::_Uset_traits<unsigned int,std::_Uhash_compare<unsigned int,std::hash<unsigned int>,std::equal_to<unsigned int>>,std::allocator<unsigned int>,0>>::_Insert_new_node_before(
                      a1,
                      v7,
                      v10,
                      v12,
                      v14,
                      v15);
    *(_BYTE *)(a2 + 8) = 1;
  }
  else
  {
    *(_QWORD *)a2 = v9;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
