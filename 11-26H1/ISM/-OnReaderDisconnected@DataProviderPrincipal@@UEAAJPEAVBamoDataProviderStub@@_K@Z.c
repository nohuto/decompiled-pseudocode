/*
 * XREFs of ?OnReaderDisconnected@DataProviderPrincipal@@UEAAJPEAVBamoDataProviderStub@@_K@Z @ 0x180092C90
 * Callers:
 *     <none>
 * Callees:
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x1800292CC (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ?OnDataSourceReaderDisconnected@GestureHandler@@QEAAXXZ @ 0x18007FC58 (-OnDataSourceReaderDisconnected@GestureHandler@@QEAAXXZ.c)
 *     ?find@?$_Hash@V?$_Umap_traits@_KV?$shared_ptr@VGestureHandler@@@std@@V?$_Uhash_compare@_KU?$hash@_K@std@@U?$equal_to@_K@2@@2@V?$allocator@U?$pair@$$CB_KV?$shared_ptr@VGestureHandler@@@std@@@std@@@2@$0A@@std@@@std@@QEAA?AV?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CB_KV?$shared_ptr@VGestureHandler@@@std@@@std@@@std@@@std@@@2@AEB_K@Z @ 0x180092D04 (-find@-$_Hash@V-$_Umap_traits@_KV-$shared_ptr@VGestureHandler@@@std@@V-$_Uhash_compare@_KU-$hash.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall DataProviderPrincipal::OnReaderDisconnected(
        DataProviderPrincipal *this,
        struct BamoDataProviderStub *a2,
        __int64 a3)
{
  struct InputSystemServerConnection *BamoServerConnection; // rax
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v8; // [rsp+40h] [rbp+18h] BYREF
  __int64 v9; // [rsp+48h] [rbp+20h] BYREF

  BamoServerConnection = ISMStatics::GetBamoServerConnection();
  v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)BamoServerConnection + 31) + 8LL) + 88LL))(*((_QWORD *)BamoServerConnection + 31) + 8LL);
  v8 = a3;
  v6 = v5;
  std::_Hash<std::_Umap_traits<unsigned __int64,std::shared_ptr<GestureHandler>,std::_Uhash_compare<unsigned __int64,std::hash<unsigned __int64>,std::equal_to<unsigned __int64>>,std::allocator<std::pair<unsigned __int64 const,std::shared_ptr<GestureHandler>>>,0>>::find(
    v5 + 264,
    &v9,
    &v8);
  if ( v9 != *(_QWORD *)(v6 + 272) )
    GestureHandler::OnDataSourceReaderDisconnected(*(GestureHandler **)(v9 + 24));
  return 0LL;
}
