/*
 * XREFs of Feature_Opportunistic64KBSysMemMappings__private_ReportDeviceUsage @ 0x14004CBD8
 * Callers:
 *     ?CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE@Z @ 0x1401275CC (-CommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_GLOBAL_ALLOC@@PEAVVIDMM_PROCESS@@PEAXPEAE.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14004E2F0 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14004E570 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

__int64 Feature_Opportunistic64KBSysMemMappings__private_ReportDeviceUsage()
{
  __int64 result; // rax
  __int64 v1; // [rsp+30h] [rbp+8h]

  v1 = (unsigned int)Feature_Opportunistic64KBSysMemMappings__private_featureState;
  if ( (Feature_Opportunistic64KBSysMemMappings__private_featureState & 0x10) == 0 )
  {
    LODWORD(v1) = Feature_Opportunistic64KBSysMemMappings__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      &Feature_Opportunistic64KBSysMemMappings__private_descriptor,
      v1,
      3LL);
    return wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
             v1,
             3LL,
             &Feature_Opportunistic64KBSysMemMappings__private_descriptor);
  }
  return result;
}
