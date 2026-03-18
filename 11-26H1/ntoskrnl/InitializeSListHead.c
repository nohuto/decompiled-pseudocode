/*
 * XREFs of InitializeSListHead @ 0x140499200
 * Callers:
 *     ?StInitialize@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1404987F8 (-StInitialize@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x140498C60 (ExInitializeNPagedLookasideListInternal.c)
 *     ExInitializePagedLookasideListInternal @ 0x140498DA0 (ExInitializePagedLookasideListInternal.c)
 *     EtwpInitializeApcPool @ 0x140498EE8 (EtwpInitializeApcPool.c)
 *     ExInitializeLookasideListExInternal @ 0x140498FD0 (ExInitializeLookasideListExInternal.c)
 *     MiAbsorbPossibleEngineChanges @ 0x1404EBE80 (MiAbsorbPossibleEngineChanges.c)
 *     RtlpHpVsSlotCreate @ 0x140504EA8 (RtlpHpVsSlotCreate.c)
 *     HvlpSetupCachedHypercallPages @ 0x1405BB1B8 (HvlpSetupCachedHypercallPages.c)
 *     ?SmCompressManagerStart@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_MANAGER@1@W4_ST_COMPRESSION_FORMAT@@@Z @ 0x14063C864 (-SmCompressManagerStart@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_COMPRESS_MANAGER@1@W4_ST_COMPR.c)
 *     ?SmInitialize@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z @ 0x14063D2A4 (-SmInitialize@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SMKM_STORE_MGR_PARAMS@@@Z.c)
 *     MiInitializeNuma @ 0x1406E3230 (MiInitializeNuma.c)
 *     MiInitializePageFaultResources @ 0x1406F76AC (MiInitializePageFaultResources.c)
 *     MiPopulateFreeKernelShadowStackCacheEntries @ 0x1406FF3D4 (MiPopulateFreeKernelShadowStackCacheEntries.c)
 *     RtlpDynamicLookasideInitialize @ 0x14071F444 (RtlpDynamicLookasideInitialize.c)
 *     PfTInitialize @ 0x1407C65A4 (PfTInitialize.c)
 *     PfFbBufferListInitialize @ 0x1407C82C8 (PfFbBufferListInitialize.c)
 *     RtlStdInitializeStackDatabase @ 0x14080274C (RtlStdInitializeStackDatabase.c)
 *     WdipSemInitializeGlobalState @ 0x14081F55C (WdipSemInitializeGlobalState.c)
 *     WdipSemFreePool @ 0x140820D9C (WdipSemFreePool.c)
 *     EtwpCovSampCaptureContextStart @ 0x14083075C (EtwpCovSampCaptureContextStart.c)
 *     EtwpCovSampLookasideControlInitialize @ 0x140830DEC (EtwpCovSampLookasideControlInitialize.c)
 *     EtwpCovSampLookasideInitialize @ 0x140830E80 (EtwpCovSampLookasideInitialize.c)
 *     MiInitializePartition @ 0x140869360 (MiInitializePartition.c)
 *     MiInitializePartitionFreeZeroLists @ 0x1408699E8 (MiInitializePartitionFreeZeroLists.c)
 *     MiCreatePagefile @ 0x14086B0C0 (MiCreatePagefile.c)
 *     MmInitializeProcessAddressSpace @ 0x1409622B0 (MmInitializeProcessAddressSpace.c)
 *     EtwpEnableStackCaching @ 0x140ABDABC (EtwpEnableStackCaching.c)
 *     PfTAccessTracingInitialize @ 0x140BE95CC (PfTAccessTracingInitialize.c)
 *     KiInitPrcb @ 0x140BF3C24 (KiInitPrcb.c)
 *     ExInitializeSystemLookasideList @ 0x140C0D4C0 (ExInitializeSystemLookasideList.c)
 *     ViTargetDriversAllocateVerifiedData @ 0x140C2963C (ViTargetDriversAllocateVerifiedData.c)
 *     VfPoolInitPhase1 @ 0x140C385FC (VfPoolInitPhase1.c)
 *     MiCreateTopLevelUltraMappings @ 0x140D01988 (MiCreateTopLevelUltraMappings.c)
 * Callees:
 *     RtlRaiseStatus @ 0x1402E84A0 (RtlRaiseStatus.c)
 */

void __stdcall InitializeSListHead(PSLIST_HEADER SListHead)
{
  if ( ((unsigned __int8)SListHead & 0xF) != 0 )
    RtlRaiseStatus(-2147483646);
  *SListHead = 0LL;
}
