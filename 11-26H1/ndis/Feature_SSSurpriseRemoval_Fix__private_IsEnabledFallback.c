/*
 * XREFs of Feature_SSSurpriseRemoval_Fix__private_IsEnabledFallback @ 0x140091660
 * Callers:
 *     Feature_SSSurpriseRemoval_Fix__private_IsEnabledDeviceUsageNoInline @ 0x140091624 (Feature_SSSurpriseRemoval_Fix__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14008D920 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_SSSurpriseRemoval_Fix__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_SSSurpriseRemoval_Fix__private_descriptor);
}
