/*
 * XREFs of Feature_PackagedComElevationSupport__private_IsEnabledFallback @ 0x14052F8A8
 * Callers:
 *     Feature_PackagedComElevationSupport__private_IsEnabledNoReportingNoInline @ 0x140460EE4 (Feature_PackagedComElevationSupport__private_IsEnabledNoReportingNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1405016DC (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_PackagedComElevationSupport__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(
           a1,
           a2,
           (volatile signed __int32 **)&Feature_PackagedComElevationSupport__private_descriptor,
           0);
}
