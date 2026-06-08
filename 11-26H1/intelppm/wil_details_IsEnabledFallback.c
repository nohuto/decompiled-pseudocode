/*
 * XREFs of wil_details_IsEnabledFallback @ 0x1400057B8
 * Callers:
 *     Feature_QosHysteresisExperiment__private_IsEnabledFallback @ 0x140006AFC (Feature_QosHysteresisExperiment__private_IsEnabledFallback.c)
 *     Feature_ShortQosHysteresisIntel__private_IsEnabledFallback @ 0x140006B54 (Feature_ShortQosHysteresisIntel__private_IsEnabledFallback.c)
 *     Feature_MwaitAddressWakeup__private_IsEnabledFallback @ 0x140007DEC (Feature_MwaitAddressWakeup__private_IsEnabledFallback.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x140007630 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x14000783C (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x140007A4C (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 __fastcall wil_details_IsEnabledFallback(__int64 a1, unsigned int a2, _QWORD *a3)
{
  char v5; // bl
  __int64 v6; // rdi

  v5 = a1;
  if ( (a1 & 2) != 0 )
  {
    v6 = (unsigned int)a1;
  }
  else
  {
    v6 = wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(*a3, a1, a3);
    v5 = v6;
  }
  if ( a2 )
  {
    wil_details_FeatureReporting_ReportUsageToService(a3, v6, a2);
    if ( a2 - 3 <= 1 )
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(v6, a2, a3);
  }
  return v5 & 1;
}
