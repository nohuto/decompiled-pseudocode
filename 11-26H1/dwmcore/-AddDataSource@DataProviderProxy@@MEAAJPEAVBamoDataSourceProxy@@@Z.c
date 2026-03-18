/*
 * XREFs of ?AddDataSource@DataProviderProxy@@MEAAJPEAVBamoDataSourceProxy@@@Z @ 0x1802440E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$GetUniqueId@VDataSourceProxy@@@DataProviderHelper@@YA_KPEAVDataSourceProxy@@@Z @ 0x18022E1F4 (--$GetUniqueId@VDataSourceProxy@@@DataProviderHelper@@YA_KPEAVDataSourceProxy@@@Z.c)
 *     ?CheckAndRegisterReadyReaders@DataProviderManager@@QEAAXPEAVBamoDataProviderProxy@@PEAVBamoDataSourceProxy@@@Z @ 0x18022E55C (-CheckAndRegisterReadyReaders@DataProviderManager@@QEAAXPEAVBamoDataProviderProxy@@PEAVBamoDataS.c)
 *     ??$emplace@_KAEAPEAVBamoDataSourceProxy@@@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@std@@_N@1@$$QEA_KAEAPEAVBamoDataSourceProxy@@@Z @ 0x180243DA0 (--$emplace@_KAEAPEAVBamoDataSourceProxy@@@-$_Hash@V-$_Umap_traits@_KV-$ComPtr@VBamoDataSourcePro.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall DataProviderProxy::AddDataSource(DataProviderProxy *this, struct BamoDataSourceProxy *a2)
{
  DataProviderManager *v4; // rcx
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF
  __int64 Unique; // [rsp+40h] [rbp+8h] BYREF
  void (__fastcall ***v8)(_QWORD); // [rsp+48h] [rbp+10h] BYREF

  v8 = (void (__fastcall ***)(_QWORD))a2;
  *((_QWORD *)a2 + 24) = this;
  Unique = DataProviderHelper::GetUniqueId<DataSourceProxy>((__int64)a2);
  std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<BamoDataSourceProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>>,0>>::emplace<unsigned __int64,BamoDataSourceProxy * &>(
    (float *)this + 20,
    (__int64)v6,
    (unsigned __int8 *)&Unique,
    &v8);
  if ( !v6[8] )
    (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)this + 1) + 48LL))((char *)this + 8, 2147942583LL);
  v4 = (DataProviderManager *)*((_QWORD *)this + 9);
  if ( v4 )
    DataProviderManager::CheckAndRegisterReadyReaders(v4, this, a2);
  return 0LL;
}
