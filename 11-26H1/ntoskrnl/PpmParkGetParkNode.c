/*
 * XREFs of PpmParkGetParkNode @ 0x140421EA4
 * Callers:
 *     PopAccumulateNonDripsIdleCpuTime @ 0x140421D04 (PopAccumulateNonDripsIdleCpuTime.c)
 *     PopAccumulateNonActivatedCpuTime @ 0x140421DFC (PopAccumulateNonActivatedCpuTime.c)
 *     PpmIdleGetConcurrencyStats @ 0x140AFE990 (PpmIdleGetConcurrencyStats.c)
 *     PpmIdleGetPackageIdleIntervalStats @ 0x140B05A3C (PpmIdleGetPackageIdleIntervalStats.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmParkGetParkNode(__int16 a1)
{
  __int64 v1; // r8
  unsigned int i; // r9d
  __int64 v3; // r10

  v1 = 0LL;
  for ( i = 0; i < PpmParkNumNodes; ++i )
  {
    v3 = PpmParkNodes + 1264LL * i;
    if ( *(_WORD *)(v3 + 4) == a1 && (!*(_WORD *)(v3 + 6) || PpmParkUseWholeNumaNode) )
      return PpmParkNodes + 1264LL * i;
  }
  return v1;
}
