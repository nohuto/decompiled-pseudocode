/*
 * XREFs of Feature_CheckProtocolMutexOwner__private_IsEnabledPreCheck @ 0x14008E760
 * Callers:
 *     ?ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@@IPEAU_STRING@@0@Z @ 0x1400857F0 (-ndisOpenAdapterLegacyProtocol@@YAXPEAH0PEAPEAXPEAIPEAW4_NDIS_MEDIUM@@IPEAX4PEAU_UNICODE_STRING@.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x140091E70 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x140092108 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 Feature_CheckProtocolMutexOwner__private_IsEnabledPreCheck()
{
  __int64 v1; // [rsp+30h] [rbp+8h]

  v1 = (unsigned int)Feature_CheckProtocolMutexOwner__private_featureState;
  if ( (Feature_CheckProtocolMutexOwner__private_featureState & 0x10) == 0 )
  {
    LODWORD(v1) = Feature_CheckProtocolMutexOwner__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(&Feature_CheckProtocolMutexOwner__private_descriptor, v1, 3LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v1,
      3LL,
      &Feature_CheckProtocolMutexOwner__private_descriptor);
  }
  return 1LL;
}
