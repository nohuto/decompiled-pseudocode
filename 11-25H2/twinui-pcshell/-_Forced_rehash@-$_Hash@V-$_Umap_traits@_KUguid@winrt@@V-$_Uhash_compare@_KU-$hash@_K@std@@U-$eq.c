/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Umap_traits@_KUguid@winrt@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUguid@winrt@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x1802CBF60
 * Callers:
 *     ?SyncGlobalTabOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_KAEBV?$vector@Uguid@winrt@@V?$allocator@Uguid@winrt@@@std@@@std@@1@Z @ 0x180061490 (-SyncGlobalTabOrder@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_KAEBV-$vect.c)
 *     ??$emplace@AEA_KAEBUguid@winrt@@@?$_Hash@V?$_Umap_traits@_KUguid@winrt@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUguid@winrt@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUguid@winrt@@@std@@@std@@@std@@@std@@_N@1@AEA_KAEBUguid@winrt@@@Z @ 0x180127BC8 (--$emplace@AEA_KAEBUguid@winrt@@@-$_Hash@V-$_Umap_traits@_KUguid@winrt@@V-$_Uhash_compare@_KU-$h.c)
 *     ??$_Try_emplace@AEB_KAEAU?$com_ptr@UTabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAUWindowTabDataModel@Shell@UI@Internal@Windows@2@AEAUevent_token@2@AEAU82@@?$_Hash@V?$_Umap_traits@_KUWindowData@implementation@Shell@Internal@Windows@winrt@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@8@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@PEAX@std@@_N@1@AEB_KAEAU?$com_ptr@UTabProxyWindowFactory@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAUWindowTabDataModel@Shell@UI@Internal@Windows@4@AEAUevent_token@4@3@Z @ 0x1802A2F0C (--$_Try_emplace@AEB_KAEAU-$com_ptr@UTabProxyWindowFactory@implementation@Shell@Internal@Windows@.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUWindowData@implementation@Shell@Internal@Windows@winrt@@@std@@@std@@@std@@@2@@Z @ 0x180063850 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_180063850.c)
 *     ??$?R_K@?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@QEBA_KAEB_K@Z @ 0x180154B2C (--$-R_K@-$_Uhash_compare@_KU-$hash@_K@std@@U-$equal_to@_K@2@@std@@QEBA_KAEB_K@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned __int64,winrt::guid,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,winrt::guid>>,0>>::_Forced_rehash(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v3; // rcx
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 *v7; // rcx
  __int64 result; // rax
  __int64 i; // r10
  __int64 **v10; // rdx
  __int64 v11; // r10
  __int64 v12; // r11
  __int64 v13; // r9
  __int64 v14; // r8
  __int64 v15; // rdi
  _QWORD *v16; // rdx
  __int64 *v17; // rdi
  __int64 v18; // r8
  _QWORD *v19; // rdx
  _QWORD *v20; // rdx

  _BitScanReverse64(&v3, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v3 )
    std::_Xlength_error("invalid hash bucket count");
  v4 = a1[1];
  _BitScanReverse64(&v5, (a2 - 1) | 1);
  v6 = 1LL << ((unsigned __int8)v5 + 1);
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,winrt::Windows::Internal::Shell::implementation::WindowData>>>>>>::_Assign_grow(
    (__int64)(a1 + 3),
    2 * v6,
    v4);
  a1[7] = v6;
  result = v6 - 1;
  a1[6] = v6 - 1;
  for ( i = *(_QWORD *)a1[1]; i != v4; i = v12 )
  {
    result = std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>::operator()<unsigned __int64>(
               (__int64)v7,
               i + 16);
    v13 = a1[3];
    v14 = 2 * (a1[6] & result);
    if ( *(_QWORD *)(v13 + 16 * (a1[6] & result)) == v4 )
    {
      *(_QWORD *)(v13 + 16 * (a1[6] & result)) = v11;
LABEL_7:
      *(_QWORD *)(v13 + 8 * v14 + 8) = v11;
      continue;
    }
    result = *(_QWORD *)(v13 + 16 * (a1[6] & result) + 8);
    v7 = *v10;
    if ( *v10 == *(__int64 **)(result + 16) )
    {
      v15 = *(_QWORD *)result;
      if ( *(_QWORD *)result != v11 )
      {
        v16 = *(_QWORD **)(v11 + 8);
        *v16 = v12;
        v7 = *(__int64 **)(v12 + 8);
        *v7 = v15;
        result = *(_QWORD *)(v15 + 8);
        *(_QWORD *)result = v11;
        *(_QWORD *)(v15 + 8) = v7;
        *(_QWORD *)(v12 + 8) = v16;
        *(_QWORD *)(v11 + 8) = result;
      }
      goto LABEL_7;
    }
    while ( 1 )
    {
      v17 = (__int64 *)(result + 8);
      if ( *(_QWORD *)(v13 + 8 * v14) == result )
        break;
      result = *v17;
      if ( v7 == *(__int64 **)(*v17 + 16) )
      {
        v18 = *(_QWORD *)result;
        v19 = *(_QWORD **)(v11 + 8);
        *v19 = v12;
        v7 = *(__int64 **)(v12 + 8);
        *v7 = v18;
        result = *(_QWORD *)(v18 + 8);
        *(_QWORD *)result = v11;
        *(_QWORD *)(v18 + 8) = v7;
        *(_QWORD *)(v12 + 8) = v19;
        *(_QWORD *)(v11 + 8) = result;
        goto LABEL_15;
      }
    }
    v20 = *(_QWORD **)(v11 + 8);
    *v20 = v12;
    v7 = *(__int64 **)(v12 + 8);
    *v7 = result;
    result = *v17;
    *(_QWORD *)result = v11;
    *v17 = (__int64)v7;
    *(_QWORD *)(v12 + 8) = v20;
    *(_QWORD *)(v11 + 8) = result;
    *(_QWORD *)(v13 + 8 * v14) = v11;
LABEL_15:
    ;
  }
  return result;
}
