/*
 * XREFs of Feature_ExternalBrightness__private_IsEnabledFallback @ 0x140067804
 * Callers:
 *     Feature_ExternalBrightness__private_IsEnabledDeviceUsageNoInline @ 0x1400673B8 (Feature_ExternalBrightness__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140067A54 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_ExternalBrightness__private_IsEnabledFallback(__int64 a1, __int64 a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_ExternalBrightness__private_descriptor);
}
