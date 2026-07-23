/*
 * XREFs of MiInitializeTbFlushList @ 0x1403626C0
 * Callers:
 *     MiAddVaToProtectFlushList @ 0x140250D04 (MiAddVaToProtectFlushList.c)
 *     MiLockCode @ 0x14029558C (MiLockCode.c)
 *     MiDecommitHandleValidPte @ 0x14029EDAC (MiDecommitHandleValidPte.c)
 *     MiSwitchToTransition @ 0x1402A1680 (MiSwitchToTransition.c)
 *     MiReleaseLargePdeMappings @ 0x1402A22D4 (MiReleaseLargePdeMappings.c)
 *     MiConsumeSystemCacheTbFlushNeededView @ 0x1402A29D8 (MiConsumeSystemCacheTbFlushNeededView.c)
 *     MiReleasePteMappings @ 0x1402A3050 (MiReleasePteMappings.c)
 *     MiConfirmFaultClusterDescriptor @ 0x1402CEDB0 (MiConfirmFaultClusterDescriptor.c)
 *     MiSharePageGetFlushList @ 0x1402E9CD8 (MiSharePageGetFlushList.c)
 *     MiDeleteSystemPageTable @ 0x1402EBAE0 (MiDeleteSystemPageTable.c)
 *     MiHandleForkValidPrivatePte @ 0x1402ECE40 (MiHandleForkValidPrivatePte.c)
 *     MiSetPagingOfDriver @ 0x1402F173C (MiSetPagingOfDriver.c)
 *     MmProtectMdlSystemAddress @ 0x1402F1A90 (MmProtectMdlSystemAddress.c)
 *     MiMakeVaRangeNoAccess @ 0x140312D14 (MiMakeVaRangeNoAccess.c)
 *     MiProtectValidPte @ 0x140313A6C (MiProtectValidPte.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x1403146B4 (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MiUnlockOpportunisticPagesInPageTable @ 0x14031594C (MiUnlockOpportunisticPagesInPageTable.c)
 *     MiWalkPtesForWriteWatchState @ 0x140319928 (MiWalkPtesForWriteWatchState.c)
 *     MiDeleteVa @ 0x140324AF0 (MiDeleteVa.c)
 *     MiInitializeSystemPageTable @ 0x14033CC0C (MiInitializeSystemPageTable.c)
 *     MiDecommitHardwareEnclavePages @ 0x140342EB4 (MiDecommitHardwareEnclavePages.c)
 *     MiDecommitAddTbFlushEntries @ 0x1403447B8 (MiDecommitAddTbFlushEntries.c)
 *     MiUnmapContiguousMemory @ 0x1403456A8 (MiUnmapContiguousMemory.c)
 *     MiFlushValidPteFromTb @ 0x140345918 (MiFlushValidPteFromTb.c)
 *     MiFillSystemPtes @ 0x1403611E8 (MiFillSystemPtes.c)
 *     MiDecommitPages @ 0x140361EF0 (MiDecommitPages.c)
 *     MiDeleteNonPagedPoolPte @ 0x1403653A0 (MiDeleteNonPagedPoolPte.c)
 *     MiSetSystemCodeProtection @ 0x14038D734 (MiSetSystemCodeProtection.c)
 *     MiLargePageFault @ 0x1403A95C0 (MiLargePageFault.c)
 *     MiTrimViewGetFlushList @ 0x1403A9858 (MiTrimViewGetFlushList.c)
 *     MiRevokeExecutePte @ 0x140428F80 (MiRevokeExecutePte.c)
 *     MiDeprioritizeVirtualAddresses @ 0x14043ACA8 (MiDeprioritizeVirtualAddresses.c)
 *     MiFlushDirtyBitsToPfn @ 0x1404560EC (MiFlushDirtyBitsToPfn.c)
 *     MiTrimViewLeafPte @ 0x1404658E4 (MiTrimViewLeafPte.c)
 *     MiSectionProtectTrimValidPtes @ 0x1404A8048 (MiSectionProtectTrimValidPtes.c)
 *     MiConvertAndFlushWsleVas @ 0x1404AC2BC (MiConvertAndFlushWsleVas.c)
 *     MiProtectPagedPool @ 0x1404B1CD4 (MiProtectPagedPool.c)
 *     MiMapMemoryDumpMdl @ 0x1404BCF5C (MiMapMemoryDumpMdl.c)
 *     MiAdjustSecureDriverStateForIatCapture @ 0x1404D7408 (MiAdjustSecureDriverStateForIatCapture.c)
 *     MiClearPteAccessedBitRange @ 0x1404E15F4 (MiClearPteAccessedBitRange.c)
 *     MiSetPageProtection @ 0x1404E4A38 (MiSetPageProtection.c)
 *     MiUnmapKernelScp @ 0x1404F0274 (MiUnmapKernelScp.c)
 *     MiMapMdlWithLargePages @ 0x1404FC1D0 (MiMapMdlWithLargePages.c)
 *     MiClearDriverTablePtes @ 0x1404FF898 (MiClearDriverTablePtes.c)
 *     MiFlushCacheMdl @ 0x1405101E0 (MiFlushCacheMdl.c)
 *     MiProtectEnclavePages @ 0x140513750 (MiProtectEnclavePages.c)
 *     MiUnmapMdlCommon @ 0x14051F5C4 (MiUnmapMdlCommon.c)
 *     MiReadyReservedView @ 0x140525FF8 (MiReadyReservedView.c)
 *     MiPageBootRegistry @ 0x1406E8744 (MiPageBootRegistry.c)
 *     MiDiscardPte @ 0x1406F3B70 (MiDiscardPte.c)
 *     MiClearSystemAccessBits @ 0x1406F7100 (MiClearSystemAccessBits.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1406F720C (MiDemoteValidLargePageOneLevel.c)
 *     MiWritePteHighLevel @ 0x1406F7808 (MiWritePteHighLevel.c)
 *     MiTrimPoisonedPage @ 0x14070488C (MiTrimPoisonedPage.c)
 *     MiFlushEnclaveTb @ 0x140704C84 (MiFlushEnclaveTb.c)
 *     MiBuildPhysicalPageFreeChain @ 0x140705918 (MiBuildPhysicalPageFreeChain.c)
 *     MiGetAweFlushList @ 0x1407067D8 (MiGetAweFlushList.c)
 *     MiProtectAweValidPte @ 0x140706F68 (MiProtectAweValidPte.c)
 *     MiShareValidPage @ 0x1407096FC (MiShareValidPage.c)
 *     MiScrubLargeMappedPage @ 0x140710CEC (MiScrubLargeMappedPage.c)
 *     MiCalibrateTbFlush @ 0x140712BB4 (MiCalibrateTbFlush.c)
 *     MiProtectLargeKernelHalRange @ 0x14086A8A0 (MiProtectLargeKernelHalRange.c)
 *     MmDeleteShadowMapping @ 0x14087BFD8 (MmDeleteShadowMapping.c)
 *     MiEliminateZeroPages @ 0x14099AF5C (MiEliminateZeroPages.c)
 *     MmUnmapProtectedKernelPageRange @ 0x140B3A4F8 (MmUnmapProtectedKernelPageRange.c)
 *     MiMarkBootKernelStack @ 0x140D02B7C (MiMarkBootKernelStack.c)
 *     MiFreeBootDriverPages @ 0x140D11120 (MiFreeBootDriverPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitializeTbFlushList(__int64 a1, __int64 a2, int a3, int a4, int a5)
{
  BOOL v5; // r8d
  __int64 result; // rax

  *(_DWORD *)(a1 + 20) = a5;
  *(_DWORD *)(a1 + 12) = a3;
  *(_DWORD *)(a1 + 16) = a4;
  *(_QWORD *)a1 = a2;
  *(_BYTE *)(a1 + 24) = (*(_DWORD *)(a2 + 184) & 0x40) != 0;
  if ( (*(_DWORD *)(a2 + 184) & 0xF) != 0
    || (struct _LIST_ENTRY **)a2 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
  {
    v5 = (*(_DWORD *)(a2 + 184) & 0xF) == 0;
  }
  else
  {
    *(_DWORD *)(a1 + 16) |= 9u;
    v5 = 0;
  }
  result = *(_DWORD *)(a1 + 16) & 0xFFFFFFDB;
  *(_DWORD *)(a1 + 8) = v5;
  *(_WORD *)(a1 + 25) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)(a1 + 16) = result;
  if ( (a4 & 4) != 0 )
  {
    result = (unsigned int)result | 4;
    *(_DWORD *)(a1 + 16) = result;
  }
  *(_QWORD *)(a1 + 40) = 0LL;
  return result;
}
