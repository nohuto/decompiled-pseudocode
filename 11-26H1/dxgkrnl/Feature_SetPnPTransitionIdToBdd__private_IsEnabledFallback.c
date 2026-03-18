/*
 * XREFs of Feature_SetPnPTransitionIdToBdd__private_IsEnabledFallback @ 0x14006F8C8
 * Callers:
 *     Feature_SetPnPTransitionIdToBdd__private_IsEnabledDeviceUsageNoInline @ 0x14006F88C (Feature_SetPnPTransitionIdToBdd__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140067A54 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_SetPnPTransitionIdToBdd__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_SetPnPTransitionIdToBdd__private_descriptor);
}
