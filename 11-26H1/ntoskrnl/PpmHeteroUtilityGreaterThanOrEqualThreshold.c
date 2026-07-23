/*
 * XREFs of PpmHeteroUtilityGreaterThanOrEqualThreshold @ 0x1404163FC
 * Callers:
 *     PpmHeteroComputeUnparkCount @ 0x14041552C (PpmHeteroComputeUnparkCount.c)
 *     PpmCheckComputeHeteroResponse @ 0x140415EE0 (PpmCheckComputeHeteroResponse.c)
 *     PpmHeteroHgsContainmentCheckThresholds @ 0x140416704 (PpmHeteroHgsContainmentCheckThresholds.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmHeteroUtilityGreaterThanOrEqualThreshold(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        unsigned int a4,
        unsigned int a5)
{
  unsigned int v5; // r10d
  unsigned int v7; // r8d

  v5 = 0;
  if ( PpmHeteroMinRelativePerformance && a5 < (unsigned __int8)PpmMaxCoreClasses )
    v7 = *(_DWORD *)(PpmHeteroMinRelativePerformance + 4LL * a5);
  else
    v7 = 0x10000;
  if ( a2 * a1 > a3 )
    a3 = a2 * a1;
  if ( 100 * a3 >= a1 * ((10000 * a4 * (unsigned __int64)v7) >> 16) && a1 )
    return 1;
  return v5;
}
