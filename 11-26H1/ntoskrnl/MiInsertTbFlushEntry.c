/*
 * XREFs of MiInsertTbFlushEntry @ 0x14035E7E0
 * Callers:
 *     MiAddVaToProtectFlushList @ 0x14024F3A4 (MiAddVaToProtectFlushList.c)
 *     MiReleasePtes @ 0x140281CE0 (MiReleasePtes.c)
 *     MiLockCode @ 0x14029602C (MiLockCode.c)
 *     MiEmptyWorkingSetHelper @ 0x14029C1E8 (MiEmptyWorkingSetHelper.c)
 *     MiZeroPageWorkMapping @ 0x14029FD70 (MiZeroPageWorkMapping.c)
 *     MiCleanupLazyStampedPageTable @ 0x1402A000C (MiCleanupLazyStampedPageTable.c)
 *     MiSwitchToTransition @ 0x1402A2130 (MiSwitchToTransition.c)
 *     MiConsumeSystemCacheTbFlushNeededView @ 0x1402A3488 (MiConsumeSystemCacheTbFlushNeededView.c)
 *     MiReleasePteMappings @ 0x1402A3B00 (MiReleasePteMappings.c)
 *     MiWalkVaRange @ 0x1402D3560 (MiWalkVaRange.c)
 *     MiConfirmFaultClusterDescriptor @ 0x1402ECD70 (MiConfirmFaultClusterDescriptor.c)
 *     MiAgePteWorker @ 0x1402FF060 (MiAgePteWorker.c)
 *     MiRevertValidPte @ 0x140304974 (MiRevertValidPte.c)
 *     MiCombineWithExisting @ 0x140308244 (MiCombineWithExisting.c)
 *     MiDeleteSystemPageTable @ 0x140309A60 (MiDeleteSystemPageTable.c)
 *     MiCombineInitialFinish @ 0x14030A2B4 (MiCombineInitialFinish.c)
 *     MiHandleForkValidPrivatePte @ 0x14030ADC0 (MiHandleForkValidPrivatePte.c)
 *     MiSetPagingOfDriver @ 0x14030F6BC (MiSetPagingOfDriver.c)
 *     MmProtectMdlSystemAddress @ 0x14030FA10 (MmProtectMdlSystemAddress.c)
 *     MiMakeVaRangeNoAccess @ 0x140310CE0 (MiMakeVaRangeNoAccess.c)
 *     MiDeleteRotateVa @ 0x140312450 (MiDeleteRotateVa.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x140312684 (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MiUnlockOpportunisticPagesInPageTable @ 0x14031391C (MiUnlockOpportunisticPagesInPageTable.c)
 *     MiDecommitHardwareEnclavePages @ 0x140340E34 (MiDecommitHardwareEnclavePages.c)
 *     MiDecommitAddTbFlushEntries @ 0x140342738 (MiDecommitAddTbFlushEntries.c)
 *     MiUnmapContiguousMemory @ 0x140343628 (MiUnmapContiguousMemory.c)
 *     MiInsertLargeTbFlushEntry @ 0x140343930 (MiInsertLargeTbFlushEntry.c)
 *     MiEmptyPte @ 0x14035D660 (MiEmptyPte.c)
 *     MiReservePtes @ 0x14035DE50 (MiReservePtes.c)
 *     MiFillSystemPtes @ 0x14035F448 (MiFillSystemPtes.c)
 *     MiFlushTbAsNeeded @ 0x14035FD40 (MiFlushTbAsNeeded.c)
 *     MiDeleteNonPagedPoolPte @ 0x140363600 (MiDeleteNonPagedPoolPte.c)
 *     MiInsertRecursiveTbFlushEntries @ 0x140363B4C (MiInsertRecursiveTbFlushEntries.c)
 *     MiOutPageSingleKernelStack @ 0x140368960 (MiOutPageSingleKernelStack.c)
 *     MiSetSystemCodeProtection @ 0x14038B984 (MiSetSystemCodeProtection.c)
 *     MmSetAddressRangeModifiedEx @ 0x14039A698 (MmSetAddressRangeModifiedEx.c)
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
 *     MiInsertAweFlushList @ 0x140533384 (MiInsertAweFlushList.c)
 *     MiPageBootRegistry @ 0x1406E3A98 (MiPageBootRegistry.c)
 *     MiDiscardPte @ 0x1406EEED0 (MiDiscardPte.c)
 *     MiClearSystemAccessBits @ 0x1406F2490 (MiClearSystemAccessBits.c)
 *     MiTrimPoisonedPage @ 0x1406FFBBC (MiTrimPoisonedPage.c)
 *     MiFlushEnclaveTb @ 0x1406FFFB4 (MiFlushEnclaveTb.c)
 *     MiProtectAweValidPte @ 0x140702298 (MiProtectAweValidPte.c)
 *     MiUnmapLegacyAwePage @ 0x140702C2C (MiUnmapLegacyAwePage.c)
 *     MiShareValidPage @ 0x140704A2C (MiShareValidPage.c)
 *     MiScrubLargeMappedPage @ 0x14070C03C (MiScrubLargeMappedPage.c)
 *     MiCalibrateTbFlush @ 0x14070DF04 (MiCalibrateTbFlush.c)
 *     MmDeleteShadowMapping @ 0x140875BF4 (MmDeleteShadowMapping.c)
 *     MiEliminateZeroPages @ 0x1409C9F7C (MiEliminateZeroPages.c)
 *     MmUnmapProtectedKernelPageRange @ 0x140B382E8 (MmUnmapProtectedKernelPageRange.c)
 *     MiMarkBootKernelStack @ 0x140CFC7FC (MiMarkBootKernelStack.c)
 * Callees:
 *     MiCompressTbFlushList @ 0x1404DAB9C (MiCompressTbFlushList.c)
 *     qsort @ 0x140536F00 (qsort.c)
 */

void __fastcall MiInsertTbFlushEntry(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v5; // rsi
  unsigned __int64 v7; // r15
  __int64 v8; // rdi
  int i; // r11d
  int v10; // r9d
  __int64 v11; // r10
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // rdx
  int v17; // r8d
  int v18; // eax
  unsigned __int64 v19; // rax
  __int64 v20; // r8
  __int64 v21; // rax

  v5 = a4;
  v7 = a2;
  v8 = 4096LL << (9 * (unsigned __int8)a4);
  if ( *(_DWORD *)(a1 + 8) != 1 )
  {
    v18 = *(_DWORD *)(a1 + 16);
    if ( (v18 & 4) == 0 && a2 >= 0xFFFFF68000000000uLL && a2 <= 0xFFFFF6FFFFFFFFFFuLL )
      *(_DWORD *)(a1 + 16) = v18 | 4;
  }
LABEL_2:
  for ( i = 0; ; i = 1 )
  {
    v10 = *(_DWORD *)(a1 + 28);
    if ( v10 && (*(_DWORD *)(a1 + 16) & 2) == 0 )
    {
      v11 = a1 + 8LL * (unsigned int)(v10 - 1);
      v12 = *(_QWORD *)(v11 + 40);
      if ( ((v12 >> 10) & 3) == v5
        && (v13 = *(_QWORD *)(v11 + 40) & 0x3FFLL, (v12 & 0xFFFFFFFFFFFFF000uLL) + v8 * (v13 + 1) == v7)
        && v13 + a3 > v13 )
      {
        if ( v13 + a3 <= 0x3FF )
        {
          *(_QWORD *)(a1 + 32) += a3;
          *(_QWORD *)(v11 + 40) = (v12 + a3) ^ (v12 ^ (v12 + a3)) & 0xFFFFFFFFFFFFFC00uLL;
          return;
        }
        v14 = *(_QWORD *)(a1 + 8LL * (unsigned int)(v10 - 1) + 40);
      }
      else
      {
        v14 = *(_QWORD *)(a1 + 8LL * (unsigned int)(v10 - 1) + 40);
        if ( ((v14 >> 10) & 3) != v5 )
          goto LABEL_11;
      }
      if ( (v14 & 0xFFFFFFFFFFFFF000uLL) == v7 + a3 * v8 )
      {
        v19 = v14 & 0x3FF;
        if ( v19 + a3 <= 0x3FF && v19 + a3 > v19 )
        {
          v20 = a1 + 8LL * (unsigned int)(v10 - 1);
          v21 = *(_QWORD *)(v20 + 40);
          *(_QWORD *)(a1 + 32) += a3;
          *(_QWORD *)(v20 + 40) = (v21 - a3 * (4096LL << (9 * (unsigned __int8)v5)) + a3) ^ ((v21
                                                                                            - a3
                                                                                            * (4096LL << (9 * (unsigned __int8)v5))) ^ (v21 - a3 * (4096LL << (9 * (unsigned __int8)v5)) + a3)) & 0xFFFFFFFFFFFFFC00uLL;
          return;
        }
      }
    }
LABEL_11:
    v15 = *(unsigned int *)(a1 + 28);
    if ( (_DWORD)v15 != *(_DWORD *)(a1 + 12) )
      break;
    if ( i )
    {
      if ( !*(_BYTE *)(a1 + 25) )
        *(_BYTE *)(a1 + 25) = 1;
      return;
    }
    if ( *(_BYTE *)(a1 + 25) )
      return;
    qsort((void *)(a1 + 40), *(unsigned int *)(a1 + 28), 8uLL, MiTbFlushSort);
    MiCompressTbFlushList(a1);
  }
  while ( a3 )
  {
    v16 = 1024LL;
    if ( (unsigned __int64)(a3 - 1) <= 0x3FF )
      v16 = a3;
    *(_QWORD *)(a1 + 8 * v15 + 40) = v7 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v16 - 1) & 0x3FF | ((unsigned __int64)(v5 & 3) << 10);
    v17 = *(_DWORD *)(a1 + 28);
    *(_QWORD *)(a1 + 32) += v16;
    v15 = (unsigned int)(v17 + 1);
    *(_DWORD *)(a1 + 28) = v15;
    v7 += v16 * v8;
    a3 -= v16;
    if ( a3 && (_DWORD)v15 == *(_DWORD *)(a1 + 12) )
      goto LABEL_2;
  }
}
