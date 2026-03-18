/*
 * XREFs of Feature_2936862008__private_IsEnabledFallback @ 0x140240A10
 * Callers:
 *     Feature_2936862008__private_IsEnabledDeviceUsageNoInline @ 0x1402409D8 (Feature_2936862008__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14013A604 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_2936862008__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_2936862008__private_descriptor);
}
