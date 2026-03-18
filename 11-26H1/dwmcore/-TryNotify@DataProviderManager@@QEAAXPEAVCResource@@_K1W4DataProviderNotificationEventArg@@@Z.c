/*
 * XREFs of ?TryNotify@DataProviderManager@@QEAAXPEAVCResource@@_K1W4DataProviderNotificationEventArg@@@Z @ 0x18022E7D0
 * Callers:
 *     ?TransitionTrue@CAnimationTrigger@@AEAAXXZ @ 0x1801D5634 (-TransitionTrue@CAnimationTrigger@@AEAAXXZ.c)
 *     ?OnChanged@CAnimationTrigger@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x180269EC0 (-OnChanged@CAnimationTrigger@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     ?DoesResourceHaveAccess@DataSourceProxy@@QEAA_NPEAVCResource@@@Z @ 0x1801625C8 (-DoesResourceHaveAccess@DataSourceProxy@@QEAA_NPEAVCResource@@@Z.c)
 *     ?GetDataSourceProxy@DataProviderManager@@QEAAPEAVBamoDataSourceProxy@@_K0@Z @ 0x1802077B4 (-GetDataSourceProxy@DataProviderManager@@QEAAPEAVBamoDataSourceProxy@@_K0@Z.c)
 *     ?find@?$_Hash@V?$_Umap_traits@_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@std@@V?$allocator@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@@std@@@std@@@std@@@2@AEB_K@Z @ 0x1802078A8 (-find@-$_Hash@V-$_Umap_traits@_KV-$ComPtr@VBamoDataSourceProxy@@@WRL@Microsoft@@V-$_Uhash_compar.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall DataProviderManager::TryNotify(
        DataProviderManager *a1,
        struct CResource *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5)
{
  struct BamoDataSourceProxy *DataSourceProxy; // rax
  __int64 *v10; // [rsp+20h] [rbp-18h] BYREF
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = a3;
  DataSourceProxy = DataProviderManager::GetDataSourceProxy(a1, a3, a4);
  if ( DataSourceProxy )
  {
    LOBYTE(DataSourceProxy) = DataSourceProxy::DoesResourceHaveAccess(DataSourceProxy, a2);
    if ( (_BYTE)DataSourceProxy )
    {
      std::_Hash<std::_Umap_traits<unsigned __int64,Microsoft::WRL::ComPtr<BamoDataSourceProxy>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,Microsoft::WRL::ComPtr<BamoDataSourceProxy>>>,0>>::find(
        (_QWORD *)a1 + 5,
        &v10,
        (const unsigned __int8 *)&v11);
      LOBYTE(DataSourceProxy) = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)(v10[3] + 8) + 64LL))(
                                  v10[3] + 8,
                                  a4,
                                  a5);
    }
  }
  return (char)DataSourceProxy;
}
