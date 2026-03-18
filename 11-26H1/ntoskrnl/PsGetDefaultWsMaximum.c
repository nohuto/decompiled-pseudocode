/*
 * XREFs of PsGetDefaultWsMaximum @ 0x1404E5368
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x140ABD3B0 (MmCreateProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

__int64 PsGetDefaultWsMaximum()
{
  return *(_QWORD *)PspSiloMonitorLock.PriorityFloorCounts;
}
