/*
 * XREFs of ?PostExpressionsUpdated@DataProviderManager@@QEAAXXZ @ 0x180185018
 * Callers:
 *     ?PreRender@CComposition@@IEAAJPEA_N@Z @ 0x18002D828 (-PreRender@CComposition@@IEAAJPEA_N@Z.c)
 * Callees:
 *     ?find@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@2@AEB_K@Z @ 0x1802078A8 (-find@-$_Hash@V-$_Umap_traits@_KV-$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@V-$_Uhash_compar.c)
 *     ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@$0A@@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@1@V21@@Z @ 0x180243F74 (--$erase@V-$_List_iterator@V-$_List_val@U-$_List_simple_types@U-$pair@$$CB_KV-$ComPtr@VBamoDataS.c)
 */

void __fastcall DataProviderManager::PostExpressionsUpdated(DataProviderManager *this)
{
  _QWORD *v1; // rdi
  _QWORD *i; // rbx
  _QWORD *v3; // rsi
  __int64 v4; // r14
  __int64 j; // rbp
  __int64 v6; // rax
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF
  char v8; // [rsp+58h] [rbp+10h] BYREF

  v1 = (_QWORD *)*((_QWORD *)this + 6);
  for ( i = (_QWORD *)*v1; i != v1; i = (_QWORD *)*i )
  {
    v3 = (_QWORD *)i[3];
    v4 = v3[19];
    for ( j = v3[18]; j != v4; j += 8LL )
    {
      std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<BamoDataSourceProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>>,0>>::find(
        v3 + 10,
        &v7,
        j);
      if ( v7 != v3[11] )
      {
        *(_QWORD *)(*(_QWORD *)(v7 + 24) + 192LL) = 0LL;
        std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<BamoDataSourceProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>>>>,0>(
          v3 + 10,
          &v8);
      }
    }
    v6 = v3[18];
    if ( v6 != v3[19] )
      v3[19] = v6;
  }
}
