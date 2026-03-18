/*
 * XREFs of Feature_RawMouseFlush__private_IsEnabledFallback @ 0x140277130
 * Callers:
 *     Feature_RawMouseFlush__private_IsEnabledDeviceUsageNoInline @ 0x1402770F8 (Feature_RawMouseFlush__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140269C88 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_RawMouseFlush__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_RawMouseFlush__private_descriptor);
}
