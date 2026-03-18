/*
 * XREFs of ??1WorkloadInstancePair@DXGTRACKEDWORKLOAD@@QEAA@XZ @ 0x1400825B0
 * Callers:
 *     <none>
 * Callees:
 *     ?DestroySynchObject@MonitoredFenceHelper@@AEAAXXZ @ 0x14020A15C (-DestroySynchObject@MonitoredFenceHelper@@AEAAXXZ.c)
 */

void __fastcall DXGTRACKEDWORKLOAD::WorkloadInstancePair::~WorkloadInstancePair(
        DXGTRACKEDWORKLOAD::WorkloadInstancePair *this)
{
  MonitoredFenceHelper::DestroySynchObject((DXGTRACKEDWORKLOAD::WorkloadInstancePair *)((char *)this + 56));
}
