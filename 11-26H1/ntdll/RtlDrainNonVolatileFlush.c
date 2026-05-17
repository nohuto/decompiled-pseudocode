/*
 * XREFs of RtlDrainNonVolatileFlush @ 0x180146FF0
 * Callers:
 *     RtlFlushNonVolatileMemory @ 0x180147020 (RtlFlushNonVolatileMemory.c)
 *     RtlFlushNonVolatileMemoryRanges @ 0x180147300 (RtlFlushNonVolatileMemoryRanges.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlDrainNonVolatileFlush(char a1)
{
  if ( (a1 & 1) == 0 )
    return 3221225485LL;
  if ( RtlpIsDrainRequired )
  {
    if ( (a1 & 2) != 0 )
      _mm_sfence();
  }
  return 0LL;
}
