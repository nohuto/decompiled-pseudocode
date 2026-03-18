/*
 * XREFs of MiClearAweLargePageMetadata @ 0x140700F94
 * Callers:
 *     MiFreeContiguousLargePageRun @ 0x140701770 (MiFreeContiguousLargePageRun.c)
 *     MiReadyLargeAwePageForFree @ 0x140702494 (MiReadyLargeAwePageForFree.c)
 * Callees:
 *     MiSetPfnContainingFrame @ 0x14033BC10 (MiSetPfnContainingFrame.c)
 *     MiSetPfnIdentity @ 0x140369440 (MiSetPfnIdentity.c)
 */

unsigned __int64 __fastcall MiClearAweLargePageMetadata(__int64 a1)
{
  unsigned __int64 result; // rax

  MiSetPfnIdentity(a1, 0);
  MiSetPfnContainingFrame(a1, 0LL);
  if ( (*(_BYTE *)(a1 + 34) & 7) != 5 )
    *(_DWORD *)(a1 + 32) = *(_DWORD *)(a1 + 32) & 0xFFF8FFFF | 0x50000;
  result = *(_QWORD *)(a1 + 24);
  if ( (result & 0x4000000000000000LL) != 0 )
  {
    result = *(_QWORD *)(a1 + 24) & 0xBFFFFFFFFFFFFFFFuLL;
    *(_QWORD *)(a1 + 24) = result;
  }
  return result;
}
