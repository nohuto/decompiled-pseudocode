/*
 * XREFs of KdpSysCheckLowMemory @ 0x140C1B2F4
 * Callers:
 *     KdSystemDebugControl @ 0x14077FDF0 (KdSystemDebugControl.c)
 *     KdpCheckLowMemory @ 0x140C19E70 (KdpCheckLowMemory.c)
 * Callees:
 *     KdpSearchPhysicalPageRange @ 0x140C1B0F4 (KdpSearchPhysicalPageRange.c)
 */

__int64 __fastcall KdpSysCheckLowMemory(int a1)
{
  if ( KdpSearchInProgress )
    KdpSearchPhysicalPageRange(a1);
  return 0LL;
}
