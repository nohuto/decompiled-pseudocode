/*
 * XREFs of Feature_GestureOnlyTouchpadParam2__private_IsEnabledFallback @ 0x1401B4FA4
 * Callers:
 *     Feature_GestureOnlyTouchpadParam2__private_IsEnabledDeviceUsageNoInline @ 0x1401B4F6C (Feature_GestureOnlyTouchpadParam2__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14013A604 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_GestureOnlyTouchpadParam2__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_GestureOnlyTouchpadParam2__private_descriptor);
}
