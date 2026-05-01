/*
 * XREFs of memset_0 @ 0x18001A5BE
 * Callers:
 *     HamConnectForStateChangeNotifications @ 0x180002280 (HamConnectForStateChangeNotifications.c)
 *     HamConnectForServicing @ 0x1800036A0 (HamConnectForServicing.c)
 *     HamConnectForExtendedExecution @ 0x180003790 (HamConnectForExtendedExecution.c)
 *     HamIpcChannelInitialize @ 0x180003898 (HamIpcChannelInitialize.c)
 *     HampConnectionCreate @ 0x180003930 (HampConnectionCreate.c)
 *     HampConnectionAllocateState @ 0x180003B00 (HampConnectionAllocateState.c)
 *     HampConnectionStart @ 0x1800040B4 (HampConnectionStart.c)
 *     HampConnectionDeserializeActivities @ 0x180004FF4 (HampConnectionDeserializeActivities.c)
 *     HamHostIdInitializeKey @ 0x180008700 (HamHostIdInitializeKey.c)
 *     HamPopulateActivityPropertiesByClass @ 0x180009530 (HamPopulateActivityPropertiesByClass.c)
 *     HamPopulateActivityProperties @ 0x180009AB0 (HamPopulateActivityProperties.c)
 *     HamQueryCallerTerminateReason @ 0x18000C7B0 (HamQueryCallerTerminateReason.c)
 *     CempGetTokenHostInfo @ 0x18000C8A0 (CempGetTokenHostInfo.c)
 *     CempHostInfoInitialize @ 0x18000CF20 (CempHostInfoInitialize.c)
 *     ?GetProcessMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIProcessMemoryReport@23@@Z @ 0x18000F6A0 (-GetProcessMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIProcessMemoryReport@23@@Z.c)
 *     HamCompleteExtendedExecution @ 0x180011280 (HamCompleteExtendedExecution.c)
 *     ??$ReportFailure_NoReturn@$02@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x180011A04 (--$ReportFailure_NoReturn@$02@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 *     ??$ReportFailure_Return@$00@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@W4FailureFlags@1@@Z @ 0x180011C88 (--$ReportFailure_Return@$00@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureO.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x18001221C (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     RmResourceSetPropertiesInitialize @ 0x180014B00 (RmResourceSetPropertiesInitialize.c)
 *     ??$ReportFailure_Return@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@W4FailureFlags@1@@Z @ 0x180014E9C (--$ReportFailure_Return@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureO.c)
 *     ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x180015794 (-GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z.c)
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x180015DD4 (-MakeAndInitialize@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil.c)
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x180015F18 (-MakeAndInitialize@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil.c)
 *     ?Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z @ 0x1800163A0 (-Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z.c)
 *     ?wil_details_WriteSRUMWnfUsageBuffer@@YAJPEAV?$heap_vector@Uwil_details_FeatureUsageSRUM@@@details_abi@wil@@@Z @ 0x1800168D8 (-wil_details_WriteSRUMWnfUsageBuffer@@YAJPEAV-$heap_vector@Uwil_details_FeatureUsageSRUM@@@detai.c)
 *     HamQueryHostStateSummary @ 0x180019300 (HamQueryHostStateSummary.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memset_0(void *a1, int Val, size_t Size)
{
  return memset(a1, Val, Size);
}
