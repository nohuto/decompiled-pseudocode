/*
 * XREFs of Feature_MinifloatTolerableDelayEncoding__private_IsEnabledFallback @ 0x1405351F4
 * Callers:
 *     Feature_MinifloatTolerableDelayEncoding__private_IsEnabledNoReportingNoInline @ 0x1403B7F0C (Feature_MinifloatTolerableDelayEncoding__private_IsEnabledNoReportingNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1404FAECC (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_MinifloatTolerableDelayEncoding__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           (volatile signed __int32 **)&Feature_MinifloatTolerableDelayEncoding__private_descriptor,
           0);
}
