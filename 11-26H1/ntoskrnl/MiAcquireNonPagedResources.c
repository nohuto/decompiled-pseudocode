/*
 * XREFs of MiAcquireNonPagedResources @ 0x1402D6AD0
 * Callers:
 *     MiCreateSlabEntry @ 0x140206364 (MiCreateSlabEntry.c)
 *     MiFindContiguousPagesEx @ 0x14028E660 (MiFindContiguousPagesEx.c)
 *     MiReplenishUltraPageTables @ 0x1402D64DC (MiReplenishUltraPageTables.c)
 *     MiAllocateKernelStackPages @ 0x1403D4748 (MiAllocateKernelStackPages.c)
 *     MmAllocateNonChargedSecurePages @ 0x14040B6F8 (MmAllocateNonChargedSecurePages.c)
 *     MiMakePageBad @ 0x1404B42D8 (MiMakePageBad.c)
 *     MiObtainMdlCharges @ 0x1404C3B1C (MiObtainMdlCharges.c)
 *     MiGetFileHashPage @ 0x1404D5A28 (MiGetFileHashPage.c)
 *     MmAllocateSecureKernelPages @ 0x1404E279C (MmAllocateSecureKernelPages.c)
 *     MiSoftFaultClusterTradeInitialize @ 0x140502088 (MiSoftFaultClusterTradeInitialize.c)
 *     MiGetBadPageResources @ 0x1406F5D78 (MiGetBadPageResources.c)
 *     MiPrefetchPreallocatePages @ 0x1406FBE0C (MiPrefetchPreallocatePages.c)
 *     MiMoveBadPagePartition @ 0x14070E088 (MiMoveBadPagePartition.c)
 *     MiStoreChargeReservedPages @ 0x14070EF38 (MiStoreChargeReservedPages.c)
 *     MiProcessVaContiguityInformation @ 0x1407104C0 (MiProcessVaContiguityInformation.c)
 *     MiMoveBadPageChargesCrossPartition @ 0x140711E2C (MiMoveBadPageChargesCrossPartition.c)
 *     MmRemovePhysicalMemory @ 0x14086D840 (MmRemovePhysicalMemory.c)
 *     MiAllocateFastAwePages @ 0x14087DAC8 (MiAllocateFastAwePages.c)
 *     MiAllocateProcessShadow @ 0x140ABFF40 (MiAllocateProcessShadow.c)
 *     MiMapSystemImage @ 0x140B22C34 (MiMapSystemImage.c)
 *     MiChargeSystemImageCommitment @ 0x140B331C0 (MiChargeSystemImageCommitment.c)
 *     MiPartitionTransferAllocatePrepare @ 0x140B633E0 (MiPartitionTransferAllocatePrepare.c)
 *     MiAllocateDummyPage @ 0x140CF89FC (MiAllocateDummyPage.c)
 *     MmInitializeImageViewExtensionCfg @ 0x140D004C4 (MmInitializeImageViewExtensionCfg.c)
 *     MiUpdateBootHpatPagesInUse @ 0x140D01B84 (MiUpdateBootHpatPagesInUse.c)
 *     MiInitializeBootShadowStackPage @ 0x140D02594 (MiInitializeBootShadowStackPage.c)
 *     MiInitializeBootLoadedDriverPfns @ 0x140D06644 (MiInitializeBootLoadedDriverPfns.c)
 * Callees:
 *     MiChargePartitionResidentAvailable @ 0x1402D8150 (MiChargePartitionResidentAvailable.c)
 *     MiChargeCommit @ 0x1402D8520 (MiChargeCommit.c)
 *     MiChargeResident @ 0x14031A5D0 (MiChargeResident.c)
 *     MiReturnCommit @ 0x14036F050 (MiReturnCommit.c)
 */

__int64 __fastcall MiAcquireNonPagedResources(ULONG *a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v7; // edx
  unsigned int v8; // esi
  struct _KPRCB *CurrentPrcb; // rdx
  unsigned __int32 CachedResidentAvailable; // eax
  unsigned __int32 v11; // ett

  if ( (a4 & 1) != 0 )
  {
    MiChargeCommit(a1, a2, 4LL, a4);
    MiChargeResident(a1, a2, 0xFFFFFFFFLL);
    return 0LL;
  }
  v7 = ((unsigned int)a4 >> 1) & 1 | 2;
  if ( (a4 & 4) == 0 )
    v7 = ((unsigned int)a4 >> 1) & 1;
  v8 = v7 | 0x10;
  if ( (a4 & 8) == 0 )
    v8 = v7;
  if ( !(unsigned int)MiChargeCommit(a1, a2, v8, a4) )
    return 3221225773LL;
  if ( a1 == &MiSystemPartition )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
    while ( a2 <= CachedResidentAvailable && CachedResidentAvailable != -1 )
    {
      v11 = CachedResidentAvailable;
      CachedResidentAvailable = _InterlockedCompareExchange(
                                  (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                  CachedResidentAvailable - a2,
                                  CachedResidentAvailable);
      if ( v11 == CachedResidentAvailable )
        return 0LL;
    }
  }
  if ( (unsigned int)MiChargePartitionResidentAvailable(a1, a2, a3) )
    return 0LL;
  MiReturnCommit(a1, a2, v8);
  return 3221225626LL;
}
