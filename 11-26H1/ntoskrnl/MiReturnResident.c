/*
 * XREFs of MiReturnResident @ 0x140370060
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14020BEAC (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiReleaseNonPagedResources @ 0x14028B5D0 (MiReleaseNonPagedResources.c)
 *     MiDeleteKernelStackPages @ 0x14028DF2C (MiDeleteKernelStackPages.c)
 *     MiDeleteUltraThreadContext @ 0x14028EB40 (MiDeleteUltraThreadContext.c)
 *     MiSwitchToTransition @ 0x1402A1680 (MiSwitchToTransition.c)
 *     MiReleaseWriteInProgressCharges @ 0x1402AE9B4 (MiReleaseWriteInProgressCharges.c)
 *     MmFreeIndependentPages @ 0x1402EADC0 (MmFreeIndependentPages.c)
 *     MiSwitchValidPteToTransition @ 0x1402F0DC0 (MiSwitchValidPteToTransition.c)
 *     MiCreateLargePfnList @ 0x1402F23FC (MiCreateLargePfnList.c)
 *     MiAllocateLargeProcessPagesFromCache @ 0x1402F278C (MiAllocateLargeProcessPagesFromCache.c)
 *     MiLockPageTablePage @ 0x14031C910 (MiLockPageTablePage.c)
 *     MiReturnFaultCharges @ 0x14033AD8C (MiReturnFaultCharges.c)
 *     MiGetCloneCharges @ 0x14036B234 (MiGetCloneCharges.c)
 *     MiReturnCloneCharges @ 0x14036E844 (MiReturnCloneCharges.c)
 *     MiReturnPoolCharges @ 0x14036EFB8 (MiReturnPoolCharges.c)
 *     MiUnmapViewSubsections @ 0x14036F6F0 (MiUnmapViewSubsections.c)
 *     MiResolveMappedFileFault @ 0x140371380 (MiResolveMappedFileFault.c)
 *     MiReleaseUnusedPageFileReadResources @ 0x14037405C (MiReleaseUnusedPageFileReadResources.c)
 *     MmChargeResources @ 0x1403962F0 (MmChargeResources.c)
 *     SmAcquireReleaseCharges @ 0x140396390 (SmAcquireReleaseCharges.c)
 *     MiDeletePartialVad @ 0x1403C6AC4 (MiDeletePartialVad.c)
 *     MiReleaseNonPagedResourcesNotExposed @ 0x1403CCED8 (MiReleaseNonPagedResourcesNotExposed.c)
 *     MiWriteComplete @ 0x140403960 (MiWriteComplete.c)
 *     MmReleaseResourceCharge @ 0x1404541D0 (MmReleaseResourceCharge.c)
 *     MiDeleteUltraMapContext @ 0x14045E5A0 (MiDeleteUltraMapContext.c)
 *     MiDeleteSegmentPages @ 0x1404727CC (MiDeleteSegmentPages.c)
 *     MiReturnSystemCharges @ 0x1404AC8F8 (MiReturnSystemCharges.c)
 *     MiReleaseLockedVaLeafCharges @ 0x1404AD45C (MiReleaseLockedVaLeafCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404CAB70 (MiReturnCrossPartitionSectionCharges.c)
 *     MiEnableNewPfns @ 0x1406ED114 (MiEnableNewPfns.c)
 *     MiMarkBootGuardPage @ 0x140703ED4 (MiMarkBootGuardPage.c)
 *     MiSoftFaultClusterTradePageFinish @ 0x1407173D0 (MiSoftFaultClusterTradePageFinish.c)
 *     MiCreatePagingFileCleanup @ 0x14086EC18 (MiCreatePagingFileCleanup.c)
 *     MiDeletePartitionResources @ 0x14086F208 (MiDeletePartitionResources.c)
 *     MiFreePartitionPhysicalPages @ 0x14086F5B8 (MiFreePartitionPhysicalPages.c)
 *     MiDeleteVadEventAwe @ 0x14087F3B0 (MiDeleteVadEventAwe.c)
 *     MiReturnVadCharges @ 0x140997954 (MiReturnVadCharges.c)
 *     MiCommitVadGetCharges @ 0x140998630 (MiCommitVadGetCharges.c)
 *     MiRemoveVadCharges @ 0x140A02094 (MiRemoveVadCharges.c)
 *     MmCreateProcessAddressSpace @ 0x140ABF9A0 (MmCreateProcessAddressSpace.c)
 *     MiUnloadSystemImage @ 0x140AC92D8 (MiUnloadSystemImage.c)
 *     MiUnmapReturnCharges @ 0x140ACA14C (MiUnmapReturnCharges.c)
 *     MiFreeInitializationCode @ 0x140ACB290 (MiFreeInitializationCode.c)
 *     MmDeleteProcessAddressSpace @ 0x140B41970 (MmDeleteProcessAddressSpace.c)
 *     MmReturnChargesToLockPagedPool @ 0x140B60320 (MmReturnChargesToLockPagedPool.c)
 *     MiInitializeBootShadowStackPage @ 0x140D02594 (MiInitializeBootShadowStackPage.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiReturnResident(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax
  struct _KPRCB *CurrentPrcb; // r10
  signed __int32 CachedResidentAvailable; // r9d
  bool v5; // zf

  result = (unsigned __int64)&MiSystemPartition;
  if ( (ULONG *)a1 == &MiSystemPartition )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
    if ( CachedResidentAvailable != -1 )
    {
      do
      {
        if ( a2 + CachedResidentAvailable > 0x100 || a2 >= 0x80000 )
          break;
        result = (unsigned int)_InterlockedCompareExchange(
                                 (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                 a2 + CachedResidentAvailable,
                                 CachedResidentAvailable);
        v5 = CachedResidentAvailable == (_DWORD)result;
        CachedResidentAvailable = result;
        if ( v5 )
          return result;
      }
      while ( (_DWORD)result != -1 );
      if ( CachedResidentAvailable > 192 )
      {
        result = (unsigned int)_InterlockedCompareExchange(
                                 (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                 192,
                                 CachedResidentAvailable);
        if ( CachedResidentAvailable == (_DWORD)result )
        {
          result = (unsigned int)(CachedResidentAvailable - 192);
          a2 += (int)result;
        }
      }
    }
  }
  if ( a2 )
    _InterlockedAdd64((volatile signed __int64 *)(a1 + 22528), a2);
  return result;
}
