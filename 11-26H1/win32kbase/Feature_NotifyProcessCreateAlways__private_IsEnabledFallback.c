/*
 * XREFs of Feature_NotifyProcessCreateAlways__private_IsEnabledFallback @ 0x1401C6020
 * Callers:
 *     Feature_NotifyProcessCreateAlways__private_IsEnabledDeviceUsageNoInline @ 0x14018A5D8 (Feature_NotifyProcessCreateAlways__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1400BCD84 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_NotifyProcessCreateAlways__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_NotifyProcessCreateAlways__private_descriptor);
}
