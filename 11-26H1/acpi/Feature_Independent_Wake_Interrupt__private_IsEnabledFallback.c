/*
 * XREFs of Feature_Independent_Wake_Interrupt__private_IsEnabledFallback @ 0x140063B50
 * Callers:
 *     Feature_Independent_Wake_Interrupt__private_IsEnabledDeviceUsageNoInline @ 0x140063B14 (Feature_Independent_Wake_Interrupt__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1400646CC (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_Independent_Wake_Interrupt__private_IsEnabledFallback(__int64 a1, __int64 a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_Independent_Wake_Interrupt__private_descriptor);
}
