/*
 * XREFs of Feature_RestrictXpdm_Block3rdPartyDrivers__private_IsEnabledPreCheck @ 0x140142714
 * Callers:
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x14017C714 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14013A6A0 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1401A5B78 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 Feature_RestrictXpdm_Block3rdPartyDrivers__private_IsEnabledPreCheck()
{
  __int64 v1; // [rsp+30h] [rbp+8h]

  v1 = (unsigned int)Feature_RestrictXpdm_Block3rdPartyDrivers__private_featureState;
  if ( (Feature_RestrictXpdm_Block3rdPartyDrivers__private_featureState & 0x10) == 0 )
  {
    LODWORD(v1) = Feature_RestrictXpdm_Block3rdPartyDrivers__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_RestrictXpdm_Block3rdPartyDrivers__private_descriptor,
      Feature_RestrictXpdm_Block3rdPartyDrivers__private_featureState | 1,
      3u,
      1LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v1,
      3LL,
      &Feature_RestrictXpdm_Block3rdPartyDrivers__private_descriptor);
  }
  return 1LL;
}
