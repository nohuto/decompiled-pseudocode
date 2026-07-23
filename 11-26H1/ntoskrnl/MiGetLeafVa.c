/*
 * XREFs of MiGetLeafVa @ 0x140328090
 * Callers:
 *     MiInitializePageTradePacket @ 0x140292A70 (MiInitializePageTradePacket.c)
 *     MiCountSharedPages @ 0x1402B2BD0 (MiCountSharedPages.c)
 *     MiDecommitPrivatePageTail @ 0x1402BD0C0 (MiDecommitPrivatePageTail.c)
 *     MiDecommitSharedPageTail @ 0x1402BDD20 (MiDecommitSharedPageTail.c)
 *     MiIdentifyResidentPage @ 0x1402D3820 (MiIdentifyResidentPage.c)
 *     MiRevertValidPte @ 0x1402E69F4 (MiRevertValidPte.c)
 *     MiMakeVaRangeNoAccess @ 0x140312D14 (MiMakeVaRangeNoAccess.c)
 *     MiWalkPtesForWriteWatchState @ 0x140319928 (MiWalkPtesForWriteWatchState.c)
 *     MiMoveDirtyBitsToPfns @ 0x14031B4A0 (MiMoveDirtyBitsToPfns.c)
 *     MiWalkPageTablesRecursively @ 0x140329110 (MiWalkPageTablesRecursively.c)
 *     MiInitializeSystemPageTable @ 0x14033CC0C (MiInitializeSystemPageTable.c)
 *     MiFlushValidPteFromTb @ 0x140345918 (MiFlushValidPteFromTb.c)
 *     MiDeleteVaDirect @ 0x140363C90 (MiDeleteVaDirect.c)
 *     MiClearNonPagedPtes @ 0x140365158 (MiClearNonPagedPtes.c)
 *     MiDeleteNonPagedPoolPte @ 0x1403653A0 (MiDeleteNonPagedPoolPte.c)
 *     MiUnlockCodePage @ 0x140369D48 (MiUnlockCodePage.c)
 *     MiPrefetchVirtualMemory @ 0x1403A2470 (MiPrefetchVirtualMemory.c)
 *     MiSystemFault @ 0x1403A6268 (MiSystemFault.c)
 *     MiInPagePageTable @ 0x1403A69D0 (MiInPagePageTable.c)
 *     MiInsertLargeUserMapping @ 0x14042D264 (MiInsertLargeUserMapping.c)
 *     MiFlushDirtyBitsToPfn @ 0x1404560EC (MiFlushDirtyBitsToPfn.c)
 *     MiDeleteEmptyPageTableCommit @ 0x1404608E0 (MiDeleteEmptyPageTableCommit.c)
 *     MiMirrorRemoveInactivePages @ 0x1404C4D10 (MiMirrorRemoveInactivePages.c)
 *     MiMapMdlWithLargePages @ 0x1404FC1D0 (MiMapMdlWithLargePages.c)
 *     MiQueryVaLargePage @ 0x1405286D4 (MiQueryVaLargePage.c)
 *     MiFinishPteChangesInPageTable @ 0x14052A40C (MiFinishPteChangesInPageTable.c)
 *     MiMakeLargePageTable @ 0x14052D62C (MiMakeLargePageTable.c)
 *     MxMapLargeVa @ 0x1406EC0F4 (MxMapLargeVa.c)
 *     MiGetNextNonGapPfnPage @ 0x1406EDDA8 (MiGetNextNonGapPfnPage.c)
 *     MiPfnRangeIsZero @ 0x1406EE840 (MiPfnRangeIsZero.c)
 *     MiUnlockPhysicalPageByVa @ 0x1406EF080 (MiUnlockPhysicalPageByVa.c)
 *     MiCrashdumpRemovePte @ 0x1406FB010 (MiCrashdumpRemovePte.c)
 *     MiFilterCrashDumpPte @ 0x1406FB0B0 (MiFilterCrashDumpPte.c)
 *     MiProtectAweValidPte @ 0x140706F68 (MiProtectAweValidPte.c)
 *     MiWriteAwePtesNewPageTable @ 0x140707B34 (MiWriteAwePtesNewPageTable.c)
 *     MiScrubLargePageRegions @ 0x140AC8350 (MiScrubLargePageRegions.c)
 *     MxCreatePfnsForPtes @ 0x140CFC580 (MxCreatePfnsForPtes.c)
 *     MxFreeEmptyBootPageTable @ 0x140CFCE24 (MxFreeEmptyBootPageTable.c)
 *     MxMapVa @ 0x140CFE330 (MxMapVa.c)
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
