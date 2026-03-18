/*
 * XREFs of Feature_CompositionTextureDX12Support__private_IsEnabledFallback @ 0x140067900
 * Callers:
 *     Feature_CompositionTextureDX12Support__private_IsEnabledDeviceUsageNoInline @ 0x1400674B8 (Feature_CompositionTextureDX12Support__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140067A54 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_CompositionTextureDX12Support__private_IsEnabledFallback(__int64 a1, __int64 a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_CompositionTextureDX12Support__private_descriptor);
}
