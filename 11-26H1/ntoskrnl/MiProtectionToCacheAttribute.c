/*
 * XREFs of MiProtectionToCacheAttribute @ 0x140372270
 * Callers:
 *     MiMapContiguousMemoryLarge @ 0x1402A29AC (MiMapContiguousMemoryLarge.c)
 *     MiDetermineThreadFaultCluster @ 0x1402D60A8 (MiDetermineThreadFaultCluster.c)
 *     MiResolveCachedPageHardFault @ 0x140339B7C (MiResolveCachedPageHardFault.c)
 *     MiAllocateContiguousMemory @ 0x14034A28C (MiAllocateContiguousMemory.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14035D330 (MmMapLockedPagesSpecifyCache.c)
 *     MiFillSystemPtes @ 0x14035F448 (MiFillSystemPtes.c)
 *     MiMapContiguousMemory @ 0x140363E10 (MiMapContiguousMemory.c)
 *     MiInsertPhysicalPteMapping @ 0x140366150 (MiInsertPhysicalPteMapping.c)
 *     MiInitializeTransitionPfn @ 0x14036A9A4 (MiInitializeTransitionPfn.c)
 *     MiBuildMdlForMappedFileFault @ 0x14036EBF0 (MiBuildMdlForMappedFileFault.c)
 *     MiAllocatePageFileReadResources @ 0x1403719F8 (MiAllocatePageFileReadResources.c)
 *     MiGetHardFaultPages @ 0x140372958 (MiGetHardFaultPages.c)
 *     MiAllocateLargeZeroPages @ 0x1403C673C (MiAllocateLargeZeroPages.c)
 *     MiGetFastLargePages @ 0x1403C6B68 (MiGetFastLargePages.c)
 *     MiGetClusterPage @ 0x14050E5D0 (MiGetClusterPage.c)
 *     MiPrefetchPreallocatePages @ 0x1406F719C (MiPrefetchPreallocatePages.c)
 *     MiSoftFaultClusterTradeGetPage @ 0x14071245C (MiSoftFaultClusterTradeGetPage.c)
 *     MiMapViewOfPhysicalSection @ 0x14095C9CC (MiMapViewOfPhysicalSection.c)
 *     MiPfPrepareSequentialReadList @ 0x140A50EA0 (MiPfPrepareSequentialReadList.c)
 *     MiFindLargePageMemory @ 0x140B617F8 (MiFindLargePageMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiProtectionToCacheAttribute(unsigned int a1)
{
  if ( !a1 )
    return 3LL;
  if ( a1 == 31 )
    return 1LL;
  if ( a1 >> 3 != 3 )
    return a1 >> 3 != 1;
  if ( (a1 & 7) == 0 )
    return 1LL;
  return 2LL;
}
