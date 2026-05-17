/*
 * XREFs of Feature_2609059128__private_IsEnabledFallback @ 0x180159B00
 * Callers:
 *     Feature_2609059128__private_IsEnabledDeviceUsageNoInline @ 0x180159ACC (Feature_2609059128__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Feature_2609059128__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_2609059128__private_descriptor);
}
