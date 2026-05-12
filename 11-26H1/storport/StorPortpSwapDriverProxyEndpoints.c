/*
 * XREFs of StorPortpSwapDriverProxyEndpoints @ 0x140119140
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidNtStatusToStorStatus @ 0x1400018E8 (RaidNtStatusToStorStatus.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

__int64 StorPortpSwapDriverProxyEndpoints()
{
  int v0; // eax

  if ( SwapDrvrPxyEndpoints )
    v0 = SwapDrvrPxyEndpoints();
  else
    v0 = -1073741822;
  return RaidNtStatusToStorStatus(v0);
}
