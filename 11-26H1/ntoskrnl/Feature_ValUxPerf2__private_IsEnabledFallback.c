/*
 * XREFs of Feature_ValUxPerf2__private_IsEnabledFallback @ 0x1406E7AD8
 * Callers:
 *     Feature_ValUxPerf2__private_IsEnabledNoReportingNoInline @ 0x1406E7AF8 (Feature_ValUxPerf2__private_IsEnabledNoReportingNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1404FAECC (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_ValUxPerf2__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, (volatile signed __int32 **)&Feature_ValUxPerf2__private_descriptor, 0);
}
