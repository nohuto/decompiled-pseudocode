/*
 * XREFs of PsGetDefaultWsMaximum @ 0x1404DE908
 * Callers:
 *     MmCreateProcessAddressSpace @ 0x140ABF9A0 (MmCreateProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

__int64 PsGetDefaultWsMaximum()
{
  return *(_QWORD *)PspSiloMonitorLock.PriorityFloorCounts;
}
