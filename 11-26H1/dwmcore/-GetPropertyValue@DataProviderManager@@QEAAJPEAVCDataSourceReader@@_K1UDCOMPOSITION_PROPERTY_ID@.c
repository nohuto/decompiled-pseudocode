/*
 * XREFs of ?GetPropertyValue@DataProviderManager@@QEAAJPEAVCDataSourceReader@@_K1UDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x180207808
 * Callers:
 *     ?GetProperty@CDataSourceReader@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x1801D1EE0 (-GetProperty@CDataSourceReader@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetDataSource@DataProviderProxy@@QEAAPEAVBamoDataSourceProxy@@_K@Z @ 0x1801DB538 (-GetDataSource@DataProviderProxy@@QEAAPEAVBamoDataSourceProxy@@_K@Z.c)
 *     ?find@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@2@AEB_K@Z @ 0x1802078A8 (-find@-$_Hash@V-$_Umap_traits@_KV-$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@V-$_Uhash_compar.c)
 *     ?GetPropertyValue@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@UDCOMPOSITION_PROPERTY_ID@@PEAVCExpressionValue@@@Z @ 0x180242DCC (-GetPropertyValue@DataSourceProxy@@QEAAJPEAVCDataSourceReader@@UDCOMPOSITION_PROPERTY_ID@@PEAVCE.c)
 */

__int64 __fastcall DataProviderManager::GetPropertyValue(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6)
{
  __int64 v9; // rdx
  struct BamoDataSourceProxy *DataSource; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF
  __int64 v14; // [rsp+40h] [rbp+18h] BYREF

  v14 = a3;
  std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<BamoDataSourceProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>>,0>>::find(
    a1 + 40,
    &v13,
    &v14);
  if ( v13 == *(_QWORD *)(a1 + 48) )
  {
    v9 = 318LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\dataprovidermanager.cpp",
      (const char *)0x80004005LL);
    return 2147500037LL;
  }
  DataSource = DataProviderProxy::GetDataSource(*(DataProviderProxy **)(v13 + 24), a4);
  if ( !DataSource )
  {
    v9 = 321LL;
    goto LABEL_3;
  }
  return DataSourceProxy::GetPropertyValue(DataSource, a2, a5, a6);
}
