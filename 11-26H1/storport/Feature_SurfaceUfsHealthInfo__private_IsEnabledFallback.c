/*
 * XREFs of Feature_SurfaceUfsHealthInfo__private_IsEnabledFallback @ 0x1400B287C
 * Callers:
 *     Feature_SurfaceUfsHealthInfo__private_IsEnabledDeviceUsageNoInline @ 0x1400B2840 (Feature_SurfaceUfsHealthInfo__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140053138 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_SurfaceUfsHealthInfo__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_SurfaceUfsHealthInfo__private_descriptor);
}
