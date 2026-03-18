/*
 * XREFs of Feature_MSRC99365_58294879__private_IsEnabledFallback @ 0x14004F200
 * Callers:
 *     Feature_MSRC99365_58294879__private_IsEnabledNoReportingNoInline @ 0x14004F21C (Feature_MSRC99365_58294879__private_IsEnabledNoReportingNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14004B0E4 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_MSRC99365_58294879__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_MSRC99365_58294879__private_descriptor);
}
