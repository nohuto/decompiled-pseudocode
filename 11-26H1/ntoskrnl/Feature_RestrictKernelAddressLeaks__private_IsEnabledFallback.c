/*
 * XREFs of Feature_RestrictKernelAddressLeaks__private_IsEnabledFallback @ 0x1405313E4
 * Callers:
 *     Feature_RestrictKernelAddressLeaks__private_IsEnabledDeviceUsageNoInline @ 0x1404B8468 (Feature_RestrictKernelAddressLeaks__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1405016DC (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_RestrictKernelAddressLeaks__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, (volatile signed __int32 **)&wil_details_featureDescriptors_a, 0);
}
