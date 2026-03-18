/*
 * XREFs of Feature_PreserveObjectReference__private_IsEnabledFallback @ 0x1401C5F9C
 * Callers:
 *     Feature_PreserveObjectReference__private_IsEnabledNoReportingNoInline @ 0x1400C49B4 (Feature_PreserveObjectReference__private_IsEnabledNoReportingNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1400BCD84 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_PreserveObjectReference__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_PreserveObjectReference__private_descriptor);
}
