/*
 * XREFs of MiProtectionToCacheAttribute @ 0x140374020
 * Callers:
 *     MiMapContiguousMemoryLarge @ 0x1402A1EFC (MiMapContiguousMemoryLarge.c)
 *     MiDetermineThreadFaultCluster @ 0x1402B7E68 (MiDetermineThreadFaultCluster.c)
 *     MiResolveCachedPageHardFault @ 0x14033BBFC (MiResolveCachedPageHardFault.c)
 *     MiAllocateContiguousMemory @ 0x14034C30C (MiAllocateContiguousMemory.c)
 *     MmMapLockedPagesSpecifyCache @ 0x14035F0D0 (MmMapLockedPagesSpecifyCache.c)
 *     MiFillSystemPtes @ 0x1403611E8 (MiFillSystemPtes.c)
 *     MiMapContiguousMemory @ 0x140365BB0 (MiMapContiguousMemory.c)
 *     MiInsertPhysicalPteMapping @ 0x140367EF0 (MiInsertPhysicalPteMapping.c)
 *     MiInitializeTransitionPfn @ 0x14036C744 (MiInitializeTransitionPfn.c)
 *     MiBuildMdlForMappedFileFault @ 0x140370990 (MiBuildMdlForMappedFileFault.c)
 *     MiAllocatePageFileReadResources @ 0x1403737A8 (MiAllocatePageFileReadResources.c)
 *     MiGetHardFaultPages @ 0x140374708 (MiGetHardFaultPages.c)
 *     MiAllocateLargeZeroPages @ 0x1403D0630 (MiAllocateLargeZeroPages.c)
 *     MiGetFastLargePages @ 0x1403D0A5C (MiGetFastLargePages.c)
 *     MiGetClusterPage @ 0x140508040 (MiGetClusterPage.c)
 *     MiPrefetchPreallocatePages @ 0x1406FBE0C (MiPrefetchPreallocatePages.c)
 *     MiSoftFaultClusterTradeGetPage @ 0x140717154 (MiSoftFaultClusterTradeGetPage.c)
 *     MiMapViewOfPhysicalSection @ 0x140A0228C (MiMapViewOfPhysicalSection.c)
 *     MiPfPrepareSequentialReadList @ 0x140A5A190 (MiPfPrepareSequentialReadList.c)
 *     MiFindLargePageMemory @ 0x140B64898 (MiFindLargePageMemory.c)
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
