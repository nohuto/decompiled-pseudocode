/*
 * XREFs of RtlpHpVsCalculateAffinitySlotCount @ 0x140531170
 * Callers:
 *     RtlpHpVsContextInitialize @ 0x140501838 (RtlpHpVsContextInitialize.c)
 *     RtlpHpHeapAllocate @ 0x140638054 (RtlpHpHeapAllocate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpVsCalculateAffinitySlotCount(unsigned int a1)
{
  unsigned int v1; // edx

  v1 = a1;
  if ( ((a1 - 1) & a1) != 0 )
  {
    _BitScanReverse(&a1, a1);
    v1 = 1 << (a1 + 1);
  }
  if ( v1 > 0x40 )
    return 64;
  return v1;
}
