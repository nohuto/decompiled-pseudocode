/*
 * XREFs of MiExpandWrongPartitionSkipRange @ 0x140529324
 * Callers:
 *     MiPfnsWorthTrying @ 0x140290280 (MiPfnsWorthTrying.c)
 * Callees:
 *     MiExpandPageSkipRange @ 0x14041AE90 (MiExpandPageSkipRange.c)
 *     MiPfnLargeBitSet @ 0x14041DD70 (MiPfnLargeBitSet.c)
 */

unsigned __int64 __fastcall MiExpandWrongPartitionSkipRange(__int64 a1, __int64 a2, int a3)
{
  int v5; // eax

  if ( (a3 & 0x410000) == 0x410000 )
    v5 = 3;
  else
    v5 = MiPfnLargeBitSet((__int64)&MiSystemPartition, (a1 + 0x220000000000LL) / 48);
  return MiExpandPageSkipRange((__int64)&MiSystemPartition, a1, a2, MiPageSizes[v5]);
}
