/*
 * XREFs of memset_0 @ 0x18000203A
 * Callers:
 *     __scrt_fastfail @ 0x180001924 (__scrt_fastfail.c)
 *     ??$ReportFailure_Return@$00@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@W4FailureFlags@1@@Z @ 0x180002734 (--$ReportFailure_Return@$00@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureO.c)
 *     ??$ReportFailure_Return@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@W4FailureFlags@1@@Z @ 0x1800029E4 (--$ReportFailure_Return@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureO.c)
 *     ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x180002B40 (-GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z.c)
 *     ?WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z @ 0x180003900 (-WilFailFast@details@wil@@YAXAEBUFailureInfo@2@@Z.c)
 *     TelGetRegionalSettingsValue @ 0x180004140 (TelGetRegionalSettingsValue.c)
 *     TelIsOsInProcessorMode @ 0x180004620 (TelIsOsInProcessorMode.c)
 *     TelpReadOfflineSoftwareRegistryDword @ 0x180004FB0 (TelpReadOfflineSoftwareRegistryDword.c)
 *     TelpReadOfflineSoftwareRegistryString @ 0x180005174 (TelpReadOfflineSoftwareRegistryString.c)
 *     TelpReadUsersPolicySetting @ 0x180005330 (TelpReadUsersPolicySetting.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl memset_0(void *a1, int Val, size_t Size)
{
  return memset(a1, Val, Size);
}
