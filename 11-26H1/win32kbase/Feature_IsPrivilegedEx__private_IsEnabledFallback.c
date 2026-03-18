/*
 * XREFs of Feature_IsPrivilegedEx__private_IsEnabledFallback @ 0x1401C6140
 * Callers:
 *     Feature_IsPrivilegedEx__private_IsEnabledDeviceUsageNoInline @ 0x1401A31F8 (Feature_IsPrivilegedEx__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1400BCD84 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_IsPrivilegedEx__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_IsPrivilegedEx__private_descriptor);
}
