/*
 * XREFs of Feature_WdfUmdfDma__private_IsEnabledFallback @ 0x14008A6DC
 * Callers:
 *     Feature_WdfUmdfDma__private_IsEnabledDeviceUsageNoInline @ 0x14008A6A0 (Feature_WdfUmdfDma__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x14008B288 (wil_details_IsEnabledFallback.c)
 */

int __fastcall Feature_WdfUmdfDma__private_IsEnabledFallback(
        wil_details_FeatureStateCache observedState,
        wil_ReportingKind kind,
        __int64 a3,
        wil_UsageReportingMode a4)
{
  return wil_details_IsEnabledFallback(observedState, kind, &Feature_WdfUmdfDma__private_descriptor, a4);
}
