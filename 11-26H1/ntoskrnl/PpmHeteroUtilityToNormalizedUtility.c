/*
 * XREFs of PpmHeteroUtilityToNormalizedUtility @ 0x1404163E0
 * Callers:
 *     PpmParkDistributeUtility @ 0x14025C334 (PpmParkDistributeUtility.c)
 *     PpmHeteroComputeCoreParkingUtilities @ 0x140415BAC (PpmHeteroComputeCoreParkingUtilities.c)
 *     PpmCheckComputeHeteroResponse @ 0x140415EE0 (PpmCheckComputeHeteroResponse.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PpmHeteroUtilityToNormalizedUtility(__int64 a1, unsigned int a2)
{
  int v2; // eax

  v2 = *(_DWORD *)(a1 + 64);
  if ( v2 )
    return (a2 * v2) >> 16;
  else
    return a2;
}
