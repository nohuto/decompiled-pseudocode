/*
 * XREFs of ?RemoveTabsFromWindowOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@AEBV?$unordered_map@_KUguid@winrt@@U?$hash@_K@std@@U?$equal_to@_K@4@V?$allocator@U?$pair@$$CB_KUguid@winrt@@@std@@@4@@8@@Z @ 0x18002C14C
 * Callers:
 *     ?SyncGlobalTabOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_KAEBV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@1@Z @ 0x18002BA30 (-SyncGlobalTabOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_KAEBV-$vect.c)
 *     ?RemoveWindowTabDataModel@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_K@Z @ 0x1801812D0 (-RemoveWindowTabDataModel@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_K@Z.c)
 * Callees:
 *     ?_Tidy@?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@AEAAXXZ @ 0x1800CB854 (-_Tidy@-$deque@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@AEAAXXZ.c)
 *     ??$_Try_emplace@AEBUguid@winrt@@$$V@?$_Hash@V?$_Umap_traits@Uguid@winrt@@_KV?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@_K@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBUguid@winrt@@_K@std@@PEAX@std@@_N@1@AEBUguid@winrt@@@Z @ 0x1800CC270 (--$_Try_emplace@AEBUguid@winrt@@$$V@-$_Hash@V-$_Umap_traits@Uguid@winrt@@_KV-$_Uhash_compare@Ugu.c)
 *     ??0?$deque@UtagRECT@@V?$allocator@UtagRECT@@@std@@@std@@QEAA@XZ @ 0x1800E4704 (--0-$deque@UtagRECT@@V-$allocator@UtagRECT@@@std@@@std@@QEAA@XZ.c)
 *     ??A?$deque@_KV?$allocator@_K@std@@@std@@QEAAAEA_K_K@Z @ 0x18018146C (--A-$deque@_KV-$allocator@_K@std@@@std@@QEAAAEA_K_K@Z.c)
 *     ??$_Erase@Uguid@winrt@@@?$_Hash@V?$_Umap_traits@Uguid@winrt@@_KV?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@_K@std@@@4@$0A@@std@@@std@@AEAA_KAEBUguid@winrt@@@Z @ 0x1801C8488 (--$_Erase@Uguid@winrt@@@-$_Hash@V-$_Umap_traits@Uguid@winrt@@_KV-$_Uhash_compare@Uguid@winrt@@U-.c)
 *     ??$_Emplace_back_internal@AEB_K@?$deque@_KV?$allocator@_K@std@@@std@@AEAAXAEB_K@Z @ 0x1801C9184 (--$_Emplace_back_internal@AEB_K@-$deque@_KV-$allocator@_K@std@@@std@@AEAAXAEB_K@Z.c)
 *     ?at@?$unordered_map@_KUguid@winrt@@U?$hash@_K@std@@U?$equal_to@_K@4@V?$allocator@U?$pair@$$CB_KUguid@winrt@@@std@@@4@@std@@QEBAAEBUguid@winrt@@AEB_K@Z @ 0x180201FA0 (-at@-$unordered_map@_KUguid@winrt@@U-$hash@_K@std@@U-$equal_to@_K@4@V-$allocator@U-$pair@$$CB_KU.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??$_Assign_range@V?$_Deque_unchecked_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@_K@std@@@std@@@std@@V12@@?$deque@_KV?$allocator@_K@std@@@std@@AEAAXV?$_Deque_unchecked_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@_K@std@@@std@@@1@V21@@Z @ 0x18057C6A4 (--$_Assign_range@V-$_Deque_unchecked_const_iterator@V-$_Deque_val@U-$_Deque_simple_types@_K@std@.c)
 *     ?find@?$_Hash@V?$_Umap_traits@_KUguid@winrt@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUguid@winrt@@@std@@@4@$0A@@std@@@std@@QEBA?AV?$_List_const_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUguid@winrt@@@std@@@std@@@std@@@2@AEB_K@Z @ 0x18057FA98 (-find@-$_Hash@V-$_Umap_traits@_KUguid@winrt@@V-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::RemoveTabsFromWindowOrder(
        __int64 a1,
        __int64 *a2,
        __int64 a3)
{
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // r12
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 i; // rbx
  __int64 v14; // rcx
  _QWORD v16[2]; // [rsp+20h] [rbp-50h] BYREF
  _QWORD v17[2]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v18[3]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v19; // [rsp+58h] [rbp-18h]
  __int64 v20; // [rsp+60h] [rbp-10h]
  unsigned __int64 v21; // [rsp+A0h] [rbp+30h] BYREF
  char v22; // [rsp+A8h] [rbp+38h] BYREF

  std::deque<tagRECT>::deque<tagRECT>(v18);
  v6 = 0LL;
  v21 = 0LL;
  if ( *(_QWORD *)(a1 + 720) )
  {
    v7 = 0LL;
    v8 = 0LL;
    do
    {
      if ( *(_QWORD *)std::_Hash<std::_Umap_traits<unsigned __int64,winrt::guid,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,winrt::guid>>,0>>::find(
                        a3,
                        &v22,
                        &v21) != *(_QWORD *)(a3 + 8) )
      {
        v9 = v20;
        v10 = std::unordered_map<unsigned __int64,winrt::guid>::at(a3, &v21);
        *(_QWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<winrt::guid,unsigned __int64,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,unsigned __int64>>,0>>::_Try_emplace<winrt::guid const &,>(
                                 a1 + 728,
                                 v17,
                                 v10)
                  + 32LL) = v9;
        v11 = std::deque<unsigned __int64>::operator[](a1 + 688, v6);
        std::deque<unsigned __int64>::_Emplace_back_internal<unsigned __int64 const &>(v18, v11);
        v7 = v8;
      }
      v6 = v7 + 1;
      v21 = v6;
      ++v7;
      v8 = v6;
    }
    while ( v6 < *(_QWORD *)(a1 + 720) );
  }
  if ( (_QWORD *)(a1 + 688) != v18 )
  {
    v16[0] = v18;
    v16[1] = v19 + v20;
    v17[0] = v18;
    v17[1] = v19;
    std::deque<unsigned __int64>::_Assign_range<std::_Deque_unchecked_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>,std::_Deque_unchecked_const_iterator<std::_Deque_val<std::_Deque_simple_types<unsigned __int64>>>>(
      a1 + 688,
      v17,
      v16);
  }
  v12 = a2[1];
  for ( i = *a2; i != v12; i += 16LL )
    std::_Hash<std::_Umap_traits<winrt::guid,unsigned __int64,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,unsigned __int64>>,0>>::_Erase<winrt::guid>(
      a1 + 728,
      i);
  std::deque<tagRECT>::_Tidy(v18);
  v14 = v18[0];
  v18[0] = 0LL;
  return std::_Deallocate<16>(v14, 16LL);
}
