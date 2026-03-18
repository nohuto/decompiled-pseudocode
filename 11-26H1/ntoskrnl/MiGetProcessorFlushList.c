/*
 * XREFs of MiGetProcessorFlushList @ 0x1403229E0
 * Callers:
 *     MiAddVaToProtectFlushList @ 0x14024F3A4 (MiAddVaToProtectFlushList.c)
 *     MiLockCode @ 0x14029602C (MiLockCode.c)
 *     MiAcquirePrcbAgeTrimLists @ 0x14029CE20 (MiAcquirePrcbAgeTrimLists.c)
 *     MiDecommitHandleValidPte @ 0x14029F85C (MiDecommitHandleValidPte.c)
 *     MiCleanupLazyStampedPageTable @ 0x1402A000C (MiCleanupLazyStampedPageTable.c)
 *     MiConsumeSystemCacheTbFlushNeededView @ 0x1402A3488 (MiConsumeSystemCacheTbFlushNeededView.c)
 *     MiWalkVaRange @ 0x1402D3560 (MiWalkVaRange.c)
 *     MiConfirmFaultClusterDescriptor @ 0x1402ECD70 (MiConfirmFaultClusterDescriptor.c)
 *     MiSectionProtectValidPte @ 0x140304460 (MiSectionProtectValidPte.c)
 *     MiSharePageGetFlushList @ 0x140307C58 (MiSharePageGetFlushList.c)
 *     MiDeleteSystemPageTable @ 0x140309A60 (MiDeleteSystemPageTable.c)
 *     MiHandleForkValidPrivatePte @ 0x14030ADC0 (MiHandleForkValidPrivatePte.c)
 *     MiSetPagingOfDriver @ 0x14030F6BC (MiSetPagingOfDriver.c)
 *     MiProtectValidPte @ 0x140311A38 (MiProtectValidPte.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x140312684 (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MiWalkPtesForWriteWatchState @ 0x1403178F8 (MiWalkPtesForWriteWatchState.c)
 *     MiMoveDirtyBitsToPfns @ 0x140319470 (MiMoveDirtyBitsToPfns.c)
 *     MmUnmapViewInSystemCache @ 0x14031E380 (MmUnmapViewInSystemCache.c)
 *     MiFastTrimWorkingSet @ 0x14031F690 (MiFastTrimWorkingSet.c)
 *     MiTrimPte @ 0x140321400 (MiTrimPte.c)
 *     MiDeleteVa @ 0x140322AC0 (MiDeleteVa.c)
 *     MiInitializeSystemPageTable @ 0x14033AB8C (MiInitializeSystemPageTable.c)
 *     MiDecommitHardwareEnclavePages @ 0x140340E34 (MiDecommitHardwareEnclavePages.c)
 *     MiDecommitAddTbFlushEntries @ 0x140342738 (MiDecommitAddTbFlushEntries.c)
 *     MiUnmapContiguousMemory @ 0x140343628 (MiUnmapContiguousMemory.c)
 *     MiFlushValidPteFromTb @ 0x140343898 (MiFlushValidPteFromTb.c)
 *     MiTrimUnlockedVirtualAddreses @ 0x14035CA40 (MiTrimUnlockedVirtualAddreses.c)
 *     MiEmptyPte @ 0x14035D660 (MiEmptyPte.c)
 *     MiFillSystemPtes @ 0x14035F448 (MiFillSystemPtes.c)
 *     MiFlushTbAsNeeded @ 0x14035FD40 (MiFlushTbAsNeeded.c)
 *     MiDecommitPages @ 0x140360150 (MiDecommitPages.c)
 *     MiDeleteNonPagedPoolPte @ 0x140363600 (MiDeleteNonPagedPoolPte.c)
 *     MiSetReadOnlyOnSectionView @ 0x14036BB54 (MiSetReadOnlyOnSectionView.c)
 *     MiSetSystemCodeProtection @ 0x14038B984 (MiSetSystemCodeProtection.c)
 *     MmSetAddressRangeModifiedEx @ 0x14039A698 (MmSetAddressRangeModifiedEx.c)
 *     MiTrimViewGetFlushList @ 0x1403A7AF8 (MiTrimViewGetFlushList.c)
 *     MiRevokeExecutePte @ 0x140433EB0 (MiRevokeExecutePte.c)
 *     MiDeprioritizeVirtualAddresses @ 0x140442198 (MiDeprioritizeVirtualAddresses.c)
 *     MiFlushDirtyBitsToPfn @ 0x14045C544 (MiFlushDirtyBitsToPfn.c)
 *     MiTrimViewLeafPte @ 0x14046C164 (MiTrimViewLeafPte.c)
 *     MiSectionProtectTrimValidPtes @ 0x1404AE9B8 (MiSectionProtectTrimValidPtes.c)
 *     MiConvertAndFlushWsleVas @ 0x1404B2C40 (MiConvertAndFlushWsleVas.c)
 *     MiProtectPagedPool @ 0x1404B84A4 (MiProtectPagedPool.c)
 *     MiAdjustSecureDriverStateForIatCapture @ 0x1404DDD28 (MiAdjustSecureDriverStateForIatCapture.c)
 *     MiClearPteAccessedBitRange @ 0x1404E8234 (MiClearPteAccessedBitRange.c)
 *     MiSetPageProtection @ 0x1404EB458 (MiSetPageProtection.c)
 *     MiUnmapKernelScp @ 0x1404F6C64 (MiUnmapKernelScp.c)
 *     MiClearDriverTablePtes @ 0x140505FE8 (MiClearDriverTablePtes.c)
 *     MiProtectEnclavePages @ 0x140519CE0 (MiProtectEnclavePages.c)
 *     MiUnmapMdlCommon @ 0x14051D098 (MiUnmapMdlCommon.c)
 *     MiPageBootRegistry @ 0x1406E3A98 (MiPageBootRegistry.c)
 *     MiDiscardPte @ 0x1406EEED0 (MiDiscardPte.c)
 *     MiClearSystemAccessBits @ 0x1406F2490 (MiClearSystemAccessBits.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1406F259C (MiDemoteValidLargePageOneLevel.c)
 *     MiTrimPoisonedPage @ 0x1406FFBBC (MiTrimPoisonedPage.c)
 *     MiFlushEnclaveTb @ 0x1406FFFB4 (MiFlushEnclaveTb.c)
 *     MiBuildPhysicalPageFreeChain @ 0x140700C48 (MiBuildPhysicalPageFreeChain.c)
 *     MiGetAweFlushList @ 0x140701B08 (MiGetAweFlushList.c)
 *     MiProtectAweValidPte @ 0x140702298 (MiProtectAweValidPte.c)
 *     MiShareValidPage @ 0x140704A2C (MiShareValidPage.c)
 *     MiScrubLargeMappedPage @ 0x14070C03C (MiScrubLargeMappedPage.c)
 *     MiProtectLargeKernelHalRange @ 0x1408644C0 (MiProtectLargeKernelHalRange.c)
 *     MiMarkBootKernelStack @ 0x140CFC7FC (MiMarkBootKernelStack.c)
 *     MiFreeBootDriverPages @ 0x140D0AE50 (MiFreeBootDriverPages.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
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
    dword_141031C94 = 512;
    MmInternal = MxTempPrcb;
    dword_14102EE18 = 1;
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
