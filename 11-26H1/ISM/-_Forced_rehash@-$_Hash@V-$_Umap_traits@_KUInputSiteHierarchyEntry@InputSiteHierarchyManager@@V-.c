/*
 * XREFs of ?_Forced_rehash@?$_Hash@V?$_Umap_traits@_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@4@$0A@@std@@@std@@IEAAX_K@Z @ 0x18006854C
 * Callers:
 *     ?GetInputSiteListToRoot@InputSiteHierarchyManager@@UEAA?AV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@_K@Z @ 0x18002B030 (-GetInputSiteListToRoot@InputSiteHierarchyManager@@UEAA-AV-$vector@V-$ComPtr@VInputSite@@@WRL@Mi.c)
 *     ??$_Try_emplace@AEB_K$$V@?$_Hash@V?$_Umap_traits@_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@@4@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@$$CB_KUInputSiteHierarchyEntry@InputSiteHierarchyManager@@@std@@PEAX@std@@_N@1@AEB_K@Z @ 0x18002C898 (--$_Try_emplace@AEB_K$$V@-$_Hash@V-$_Umap_traits@_KUInputSiteHierarchyEntry@InputSiteHierarchyMa.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_K_K@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_K_K@std@@@std@@@std@@@2@@Z @ 0x1800686CC (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_ea_1800686CC.c)
 *     ??R?$_Conditionally_enabled_hash@_K$00@std@@SA_KAEB_K@Z @ 0x1800A5514 (--R-$_Conditionally_enabled_hash@_K$00@std@@SA_KAEB_K@Z.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<unsigned __int64,InputSiteHierarchyManager::InputSiteHierarchyEntry,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,InputSiteHierarchyManager::InputSiteHierarchyEntry>>,0>>::_Forced_rehash(
        _QWORD *a1,
        unsigned __int64 a2)
{
  unsigned __int64 v3; // rcx
  _QWORD *v4; // rdi
  unsigned __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 result; // rax
  _QWORD *v8; // r11
  _QWORD *v9; // rbx
  __int64 v10; // r11
  __int64 v11; // r9
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 *v14; // r10
  _QWORD *v15; // rdx
  __int64 *v16; // rcx
  __int64 v17; // r10
  _QWORD *v18; // rdx
  _QWORD *v19; // rcx
  __int64 v20; // r8
  _QWORD *v21; // rdx
  _QWORD *v22; // rcx

  _BitScanReverse64(&v3, 0xFFFFFFFFFFFFFFFuLL);
  if ( a2 > 1LL << v3 )
    std::_Xlength_error("invalid hash bucket count");
  v4 = (_QWORD *)a1[1];
  _BitScanReverse64(&v5, (a2 - 1) | 1);
  v6 = 1LL << ((unsigned __int8)v5 + 1);
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,unsigned __int64>>>>>>::_Assign_grow(
    a1 + 3,
    2 * v6,
    v4);
  a1[7] = v6;
  result = v6 - 1;
  a1[6] = v6 - 1;
  v8 = *(_QWORD **)a1[1];
  v9 = v8;
  while ( v8 != v4 )
  {
    v9 = (_QWORD *)*v9;
    result = std::_Conditionally_enabled_hash<unsigned __int64,1>::operator()((unsigned __int8 *)v8 + 16);
    v11 = a1[3];
    v12 = 2 * (a1[6] & result);
    if ( *(_QWORD **)(v11 + 16 * (a1[6] & result)) == v4 )
    {
      *(_QWORD *)(v11 + 16 * (a1[6] & result)) = v10;
LABEL_6:
      *(_QWORD *)(v11 + 8 * v12 + 8) = v10;
      goto LABEL_7;
    }
    result = *(_QWORD *)(v11 + 16 * (a1[6] & result) + 8);
    v13 = *(_QWORD *)(v10 + 16);
    if ( v13 == *(_QWORD *)(result + 16) )
    {
      v17 = *(_QWORD *)result;
      if ( *(_QWORD *)result != v10 )
      {
        v18 = *(_QWORD **)(v10 + 8);
        *v18 = v9;
        v19 = (_QWORD *)v9[1];
        *v19 = v17;
        result = *(_QWORD *)(v17 + 8);
        *(_QWORD *)result = v10;
        *(_QWORD *)(v17 + 8) = v19;
        v9[1] = v18;
        *(_QWORD *)(v10 + 8) = result;
      }
      goto LABEL_6;
    }
    do
    {
      v14 = (__int64 *)(result + 8);
      if ( *(_QWORD *)(v11 + 8 * v12) == result )
      {
        v15 = *(_QWORD **)(v10 + 8);
        *v15 = v9;
        v16 = (__int64 *)v9[1];
        *v16 = result;
        result = *v14;
        *(_QWORD *)result = v10;
        *v14 = (__int64)v16;
        v9[1] = v15;
        *(_QWORD *)(v10 + 8) = result;
        *(_QWORD *)(v11 + 8 * v12) = v10;
        goto LABEL_7;
      }
      result = *v14;
    }
    while ( v13 != *(_QWORD *)(*v14 + 16) );
    v20 = *(_QWORD *)result;
    v21 = *(_QWORD **)(v10 + 8);
    *v21 = v9;
    v22 = (_QWORD *)v9[1];
    *v22 = v20;
    result = *(_QWORD *)(v20 + 8);
    *(_QWORD *)result = v10;
    *(_QWORD *)(v20 + 8) = v22;
    v9[1] = v21;
    *(_QWORD *)(v10 + 8) = result;
LABEL_7:
    v8 = v9;
  }
  return result;
}
