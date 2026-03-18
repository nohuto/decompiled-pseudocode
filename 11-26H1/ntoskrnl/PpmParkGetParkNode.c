/*
 * XREFs of PpmParkGetParkNode @ 0x14042D7D4
 * Callers:
 *     PopAccumulateNonDripsIdleCpuTime @ 0x14042D634 (PopAccumulateNonDripsIdleCpuTime.c)
 *     PopAccumulateNonActivatedCpuTime @ 0x14042D72C (PopAccumulateNonActivatedCpuTime.c)
 *     PpmIdleGetConcurrencyStats @ 0x140AFCE20 (PpmIdleGetConcurrencyStats.c)
 *     PpmIdleGetPackageIdleIntervalStats @ 0x140B03E2C (PpmIdleGetPackageIdleIntervalStats.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmParkGetParkNode(__int16 a1)
{
  __int64 v1; // r8
  unsigned int i; // r9d
  __int64 v3; // r10

  v1 = 0LL;
  for ( i = 0; i < PopModernStandbyStateNotify.SystemCallNumber; ++i )
  {
    v3 = *(_QWORD *)((char *)&PopModernStandbyStateNotify.116 + 4) + 1264LL * i;
    if ( *(_WORD *)(v3 + 4) == a1 && (!*(_WORD *)(v3 + 6) || PpmParkUseWholeNumaNode) )
      return *(_QWORD *)((char *)&PopModernStandbyStateNotify.116 + 4) + 1264LL * i;
  }
  return v1;
}
