/*
 * XREFs of ??1?$_Deleted_copy_assign@U?$_Variant_destroy_layer_@PEAXV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@std@@PEAXV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@std@@QEAA@XZ @ 0x180013B00
 * Callers:
 *     ?GetInputSiteFromInputSinkData@InputSiteManager@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@$$QEAVLegacyInputSinkData@@_N@Z @ 0x180017010 (-GetInputSiteFromInputSinkData@InputSiteManager@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@$$Q.c)
 *     ?UpdateHierarchyFromInputSinkDataCache@InputSiteHierarchyManager@@UEAAXXZ @ 0x18002BBE0 (-UpdateHierarchyFromInputSinkDataCache@InputSiteHierarchyManager@@UEAAXXZ.c)
 *     ?reset@?$_Optional_destruct_base@VLegacyInputSinkData@@$0A@@std@@QEAAXXZ @ 0x18002C4E4 (-reset@-$_Optional_destruct_base@VLegacyInputSinkData@@$0A@@std@@QEAAXXZ.c)
 *     ??1?$_Optional_destruct_base@VLegacyInputSinkData@@$0A@@std@@QEAA@XZ @ 0x18003FAB4 (--1-$_Optional_destruct_base@VLegacyInputSinkData@@$0A@@std@@QEAA@XZ.c)
 *     _InputSiteManager::GetInputSiteFromInputSinkHandle_::_1_::dtor$0 @ 0x1801D4456 (_InputSiteManager--GetInputSiteFromInputSinkHandle_--_1_--dtor$0.c)
 *     _InputSiteManager::GetInputSiteFromInputSinkData_::_1_::dtor$3 @ 0x1801D47A0 (_InputSiteManager--GetInputSiteFromInputSinkData_--_1_--dtor$3.c)
 *     _InputSiteHierarchyManager::UpdateHierarchyFromInputSinkDataCache_::_1_::dtor$10 @ 0x1801D5DC0 (_InputSiteHierarchyManager--UpdateHierarchyFromInputSinkDataCache_--_1_--dtor$10.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180013B28 (--1-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-NtCloseCompositi.c)
 */

__int64 __fastcall std::_Deleted_copy_assign<std::_Variant_destroy_layer_<void *,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>,void *,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>::~_Deleted_copy_assign<std::_Variant_destroy_layer_<void *,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>,void *,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>(
        __int64 a1)
{
  __int64 result; // rax

  result = *(char *)(a1 + 8) + 1LL;
  if ( *(char *)(a1 + 8) != -1LL )
  {
    if ( *(_BYTE *)(a1 + 8) )
      return wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>(a1);
  }
  return result;
}
