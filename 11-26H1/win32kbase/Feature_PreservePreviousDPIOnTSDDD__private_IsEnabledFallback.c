/*
 * XREFs of Feature_PreservePreviousDPIOnTSDDD__private_IsEnabledFallback @ 0x1401C6074
 * Callers:
 *     Feature_PreservePreviousDPIOnTSDDD__private_IsEnabledDeviceUsageNoInline @ 0x140152324 (Feature_PreservePreviousDPIOnTSDDD__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1400BCD84 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_PreservePreviousDPIOnTSDDD__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_PreservePreviousDPIOnTSDDD__private_descriptor);
}
