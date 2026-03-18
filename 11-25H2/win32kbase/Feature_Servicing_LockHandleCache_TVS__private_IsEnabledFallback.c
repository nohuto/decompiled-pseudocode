/*
 * XREFs of Feature_Servicing_LockHandleCache_TVS__private_IsEnabledFallback @ 0x1401C8198
 * Callers:
 *     Feature_Servicing_LockHandleCache_TVS__private_IsEnabledDeviceUsageNoInline @ 0x1401C8160 (Feature_Servicing_LockHandleCache_TVS__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14013A604 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_Servicing_LockHandleCache_TVS__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_Servicing_LockHandleCache_TVS__private_descriptor);
}
