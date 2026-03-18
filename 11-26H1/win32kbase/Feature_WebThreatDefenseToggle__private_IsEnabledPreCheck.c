/*
 * XREFs of Feature_WebThreatDefenseToggle__private_IsEnabledPreCheck @ 0x1400BE794
 * Callers:
 *     ?ShutdownImWorker@@YAJXZ @ 0x1400BCD50 (-ShutdownImWorker@@YAJXZ.c)
 *     ?ProcessTranslatedChar@@YAJPEAU_CHARHOOKSTRUCT@@@Z @ 0x1400BE710 (-ProcessTranslatedChar@@YAJPEAU_CHARHOOKSTRUCT@@@Z.c)
 *     ?Win32kNtUserCleanup@@YAHXZ @ 0x1401B59A4 (-Win32kNtUserCleanup@@YAHXZ.c)
 *     _RegisterLogonProcess @ 0x1401D98D0 (_RegisterLogonProcess.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1400BCE24 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1401C56C4 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 Feature_WebThreatDefenseToggle__private_IsEnabledPreCheck()
{
  __int64 v1; // [rsp+30h] [rbp+8h]

  v1 = (unsigned int)Feature_WebThreatDefenseToggle__private_featureState;
  if ( (Feature_WebThreatDefenseToggle__private_featureState & 0x10) == 0 )
  {
    LODWORD(v1) = Feature_WebThreatDefenseToggle__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_WebThreatDefenseToggle__private_descriptor,
      Feature_WebThreatDefenseToggle__private_featureState | 1,
      3u,
      1LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v1,
      3LL,
      &Feature_WebThreatDefenseToggle__private_descriptor);
  }
  return 1LL;
}
