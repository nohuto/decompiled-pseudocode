/*
 * XREFs of KdpSysCheckLowMemory @ 0x140C152F4
 * Callers:
 *     KdSystemDebugControl @ 0x14077D2F0 (KdSystemDebugControl.c)
 *     KdpCheckLowMemory @ 0x140C13E70 (KdpCheckLowMemory.c)
 * Callees:
 *     KdpSearchPhysicalPageRange @ 0x140C150F4 (KdpSearchPhysicalPageRange.c)
 */

__int64 __fastcall KdpSysCheckLowMemory(int a1)
{
  if ( KdpSearchInProgress )
    KdpSearchPhysicalPageRange(a1);
  return 0LL;
}
