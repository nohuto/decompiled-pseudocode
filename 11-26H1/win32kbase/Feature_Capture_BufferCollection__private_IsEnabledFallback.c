/*
 * XREFs of Feature_Capture_BufferCollection__private_IsEnabledFallback @ 0x1401B8F2C
 * Callers:
 *     Feature_Capture_BufferCollection__private_IsEnabledDeviceUsageNoInline @ 0x1401B8EF0 (Feature_Capture_BufferCollection__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1400BCD84 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_Capture_BufferCollection__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_Capture_BufferCollection__private_descriptor);
}
