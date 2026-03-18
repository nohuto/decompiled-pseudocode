/*
 * XREFs of Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledFallback @ 0x1405016BC
 * Callers:
 *     Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledNoReportingNoInline @ 0x14052648C (Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledNoReportingNoInline.c)
 *     Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledDeviceOpportunityNoInline @ 0x1406C5FB8 (Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledDeviceOpportunityNoInline.c)
 *     Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledDeviceUsageNoInline @ 0x1406C5FF4 (Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledDeviceUsageNoInline.c)
 *     Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledOtherReporting @ 0x1406C6030 (Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledOtherReporting.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1405016DC (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_Servicing_AutoBoostEtwEventingFixes__private_IsEnabledFallback(__int64 a1, __int64 a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_Servicing_AutoBoostEtwEventingFixes__private_descriptor, 0LL);
}
