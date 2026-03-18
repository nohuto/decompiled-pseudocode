/*
 * XREFs of Feature_AddDisplayHDR12CertificationTier__private_IsEnabledFallback @ 0x140076EF8
 * Callers:
 *     Feature_AddDisplayHDR12CertificationTier__private_IsEnabledDeviceUsageNoInline @ 0x140076EBC (Feature_AddDisplayHDR12CertificationTier__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x140067A54 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_AddDisplayHDR12CertificationTier__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_AddDisplayHDR12CertificationTier__private_descriptor);
}
