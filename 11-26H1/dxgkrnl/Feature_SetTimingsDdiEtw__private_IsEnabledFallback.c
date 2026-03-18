/*
 * XREFs of Feature_SetTimingsDdiEtw__private_IsEnabledFallback @ 0x140073728
 * Callers:
 *     Feature_SetTimingsDdiEtw__private_IsEnabledDeviceUsageNoInline @ 0x1400736EC (Feature_SetTimingsDdiEtw__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140067A54 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_SetTimingsDdiEtw__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_SetTimingsDdiEtw__private_descriptor);
}
