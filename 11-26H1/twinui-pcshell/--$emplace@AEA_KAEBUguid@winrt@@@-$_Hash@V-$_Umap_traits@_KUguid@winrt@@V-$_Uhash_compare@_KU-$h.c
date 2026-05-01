/*
 * XREFs of ??$emplace@AEA_KAEBUguid@winrt@@@?$_Hash@V?$_Umap_traits@_KUguid@winrt@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUguid@winrt@@@std@@@4@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KUguid@winrt@@@std@@@std@@@std@@@std@@_N@1@AEA_KAEBUguid@winrt@@@Z @ 0x1801815CC
 * Callers:
 *     ?RemoveWindowTabDataModel@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_K@Z @ 0x1801812D0 (-RemoveWindowTabDataModel@WindowTabHost@implementation@Shell@Internal@Windows@winrt@@AEAAX_K@Z.c)
 * Callees:
 *     ?_Desired_grow_bucket_count@?$_Hash@V?$_Umap_traits@Uhstring@winrt@@V?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@V?$_Uhash_compare@Uhstring@winrt@@U?$hash@Uhstring@winrt@@@std@@U?$equal_to@Uhstring@winrt@@@4@@4@V?$allocator@U?$pair@$$CBUhstring@winrt@@V?$unordered_set@IU?$hash@I@std@@U?$equal_to@I@2@V?$allocator@I@2@@std@@@std@@@4@$0A@@std@@@std@@IEBA_K_K@Z @ 0x18016DF38 (-_Desired_grow_bucket_count@-$_Hash@V-$_Umap_traits@Uhstring@winrt@@V-$unordered_set@IU-$hash@I@.c)
 *     ??$_Find_last@_K@?$_Hash@V?$_Umap_traits@_KUguid@winrt@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUguid@winrt@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@$$CB_KUguid@winrt@@@std@@PEAX@std@@@1@AEB_K_K@Z @ 0x1801E3884 (--$_Find_last@_K@-$_Hash@V-$_Umap_traits@_KUguid@winrt@@V-$_Uhash_compare@_KU-$hash@_K@std@@U-$e.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x180285C68 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ??R?$_Conditionally_enabled_hash@PEAUHWINEVENTHOOK__@@$00@std@@SA_KAEBQEAUHWINEVENTHOOK__@@@Z @ 0x180285E40 (--R-$_Conditionally_enabled_hash@PEAUHWINEVENTHOOK__@@$00@std@@SA_KAEBQEAUHWINEVENTHOOK__@@@Z.c)
 *     ?_Forced_rehash@?$_Hash@V?$_Umap_traits@_KUguid@winrt@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUguid@winrt@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x1802C3520 (-_Forced_rehash@-$_Hash@V-$_Umap_traits@_KUguid@winrt@@V-$_Uhash_compare@_KU-$hash@_K@std@@U-$eq.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned __int64,winrt::guid,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,winrt::guid>>,0>>::emplace<unsigned __int64 &,winrt::guid const &>(
        __int64 a1,
        __int64 a2,
        unsigned __int8 *a3,
        _OWORD *a4)
{
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // rbx
  __int64 v12; // rdx
  float v13; // xmm0_4
  __int64 v14; // rcx
  float v15; // xmm1_4
  __int64 *v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rax
  _QWORD v24[7]; // [rsp+20h] [rbp-38h] BYREF

  v7 = std::_Conditionally_enabled_hash<HWINEVENTHOOK__ *,1>::operator()(a3);
  v8 = *(_QWORD *)(a1 + 24);
  v9 = *(_QWORD *)(v8 + 16 * (*(_QWORD *)(a1 + 48) & v7) + 8);
  v10 = *(_QWORD *)(a1 + 8);
  if ( v9 != v10 )
  {
    v21 = *(_QWORD *)(v8 + 16 * (*(_QWORD *)(a1 + 48) & v7));
    while ( 1 )
    {
      if ( *(_QWORD *)a3 == *(_QWORD *)(v9 + 16) )
      {
        *(_QWORD *)a2 = v9;
        *(_BYTE *)(a2 + 8) = 0;
        return a2;
      }
      if ( v9 == v21 )
        break;
      v9 = *(_QWORD *)(v9 + 8);
    }
    v10 = v9;
  }
  if ( *(_QWORD *)(a1 + 16) == 0x666666666666666LL )
    std::_Xlength_error("unordered_map/set too long");
  v24[0] = a1 + 8;
  v11 = std::_Allocate<16,std::_Default_allocate_traits>(40LL);
  v24[1] = v11;
  *(_QWORD *)(v11 + 16) = *(_QWORD *)a3;
  *(_OWORD *)(v11 + 24) = *a4;
  v12 = *(_QWORD *)(a1 + 16) + 1LL;
  if ( v12 < 0 )
    v13 = (float)(v12 & 1 | (unsigned int)((unsigned __int64)v12 >> 1))
        + (float)(v12 & 1 | (unsigned int)((unsigned __int64)v12 >> 1));
  else
    v13 = (float)(int)v12;
  v14 = *(_QWORD *)(a1 + 56);
  if ( v14 < 0 )
  {
    v22 = *(_QWORD *)(a1 + 56) & 1LL | ((unsigned __int64)v14 >> 1);
    v15 = (float)(int)v22 + (float)(int)v22;
  }
  else
  {
    v15 = (float)(int)v14;
  }
  if ( (float)(v13 / v15) > *(float *)a1 )
  {
    v23 = std::_Hash<std::_Umap_traits<winrt::hstring,std::unordered_set<unsigned int>,std::_Uhash_compare<winrt::hstring,std::hash<winrt::hstring>,std::equal_to<winrt::hstring>>,std::allocator<std::pair<winrt::hstring const,std::unordered_set<unsigned int>>>,0>>::_Desired_grow_bucket_count(
            a1,
            v12);
    std::_Hash<std::_Umap_traits<unsigned __int64,winrt::guid,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,winrt::guid>>,0>>::_Forced_rehash(
      a1,
      v23);
    v10 = *(_QWORD *)std::_Hash<std::_Umap_traits<unsigned __int64,winrt::guid,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,winrt::guid>>,0>>::_Find_last<unsigned __int64>(
                       a1,
                       v24,
                       v11 + 16,
                       v7);
  }
  v16 = *(__int64 **)(v10 + 8);
  ++*(_QWORD *)(a1 + 16);
  *(_QWORD *)v11 = v10;
  *(_QWORD *)(v11 + 8) = v16;
  *v16 = v11;
  *(_QWORD *)(v10 + 8) = v11;
  v17 = 2 * (*(_QWORD *)(a1 + 48) & v7);
  v18 = *(_QWORD *)(a1 + 24);
  v19 = *(_QWORD *)(v18 + 8 * v17);
  if ( v19 == *(_QWORD *)(a1 + 8) )
  {
    *(_QWORD *)(v18 + 8 * v17) = v11;
LABEL_20:
    *(_QWORD *)(v18 + 8 * v17 + 8) = v11;
    goto LABEL_12;
  }
  if ( v19 != v10 )
  {
    if ( *(__int64 **)(v18 + 8 * v17 + 8) != v16 )
      goto LABEL_12;
    goto LABEL_20;
  }
  *(_QWORD *)(v18 + 8 * v17) = v11;
LABEL_12:
  *(_QWORD *)a2 = v11;
  *(_BYTE *)(a2 + 8) = 1;
  return a2;
}
