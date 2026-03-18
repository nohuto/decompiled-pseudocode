/*
 * XREFs of KeZeroSinglePage @ 0x1407307A0
 * Callers:
 *     MiZeroCfgSystemWideBitmapWorker @ 0x14033F350 (MiZeroCfgSystemWideBitmapWorker.c)
 *     ViGrowPoolAllocation @ 0x140645390 (ViGrowPoolAllocation.c)
 *     MiValidateSectionRevertRelocations @ 0x1409CD26C (MiValidateSectionRevertRelocations.c)
 *     MxMarkActiveDriverBits @ 0x140D01348 (MxMarkActiveDriverBits.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KeZeroSinglePage(_OWORD *a1)
{
  __int64 result; // rax
  __int64 v2; // rdx

  result = 128LL;
  v2 = 32LL;
  do
  {
    *a1 = 0LL;
    a1[1] = 0LL;
    a1[2] = 0LL;
    a1[3] = 0LL;
    a1 += 8;
    *(a1 - 4) = 0LL;
    *(a1 - 3) = 0LL;
    --v2;
    *(a1 - 2) = 0LL;
    *(a1 - 1) = 0LL;
  }
  while ( v2 );
  return result;
}
