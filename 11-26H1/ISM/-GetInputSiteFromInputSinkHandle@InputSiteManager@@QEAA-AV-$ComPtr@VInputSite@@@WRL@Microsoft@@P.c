/*
 * XREFs of ?GetInputSiteFromInputSinkHandle@InputSiteManager@@QEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@PEAX@Z @ 0x180013B4C
 * Callers:
 *     ?CreateTargetFromHitTestResult@DWMInputRouter@@AEAA?AV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@AEBUHitTestResult@@@Z @ 0x180013FB0 (-CreateTargetFromHitTestResult@DWMInputRouter@@AEAA-AV-$ComPtr@UIInputTarget@@@WRL@Microsoft@@AE.c)
 *     ?GetInputSiteForEvaluationListFromDITCallbackStruct@InputSiteManager@@QEAA?AV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@AEBUtagDITCALLBACKSTRUCT@@@Z @ 0x180016D10 (-GetInputSiteForEvaluationListFromDITCallbackStruct@InputSiteManager@@QEAA-AV-$vector@V-$ComPtr@.c)
 *     ?UpdateInputTarget@EdgyProcessorTarget@@QEAAJUtagMsgRoutingInfo@@PEAXAEBUEdgyPointerInfo@@@Z @ 0x1801B0B24 (-UpdateInputTarget@EdgyProcessorTarget@@QEAAJUtagMsgRoutingInfo@@PEAXAEBUEdgyPointerInfo@@@Z.c)
 * Callees:
 *     ??1?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180013B28 (--1-$unique_any_t@V-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-NtCloseCompositi.c)
 *     ?GetInputSiteFromInputSinkData@InputSiteManager@@AEAA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@$$QEAVLegacyInputSinkData@@_N@Z @ 0x180017010 (-GetInputSiteFromInputSinkData@InputSiteManager@@AEAA-AV-$ComPtr@VInputSite@@@WRL@Microsoft@@$$Q.c)
 *     ??$?0AEAPEAX$0A@$0A@@?$variant@PEAXV?$unique_any_t@V?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@@wil@@@std@@QEAA@AEAPEAX@Z @ 0x1801331B4 (--$-0AEAPEAX$0A@$0A@@-$variant@PEAXV-$unique_any_t@V-$unique_storage@U-$handle_null_resource_pol.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall InputSiteManager::GetInputSiteFromInputSinkHandle(__int64 a1, __int64 a2, __int64 a3)
{
  char v4; // r9
  __int64 v5; // r10
  __int64 v7; // [rsp+28h] [rbp-D8h] BYREF
  char v8; // [rsp+30h] [rbp-D0h]
  char v9; // [rsp+3Ch] [rbp-C4h]
  char v10; // [rsp+41h] [rbp-BFh]
  char v11; // [rsp+4Ch] [rbp-B4h]
  char v12; // [rsp+88h] [rbp-78h]
  char v13; // [rsp+C8h] [rbp-38h]
  char v14; // [rsp+108h] [rbp+8h]
  char v15; // [rsp+148h] [rbp+48h]
  char v16; // [rsp+188h] [rbp+88h]
  char v17; // [rsp+1D0h] [rbp+D0h]
  __int64 v18; // [rsp+200h] [rbp+100h] BYREF

  v18 = a3;
  std::variant<void *,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>::variant<void *,wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>>(
    &v7,
    &v18,
    a3,
    0LL);
  v9 = v4;
  v10 = v4;
  v11 = v4;
  v12 = v4;
  v13 = v4;
  v14 = v4;
  v15 = v4;
  v16 = v4;
  v17 = v4;
  InputSiteManager::GetInputSiteFromInputSinkData(v5, a2, &v7);
  if ( v8 != -1LL && v8 )
    wil::unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>::~unique_any_t<wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>>(&v7);
  return a2;
}
