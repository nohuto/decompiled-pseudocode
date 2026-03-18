/*
 * XREFs of Feature_WebThreatDefenseToggle__private_IsEnabledPreCheck @ 0x140137664
 * Callers:
 *     xxxInitProcessInfo @ 0x140165DD4 (xxxInitProcessInfo.c)
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x140169E70 (-Win32kNtUserCleanup@@YAHXZ.c)
 *     _RegisterLogonProcess @ 0x14016BF30 (_RegisterLogonProcess.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14013A6A0 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1401A5B78 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 Feature_WebThreatDefenseToggle__private_IsEnabledPreCheck()
{
  __int64 v1; // [rsp+30h] [rbp+8h]

  v1 = (unsigned int)Feature_WebThreatDefenseToggle__private_featureState;
  if ( (Feature_WebThreatDefenseToggle__private_featureState & 0x10) == 0 )
  {
    LODWORD(v1) = Feature_WebThreatDefenseToggle__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(&Feature_WebThreatDefenseToggle__private_descriptor, v1, 3LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v1,
      3LL,
      &Feature_WebThreatDefenseToggle__private_descriptor);
  }
  return 1LL;
}
