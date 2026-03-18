/*
 * XREFs of ?Boost@TrackedWorkloadMonitor@@QEAAXPEAVRollingStats@@@Z @ 0x1400A4BE4
 * Callers:
 *     ?ProcessActiveInstancePairs@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_K@Z @ 0x14020A728 (-ProcessActiveInstancePairs@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@_KPEA_.c)
 *     ?UpdateTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEBU_D3DKMT_UPDATETRACKEDWORKLOAD@@_K@Z @ 0x14020B2AC (-UpdateTrackedWorkload@DXGTRACKEDWORKLOAD@@QEAAJPEAVDXGDEVICE@@PEBU_D3DKMT_UPDATETRACKEDWORKLOAD.c)
 * Callees:
 *     ?ChangeState@TrackedWorkloadMonitor@@AEAAXW4TrackedWorkloadState@@PEAVRollingStats@@PEBUTrackedWorkloadStateInfo@@I@Z @ 0x1400A4C2C (-ChangeState@TrackedWorkloadMonitor@@AEAAXW4TrackedWorkloadState@@PEAVRollingStats@@PEBUTrackedW.c)
 */

void __fastcall TrackedWorkloadMonitor::Boost(TrackedWorkloadMonitor *this, struct RollingStats *a2)
{
  int v2; // eax

  v2 = *((_DWORD *)this + 8 * *((unsigned int *)this + 56) + 2 * *((unsigned int *)this + 56) + 6);
  if ( v2 != 1 && v2 != 2 )
    TrackedWorkloadMonitor::ChangeState(this, 7LL, a2);
}
