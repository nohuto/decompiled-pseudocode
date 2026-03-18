/*
 * XREFs of PpmHeteroUtilityToNormalizedUtility @ 0x14041EBA0
 * Callers:
 *     PpmParkDistributeUtility @ 0x14025AB54 (PpmParkDistributeUtility.c)
 *     PpmHeteroComputeCoreParkingUtilities @ 0x14041E368 (PpmHeteroComputeCoreParkingUtilities.c)
 *     PpmCheckComputeHeteroResponse @ 0x14041E6A0 (PpmCheckComputeHeteroResponse.c)
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
