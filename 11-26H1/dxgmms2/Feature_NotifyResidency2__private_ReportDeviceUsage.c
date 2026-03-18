/*
 * XREFs of Feature_NotifyResidency2__private_ReportDeviceUsage @ 0x14004F254
 * Callers:
 *     UpdateAllocationProperty @ 0x1400B2A2C (UpdateAllocationProperty.c)
 *     ?MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEA_NPEAX@Z @ 0x1400B6A80 (-MoveOneResource@VIDMM_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEA_NPEAX@Z.c)
 *     MoveAndFlipDisplayingAllocation @ 0x1400BECE0 (MoveAndFlipDisplayingAllocation.c)
 *     ?InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z @ 0x1400E2908 (-InitPagingProcessVaSpace@VIDMM_GLOBAL@@QEAAJIE@Z.c)
 *     EvictResources @ 0x1401172F8 (EvictResources.c)
 *     ?CommitResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z @ 0x14012A3F0 (-CommitResource@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z.c)
 *     ?CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z @ 0x14012A910 (-CommitResource@VIDMM_APERTURE_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z.c)
 *     ?TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEAU_MDL@@_N@Z @ 0x14012B6B8 (-TransferToSegment@VIDMM_MEMORY_SEGMENT@@QEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEAU_MDL@@_N@Z.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x14004E2F0 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x14004E570 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 */

void Feature_NotifyResidency2__private_ReportDeviceUsage()
{
  __int64 v0; // [rsp+30h] [rbp+8h]

  v0 = (unsigned int)Feature_NotifyResidency2__private_featureState;
  if ( (Feature_NotifyResidency2__private_featureState & 0x10) == 0 )
  {
    LODWORD(v0) = Feature_NotifyResidency2__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService((__int64)&Feature_NotifyResidency2__private_descriptor, v0, 3LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v0,
      3,
      (__int64)&Feature_NotifyResidency2__private_descriptor);
  }
}
