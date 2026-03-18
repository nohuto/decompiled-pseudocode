/*
 * XREFs of Feature_PeriodicTrimImprovements__private_IsEnabledFallback @ 0x14004DCA0
 * Callers:
 *     Feature_PeriodicTrimImprovements__private_IsEnabledDeviceUsageNoInline @ 0x14003B500 (Feature_PeriodicTrimImprovements__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14004B0E4 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_PeriodicTrimImprovements__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &wil_details_featureDescriptors_a);
}
