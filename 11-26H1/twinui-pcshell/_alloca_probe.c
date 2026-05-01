/*
 * XREFs of _alloca_probe @ 0x1806CCB80
 * Callers:
 *     ?GetNonServiceProcessListAndIds@BroadcastDVRComponent@@AEAAXAEAV?$vector@U?$pair@KVString@Internal@Windows@@@std@@V?$allocator@U?$pair@KVString@Internal@Windows@@@std@@@2@@std@@@Z @ 0x18004F948 (-GetNonServiceProcessListAndIds@BroadcastDVRComponent@@AEAAXAEAV-$vector@U-$pair@KVString@Intern.c)
 *     ??$ReportFailure_CaughtException@$00@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x180050D98 (--$ReportFailure_CaughtException@$00@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z.c)
 *     ?SetMessage@StoredCallContextInfo@details@wil@@QEAAXPEBDPEAD@Z @ 0x1800BF8FC (-SetMessage@StoredCallContextInfo@details@wil@@QEAAXPEBDPEAD@Z.c)
 *     ?PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z @ 0x1800BFBAC (-PrintLoggingMessage@details@wil@@YAXPEAG_KPEBDPEAD@Z.c)
 *     ?GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z @ 0x1801105E4 (-GetGameEntryByIdentifier@CQueryKnownGameList@@AEAAJPEBGKPEAPEAUIGameEntry@KnownGameList@@@Z.c)
 *     ?GetGameEntryFromGameConfig@CQueryKnownGameList@@UEAAJPEAUGameConfig@ExecutionModel@@PEAPEAUIGameEntry@KnownGameList@@@Z @ 0x180111790 (-GetGameEntryFromGameConfig@CQueryKnownGameList@@UEAAJPEAUGameConfig@ExecutionModel@@PEAPEAUIGam.c)
 *     ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x180115240 (-RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z.c)
 *     ?TraceDbgMsg_@NPSMDesktopShellTelemetry@@QEAAXPEBGZZ @ 0x1801380BC (-TraceDbgMsg_@NPSMDesktopShellTelemetry@@QEAAXPEBGZZ.c)
 *     _dynamic_initializer_for__thinking__ @ 0x180146BD0 (_dynamic_initializer_for__thinking__.c)
 *     ??$ReportFailure_NoReturn@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x1801D1F84 (--$ReportFailure_NoReturn@$0A@@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailu.c)
 *     ??$ReportFailure_NoReturn@$02@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x1802324D4 (--$ReportFailure_NoReturn@$02@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 *     ??$ReportFailure_Msg@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@1PEAD@Z @ 0x180232590 (--$ReportFailure_Msg@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@1PEAD@Z.c)
 *     ?TerminateStaleInputApp@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x18024D2C4 (-TerminateStaleInputApp@TouchKeyboardExperienceManager@@AEAAJXZ.c)
 *     ??$ReportFailure_HrMsg@$02@details@wil@@YAXPEAXIPEBD110J1PEAD@Z @ 0x18029C5C8 (--$ReportFailure_HrMsg@$02@details@wil@@YAXPEAXIPEBD110J1PEAD@Z.c)
 *     ??$ReportFailure_Return@$00@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@W4FailureFlags@1@@Z @ 0x1802D4528 (--$ReportFailure_Return@$00@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureO.c)
 *     ??$ReportFailure_Return@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@W4FailureFlags@1@@Z @ 0x1802D47C4 (--$ReportFailure_Return@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureO.c)
 *     ?what@ResultException@wil@@UEBAPEBDXZ @ 0x1802D7B50 (-what@ResultException@wil@@UEBAPEBDXZ.c)
 *     ?wil_details_WriteSRUMWnfUsageBuffer@@YAJPEAV?$heap_vector@Uwil_details_FeatureUsageSRUM@@@details_abi@wil@@@Z @ 0x1802D7D40 (-wil_details_WriteSRUMWnfUsageBuffer@@YAJPEAV-$heap_vector@Uwil_details_FeatureUsageSRUM@@@detai.c)
 *     ??$ReportFailure_CaughtException@$01@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x1802D82E8 (--$ReportFailure_CaughtException@$01@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z.c)
 *     ?SendAddGameToConfigStoreTelemetry@IsGameManager@@AEAAXK@Z @ 0x1803169E8 (-SendAddGameToConfigStoreTelemetry@IsGameManager@@AEAAXK@Z.c)
 *     ??$ReportFailure_HrMsg@$00@details@wil@@YAXPEAXIPEBD110J1PEAD@Z @ 0x180319548 (--$ReportFailure_HrMsg@$00@details@wil@@YAXPEAXIPEBD110J1PEAD@Z.c)
 *     ?GetCaughtExceptionError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IPEBUDiagnosticsInfo@3@JPEAX@Z @ 0x180319DC4 (-GetCaughtExceptionError@ThreadLocalData@details_abi@wil@@QEAA_NAEAUFailureInfo@3@IPEBUDiagnosti.c)
 *     ?ReportTraceLoggingMessage@TraceLoggingProvider@wil@@IEAAXPEBDPEAD@Z @ 0x180321294 (-ReportTraceLoggingMessage@TraceLoggingProvider@wil@@IEAAXPEBDPEAD@Z.c)
 *     ??$ReportFailure_CaughtExceptionMsg@$01@details@wil@@YAJPEAXIPEBD1101PEAD@Z @ 0x18033CDE0 (--$ReportFailure_CaughtExceptionMsg@$01@details@wil@@YAJPEAXIPEBD1101PEAD@Z.c)
 *     ?GetNonServiceProcessListAndIds@GamingOverlayExperienceManager@@AEAAXAEAV?$vector@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@V?$allocator@U?$pair@KV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@2@@std@@K@Z @ 0x1803497CC (-GetNonServiceProcessListAndIds@GamingOverlayExperienceManager@@AEAAXAEAV-$vector@U-$pair@KV-$ba.c)
 *     ??$ReportFailure_HrMsg@$0A@@details@wil@@YAXPEAXIPEBD110J1PEAD@Z @ 0x18035A75C (--$ReportFailure_HrMsg@$0A@@details@wil@@YAXPEAXIPEBD110J1PEAD@Z.c)
 *     ?_NormalizeAndAddPositionerArgs@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIShellExperiencePositioner@Experience@Shell@Internal@Windows@@PEAPEAU2@@Z @ 0x180377654 (-_NormalizeAndAddPositionerArgs@CortanaSharedExperienceManager@@AEAAJPEAUHSTRING__@@PEAUIShellEx.c)
 *     ?GetFlightedValue@CortanaFeatureConfiguration@@YAJPEBGAEAUFeatureValue@1@AEAE@Z @ 0x180388FA0 (-GetFlightedValue@CortanaFeatureConfiguration@@YAJPEBGAEAUFeatureValue@1@AEAE@Z.c)
 *     ?_NormalizeAndAddPositionerArgs@SearchAppExperienceManager@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z @ 0x1803A48A8 (-_NormalizeAndAddPositionerArgs@SearchAppExperienceManager@@AEAAJPEAUHSTRING__@@PEAPEAU2@@Z.c)
 *     ?TryGetAppIdInfoForApplicationView@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@AEAA?AV?$tuple@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@W4AppIdKind@Activities@Data@Internal@Windows@@@std@@PEAUIApplicationView@@I@Z @ 0x1803FD368 (-TryGetAppIdInfoForApplicationView@AppViewListener@DataEngine@TaskFlow@Shell@Internal@Windows@@A.c)
 *     ??$ReportFailure_CaughtException@$02@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z @ 0x1805BC798 (--$ReportFailure_CaughtException@$02@details@wil@@YAJPEAXIPEBD110W4SupportedExceptions@1@@Z.c)
 *     ?DataObj_GetIDList@@YAJPEAUIDataObject@@W4DATAOBJ_GET_ITEM_FLAGS@@PEAPEFAU_ITEMIDLIST@@@Z @ 0x18068E674 (-DataObj_GetIDList@@YAJPEAUIDataObject@@W4DATAOBJ_GET_ITEM_FLAGS@@PEAPEFAU_ITEMIDLIST@@@Z.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall alloca_probe()
{
  unsigned __int64 result; // rax
  char *v1; // r10
  char *StackLimit; // r11
  char v3; // [rsp+18h] [rbp+8h] BYREF

  v1 = &v3 - result;
  if ( (unsigned __int64)&v3 < result )
    v1 = 0LL;
  StackLimit = (char *)NtCurrentTeb()->NtTib.StackLimit;
  if ( v1 < StackLimit )
  {
    LOWORD(v1) = (unsigned __int16)v1 & 0xF000;
    do
    {
      StackLimit -= 4096;
      *StackLimit = 0;
    }
    while ( v1 != StackLimit );
  }
  return result;
}
