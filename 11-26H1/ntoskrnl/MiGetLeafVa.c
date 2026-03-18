/*
 * XREFs of MiGetLeafVa @ 0x140326060
 * Callers:
 *     MiInitializePageTradePacket @ 0x140293510 (MiInitializePageTradePacket.c)
 *     MiCountSharedPages @ 0x1402D0E10 (MiCountSharedPages.c)
 *     MiDecommitPrivatePageTail @ 0x1402DB300 (MiDecommitPrivatePageTail.c)
 *     MiDecommitSharedPageTail @ 0x1402DBF60 (MiDecommitSharedPageTail.c)
 *     MiIdentifyResidentPage @ 0x1402F17A0 (MiIdentifyResidentPage.c)
 *     MiRevertValidPte @ 0x140304974 (MiRevertValidPte.c)
 *     MiMakeVaRangeNoAccess @ 0x140310CE0 (MiMakeVaRangeNoAccess.c)
 *     MiWalkPtesForWriteWatchState @ 0x1403178F8 (MiWalkPtesForWriteWatchState.c)
 *     MiMoveDirtyBitsToPfns @ 0x140319470 (MiMoveDirtyBitsToPfns.c)
 *     MiWalkPageTablesRecursively @ 0x1403270E0 (MiWalkPageTablesRecursively.c)
 *     MiInitializeSystemPageTable @ 0x14033AB8C (MiInitializeSystemPageTable.c)
 *     MiFlushValidPteFromTb @ 0x140343898 (MiFlushValidPteFromTb.c)
 *     MiDeleteVaDirect @ 0x140361EF0 (MiDeleteVaDirect.c)
 *     MiClearNonPagedPtes @ 0x1403633B8 (MiClearNonPagedPtes.c)
 *     MiDeleteNonPagedPoolPte @ 0x140363600 (MiDeleteNonPagedPoolPte.c)
 *     MiUnlockCodePage @ 0x140367FA8 (MiUnlockCodePage.c)
 *     MiPrefetchVirtualMemory @ 0x1403A0710 (MiPrefetchVirtualMemory.c)
 *     MiSystemFault @ 0x1403A4508 (MiSystemFault.c)
 *     MiInPagePageTable @ 0x1403A4C70 (MiInPagePageTable.c)
 *     MiInsertLargeUserMapping @ 0x14043A9B4 (MiInsertLargeUserMapping.c)
 *     MiFlushDirtyBitsToPfn @ 0x14045C544 (MiFlushDirtyBitsToPfn.c)
 *     MiDeleteEmptyPageTableCommit @ 0x140467190 (MiDeleteEmptyPageTableCommit.c)
 *     MiMirrorRemoveInactivePages @ 0x1404CB2E0 (MiMirrorRemoveInactivePages.c)
 *     MiMapMdlWithLargePages @ 0x140502900 (MiMapMdlWithLargePages.c)
 *     MiQueryVaLargePage @ 0x140526064 (MiQueryVaLargePage.c)
 *     MiFinishPteChangesInPageTable @ 0x140527D9C (MiFinishPteChangesInPageTable.c)
 *     MiMakeLargePageTable @ 0x14052B10C (MiMakeLargePageTable.c)
 *     MxMapLargeVa @ 0x1406E7444 (MxMapLargeVa.c)
 *     MiGetNextNonGapPfnPage @ 0x1406E9108 (MiGetNextNonGapPfnPage.c)
 *     MiPfnRangeIsZero @ 0x1406E9BA0 (MiPfnRangeIsZero.c)
 *     MiUnlockPhysicalPageByVa @ 0x1406EA3E0 (MiUnlockPhysicalPageByVa.c)
 *     MiCrashdumpRemovePte @ 0x1406F63A0 (MiCrashdumpRemovePte.c)
 *     MiFilterCrashDumpPte @ 0x1406F6440 (MiFilterCrashDumpPte.c)
 *     MiProtectAweValidPte @ 0x140702298 (MiProtectAweValidPte.c)
 *     MiWriteAwePtesNewPageTable @ 0x140702E64 (MiWriteAwePtesNewPageTable.c)
 *     MiScrubLargePageRegions @ 0x140AC675C (MiScrubLargePageRegions.c)
 *     MxCreatePfnsForPtes @ 0x140CF6200 (MxCreatePfnsForPtes.c)
 *     MxFreeEmptyBootPageTable @ 0x140CF6AA4 (MxFreeEmptyBootPageTable.c)
 *     MxMapVa @ 0x140CF7FB0 (MxMapVa.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiGetLeafVa(unsigned __int64 a1)
{
  for ( ; a1 >= 0xFFFFF68000000000uLL; a1 = (__int64)(a1 << 25) >> 16 )
  {
    if ( a1 > 0xFFFFF6FFFFFFFFFFuLL )
      break;
  }
  return a1;
}
