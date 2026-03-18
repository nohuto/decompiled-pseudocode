/*
 * XREFs of _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140010010
 * Callers:
 *     _tlgEnableCallback @ 0x140001B00 (_tlgEnableCallback.c)
 *     ?s_LpcCommandHandler@CDwmAppHost@@CAJPEAUIPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z @ 0x1400024D0 (-s_LpcCommandHandler@CDwmAppHost@@CAJPEAUIPortMessage@@PEBUPORT_CONTEXT@@PEAH2@Z.c)
 *     ?WnfCallback@CLongPowerButtonHoldListener@BlackScreenDiagnostics@@CAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x140003C20 (-WnfCallback@CLongPowerButtonHoldListener@BlackScreenDiagnostics@@CAJU_WNF_STATE_NAME@@KPEAU_WNF.c)
 *     ?QueryInterface@CDwmAppHost@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x1400041C0 (-QueryInterface@CDwmAppHost@@UEAAJAEBU_GUID@@PEAPEAX@Z.c)
 *     ?ProcessShutdownInProgress@wil@@YA_NXZ @ 0x140004348 (-ProcessShutdownInProgress@wil@@YA_NXZ.c)
 *     __scrt_common_main_seh @ 0x1400047F0 (__scrt_common_main_seh.c)
 *     _RTC_Initialize @ 0x14000522C (_RTC_Initialize.c)
 *     _RTC_Terminate @ 0x140005270 (_RTC_Terminate.c)
 *     ?_lambda_invoker_cdecl_@_lambda_1_@?1??Instance@FeatureLogging@details@wil@@KAPEAV345@XZ@SA@XZ @ 0x140006160 (-_lambda_invoker_cdecl_@_lambda_1_@-1--Instance@FeatureLogging@details@wil@@KAPEAV345@XZ@SA@XZ.c)
 *     ??$ReportFailure_Return@$00@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@W4FailureFlags@1@@Z @ 0x1400067EC (--$ReportFailure_Return@$00@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureO.c)
 *     ??1?$function@$$A6A_NPEAX_K01I@Z@wistd@@QEAA@XZ @ 0x140006F2C (--1-$function@$$A6A_NPEAX_K01I@Z@wistd@@QEAA@XZ.c)
 *     ??1Completer@?$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAA@XZ @ 0x140007000 (--1Completer@-$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAA@XZ.c)
 *     ?GetContextAndNotifyFailure@ThreadFailureCallbackHolder@details@wil@@SAXPEAUFailureInfo@3@PEAD_K@Z @ 0x140008234 (-GetContextAndNotifyFailure@ThreadFailureCallbackHolder@details@wil@@SAXPEAUFailureInfo@3@PEAD_K.c)
 *     ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x140008404 (-GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z.c)
 *     ?Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV?$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z @ 0x140008E5C (-Iterate@RawUsageIndex@details_abi@wil@@QEBA_NV-$function@$$A6A_NPEAX_K01I@Z@wistd@@@Z.c)
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7W4FailureFlags@2@PEAUFailureInfo@2@@Z @ 0x140008F98 (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@AEBUResultStatus@12@PEBG_NPEAG_KPEAD7W4F.c)
 *     ?NotifyFailure@TraceLoggingProvider@wil@@EEAA_NAEBUFailureInfo@2@@Z @ 0x140009770 (-NotifyFailure@TraceLoggingProvider@wil@@EEAA_NAEBUFailureInfo@2@@Z.c)
 *     ?NtStatusToHr@details@wil@@YAJJ@Z @ 0x1400097AC (-NtStatusToHr@details@wil@@YAJJ@Z.c)
 *     ?OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z @ 0x14000984C (-OnSignaled@SubscriptionList@details_abi@wil@@QEAAXAEAVsrwlock@3@@Z.c)
 *     ?ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z @ 0x14000994C (-ProcessHeapAlloc@details@wil@@YAPEAXK_K@Z.c)
 *     ?RtlDllShutdownInProgress@details@wil@@YAEXZ @ 0x14000AA00 (-RtlDllShutdownInProgress@details@wil@@YAEXZ.c)
 *     ?RtlNtStatusToDosErrorNoTeb@details@wil@@YAKJ@Z @ 0x14000AA50 (-RtlNtStatusToDosErrorNoTeb@details@wil@@YAKJ@Z.c)
 *     ?WilDynamicLoadRaiseFailFastException@details@wil@@YAXPEAU_EXCEPTION_RECORD@@PEAU_CONTEXT@@K@Z @ 0x14000B770 (-WilDynamicLoadRaiseFailFastException@details@wil@@YAXPEAU_EXCEPTION_RECORD@@PEAU_CONTEXT@@K@Z.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x14000B7D0 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     ?WilFailureNotifyWatchers@details@wil@@YAXIPEBUWilFailureReport@@PEAUWilFailureReportInformation@@@Z @ 0x14000B880 (-WilFailureNotifyWatchers@details@wil@@YAXIPEBUWilFailureReport@@PEAUWilFailureReportInformation.c)
 *     ?WilRaiseFailFastException@details@wil@@YAXPEAU_EXCEPTION_RECORD@@PEAU_CONTEXT@@K@Z @ 0x14000B8D4 (-WilRaiseFailFastException@details@wil@@YAXPEAU_EXCEPTION_RECORD@@PEAU_CONTEXT@@K@Z.c)
 *     wil_RtlStagingConfig_RecordFeatureUsage @ 0x14000C148 (wil_RtlStagingConfig_RecordFeatureUsage.c)
 *     wil_details_NtQueryWnfStateData @ 0x14000C1AC (wil_details_NtQueryWnfStateData.c)
 *     wil_details_NtUpdateWnfStateData @ 0x14000C224 (wil_details_NtUpdateWnfStateData.c)
 *     wil_details_RtlRegisterFeatureConfigurationChangeNotification @ 0x14000C2B4 (wil_details_RtlRegisterFeatureConfigurationChangeNotification.c)
 *     wil_details_RtlUnregisterFeatureConfigurationChangeNotification @ 0x14000C318 (wil_details_RtlUnregisterFeatureConfigurationChangeNotification.c)
 *     ??$Make@VWeakReferenceImpl@Details@WRL@Microsoft@@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@VWeakReferenceImpl@Details@WRL@Microsoft@@@12@AEAPEAUIUnknown@@@Z @ 0x14000C35C (--$Make@VWeakReferenceImpl@Details@WRL@Microsoft@@AEAPEAUIUnknown@@@Details@WRL@Microsoft@@YA-AV.c)
 *     ??$MakeAndInitialize@VHotKeyCallback@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHotKeyCallback@@@Z @ 0x14000C41C (--$MakeAndInitialize@VHotKeyCallback@@V1@$$V@Details@WRL@Microsoft@@YAJPEAPEAVHotKeyCallback@@@Z.c)
 *     ??1?$com_ptr_t@UIMessageSession@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x14000C5A4 (--1-$com_ptr_t@UIMessageSession@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIHotKeyClientOwner@Text@Internal@UI@Windows@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14000C940 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIHotKeyCli.c)
 *     ?QueryInterface@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x14000C9E0 (-QueryInterface@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakRefe.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIHotKeyClientOwner@Text@Internal@UI@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x14000CAD0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIHotKeyClientOwne.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x14000CB60 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIWeakReference@@.c)
 *     ?Resolve@WeakReferenceImpl@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAUIInspectable@@@Z @ 0x14000CC50 (-Resolve@WeakReferenceImpl@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAUIInspectable@@@Z.c)
 *     ?InternalRelease@?$ComPtr@UIHotKeyClientStatics@Text@Internal@UI@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x14000D124 (-InternalRelease@-$ComPtr@UIHotKeyClientStatics@Text@Internal@UI@Windows@@@WRL@Microsoft@@IEAAKX.c)
 *     ?OnHotKeyDetected@HotKeyCallback@@UEAAJIII_K0@Z @ 0x14000D160 (-OnHotKeyDetected@HotKeyCallback@@UEAAJIII_K0@Z.c)
 *     ?RuntimeClassInitialize@HotKeyCallback@@QEAAJXZ @ 0x14000D1A0 (-RuntimeClassInitialize@HotKeyCallback@@QEAAJXZ.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x14000EC2C (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x14000F104 (MicrosoftTelemetryAssertTriggeredArgs.c)
 *     ?MilWerRegisterMemoryBlock@@YAXPEBXI@Z @ 0x14000F494 (-MilWerRegisterMemoryBlock@@YAXPEBXI@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall guard_dispatch_icall_thunk_10345483385596137414()
{
  __int64 (__fastcall *v0)(); // rax

  return v0();
}
