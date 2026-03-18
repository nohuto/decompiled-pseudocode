/*
 * XREFs of Feature_295645497__private_IsEnabledFallback @ 0x14063AE6C
 * Callers:
 *     Feature_295645497__private_IsEnabledDeviceUsageNoInline @ 0x14063AE30 (Feature_295645497__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1405016DC (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_295645497__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, (volatile signed __int32 **)&Feature_295645497__private_descriptor, 0);
}
