/*
 * XREFs of Feature_PackagedComElevationSupport_v2__private_IsEnabledFallback @ 0x18015DD6C
 * Callers:
 *     Feature_PackagedComElevationSupport_v2__private_IsEnabledNoReportingNoInline @ 0x18015DD80 (Feature_PackagedComElevationSupport_v2__private_IsEnabledNoReportingNoInline.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Feature_PackagedComElevationSupport_v2__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_PackagedComElevationSupport_v2__private_descriptor);
}
