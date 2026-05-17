/*
 * XREFs of RtlpHpVsCalculateAffinitySlotCount @ 0x18008DAF8
 * Callers:
 *     RtlpHpHeapAllocate @ 0x18008D814 (RtlpHpHeapAllocate.c)
 *     RtlpHpVsContextInitialize @ 0x18008DBB0 (RtlpHpVsContextInitialize.c)
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
