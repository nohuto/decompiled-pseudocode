/*
 * XREFs of __security_check_cookie @ 0x18001A5F0
 * Callers:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x180001008 (--$Write@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@.c)
 *     HamConnectForStateChangeNotifications @ 0x180002280 (HamConnectForStateChangeNotifications.c)
 *     ?get_AppMemoryUsageLimit@CMemoryManager@System@Windows@@UEAAJPEA_K@Z @ 0x180002480 (-get_AppMemoryUsageLimit@CMemoryManager@System@Windows@@UEAAJPEA_K@Z.c)
 *     ?GetAppMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIAppMemoryReport@23@@Z @ 0x1800027F0 (-GetAppMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIAppMemoryReport@23@@Z.c)
 *     ?GetAppMemoryInformation@CMemoryManager@System@Windows@@AEAAJPEA_K0PEAU_PROCESS_JOB_MEMORY_INFO@@@Z @ 0x180002DE0 (-GetAppMemoryInformation@CMemoryManager@System@Windows@@AEAAJPEA_K0PEAU_PROCESS_JOB_MEMORY_INFO@.c)
 *     CempRpcBindToServer @ 0x1800034E0 (CempRpcBindToServer.c)
 *     HampConnectionAllocateState @ 0x180003B00 (HampConnectionAllocateState.c)
 *     ?CrmpRegistrationContextStart@@YAJPEAU_CRMP_REGISTRATION_CONTEXT@@W4_CRM_CLIENT_ID@@PEAG@Z @ 0x1800045D0 (-CrmpRegistrationContextStart@@YAJPEAU_CRMP_REGISTRATION_CONTEXT@@W4_CRM_CLIENT_ID@@PEAG@Z.c)
 *     ?Record@UsageIndexes@details_abi@wil@@QEAAXXZ @ 0x180006650 (-Record@UsageIndexes@details_abi@wil@@QEAAXXZ.c)
 *     ?RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z @ 0x180006768 (-RecordWnfUsageIndex@details_abi@wil@@YAXPEBU__WIL__WNF_STATE_NAME@@_KAEBVRawUsageIndex@12@@Z.c)
 *     ?GetShared@?$ProcessLocalStorage@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAPEAVFeatureStateData@23@XZ @ 0x180007E40 (-GetShared@-$ProcessLocalStorage@VFeatureStateData@details_abi@wil@@@details_abi@wil@@QEAAPEAVFe.c)
 *     ?TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z @ 0x180008100 (-TryGetValueInternal@SemaphoreValue@details_abi@wil@@CAJPEBG_NPEA_KPEA_N@Z.c)
 *     HamHostIdFindOrCreate @ 0x18000ABB0 (HamHostIdFindOrCreate.c)
 *     HampConnectionDeliverPayload @ 0x18000B1E0 (HampConnectionDeliverPayload.c)
 *     HamQueryPackageUsageInfo @ 0x18000B470 (HamQueryPackageUsageInfo.c)
 *     HampUsageInfoRegistryQuery @ 0x18000BB60 (HampUsageInfoRegistryQuery.c)
 *     DllGetActivationFactory @ 0x18000BE50 (DllGetActivationFactory.c)
 *     TraceLoggingRegisterEx_EventRegister_EventSetInformation @ 0x18000C380 (TraceLoggingRegisterEx_EventRegister_EventSetInformation.c)
 *     HamQueryCallerTerminateReason @ 0x18000C7B0 (HamQueryCallerTerminateReason.c)
 *     CempGetTokenHostInfo @ 0x18000C8A0 (CempGetTokenHostInfo.c)
 *     ?HampUtilQueryRegistryTerminateReason@@YAJPEBGPEAXPEAW4_HAM_TERMINATE_REASON@@@Z @ 0x18000CB14 (-HampUtilQueryRegistryTerminateReason@@YAJPEBGPEAXPEAW4_HAM_TERMINATE_REASON@@@Z.c)
 *     ?HampUtilCreateVolatileUserRegKey@@YAJPEAXKPEAPEAUHKEY__@@@Z @ 0x18000CC34 (-HampUtilCreateVolatileUserRegKey@@YAJPEAXKPEAPEAUHKEY__@@@Z.c)
 *     HamGetApplicationInterruptiveUIState @ 0x18000D000 (HamGetApplicationInterruptiveUIState.c)
 *     HamGetStateSnapshotForAumid @ 0x18000D3F0 (HamGetStateSnapshotForAumid.c)
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x18000E1D0 (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     HamCreateAutoRestartActivityForDesktopBridge @ 0x18000E5E0 (HamCreateAutoRestartActivityForDesktopBridge.c)
 *     HamHostIdCreateSingleUse @ 0x18000E810 (HamHostIdCreateSingleUse.c)
 *     ?get_AppMemoryUsage@CMemoryManager@System@Windows@@UEAAJPEA_K@Z @ 0x18000F210 (-get_AppMemoryUsage@CMemoryManager@System@Windows@@UEAAJPEA_K@Z.c)
 *     ?GetProcessMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIProcessMemoryReport@23@@Z @ 0x18000F6A0 (-GetProcessMemoryReport@CMemoryManager@System@Windows@@UEAAJPEAPEAUIProcessMemoryReport@23@@Z.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x18000FF5C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$07@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$07@@@Z @ 0x18001038C (--$Write@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$07@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     HamConnectToServerEx @ 0x180010990 (HamConnectToServerEx.c)
 *     ??$ReportFailure_Return@$00@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@W4FailureFlags@1@@Z @ 0x180011C88 (--$ReportFailure_Return@$00@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureO.c)
 *     ?QueueBackgroundSRUMUsageReporting@FeatureStateManager@details@wil@@QEAAXIGI@Z @ 0x1800123D0 (-QueueBackgroundSRUMUsageReporting@FeatureStateManager@details@wil@@QEAAXIGI@Z.c)
 *     ??$ReportFailure_Return@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@W4FailureFlags@1@@Z @ 0x180014E9C (--$ReportFailure_Return@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureO.c)
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x1800151E0 (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z @ 0x180015414 (-CreateFromValueInternal@SemaphoreValue@details_abi@wil@@AEAAJPEBG_N_K@Z.c)
 *     ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x180015794 (-GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z.c)
 *     ?GetModuleInformation@details@wil@@YA_NPEAXPEAIPEAD_K@Z @ 0x180015A5C (-GetModuleInformation@details@wil@@YA_NPEAXPEAIPEAD_K@Z.c)
 *     ?wil_details_WriteSRUMWnfUsageBuffer@@YAJPEAV?$heap_vector@Uwil_details_FeatureUsageSRUM@@@details_abi@wil@@@Z @ 0x1800168D8 (-wil_details_WriteSRUMWnfUsageBuffer@@YAJPEAV-$heap_vector@Uwil_details_FeatureUsageSRUM@@@detai.c)
 *     HamAssociateActivityContext @ 0x180018A30 (HamAssociateActivityContext.c)
 *     HamQueryApplicationUsageInfo @ 0x1800191C0 (HamQueryApplicationUsageInfo.c)
 *     HamQueryHostStateSummary @ 0x180019300 (HamQueryHostStateSummary.c)
 *     __GSHandlerCheckCommon @ 0x18001A4A8 (__GSHandlerCheckCommon.c)
 * Callees:
 *     <none>
 */

void __cdecl _security_check_cookie(uintptr_t StackCookie)
{
  __int64 v1; // rcx

  if ( StackCookie != _security_cookie )
ReportFailure:
    _report_gsfailure(StackCookie);
  v1 = __ROL8__(StackCookie, 16);
  if ( (_WORD)v1 )
  {
    StackCookie = __ROR8__(v1, 16);
    goto ReportFailure;
  }
}
