/*
 * XREFs of MiScrubInterrupted @ 0x1404C3F28
 * Callers:
 *     MiScrubLargeMappedPage @ 0x140710CEC (MiScrubLargeMappedPage.c)
 *     MiScrubLargePage @ 0x14071116C (MiScrubLargePage.c)
 *     MiScrubNodeHugeRanges @ 0x1407113F0 (MiScrubNodeHugeRanges.c)
 *     MiScrubActiveLargePage @ 0x14088418C (MiScrubActiveLargePage.c)
 *     MiScrubNode @ 0x140AC8020 (MiScrubNode.c)
 *     MiScrubLargePageRegions @ 0x140AC8350 (MiScrubLargePageRegions.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall MiScrubInterrupted(__int64 a1)
{
  _BOOL8 result; // rax

  result = 1LL;
  if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 56LL) + 1440LL) & 1) == 0 )
    return *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 32LL) + 4LL) != 0;
  return result;
}
