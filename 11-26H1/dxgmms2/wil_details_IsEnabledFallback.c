/*
 * XREFs of wil_details_IsEnabledFallback @ 0x14004B0E4
 * Callers:
 *     Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledFallback @ 0x14004B0C8 (Feature_CompositionSwapchainAdvancedSyncSupport__private_IsEnabledFallback.c)
 *     Feature_3358814523__private_IsEnabledFallback @ 0x14004DC84 (Feature_3358814523__private_IsEnabledFallback.c)
 *     Feature_PeriodicTrimImprovements__private_IsEnabledFallback @ 0x14004DCA0 (Feature_PeriodicTrimImprovements__private_IsEnabledFallback.c)
 *     Feature_Servicing_VARangeHoldReference__private_IsEnabledFallback @ 0x14004DCF8 (Feature_Servicing_VARangeHoldReference__private_IsEnabledFallback.c)
 *     Feature_Servicing_VARangeRaceCondition__private_IsEnabledFallback @ 0x14004DD50 (Feature_Servicing_VARangeRaceCondition__private_IsEnabledFallback.c)
 *     Feature_SystemCommitMdlLeakInstrumentation__private_IsEnabledFallback @ 0x14004DD6C (Feature_SystemCommitMdlLeakInstrumentation__private_IsEnabledFallback.c)
 *     Feature_UseReadPointerNoFenceInIsOwner__private_IsEnabledFallback @ 0x14004DDC4 (Feature_UseReadPointerNoFenceInIsOwner__private_IsEnabledFallback.c)
 *     Feature_MSRC99365_58294879__private_IsEnabledFallback @ 0x14004F200 (Feature_MSRC99365_58294879__private_IsEnabledFallback.c)
 *     Feature_VadAddressValidation__private_IsEnabledFallback @ 0x14004F2F8 (Feature_VadAddressValidation__private_IsEnabledFallback.c)
 *     Feature_Servicing_GraphicsKernelPQRLeak__private_IsEnabledFallback @ 0x140054564 (Feature_Servicing_GraphicsKernelPQRLeak__private_IsEnabledFallback.c)
 *     Feature_GraphicsKernel2602BugFixes__private_IsEnabledFallback @ 0x1400561C8 (Feature_GraphicsKernel2602BugFixes__private_IsEnabledFallback.c)
 *     Feature_Servicing_GraphicsKernelDwmHangFix__private_IsEnabledFallback @ 0x140056220 (Feature_Servicing_GraphicsKernelDwmHangFix__private_IsEnabledFallback.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14004E2F0 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState @ 0x14004E468 (wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14004E570 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
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
    v6 = wil_details_FeatureStateCache_ReevaluateCachedFeatureEnabledState(*a3, a1);
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
