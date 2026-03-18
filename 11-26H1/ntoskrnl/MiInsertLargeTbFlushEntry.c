/*
 * XREFs of MiInsertLargeTbFlushEntry @ 0x140343930
 * Callers:
 *     MiZeroPageWorkMapping @ 0x14029FD70 (MiZeroPageWorkMapping.c)
 *     MiReleaseLargePdeMappings @ 0x1402A2D84 (MiReleaseLargePdeMappings.c)
 *     MiRevertValidPte @ 0x140304974 (MiRevertValidPte.c)
 *     MiDeleteSystemPageTable @ 0x140309A60 (MiDeleteSystemPageTable.c)
 *     MiMakeVaRangeNoAccess @ 0x140310CE0 (MiMakeVaRangeNoAccess.c)
 *     MiMakePteClean @ 0x14031A2A0 (MiMakePteClean.c)
 *     MiDecommitAddTbFlushEntries @ 0x140342738 (MiDecommitAddTbFlushEntries.c)
 *     MiUnmapContiguousMemory @ 0x140343628 (MiUnmapContiguousMemory.c)
 *     MiFlushValidPteFromTb @ 0x140343898 (MiFlushValidPteFromTb.c)
 *     MiLargePageFault @ 0x1403A7860 (MiLargePageFault.c)
 *     MiDecommitLargePoolVa @ 0x1403C3720 (MiDecommitLargePoolVa.c)
 *     MiUnmapMdlCommon @ 0x14051D098 (MiUnmapMdlCommon.c)
 *     MiInsertAweFlushList @ 0x140533384 (MiInsertAweFlushList.c)
 *     MiClearSystemAccessBits @ 0x1406F2490 (MiClearSystemAccessBits.c)
 *     MiDemoteValidLargePageOneLevel @ 0x1406F259C (MiDemoteValidLargePageOneLevel.c)
 *     MiWritePteHighLevel @ 0x1406F2B98 (MiWritePteHighLevel.c)
 *     MiProtectAweValidPte @ 0x140702298 (MiProtectAweValidPte.c)
 *     MiScrubLargeMappedPage @ 0x14070C03C (MiScrubLargeMappedPage.c)
 *     MiProtectLargeKernelHalRange @ 0x1408644C0 (MiProtectLargeKernelHalRange.c)
 *     MiFreeBootDriverPages @ 0x140D0AE50 (MiFreeBootDriverPages.c)
 * Callees:
 *     MiInsertTbFlushEntry @ 0x14035E7E0 (MiInsertTbFlushEntry.c)
 */

__int64 __fastcall MiInsertLargeTbFlushEntry(__int64 a1, int a2, __int64 a3)
{
  int i; // esi
  __int64 result; // rax

  if ( a2 >= 0 )
  {
    for ( i = 0; i <= a2; ++i )
    {
      a3 = a3 << 25 >> 16;
      result = MiInsertTbFlushEntry(a1, a3, 1LL);
    }
  }
  return result;
}
