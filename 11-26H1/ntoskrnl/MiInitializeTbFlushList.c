/*
 * XREFs of MiInitializeTbFlushList @ 0x140360920
 * Callers:
 *     MiAddVaToProtectFlushList @ 0x14024F3A4 (MiAddVaToProtectFlushList.c)
 *     MiLockCode @ 0x14029602C (MiLockCode.c)
 *     MiDecommitHandleValidPte @ 0x14029F85C (MiDecommitHandleValidPte.c)
 *     MiSwitchToTransition @ 0x1402A2130 (MiSwitchToTransition.c)
 *     MiReleaseLargePdeMappings @ 0x1402A2D84 (MiReleaseLargePdeMappings.c)
 *     MiConsumeSystemCacheTbFlushNeededView @ 0x1402A3488 (MiConsumeSystemCacheTbFlushNeededView.c)
 *     MiReleasePteMappings @ 0x1402A3B00 (MiReleasePteMappings.c)
 *     MiConfirmFaultClusterDescriptor @ 0x1402ECD70 (MiConfirmFaultClusterDescriptor.c)
 *     MiSharePageGetFlushList @ 0x140307C58 (MiSharePageGetFlushList.c)
 *     MiDeleteSystemPageTable @ 0x140309A60 (MiDeleteSystemPageTable.c)
 *     MiHandleForkValidPrivatePte @ 0x14030ADC0 (MiHandleForkValidPrivatePte.c)
 *     MiSetPagingOfDriver @ 0x14030F6BC (MiSetPagingOfDriver.c)
 *     MmProtectMdlSystemAddress @ 0x14030FA10 (MmProtectMdlSystemAddress.c)
 *     MiMakeVaRangeNoAccess @ 0x140310CE0 (MiMakeVaRangeNoAccess.c)
 *     MiProtectValidPte @ 0x140311A38 (MiProtectValidPte.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x140312684 (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MiUnlockOpportunisticPagesInPageTable @ 0x14031391C (MiUnlockOpportunisticPagesInPageTable.c)
 *     MiWalkPtesForWriteWatchState @ 0x1403178F8 (MiWalkPtesForWriteWatchState.c)
 *     MiDeleteVa @ 0x140322AC0 (MiDeleteVa.c)
 *     MiInitializeSystemPageTable @ 0x14033AB8C (MiInitializeSystemPageTable.c)
 *     MiDecommitHardwareEnclavePages @ 0x140340E34 (MiDecommitHardwareEnclavePages.c)
 *     MiDecommitAddTbFlushEntries @ 0x140342738 (MiDecommitAddTbFlushEntries.c)
 *     MiUnmapContiguousMemory @ 0x140343628 (MiUnmapContiguousMemory.c)
 *     MiFlushValidPteFromTb @ 0x140343898 (MiFlushValidPteFromTb.c)
 *     MiFillSystemPtes @ 0x14035F448 (MiFillSystemPtes.c)
 *     MiDecommitPages @ 0x140360150 (MiDecommitPages.c)
 *     MiDeleteNonPagedPoolPte @ 0x140363600 (MiDeleteNonPagedPoolPte.c)
 *     MiSetSystemCodeProtection @ 0x14038B984 (MiSetSystemCodeProtection.c)
 *     MiLargePageFault @ 0x1403A7860 (MiLargePageFault.c)
 *     MiTrimViewGetFlushList @ 0x1403A7AF8 (MiTrimViewGetFlushList.c)
 *     MiRevokeExecutePte @ 0x140433EB0 (MiRevokeExecutePte.c)
 *     MiDeprioritizeVirtualAddresses @ 0x140442198 (MiDeprioritizeVirtualAddresses.c)
 *     MiFlushDirtyBitsToPfn @ 0x14045C544 (MiFlushDirtyBitsToPfn.c)
 *     MiTrimViewLeafPte @ 0x14046C164 (MiTrimViewLeafPte.c)
 *     MiSectionProtectTrimValidPtes @ 0x1404AE9B8 (MiSectionProtectTrimValidPtes.c)
 *     MiConvertAndFlushWsleVas @ 0x1404B2C40 (MiConvertAndFlushWsleVas.c)
 *     MiProtectPagedPool @ 0x1404B84A4 (MiProtectPagedPool.c)
 *     MiMapMemoryDumpMdl @ 0x1404C370C (MiMapMemoryDumpMdl.c)
 *     MiAdjustSecureDriverStateForIatCapture @ 0x1404DDD28 (MiAdjustSecureDriverStateForIatCapture.c)
 *     MiClearPteAccessedBitRange @ 0x1404E8234 (MiClearPteAccessedBitRange.c)
 *     MiSetPageProtection @ 0x1404EB458 (MiSetPageProtection.c)
 *     MiUnmapKernelScp @ 0x1404F6C64 (MiUnmapKernelScp.c)
 *     MiMapMdlWithLargePages @ 0x140502900 (MiMapMdlWithLargePages.c)
 *     MiClearDriverTablePtes @ 0x140505FE8 (MiClearDriverTablePtes.c)
 *     MiFlushCacheMdl @ 0x140516770 (MiFlushCacheMdl.c)
 *     MiProtectEnclavePages @ 0x140519CE0 (MiProtectEnclavePages.c)
 *     MiUnmapMdlCommon @ 0x14051D098 (MiUnmapMdlCommon.c)
 *     MiReadyReservedView @ 0x140523988 (MiReadyReservedView.c)
 *     MiPageBootRegistry @ 0x1406E3A98 (MiPageBootRegistry.c)
 *     MiDiscardPte @ 0x1406EEED0 (MiDiscardPte.c)
 *     MiClearSystemAccessBits @ 0x1406F2490 (MiClearSystemAccessBits.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1406F259C (MiDemoteValidLargePageOneLevel.c)
 *     MiWritePteHighLevel @ 0x1406F2B98 (MiWritePteHighLevel.c)
 *     MiTrimPoisonedPage @ 0x1406FFBBC (MiTrimPoisonedPage.c)
 *     MiFlushEnclaveTb @ 0x1406FFFB4 (MiFlushEnclaveTb.c)
 *     MiBuildPhysicalPageFreeChain @ 0x140700C48 (MiBuildPhysicalPageFreeChain.c)
 *     MiGetAweFlushList @ 0x140701B08 (MiGetAweFlushList.c)
 *     MiProtectAweValidPte @ 0x140702298 (MiProtectAweValidPte.c)
 *     MiShareValidPage @ 0x140704A2C (MiShareValidPage.c)
 *     MiScrubLargeMappedPage @ 0x14070C03C (MiScrubLargeMappedPage.c)
 *     MiCalibrateTbFlush @ 0x14070DF04 (MiCalibrateTbFlush.c)
 *     MiProtectLargeKernelHalRange @ 0x1408644C0 (MiProtectLargeKernelHalRange.c)
 *     MmDeleteShadowMapping @ 0x140875BF4 (MmDeleteShadowMapping.c)
 *     MiEliminateZeroPages @ 0x1409C9F7C (MiEliminateZeroPages.c)
 *     MmUnmapProtectedKernelPageRange @ 0x140B382E8 (MmUnmapProtectedKernelPageRange.c)
 *     MiMarkBootKernelStack @ 0x140CFC7FC (MiMarkBootKernelStack.c)
 *     MiFreeBootDriverPages @ 0x140D0AE50 (MiFreeBootDriverPages.c)
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
