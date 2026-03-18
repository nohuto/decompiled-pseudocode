/*
 * XREFs of Feature_RestrictXpdm_Block3rdPartyDrivers__private_IsEnabledPreCheck @ 0x14002AA00
 * Callers:
 *     ldevLoadDriver @ 0x14000D360 (ldevLoadDriver.c)
 *     DrvUpdateGraphicsDeviceList @ 0x140029C20 (DrvUpdateGraphicsDeviceList.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEBKPEAGKPEAJ@Z @ 0x140040BF0 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1400BCE24 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1401C56C4 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 Feature_RestrictXpdm_Block3rdPartyDrivers__private_IsEnabledPreCheck()
{
  __int64 v1; // [rsp+30h] [rbp+8h]

  v1 = (unsigned int)Feature_RestrictXpdm_Block3rdPartyDrivers__private_featureState;
  if ( (Feature_RestrictXpdm_Block3rdPartyDrivers__private_featureState & 0x10) == 0 )
  {
    LODWORD(v1) = Feature_RestrictXpdm_Block3rdPartyDrivers__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      &Feature_RestrictXpdm_Block3rdPartyDrivers__private_descriptor,
      v1,
      3LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v1,
      3LL,
      &Feature_RestrictXpdm_Block3rdPartyDrivers__private_descriptor);
  }
  return 1LL;
}
