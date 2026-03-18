/*
 * XREFs of Feature_1522854203__private_IsEnabledFallback @ 0x14033ADF0
 * Callers:
 *     Feature_1522854203__private_IsEnabledDeviceUsageNoInline @ 0x14033ADB8 (Feature_1522854203__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140269C88 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_1522854203__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_1522854203__private_descriptor);
}
