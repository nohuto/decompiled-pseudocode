/*
 * XREFs of memset_0 @ 0x140005978
 * Callers:
 *     _dynamic_initializer_for__g_fWilCallbacksInstalled__ @ 0x140001F40 (_dynamic_initializer_for__g_fWilCallbacksInstalled__.c)
 *     ?InitializeWindow@CDwmAppHost@@AEAAJXZ @ 0x14000396C (-InitializeWindow@CDwmAppHost@@AEAAJXZ.c)
 *     McGenControlCallbackV2 @ 0x140003F90 (McGenControlCallbackV2.c)
 *     ?MilFailFastForHR@@YAXJPEBX@Z @ 0x140004460 (-MilFailFastForHR@@YAXJPEBX@Z.c)
 *     __scrt_fastfail @ 0x140004F94 (__scrt_fastfail.c)
 *     __scrt_get_show_window_mode @ 0x140005108 (__scrt_get_show_window_mode.c)
 *     ??$ReportFailure_NoReturn@$02@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@@Z @ 0x14000673C (--$ReportFailure_NoReturn@$02@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailur.c)
 *     ??$ReportFailure_Return@$00@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@W4FailureFlags@1@@Z @ 0x1400067EC (--$ReportFailure_Return@$00@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureO.c)
 *     ??$ReportFailure_Return@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@W4FailureFlags@1@@Z @ 0x140006A90 (--$ReportFailure_Return@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureO.c)
 *     ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x140008404 (-GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z.c)
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x1400093F0 (-MakeAndInitialize@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil.c)
 *     ?MakeAndInitialize@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@CAJPEBG$$QEAV?$unique_any_t@V?$mutex_t@V?$unique_storage@U?$resource_policy@PEAXP6AXPEAX@_E$1?CloseHandle@details@wil@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@@details@wil@@Uerr_returncode_policy@3@@wil@@@3@PEAPEAV123@@Z @ 0x140009554 (-MakeAndInitialize@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil.c)
 *     ?Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z @ 0x14000AAA0 (-Set@ThreadLocalFailureInfo@details_abi@wil@@QEAAXAEBUFailureInfo@3@I@Z.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x14000B7D0 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     ?wil_details_WriteSRUMWnfUsageBuffer@@YAJPEAV?$heap_vector@Uwil_details_FeatureUsageSRUM@@@details_abi@wil@@@Z @ 0x14000BEC4 (-wil_details_WriteSRUMWnfUsageBuffer@@YAJPEAV-$heap_vector@Uwil_details_FeatureUsageSRUM@@@detai.c)
 *     memcpy_s @ 0x14000C0AC (memcpy_s.c)
 *     ??$_Uninitialized_value_construct_n@V?$allocator@E@std@@@std@@YAPEAEPEAE_KAEAV?$allocator@E@0@@Z @ 0x14000DA34 (--$_Uninitialized_value_construct_n@V-$allocator@E@std@@@std@@YAPEAEPEAE_KAEAV-$allocator@E@0@@Z.c)
 *     ??$construct@UDISPLAYCONFIG_MODE_INFO@@$$V@?$_Default_allocator_traits@V?$allocator@UDISPLAYCONFIG_MODE_INFO@@@std@@@std@@SAXAEAV?$allocator@UDISPLAYCONFIG_MODE_INFO@@@1@QEAUDISPLAYCONFIG_MODE_INFO@@@Z @ 0x14000DA64 (--$construct@UDISPLAYCONFIG_MODE_INFO@@$$V@-$_Default_allocator_traits@V-$allocator@UDISPLAYCONF.c)
 *     ??$construct@UDISPLAYCONFIG_PATH_INFO@@$$V@?$_Default_allocator_traits@V?$allocator@UDISPLAYCONFIG_PATH_INFO@@@std@@@std@@SAXAEAV?$allocator@UDISPLAYCONFIG_PATH_INFO@@@1@QEAUDISPLAYCONFIG_PATH_INFO@@@Z @ 0x14000DA78 (--$construct@UDISPLAYCONFIG_PATH_INFO@@$$V@-$_Default_allocator_traits@V-$allocator@UDISPLAYCONF.c)
 *     BlackScreenDiagnostics::GetCurrentProcessVersionInfo @ 0x14000DD18 (BlackScreenDiagnostics--GetCurrentProcessVersionInfo.c)
 *     ?TryInit@CWatsonErrorReporting@BlackScreenDiagnostics@@AEAA_NXZ @ 0x14000EFF0 (-TryInit@CWatsonErrorReporting@BlackScreenDiagnostics@@AEAA_NXZ.c)
 *     ?DoStackCapture@@YAXJIPEAX@Z @ 0x14000F22C (-DoStackCapture@@YAXJIPEAX@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memset_0(void *a1, int Val, size_t Size)
{
  return memset(a1, Val, Size);
}
