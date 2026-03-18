/*
 * XREFs of MiSlabUpdateRecentFailure @ 0x1402A7900
 * Callers:
 *     MiFreeUnusedSlabPages @ 0x1402A7510 (MiFreeUnusedSlabPages.c)
 *     MiFreeSlabEntries @ 0x1402A76DC (MiFreeSlabEntries.c)
 * Callees:
 *     MiGetSlabCurrentTime @ 0x1402073A0 (MiGetSlabCurrentTime.c)
 */

ULONG64 __fastcall MiSlabUpdateRecentFailure(ULONG64 *a1)
{
  ULONG64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    result = MiGetSlabCurrentTime() - *a1;
    if ( result >= 0x11E1A300 )
      *a1 = 0LL;
  }
  return result;
}
