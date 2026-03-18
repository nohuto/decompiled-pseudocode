/*
 * XREFs of MiAcquireNonPagedResources @ 0x1402F4A50
 * Callers:
 *     MiCreateSlabEntry @ 0x140206284 (MiCreateSlabEntry.c)
 *     MiFindContiguousPagesEx @ 0x14028F100 (MiFindContiguousPagesEx.c)
 *     MiReplenishUltraPageTables @ 0x1402F445C (MiReplenishUltraPageTables.c)
 *     MiAllocateKernelStackPages @ 0x1403D1778 (MiAllocateKernelStackPages.c)
 *     MmAllocateNonChargedSecurePages @ 0x1404170E8 (MmAllocateNonChargedSecurePages.c)
 *     MiMakePageBad @ 0x1404BAA50 (MiMakePageBad.c)
 *     MiObtainMdlCharges @ 0x1404CA0EC (MiObtainMdlCharges.c)
 *     MiGetFileHashPage @ 0x1404DC348 (MiGetFileHashPage.c)
 *     MmAllocateSecureKernelPages @ 0x1404E93EC (MmAllocateSecureKernelPages.c)
 *     MiSoftFaultClusterTradeInitialize @ 0x1405085E0 (MiSoftFaultClusterTradeInitialize.c)
 *     MiGetBadPageResources @ 0x1406F1108 (MiGetBadPageResources.c)
 *     MiPrefetchPreallocatePages @ 0x1406F719C (MiPrefetchPreallocatePages.c)
 *     MiMoveBadPagePartition @ 0x1407093D4 (MiMoveBadPagePartition.c)
 *     MiStoreChargeReservedPages @ 0x14070A284 (MiStoreChargeReservedPages.c)
 *     MiProcessVaContiguityInformation @ 0x14070B810 (MiProcessVaContiguityInformation.c)
 *     MiMoveBadPageChargesCrossPartition @ 0x14070D17C (MiMoveBadPageChargesCrossPartition.c)
 *     MmRemovePhysicalMemory @ 0x140867460 (MmRemovePhysicalMemory.c)
 *     MiAllocateFastAwePages @ 0x1408776E8 (MiAllocateFastAwePages.c)
 *     MiAllocateProcessShadow @ 0x140ABD950 (MiAllocateProcessShadow.c)
 *     MiMapSystemImage @ 0x140B20834 (MiMapSystemImage.c)
 *     MiChargeSystemImageCommitment @ 0x140B30FC0 (MiChargeSystemImageCommitment.c)
 *     MiPartitionTransferAllocatePrepare @ 0x140B60344 (MiPartitionTransferAllocatePrepare.c)
 *     MiAllocateDummyPage @ 0x140CF267C (MiAllocateDummyPage.c)
 *     MmInitializeImageViewExtensionCfg @ 0x140CFA144 (MmInitializeImageViewExtensionCfg.c)
 *     MiUpdateBootHpatPagesInUse @ 0x140CFB804 (MiUpdateBootHpatPagesInUse.c)
 *     MiInitializeBootShadowStackPage @ 0x140CFC214 (MiInitializeBootShadowStackPage.c)
 *     MiInitializeBootLoadedDriverPfns @ 0x140D002A4 (MiInitializeBootLoadedDriverPfns.c)
 * Callees:
 *     MiChargePartitionResidentAvailable @ 0x1402F60D0 (MiChargePartitionResidentAvailable.c)
 *     MiChargeCommit @ 0x1402F64A0 (MiChargeCommit.c)
 *     MiChargeResident @ 0x1403185A0 (MiChargeResident.c)
 *     MiReturnCommit @ 0x14036D2B0 (MiReturnCommit.c)
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
