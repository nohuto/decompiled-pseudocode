/*
 * XREFs of wil_details_IsEnabledFallback @ 0x14008D920
 * Callers:
 *     Feature_SSSurpriseRemoval_Fix__private_IsEnabledFallback @ 0x140091660 (Feature_SSSurpriseRemoval_Fix__private_IsEnabledFallback.c)
 *     Feature_CFHCancelTimerFix__private_IsEnabledFallback @ 0x140092DD4 (Feature_CFHCancelTimerFix__private_IsEnabledFallback.c)
 *     Feature_NDPQualitySpring26__private_IsEnabledFallback @ 0x140094BD0 (Feature_NDPQualitySpring26__private_IsEnabledFallback.c)
 *     Feature_NDPQualityWinter26__private_IsEnabledFallback @ 0x140094C28 (Feature_NDPQualityWinter26__private_IsEnabledFallback.c)
 *     Feature_NdisTriageData__private_IsEnabledFallback @ 0x140094C80 (Feature_NdisTriageData__private_IsEnabledFallback.c)
 *     Feature_NVBugFixes2507__private_IsEnabledFallback @ 0x140097688 (Feature_NVBugFixes2507__private_IsEnabledFallback.c)
 *     Feature_NDPSfiSpring2026__private_IsEnabledFallback @ 0x1400A1FCC (Feature_NDPSfiSpring2026__private_IsEnabledFallback.c)
 *     Feature_NDPQualitySummer26__private_IsEnabledFallback @ 0x1400A4B9C (Feature_NDPQualitySummer26__private_IsEnabledFallback.c)
 *     Feature_3014440251__private_IsEnabledFallback @ 0x1400A60A8 (Feature_3014440251__private_IsEnabledFallback.c)
 *     Feature_359445817__private_IsEnabledFallback @ 0x1400A6100 (Feature_359445817__private_IsEnabledFallback.c)
 *     Feature_TCPIP_SFI_60615470_Fix__private_IsEnabledFallback @ 0x1400CDC0C (Feature_TCPIP_SFI_60615470_Fix__private_IsEnabledFallback.c)
 *     Feature_UDFDOD__private_IsEnabledFallback @ 0x1400E9E60 (Feature_UDFDOD__private_IsEnabledFallback.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x140091E70 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x140091FE8 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x140092108 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 __fastcall wil_details_IsEnabledFallback(__int64 a1, unsigned int a2, _QWORD *a3)
{
  char v5; // bl
  __int64 v6; // rax
  char v7; // bp
  char v8; // r15
  __int64 v9; // rdi

  v5 = a1;
  LOBYTE(v6) = a1;
  v7 = a1;
  v8 = a1;
  if ( (a1 & 2) != 0 )
  {
    v9 = (unsigned int)a1;
  }
  else
  {
    v6 = wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(*a3, a1);
    v9 = v6;
    v5 = v6;
    v7 = v6;
    v8 = v6;
  }
  if ( a2 )
  {
    wil_details_FeatureReporting_ReportUsageToService(a3, v9, a2);
    if ( a2 == 3 || (v7 = v8, LOBYTE(v6) = v5, a2 == 4) )
    {
      wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(v9, a2, a3);
      LOBYTE(v6) = v7;
    }
  }
  return v6 & 1;
}
