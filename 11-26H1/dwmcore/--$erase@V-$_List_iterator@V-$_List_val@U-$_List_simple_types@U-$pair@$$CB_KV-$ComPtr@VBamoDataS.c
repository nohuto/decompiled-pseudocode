/*
 * XREFs of ??$erase@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@$0A@@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@1@V21@@Z @ 0x180243F74
 * Callers:
 *     ?PostExpressionsUpdated@DataProviderManager@@QEAAXXZ @ 0x180185018 (-PostExpressionsUpdated@DataProviderManager@@QEAAXXZ.c)
 *     ?RemoveSourceEntry@DataProviderProxy@@QEAAJPEAVBamoDataSourceProxy@@@Z @ 0x180244BA8 (-RemoveSourceEntry@DataProviderProxy@@QEAAJPEAVBamoDataSourceProxy@@@Z.c)
 * Callees:
 *     ??R?$_Conditionally_enabled_hash@PEAVCBaseExpression@@$00@std@@SA_KAEBQEAVCBaseExpression@@@Z @ 0x180211A54 (--R-$_Conditionally_enabled_hash@PEAVCBaseExpression@@$00@std@@SA_KAEBQEAVCBaseExpression@@@Z.c)
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CB_KV?$ComPtr@VDataProviderProxy@@@WRL@Microsoft@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x18022E27C (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CB_KV-$ComPtr@VDataProviderProxy@@@WRL@Microso.c)
 */

_QWORD *__fastcall std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<BamoDataSourceProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>>,0>>::erase<std::_List_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>>>>,0>(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  _QWORD *v7; // r11
  __int64 v8; // r9
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rbx

  v5 = std::_Conditionally_enabled_hash<CBaseExpression *,1>::operator()((unsigned __int8 *)(a3 + 16));
  v8 = a1[3];
  v9 = 2 * (a1[6] & v5);
  if ( *(_QWORD **)(v8 + 16 * (a1[6] & v5) + 8) == v7 )
  {
    if ( *(_QWORD **)(v8 + 16 * (a1[6] & v5)) == v7 )
    {
      v10 = a1[1];
      *(_QWORD *)(v8 + 8 * v9) = v10;
    }
    else
    {
      v10 = v7[1];
    }
    *(_QWORD *)(v8 + 8 * v9 + 8) = v10;
  }
  else if ( *(_QWORD **)(v8 + 16 * (a1[6] & v5)) == v7 )
  {
    *(_QWORD *)(v8 + 16 * (a1[6] & v5)) = *v7;
  }
  v11 = *v7;
  --a1[2];
  *(_QWORD *)v7[1] = v11;
  *(_QWORD *)(v11 + 8) = v7[1];
  std::_List_node<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<DataProviderProxy>>,void *>::_Freenode<std::allocator<std::_List_node<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<DataProviderProxy>>,void *>>>(
    v6,
    v7);
  *a2 = v11;
  return a2;
}
