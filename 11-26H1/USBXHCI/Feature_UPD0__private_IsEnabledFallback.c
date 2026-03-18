/*
 * XREFs of Feature_UPD0__private_IsEnabledFallback @ 0x140044E84
 * Callers:
 *     Feature_UPD0__private_IsEnabledDeviceUsageNoInline @ 0x140044E48 (Feature_UPD0__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14004676C (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_UPD0__private_IsEnabledFallback(__int64 a1, __int64 a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_UPD0__private_descriptor);
}
