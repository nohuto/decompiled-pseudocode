/*
 * XREFs of DispBrokerGetCurrentModeImpl @ 0x1401FFA30
 * Callers:
 *     <none>
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1401ADD18 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14026F27C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 DispBrokerGetCurrentModeImpl()
{
  __int64 v1; // [rsp+30h] [rbp+8h]
  __int64 v2; // [rsp+30h] [rbp+8h]
  __int64 v3; // [rsp+30h] [rbp+8h]

  v1 = (unsigned int)Feature_DesktopDisplayBroker__private_featureState;
  if ( (Feature_DesktopDisplayBroker__private_featureState & 0x10) == 0 )
  {
    LODWORD(v1) = Feature_DesktopDisplayBroker__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_DesktopDisplayBroker__private_descriptor,
      Feature_DesktopDisplayBroker__private_featureState | 1,
      3u,
      1LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v1,
      3LL,
      &Feature_DesktopDisplayBroker__private_descriptor);
  }
  if ( !(unsigned int)UserIsConsoleConnection() )
    return (unsigned int)UserRemoteConnectedSessionUsingWddm() != 0 ? 3 : 0;
  v2 = (unsigned int)Feature_BrokeredDisplays_ConsoleSessions__private_featureState;
  if ( (Feature_BrokeredDisplays_ConsoleSessions__private_featureState & 0x10) == 0 )
  {
    LODWORD(v2) = Feature_BrokeredDisplays_ConsoleSessions__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_BrokeredDisplays_ConsoleSessions__private_descriptor,
      Feature_BrokeredDisplays_ConsoleSessions__private_featureState | 1,
      3u,
      1LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v2,
      3LL,
      &Feature_BrokeredDisplays_ConsoleSessions__private_descriptor);
  }
  v3 = (unsigned int)Feature_BrokeredDisplays_ModeChanges__private_featureState;
  if ( (Feature_BrokeredDisplays_ModeChanges__private_featureState & 0x10) == 0 )
  {
    LODWORD(v3) = Feature_BrokeredDisplays_ModeChanges__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_BrokeredDisplays_ModeChanges__private_descriptor,
      Feature_BrokeredDisplays_ModeChanges__private_featureState | 1,
      3u,
      1LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v3,
      3LL,
      &Feature_BrokeredDisplays_ModeChanges__private_descriptor);
  }
  return 3LL;
}
