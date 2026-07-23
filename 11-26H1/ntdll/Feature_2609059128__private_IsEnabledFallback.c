/*
 * XREFs of Feature_2609059128__private_IsEnabledFallback @ 0x1801599D0
 * Callers:
 *     Feature_2609059128__private_IsEnabledDeviceUsageNoInline @ 0x18015999C (Feature_2609059128__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Feature_2609059128__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_2609059128__private_descriptor);
}
