/*
 * XREFs of Feature_Servicing_VARangeHoldReference__private_IsEnabledFallback @ 0x14004DCF8
 * Callers:
 *     Feature_Servicing_VARangeHoldReference__private_IsEnabledDeviceUsageNoInline @ 0x14004DCBC (Feature_Servicing_VARangeHoldReference__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14004B0E4 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_Servicing_VARangeHoldReference__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_Servicing_VARangeHoldReference__private_descriptor);
}
