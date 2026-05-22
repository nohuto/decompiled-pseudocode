/*
 * XREFs of ??1?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180013B28
 * Callers:
 *     ??1?$_Hash@V?$_Umap_traits@IUContactData@PointerInputMediator@@V?$_Uhash_compare@IU?$hash@I@std@@U?$equal_to@I@2@@std@@V?$allocator@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@4@$0A@@std@@@std@@QEAA@XZ @ 0x1800102A0 (--1-$_Hash@V-$_Umap_traits@IUContactData@PointerInputMediator@@V-$_Uhash_compare@IU-$hash@I@std@.c)
 *     ?Initialize@PointerFrame@PointerInputMediator@@QEAAXPEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x180010598 (-Initialize@PointerFrame@PointerInputMediator@@QEAAXPEBUtagMANIPULATION_INPUT_INFO@@@Z.c)
 *     ??$_Freenode@V?$allocator@U?$_List_node@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@PEAX@std@@@std@@@?$_List_node@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x1800122B8 (--$_Freenode@V-$allocator@U-$_List_node@U-$pair@$$CBIUContactData@PointerInputMediator@@@std@@PE.c)
 *     ?_Destroy@?$_Ref_count_obj2@V?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@std@@EEAAXXZ @ 0x1800127E0 (-_Destroy@-$_Ref_count_obj2@V-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6A.c)
 *     ??1?$_Deleted_copy_assign@U?$_Variant_destroy_layer_@PEAXV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@std@@PEAXV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@std@@QEAA@XZ @ 0x180013B00 (--1-$_Deleted_copy_assign@U-$_Variant_destroy_layer_@PEAXV-$unique_any_t@V-$unique_storage@U-$ha.c)
 *     ?GetInputSiteFromInputSinkHandle@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAX@Z @ 0x180013B4C (-GetInputSiteFromInputSinkHandle@InputSiteManager@@QEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@P.c)
 *     ?GetInputSiteFromInputSinkData@InputSiteManager@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@$$QEAVLegacyInputSinkData@@_N@Z @ 0x180017010 (-GetInputSiteFromInputSinkData@InputSiteManager@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@$$Q.c)
 *     ??1?$list@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@V?$allocator@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@2@@std@@QEAA@XZ @ 0x180062E4C (--1-$list@U-$pair@$$CBIUContactData@PointerInputMediator@@@std@@V-$allocator@U-$pair@$$CBIUConta.c)
 *     ??1?$_List_node_emplace_op2@V?$allocator@U?$_List_node@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@PEAX@std@@@std@@@std@@QEAA@XZ @ 0x180068850 (--1-$_List_node_emplace_op2@V-$allocator@U-$_List_node@U-$pair@$$CBIUContactData@PointerInputMed.c)
 *     ??1InputRedirectionTarget@@MEAA@XZ @ 0x1801B4808 (--1InputRedirectionTarget@@MEAA@XZ.c)
 *     _InputSiteManager::GetInputSiteFromInputSinkData_::_1_::dtor$2 @ 0x1801D4780 (_InputSiteManager--GetInputSiteFromInputSinkData_--_1_--dtor$2.c)
 *     _wil::details::shared_storage_wil::unique_any_t_wil::details::unique_storage_wil::details::handle_null_resource_policy_long_(__cdecl_)(void__)_&NtCloseCompositionInputSink_______::reset_::_1_::dtor$0 @ 0x1801D80E6 (_wil--details--shared_storage_wil--unique_any_t_wil--details--unique_storage_wil--details--handl.c)
 *     _LegacyInputSinkData::GetDuplicatedInputSinkHandle_::_1_::dtor$0 @ 0x1801DB0AA (_LegacyInputSinkData--GetDuplicatedInputSinkHandle_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>(
        __int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
  {
    if ( v1 != -1 )
      return NtCloseCompositionInputSink();
  }
  return result;
}
