/*
 * XREFs of MiInsertTbFlushEntry @ 0x140360580
 * Callers:
 *     MiAddVaToProtectFlushList @ 0x140250D04 (MiAddVaToProtectFlushList.c)
 *     MiReleasePtes @ 0x140281250 (MiReleasePtes.c)
 *     MiLockCode @ 0x14029558C (MiLockCode.c)
 *     MiEmptyWorkingSetHelper @ 0x14029B748 (MiEmptyWorkingSetHelper.c)
 *     MiZeroPageWorkMapping @ 0x14029F2C0 (MiZeroPageWorkMapping.c)
 *     MiCleanupLazyStampedPageTable @ 0x14029F55C (MiCleanupLazyStampedPageTable.c)
 *     MiSwitchToTransition @ 0x1402A1680 (MiSwitchToTransition.c)
 *     MiConsumeSystemCacheTbFlushNeededView @ 0x1402A29D8 (MiConsumeSystemCacheTbFlushNeededView.c)
 *     MiReleasePteMappings @ 0x1402A3050 (MiReleasePteMappings.c)
 *     MiWalkVaRange @ 0x1402B5320 (MiWalkVaRange.c)
 *     MiConfirmFaultClusterDescriptor @ 0x1402CEDB0 (MiConfirmFaultClusterDescriptor.c)
 *     MiAgePteWorker @ 0x1402E10E0 (MiAgePteWorker.c)
 *     MiRevertValidPte @ 0x1402E69F4 (MiRevertValidPte.c)
 *     MiCombineWithExisting @ 0x1402EA2C4 (MiCombineWithExisting.c)
 *     MiDeleteSystemPageTable @ 0x1402EBAE0 (MiDeleteSystemPageTable.c)
 *     MiCombineInitialFinish @ 0x1402EC334 (MiCombineInitialFinish.c)
 *     MiHandleForkValidPrivatePte @ 0x1402ECE40 (MiHandleForkValidPrivatePte.c)
 *     MiSetPagingOfDriver @ 0x1402F173C (MiSetPagingOfDriver.c)
 *     MmProtectMdlSystemAddress @ 0x1402F1A90 (MmProtectMdlSystemAddress.c)
 *     MiMakeVaRangeNoAccess @ 0x140312D14 (MiMakeVaRangeNoAccess.c)
 *     MiDeleteRotateVa @ 0x140314480 (MiDeleteRotateVa.c)
 *     MiReplaceRotateWithDemandZeroNoCopy @ 0x1403146B4 (MiReplaceRotateWithDemandZeroNoCopy.c)
 *     MiUnlockOpportunisticPagesInPageTable @ 0x14031594C (MiUnlockOpportunisticPagesInPageTable.c)
 *     MiDecommitHardwareEnclavePages @ 0x140342EB4 (MiDecommitHardwareEnclavePages.c)
 *     MiDecommitAddTbFlushEntries @ 0x1403447B8 (MiDecommitAddTbFlushEntries.c)
 *     MiUnmapContiguousMemory @ 0x1403456A8 (MiUnmapContiguousMemory.c)
 *     MiInsertLargeTbFlushEntry @ 0x1403459B0 (MiInsertLargeTbFlushEntry.c)
 *     MiEmptyPte @ 0x14035F400 (MiEmptyPte.c)
 *     MiReservePtes @ 0x14035FBF0 (MiReservePtes.c)
 *     MiFillSystemPtes @ 0x1403611E8 (MiFillSystemPtes.c)
 *     MiFlushTbAsNeeded @ 0x140361AE0 (MiFlushTbAsNeeded.c)
 *     MiDeleteNonPagedPoolPte @ 0x1403653A0 (MiDeleteNonPagedPoolPte.c)
 *     MiInsertRecursiveTbFlushEntries @ 0x1403658EC (MiInsertRecursiveTbFlushEntries.c)
 *     MiOutPageSingleKernelStack @ 0x14036A700 (MiOutPageSingleKernelStack.c)
 *     MiSetSystemCodeProtection @ 0x14038D734 (MiSetSystemCodeProtection.c)
 *     MmSetAddressRangeModifiedEx @ 0x14039C3F8 (MmSetAddressRangeModifiedEx.c)
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
 *     MiInsertAweFlushList @ 0x140535804 (MiInsertAweFlushList.c)
 *     MiPageBootRegistry @ 0x1406E8744 (MiPageBootRegistry.c)
 *     MiDiscardPte @ 0x1406F3B70 (MiDiscardPte.c)
 *     MiClearSystemAccessBits @ 0x1406F7100 (MiClearSystemAccessBits.c)
 *     MiTrimPoisonedPage @ 0x14070488C (MiTrimPoisonedPage.c)
 *     MiFlushEnclaveTb @ 0x140704C84 (MiFlushEnclaveTb.c)
 *     MiProtectAweValidPte @ 0x140706F68 (MiProtectAweValidPte.c)
 *     MiUnmapLegacyAwePage @ 0x1407078FC (MiUnmapLegacyAwePage.c)
 *     MiShareValidPage @ 0x1407096FC (MiShareValidPage.c)
 *     MiScrubLargeMappedPage @ 0x140710CEC (MiScrubLargeMappedPage.c)
 *     MiCalibrateTbFlush @ 0x140712BB4 (MiCalibrateTbFlush.c)
 *     MmDeleteShadowMapping @ 0x14087BFD8 (MmDeleteShadowMapping.c)
 *     MiEliminateZeroPages @ 0x14099AF5C (MiEliminateZeroPages.c)
 *     MmUnmapProtectedKernelPageRange @ 0x140B3A4F8 (MmUnmapProtectedKernelPageRange.c)
 *     MiMarkBootKernelStack @ 0x140D02B7C (MiMarkBootKernelStack.c)
 * Callees:
 *     MiCompressTbFlushList @ 0x1404D427C (MiCompressTbFlushList.c)
 *     qsort @ 0x140539380 (qsort.c)
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
