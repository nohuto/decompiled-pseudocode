/*
 * XREFs of ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800033BC
 * Callers:
 *     TelpEvaluateWithoutLicenseCheck @ 0x180003488 (TelpEvaluateWithoutLicenseCheck.c)
 *     TelpIsDeviceAzureADJoined @ 0x18000373C (TelpIsDeviceAzureADJoined.c)
 *     TelpReadRegistryDword @ 0x1800037EC (TelpReadRegistryDword.c)
 *     TelpReadRegistryString @ 0x180003870 (TelpReadRegistryString.c)
 *     TelEvaluateActiveSettingAuthority @ 0x180003A30 (TelEvaluateActiveSettingAuthority.c)
 *     TelGetAllAllowedTelemetryTypes @ 0x180003B60 (TelGetAllAllowedTelemetryTypes.c)
 *     TelGetMaximumAllowedTelemetryLevel @ 0x180003C60 (TelGetMaximumAllowedTelemetryLevel.c)
 *     TelGetNumericPolicy @ 0x180003D80 (TelGetNumericPolicy.c)
 *     TelGetRegionalSettingsValue @ 0x180004140 (TelGetRegionalSettingsValue.c)
 *     TelGetStringPolicy @ 0x1800042C0 (TelGetStringPolicy.c)
 *     TelIsOsInProcessorMode @ 0x180004620 (TelIsOsInProcessorMode.c)
 *     TelIsTelemetryTypeAllowed @ 0x1800048E0 (TelIsTelemetryTypeAllowed.c)
 *     TelIsTelemetryTypeAllowedWinRE @ 0x180004940 (TelIsTelemetryTypeAllowedWinRE.c)
 *     TelSetLocalTelemetrySetting @ 0x1800049C0 (TelSetLocalTelemetrySetting.c)
 *     TelpReadEnterpriseGovSetting @ 0x180004A3C (TelpReadEnterpriseGovSetting.c)
 *     TelpReadGroupPolicySetting @ 0x180004B94 (TelpReadGroupPolicySetting.c)
 *     TelpReadLocalSetting @ 0x180004C58 (TelpReadLocalSetting.c)
 *     TelpReadMdmSetting @ 0x180004D3C (TelpReadMdmSetting.c)
 *     TelpReadOfflineOsPolicySetting @ 0x180004E10 (TelpReadOfflineOsPolicySetting.c)
 *     TelpReadOfflineSoftwareRegistryDword @ 0x180004FB0 (TelpReadOfflineSoftwareRegistryDword.c)
 *     TelpReadOfflineSoftwareRegistryString @ 0x180005174 (TelpReadOfflineSoftwareRegistryString.c)
 *     TelpReadUsersPolicySetting @ 0x180005330 (TelpReadUsersPolicySetting.c)
 * Callees:
 *     ??$ReportFailure_Hr@$00@details@wil@@YAXPEAXIPEBD110JW4FailureFlags@1@@Z @ 0x180002680 (--$ReportFailure_Hr@$00@details@wil@@YAXPEAXIPEBD110JW4FailureFlags@1@@Z.c)
 */

void __fastcall wil::details::in1diag3::Return_Hr(wil::details::in1diag3 *this, void *a2, __int64 a3, const char *a4)
{
  int v4; // [rsp+20h] [rbp-28h]
  wil::details *v5; // [rsp+30h] [rbp-18h]
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  LODWORD(v5) = (_DWORD)a4;
  wil::details::ReportFailure_Hr<1>((__int64)this, (int)a2, a3, (__int64)a4, v4, retaddr, v5);
}
