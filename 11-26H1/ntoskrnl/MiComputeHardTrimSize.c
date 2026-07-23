/*
 * XREFs of MiComputeHardTrimSize @ 0x1402CF228
 * Callers:
 *     MiWalkAllHardLimitWorkingSets @ 0x1402A8D7C (MiWalkAllHardLimitWorkingSets.c)
 *     MiAddWorkingSetEntries @ 0x1402CDB00 (MiAddWorkingSetEntries.c)
 *     MiForcedTrim @ 0x1403C3240 (MiForcedTrim.c)
 *     MiTrimWorkingSet @ 0x1403C437C (MiTrimWorkingSet.c)
 *     MiUpdateAgeDistribution @ 0x14047FA3C (MiUpdateAgeDistribution.c)
 *     MiComputeHardAgingPercent @ 0x1404AB228 (MiComputeHardAgingPercent.c)
 * Callees:
 *     Feature_Servicing_Mm_WsTrimFixes__private_IsEnabledDeviceUsageNoInline @ 0x1406FC634 (Feature_Servicing_Mm_WsTrimFixes__private_IsEnabledDeviceUsageNoInline.c)
 */

unsigned __int64 __fastcall MiComputeHardTrimSize(unsigned __int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // rsi
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rcx

  v3 = a3;
  if ( a1 < 0x64 )
    return a1 - 1;
  v6 = a2 * (a1 / 0x64);
  if ( !(unsigned int)Feature_Servicing_Mm_WsTrimFixes__private_IsEnabledDeviceUsageNoInline() )
    v6 /= 0x64uLL;
  v7 = v3 << 8;
  if ( a1 - v6 <= v3 << 8 )
    v7 = a1 - v6;
  return a1 - v7;
}
