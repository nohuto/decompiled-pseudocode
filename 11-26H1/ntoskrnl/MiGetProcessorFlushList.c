/*
 * XREFs of MiGetProcessorFlushList @ 0x140324A10
 * Callers:
 *     MiAddVaToProtectFlushList @ 0x140250D04 (MiAddVaToProtectFlushList.c)
 *     MiLockCode @ 0x14029558C (MiLockCode.c)
 *     MiAcquirePrcbAgeTrimLists @ 0x14029C380 (MiAcquirePrcbAgeTrimLists.c)
 *     MiDecommitHandleValidPte @ 0x14029EDAC (MiDecommitHandleValidPte.c)
 *     MiCleanupLazyStampedPageTable @ 0x14029F55C (MiCleanupLazyStampedPageTable.c)
 *     MiConsumeSystemCacheTbFlushNeededView @ 0x1402A29D8 (MiConsumeSystemCacheTbFlushNeededView.c)
 *     MiWalkVaRange @ 0x1402B5320 (MiWalkVaRange.c)
 *     MiConfirmFaultClusterDescriptor @ 0x1402CEDB0 (MiConfirmFaultClusterDescriptor.c)
 *     MiSectionProtectValidPte @ 0x1402E64E0 (MiSectionProtectValidPte.c)
 *     MiSharePageGetFlushList @ 0x1402E9CD8 (MiSharePageGetFlushList.c)
 *     MiDeleteSystemPageTable @ 0x1402EBAE0 (MiDeleteSystemPageTable.c)
 *     MiHandleForkValidPrivatePte @ 0x1402ECE40 (MiHandleForkValidPrivatePte.c)
 *     MiSetPagingOfDriver @ 0x1402F173C (MiSetPagingOfDriver.c)
 *     MiProtectValidPte @ 0x140313A6C (MiProtectValidPte.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x1403146B4 (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MiWalkPtesForWriteWatchState @ 0x140319928 (MiWalkPtesForWriteWatchState.c)
 *     MiMoveDirtyBitsToPfns @ 0x14031B4A0 (MiMoveDirtyBitsToPfns.c)
 *     MmUnmapViewInSystemCache @ 0x1403203B0 (MmUnmapViewInSystemCache.c)
 *     MiFastTrimWorkingSet @ 0x1403216C0 (MiFastTrimWorkingSet.c)
 *     MiTrimPte @ 0x140323430 (MiTrimPte.c)
 *     MiDeleteVa @ 0x140324AF0 (MiDeleteVa.c)
 *     MiInitializeSystemPageTable @ 0x14033CC0C (MiInitializeSystemPageTable.c)
 *     MiDecommitHardwareEnclavePages @ 0x140342EB4 (MiDecommitHardwareEnclavePages.c)
 *     MiDecommitAddTbFlushEntries @ 0x1403447B8 (MiDecommitAddTbFlushEntries.c)
 *     MiUnmapContiguousMemory @ 0x1403456A8 (MiUnmapContiguousMemory.c)
 *     MiFlushValidPteFromTb @ 0x140345918 (MiFlushValidPteFromTb.c)
 *     MiTrimUnlockedVirtualAddreses @ 0x14035E7E0 (MiTrimUnlockedVirtualAddreses.c)
 *     MiEmptyPte @ 0x14035F400 (MiEmptyPte.c)
 *     MiFillSystemPtes @ 0x1403611E8 (MiFillSystemPtes.c)
 *     MiFlushTbAsNeeded @ 0x140361AE0 (MiFlushTbAsNeeded.c)
 *     MiDecommitPages @ 0x140361EF0 (MiDecommitPages.c)
 *     MiDeleteNonPagedPoolPte @ 0x1403653A0 (MiDeleteNonPagedPoolPte.c)
 *     MiSetReadOnlyOnSectionView @ 0x14036D8F4 (MiSetReadOnlyOnSectionView.c)
 *     MiSetSystemCodeProtection @ 0x14038D734 (MiSetSystemCodeProtection.c)
 *     MmSetAddressRangeModifiedEx @ 0x14039C3F8 (MmSetAddressRangeModifiedEx.c)
 *     MiTrimViewGetFlushList @ 0x1403A9858 (MiTrimViewGetFlushList.c)
 *     MiRevokeExecutePte @ 0x140428F80 (MiRevokeExecutePte.c)
 *     MiDeprioritizeVirtualAddresses @ 0x14043ACA8 (MiDeprioritizeVirtualAddresses.c)
 *     MiFlushDirtyBitsToPfn @ 0x1404560EC (MiFlushDirtyBitsToPfn.c)
 *     MiTrimViewLeafPte @ 0x1404658E4 (MiTrimViewLeafPte.c)
 *     MiSectionProtectTrimValidPtes @ 0x1404A8048 (MiSectionProtectTrimValidPtes.c)
 *     MiConvertAndFlushWsleVas @ 0x1404AC2BC (MiConvertAndFlushWsleVas.c)
 *     MiProtectPagedPool @ 0x1404B1CD4 (MiProtectPagedPool.c)
 *     MiAdjustSecureDriverStateForIatCapture @ 0x1404D7408 (MiAdjustSecureDriverStateForIatCapture.c)
 *     MiClearPteAccessedBitRange @ 0x1404E15F4 (MiClearPteAccessedBitRange.c)
 *     MiSetPageProtection @ 0x1404E4A38 (MiSetPageProtection.c)
 *     MiUnmapKernelScp @ 0x1404F0274 (MiUnmapKernelScp.c)
 *     MiClearDriverTablePtes @ 0x1404FF898 (MiClearDriverTablePtes.c)
 *     MiProtectEnclavePages @ 0x140513750 (MiProtectEnclavePages.c)
 *     MiUnmapMdlCommon @ 0x14051F5C4 (MiUnmapMdlCommon.c)
 *     MiPageBootRegistry @ 0x1406E8744 (MiPageBootRegistry.c)
 *     MiDiscardPte @ 0x1406F3B70 (MiDiscardPte.c)
 *     MiClearSystemAccessBits @ 0x1406F7100 (MiClearSystemAccessBits.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1406F720C (MiDemoteValidLargePageOneLevel.c)
 *     MiTrimPoisonedPage @ 0x14070488C (MiTrimPoisonedPage.c)
 *     MiFlushEnclaveTb @ 0x140704C84 (MiFlushEnclaveTb.c)
 *     MiBuildPhysicalPageFreeChain @ 0x140705918 (MiBuildPhysicalPageFreeChain.c)
 *     MiGetAweFlushList @ 0x1407067D8 (MiGetAweFlushList.c)
 *     MiProtectAweValidPte @ 0x140706F68 (MiProtectAweValidPte.c)
 *     MiShareValidPage @ 0x1407096FC (MiShareValidPage.c)
 *     MiScrubLargeMappedPage @ 0x140710CEC (MiScrubLargeMappedPage.c)
 *     MiProtectLargeKernelHalRange @ 0x14086A8A0 (MiProtectLargeKernelHalRange.c)
 *     MiMarkBootKernelStack @ 0x140D02B7C (MiMarkBootKernelStack.c)
 *     MiFreeBootDriverPages @ 0x140D11120 (MiFreeBootDriverPages.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 *MiGetProcessorFlushList()
{
  struct _KPRCB *CurrentPrcb; // r8
  __int64 *MmInternal; // rax
  __int64 v2; // rcx
  __int64 *v3; // r8
  __int64 *result; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  MmInternal = (__int64 *)CurrentPrcb->MmInternal;
  if ( !MmInternal )
  {
    dword_141032C94 = 512;
    MmInternal = MxTempPrcb;
    dword_14102FE18 = 1;
  }
  v2 = *((unsigned int *)MmInternal + 85);
  if ( (_DWORD)v2 == *((_DWORD *)MmInternal + 86) )
    KeBugCheckEx(0x1Au, 0x440uLL, (ULONG_PTR)CurrentPrcb, (unsigned int)v2, 0LL);
  v3 = &MmInternal[2575 * v2 + 496];
  v3[2574] = (__int64)KeGetCurrentThread();
  ++*((_DWORD *)MmInternal + 85);
  *(_OWORD *)v3 = 0LL;
  *((_OWORD *)v3 + 1) = 0LL;
  v3[4] = 0LL;
  *((_DWORD *)v3 + 3) = 512;
  *(_OWORD *)(v3 + 517) = 0LL;
  *(_OWORD *)(v3 + 519) = 0LL;
  v3[521] = 0LL;
  result = v3;
  *((_DWORD *)v3 + 1037) = 512;
  return result;
}
