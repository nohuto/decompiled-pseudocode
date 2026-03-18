/*
 * XREFs of Feature_29159638__private_IsEnabledFallback @ 0x140228F54
 * Callers:
 *     Feature_29159638__private_IsEnabledDeviceUsageNoInline @ 0x140228F1C (Feature_29159638__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14013A604 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_29159638__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_29159638__private_descriptor);
}
