/*
 * XREFs of Feature_IPS44834473__private_IsEnabledFallback @ 0x1401C603C
 * Callers:
 *     Feature_IPS44834473__private_IsEnabledDeviceUsageNoInline @ 0x1400E85E0 (Feature_IPS44834473__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1400BCD84 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_IPS44834473__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_IPS44834473__private_descriptor);
}
