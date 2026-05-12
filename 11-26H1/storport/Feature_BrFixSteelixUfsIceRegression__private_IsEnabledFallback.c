/*
 * XREFs of Feature_BrFixSteelixUfsIceRegression__private_IsEnabledFallback @ 0x140070B84
 * Callers:
 *     Feature_BrFixSteelixUfsIceRegression__private_IsEnabledDeviceUsageNoInline @ 0x140070B48 (Feature_BrFixSteelixUfsIceRegression__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140053138 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_BrFixSteelixUfsIceRegression__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &wil_details_featureDescriptors_a);
}
