/*
 * XREFs of Feature_USBEXSVP1__private_IsEnabledPreCheck @ 0x140044EA0
 * Callers:
 *     Controller_PopulateDeviceFlags @ 0x140075F9C (Controller_PopulateDeviceFlags.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x140046428 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1400465B8 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 Feature_USBEXSVP1__private_IsEnabledPreCheck()
{
  __int64 v1; // [rsp+30h] [rbp+8h]

  v1 = (unsigned int)Feature_USBEXSVP1__private_featureState;
  if ( (Feature_USBEXSVP1__private_featureState & 0x10) == 0 )
  {
    LODWORD(v1) = Feature_USBEXSVP1__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(&Feature_USBEXSVP1__private_descriptor, v1, 3LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(v1, 3LL, &Feature_USBEXSVP1__private_descriptor);
  }
  return 1LL;
}
