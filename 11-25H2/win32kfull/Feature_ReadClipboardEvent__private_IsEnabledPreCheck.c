/*
 * XREFs of Feature_ReadClipboardEvent__private_IsEnabledPreCheck @ 0x1401F34EC
 * Callers:
 *     NtUserGetClipboardData @ 0x140248F00 (NtUserGetClipboardData.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1401ADD18 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14026F27C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 Feature_ReadClipboardEvent__private_IsEnabledPreCheck()
{
  __int64 v1; // [rsp+30h] [rbp+8h]

  v1 = (unsigned int)Feature_ReadClipboardEvent__private_featureState;
  if ( (Feature_ReadClipboardEvent__private_featureState & 0x10) == 0 )
  {
    LODWORD(v1) = Feature_ReadClipboardEvent__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_ReadClipboardEvent__private_descriptor,
      Feature_ReadClipboardEvent__private_featureState | 1,
      3u,
      1LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(v1, 3LL, &Feature_ReadClipboardEvent__private_descriptor);
  }
  return 1LL;
}
