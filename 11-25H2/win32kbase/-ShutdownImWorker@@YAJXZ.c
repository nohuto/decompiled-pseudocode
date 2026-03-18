/*
 * XREFs of ?ShutdownImWorker@@YAJXZ @ 0x140149A50
 * Callers:
 *     <none>
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14013A6A0 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     ImpShutdownWorker @ 0x140149AD8 (ImpShutdownWorker.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1401A5B78 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 __fastcall ShutdownImWorker(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 v4; // [rsp+30h] [rbp+8h]

  v2 = (unsigned int)Feature_WebThreatDefenseToggle__private_featureState;
  v4 = (unsigned int)Feature_WebThreatDefenseToggle__private_featureState;
  if ( (Feature_WebThreatDefenseToggle__private_featureState & 0x10) == 0 )
  {
    LODWORD(v4) = Feature_WebThreatDefenseToggle__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_WebThreatDefenseToggle__private_descriptor,
      Feature_WebThreatDefenseToggle__private_featureState | 1,
      3u,
      1LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v4,
      3LL,
      &Feature_WebThreatDefenseToggle__private_descriptor);
  }
  if ( *(_DWORD *)(W32GetUserSessionState(v2, a2) + 42576) )
    return ImpShutdownWorker();
  else
    return 0LL;
}
