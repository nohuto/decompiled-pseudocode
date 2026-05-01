/*
 * XREFs of ?RemoveTabsFromWindowOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAXAEBV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@AEBV?$unordered_map@_KUguid@winrt@@U?$hash@_K@std@@U?$equal_to@_K@4@V?$allocator@U?$pair@$$CB_KUguid@winrt@@@std@@@4@@8@@Z @ 0x180061CF4
 * Callers:
 *     ?SyncGlobalTabOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_KAEBV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@1@Z @ 0x180061490 (-SyncGlobalTabOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_KAEBV-$vect.c)
 *     ?RemoveWindowTabDataModel@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_K@Z @ 0x18012787C (-RemoveWindowTabDataModel@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_K@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180029B4C (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180029F1C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Tidy@?$deque@_KV?$allocator@_K@std@@@std@@AEAAXXZ @ 0x1800E1A2C (-_Tidy@-$deque@_KV-$allocator@_K@std@@@std@@AEAAXXZ.c)
 *     ?at@?$unordered_map@_KUguid@winrt@@U?$hash@_K@std@@U?$equal_to@_K@4@V?$allocator@U?$pair@$$CB_KUguid@winrt@@@std@@@4@@std@@QEBAAEBUguid@winrt@@AEB_K@Z @ 0x180154AC4 (-at@-$unordered_map@_KUguid@winrt@@U-$hash@_K@std@@U-$equal_to@_K@4@V-$allocator@U-$pair@$$CB_KU.c)
 *     ??$_Emplace_back_internal@AEB_K@?$deque@_KV?$allocator@_K@std@@@std@@AEAAXAEB_K@Z @ 0x1801A8C50 (--$_Emplace_back_internal@AEB_K@-$deque@_KV-$allocator@_K@std@@@std@@AEAAXAEB_K@Z.c)
 *     ??$_Try_emplace@AEBUguid@winrt@@$$V@?$_Hash@V?$_Umap_traits@Uguid@winrt@@_KV?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@_K@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CBUguid@winrt@@_K@std@@PEAX@std@@_N@1@AEBUguid@winrt@@@Z @ 0x1801A8E70 (--$_Try_emplace@AEBUguid@winrt@@$$V@-$_Hash@V-$_Umap_traits@Uguid@winrt@@_KV-$_Uhash_compare@Ugu.c)
 *     ??$_Erase@Uguid@winrt@@@?$_Hash@V?$_Umap_traits@Uguid@winrt@@_KV?$_Uhash_compare@Uguid@winrt@@U?$hash@Uguid@winrt@@@std@@U?$equal_to@Uguid@winrt@@@4@@std@@V?$allocator@U?$pair@$$CBUguid@winrt@@_K@std@@@4@$0A@@std@@@std@@AEAA_KAEBUguid@winrt@@@Z @ 0x1801D1F14 (--$_Erase@Uguid@winrt@@@-$_Hash@V-$_Umap_traits@Uguid@winrt@@_KV-$_Uhash_compare@Uguid@winrt@@U-.c)
 *     ??4?$deque@_KV?$allocator@_K@std@@@std@@QEAAAEAV01@AEBV01@@Z @ 0x1802CA5B0 (--4-$deque@_KV-$allocator@_K@std@@@std@@QEAAAEAV01@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall winrt::Windows::Internal::Shell::implementation::WindowTabHost::RemoveTabsFromWindowOrder(
        _QWORD *a1,
        __int64 *a2,
        _QWORD *a3)
{
  _QWORD *v6; // rax
  unsigned __int64 v7; // rsi
  __int64 v8; // rdx
  unsigned __int64 j; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 k; // rbx
  void *v17; // rcx
  _BYTE v18[16]; // [rsp+20h] [rbp-40h] BYREF
  _OWORD v19[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v20; // [rsp+50h] [rbp-10h]
  unsigned __int64 i; // [rsp+A8h] [rbp+48h] BYREF

  memset(v19, 0, sizeof(v19));
  v20 = 0LL;
  v6 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
  v6[1] = 0LL;
  *(_QWORD *)&v19[0] = v6;
  *v6 = v19;
  v7 = 0LL;
  for ( i = 0LL; v7 < a1[90]; i = v7 )
  {
    v8 = 0xCBF29CE484222325uLL;
    for ( j = 0LL; j < 8; ++j )
      v8 = 0x100000001B3LL * (*((unsigned __int8 *)&i + j) ^ (unsigned __int64)v8);
    v10 = 2 * (v8 & a3[6]);
    v11 = a3[3];
    v12 = *(_QWORD *)(v11 + 8 * v10 + 8);
    if ( v12 == a3[1] )
    {
LABEL_5:
      v12 = 0LL;
    }
    else
    {
      while ( v7 != *(_QWORD *)(v12 + 16) )
      {
        if ( v12 == *(_QWORD *)(v11 + 8 * v10) )
          goto LABEL_5;
        v12 = *(_QWORD *)(v12 + 8);
      }
    }
    if ( v12 && v12 != a3[1] )
    {
      v13 = v20;
      v14 = std::unordered_map<unsigned __int64,winrt::guid>::at(a3, &i);
      *(_QWORD *)(*(_QWORD *)std::_Hash<std::_Umap_traits<winrt::guid,unsigned __int64,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,unsigned __int64>>,0>>::_Try_emplace<winrt::guid const &,>(
                               a1 + 91,
                               v18,
                               v14)
                + 32LL) = v13;
      std::deque<unsigned __int64>::_Emplace_back_internal<unsigned __int64 const &>(
        v19,
        *(_QWORD *)(a1[87] + 8 * (((v7 + a1[89]) >> 1) & (a1[88] - 1LL)))
      + 8LL * (((_DWORD)v7 + *((_DWORD *)a1 + 178)) & 1));
    }
    ++v7;
  }
  std::deque<unsigned __int64>::operator=(a1 + 86, v19);
  v15 = a2[1];
  for ( k = *a2; k != v15; k += 16LL )
    std::_Hash<std::_Umap_traits<winrt::guid,unsigned __int64,std::_Uhash_compare<winrt::guid,std::hash<winrt::guid>,std::equal_to<winrt::guid>>,std::allocator<std::pair<winrt::guid const,unsigned __int64>>,0>>::_Erase<winrt::guid>(
      a1 + 91,
      k);
  std::deque<unsigned __int64>::_Tidy(v19);
  v17 = *(void **)&v19[0];
  *(_QWORD *)&v19[0] = 0LL;
  std::_Deallocate<16,0>(v17, (const struct std::nothrow_t *)0x10);
}
