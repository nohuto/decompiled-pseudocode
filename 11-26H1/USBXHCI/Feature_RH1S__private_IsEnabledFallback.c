/*
 * XREFs of Feature_RH1S__private_IsEnabledFallback @ 0x140044DD4
 * Callers:
 *     Feature_RH1S__private_IsEnabledDeviceUsageNoInline @ 0x140044D98 (Feature_RH1S__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14004676C (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_RH1S__private_IsEnabledFallback(__int64 a1, __int64 a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &wil_details_featureDescriptors_a);
}
