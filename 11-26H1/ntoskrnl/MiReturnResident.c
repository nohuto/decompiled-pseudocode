/*
 * XREFs of MiReturnResident @ 0x14036E2C0
 * Callers:
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x14020BDCC (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiReleaseNonPagedResources @ 0x14028C070 (MiReleaseNonPagedResources.c)
 *     MiDeleteKernelStackPages @ 0x14028E9CC (MiDeleteKernelStackPages.c)
 *     MiDeleteUltraThreadContext @ 0x14028F5E0 (MiDeleteUltraThreadContext.c)
 *     MiSwitchToTransition @ 0x1402A2130 (MiSwitchToTransition.c)
 *     MiReleaseWriteInProgressCharges @ 0x1402CCBF4 (MiReleaseWriteInProgressCharges.c)
 *     MmFreeIndependentPages @ 0x140308D40 (MmFreeIndependentPages.c)
 *     MiSwitchValidPteToTransition @ 0x14030ED40 (MiSwitchValidPteToTransition.c)
 *     MiCreateLargePfnList @ 0x14031037C (MiCreateLargePfnList.c)
 *     MiAllocateLargeProcessPagesFromCache @ 0x14031070C (MiAllocateLargeProcessPagesFromCache.c)
 *     MiLockPageTablePage @ 0x14031A8E0 (MiLockPageTablePage.c)
 *     MiReturnFaultCharges @ 0x140338D0C (MiReturnFaultCharges.c)
 *     MiGetCloneCharges @ 0x140369494 (MiGetCloneCharges.c)
 *     MiReturnCloneCharges @ 0x14036CAA4 (MiReturnCloneCharges.c)
 *     MiReturnPoolCharges @ 0x14036D218 (MiReturnPoolCharges.c)
 *     MiUnmapViewSubsections @ 0x14036D950 (MiUnmapViewSubsections.c)
 *     MiResolveMappedFileFault @ 0x14036F5D0 (MiResolveMappedFileFault.c)
 *     MiReleaseUnusedPageFileReadResources @ 0x1403722AC (MiReleaseUnusedPageFileReadResources.c)
 *     MmChargeResources @ 0x140394570 (MmChargeResources.c)
 *     SmAcquireReleaseCharges @ 0x140394610 (SmAcquireReleaseCharges.c)
 *     MiDeletePartialVad @ 0x1403BCC54 (MiDeletePartialVad.c)
 *     MiReleaseNonPagedResourcesNotExposed @ 0x1403C2FD8 (MiReleaseNonPagedResourcesNotExposed.c)
 *     MiWriteComplete @ 0x14040A870 (MiWriteComplete.c)
 *     MmReleaseResourceCharge @ 0x14045A9A0 (MmReleaseResourceCharge.c)
 *     MiDeleteUltraMapContext @ 0x1404655E0 (MiDeleteUltraMapContext.c)
 *     MiDeleteSegmentPages @ 0x140478E6C (MiDeleteSegmentPages.c)
 *     MiReturnSystemCharges @ 0x1404B3278 (MiReturnSystemCharges.c)
 *     MiReleaseLockedVaLeafCharges @ 0x1404B3E8C (MiReleaseLockedVaLeafCharges.c)
 *     MiReturnCrossPartitionSectionCharges @ 0x1404D1140 (MiReturnCrossPartitionSectionCharges.c)
 *     MiEnableNewPfns @ 0x1406E8478 (MiEnableNewPfns.c)
 *     MiMarkBootGuardPage @ 0x1406FF204 (MiMarkBootGuardPage.c)
 *     MiSoftFaultClusterTradePageFinish @ 0x1407126D8 (MiSoftFaultClusterTradePageFinish.c)
 *     MiCreatePagingFileCleanup @ 0x140868838 (MiCreatePagingFileCleanup.c)
 *     MiDeletePartitionResources @ 0x140868E28 (MiDeletePartitionResources.c)
 *     MiFreePartitionPhysicalPages @ 0x1408691D8 (MiFreePartitionPhysicalPages.c)
 *     MiDeleteVadEventAwe @ 0x140878FD0 (MiDeleteVadEventAwe.c)
 *     MiRemoveVadCharges @ 0x14095C7D4 (MiRemoveVadCharges.c)
 *     MiReturnVadCharges @ 0x1409C6974 (MiReturnVadCharges.c)
 *     MiCommitVadGetCharges @ 0x1409C7650 (MiCommitVadGetCharges.c)
 *     MmCreateProcessAddressSpace @ 0x140ABD3B0 (MmCreateProcessAddressSpace.c)
 *     MiUnloadSystemImage @ 0x140AC76E8 (MiUnloadSystemImage.c)
 *     MiUnmapReturnCharges @ 0x140AC855C (MiUnmapReturnCharges.c)
 *     MiFreeInitializationCode @ 0x140AC9178 (MiFreeInitializationCode.c)
 *     MmDeleteProcessAddressSpace @ 0x140B3F940 (MmDeleteProcessAddressSpace.c)
 *     MmReturnChargesToLockPagedPool @ 0x140B5D1A0 (MmReturnChargesToLockPagedPool.c)
 *     MiInitializeBootShadowStackPage @ 0x140CFC214 (MiInitializeBootShadowStackPage.c)
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
