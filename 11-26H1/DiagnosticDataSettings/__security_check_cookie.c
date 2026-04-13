/*
 * XREFs of __security_check_cookie @ 0x180001460
 * Callers:
 *     ?GetModuleInformation@details@wil@@YA_NPEAXPEAIPEAD_K@Z @ 0x180002304 (-GetModuleInformation@details@wil@@YA_NPEAXPEAIPEAD_K@Z.c)
 *     ??$ReportFailure_Return@$00@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@W4FailureFlags@1@@Z @ 0x180002734 (--$ReportFailure_Return@$00@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureO.c)
 *     ??$ReportFailure_Return@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureOptions@01@W4FailureFlags@1@@Z @ 0x1800029E4 (--$ReportFailure_Return@$01@details@wil@@YAXPEAXIPEBD110AEBUResultStatus@01@PEBGW4ReportFailureO.c)
 *     ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x180002B40 (-GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z.c)
 *     TelGetRegionalSettingsValue @ 0x180004140 (TelGetRegionalSettingsValue.c)
 *     TelIsOsInProcessorMode @ 0x180004620 (TelIsOsInProcessorMode.c)
 *     TelpReadOfflineOsPolicySetting @ 0x180004E10 (TelpReadOfflineOsPolicySetting.c)
 *     TelpReadOfflineSoftwareRegistryDword @ 0x180004FB0 (TelpReadOfflineSoftwareRegistryDword.c)
 *     TelpReadOfflineSoftwareRegistryString @ 0x180005174 (TelpReadOfflineSoftwareRegistryString.c)
 *     TelpReadUsersPolicySetting @ 0x180005330 (TelpReadUsersPolicySetting.c)
 *     __GSHandlerCheckCommon @ 0x1800056B8 (__GSHandlerCheckCommon.c)
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
