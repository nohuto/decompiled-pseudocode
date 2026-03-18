/*
 * XREFs of ?OnDisconnected@DataSourceProxy@@MEAAJXZ @ 0x180242F40
 * Callers:
 *     <none>
 * Callees:
 *     ?find@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@2@AEB_K@Z @ 0x1802078A8 (-find@-$_Hash@V-$_Umap_traits@_KV-$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@V-$_Uhash_compar.c)
 *     ??$GetUniqueId@VDataSourceProxy@@@DataProviderHelper@@YA_KPEAVDataSourceProxy@@@Z @ 0x18022E1F4 (--$GetUniqueId@VDataSourceProxy@@@DataProviderHelper@@YA_KPEAVDataSourceProxy@@@Z.c)
 *     ??$emplace_back@AEA_K@?$vector@_KV?$allocator@_K@std@@@std@@QEAAAEA_KAEA_K@Z @ 0x180243F38 (--$emplace_back@AEA_K@-$vector@_KV-$allocator@_K@std@@@std@@QEAAAEA_KAEA_K@Z.c)
 */

__int64 __fastcall DataSourceProxy::OnDisconnected(DataSourceProxy *this)
{
  __int64 v1; // rbx
  __int64 Unique; // [rsp+30h] [rbp+8h] BYREF
  __int64 *v4; // [rsp+38h] [rbp+10h] BYREF

  v1 = *((_QWORD *)this + 24);
  if ( v1 )
  {
    Unique = DataProviderHelper::GetUniqueId<DataSourceProxy>((__int64)this);
    if ( *std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<BamoDataSourceProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>>,0>>::find(
            (_QWORD *)(v1 + 80),
            &v4,
            (const unsigned __int8 *)&Unique) != *(__int64 **)(v1 + 88) )
      std::vector<unsigned __int64>::emplace_back<unsigned __int64 &>(v1 + 144, &Unique);
  }
  return 0LL;
}
