/*
 * XREFs of InitializeSListHead @ 0x140492D50
 * Callers:
 *     ?StInitialize@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140492348 (-StInitialize@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x1404927B0 (ExInitializeNPagedLookasideListInternal.c)
 *     ExInitializePagedLookasideListInternal @ 0x1404928F0 (ExInitializePagedLookasideListInternal.c)
 *     EtwpInitializeApcPool @ 0x140492A38 (EtwpInitializeApcPool.c)
 *     ExInitializeLookasideListExInternal @ 0x140492B20 (ExInitializeLookasideListExInternal.c)
 *     MiAbsorbPossibleEngineChanges @ 0x1404E5460 (MiAbsorbPossibleEngineChanges.c)
 *     RtlpHpVsSlotCreate @ 0x1404FE7E8 (RtlpHpVsSlotCreate.c)
 *     HvlpSetupCachedHypercallPages @ 0x1405BDA28 (HvlpSetupCachedHypercallPages.c)
 *     ?SmCompressManagerStart@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_MANAGER@1@W4_ST_COMPRESSION_FORMAT@@@Z @ 0x140640444 (-SmCompressManagerStart@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_MANAGER@1@W4_ST_COMPR.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x140640E84 (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     MiInitializeNuma @ 0x1406E7EDC (MiInitializeNuma.c)
 *     MiInitializePageFaultResources @ 0x1406FC31C (MiInitializePageFaultResources.c)
 *     MiPopulateFreeKernelShadowStackCacheEntries @ 0x1407040A4 (MiPopulateFreeKernelShadowStackCacheEntries.c)
 *     RtlpDynamicLookasideInitialize @ 0x140724064 (RtlpDynamicLookasideInitialize.c)
 *     PfTInitialize @ 0x1407C9604 (PfTInitialize.c)
 *     PfFbBufferListInitialize @ 0x1407CB328 (PfFbBufferListInitialize.c)
 *     RtlStdInitializeStackDatabase @ 0x1408081EC (RtlStdInitializeStackDatabase.c)
 *     WdipSemInitializeGlobalState @ 0x14082576C (WdipSemInitializeGlobalState.c)
 *     WdipSemFreePool @ 0x140826FAC (WdipSemFreePool.c)
 *     EtwpCovSampCaptureContextStart @ 0x14083699C (EtwpCovSampCaptureContextStart.c)
 *     EtwpCovSampLookasideControlInitialize @ 0x14083702C (EtwpCovSampLookasideControlInitialize.c)
 *     EtwpCovSampLookasideInitialize @ 0x1408370C0 (EtwpCovSampLookasideInitialize.c)
 *     MiInitializePartition @ 0x14086F740 (MiInitializePartition.c)
 *     MiInitializePartitionFreeZeroLists @ 0x14086FDC8 (MiInitializePartitionFreeZeroLists.c)
 *     MiCreatePagefile @ 0x1408714A0 (MiCreatePagefile.c)
 *     MmInitializeProcessAddressSpace @ 0x140A08138 (MmInitializeProcessAddressSpace.c)
 *     EtwpEnableStackCaching @ 0x140AC00AC (EtwpEnableStackCaching.c)
 *     PfTAccessTracingInitialize @ 0x140BEF5CC (PfTAccessTracingInitialize.c)
 *     KiInitPrcb @ 0x140BF9C24 (KiInitPrcb.c)
 *     ExInitializeSystemLookasideList @ 0x140C136D0 (ExInitializeSystemLookasideList.c)
 *     ViTargetDriversAllocateVerifiedData @ 0x140C2F64C (ViTargetDriversAllocateVerifiedData.c)
 *     VfPoolInitPhase1 @ 0x140C3E60C (VfPoolInitPhase1.c)
 *     MiCreateTopLevelUltraMappings @ 0x140D07D28 (MiCreateTopLevelUltraMappings.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402CA4E0 (RtlRaiseStatus.c)
 */

void __stdcall InitializeSListHead(PSLIST_HEADER SListHead)
{
  if ( ((unsigned __int8)SListHead & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  *SListHead = 0LL;
}
