/*
 * XREFs of MiComputeHardTrimSize @ 0x1402ED1E8
 * Callers:
 *     MiWalkAllHardLimitWorkingSets @ 0x1402A996C (MiWalkAllHardLimitWorkingSets.c)
 *     MiAddWorkingSetEntries @ 0x1402EBAC0 (MiAddWorkingSetEntries.c)
 *     MiForcedTrim @ 0x1403B9340 (MiForcedTrim.c)
 *     MiTrimWorkingSet @ 0x1403BA50C (MiTrimWorkingSet.c)
 *     MiUpdateAgeDistribution @ 0x1404860CC (MiUpdateAgeDistribution.c)
 *     MiComputeHardAgingPercent @ 0x1404B1DCC (MiComputeHardAgingPercent.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiComputeHardTrimSize(unsigned __int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned __int64 v4; // rdx
  unsigned __int64 v5; // rcx

  if ( a1 < 0x64 )
    return a1 - 1;
  v4 = a1 - a2 * (a1 / 0x64) / 0x64;
  v5 = (unsigned __int64)a3 << 8;
  if ( v4 <= v5 )
    v5 = v4;
  return a1 - v5;
}
