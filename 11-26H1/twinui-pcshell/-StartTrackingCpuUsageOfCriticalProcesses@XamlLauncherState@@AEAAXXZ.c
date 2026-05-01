/*
 * XREFs of ?StartTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ @ 0x1801F2D84
 * Callers:
 *     ?BeginStartTelemetryTimeout@XamlLauncherState@@AEAAXXZ @ 0x18001DBC0 (-BeginStartTelemetryTimeout@XamlLauncherState@@AEAAXXZ.c)
 * Callees:
 *     ?SnapshotCpuCyclesUsedByCortana@XamlLauncherState@@AEAAJPEA_K@Z @ 0x1801F2E54 (-SnapshotCpuCyclesUsedByCortana@XamlLauncherState@@AEAAJPEA_K@Z.c)
 *     ?SnapshotCpuCyclesUsedByStartMenu@XamlLauncherState@@AEAAJPEA_K@Z @ 0x1801F2EB0 (-SnapshotCpuCyclesUsedByStartMenu@XamlLauncherState@@AEAAJPEA_K@Z.c)
 */

void __fastcall XamlLauncherState::StartTrackingCpuUsageOfCriticalProcesses(XamlLauncherState *this)
{
  *((_QWORD *)this + 140) = 0LL;
  XamlLauncherState::SnapshotCpuCyclesUsedByStartMenu(this, (unsigned __int64 *)this + 140);
  *((_QWORD *)this + 141) = 0LL;
  XamlLauncherState::SnapshotCpuCyclesUsedByCortana(this, (unsigned __int64 *)this + 141);
  *((_QWORD *)this + 142) = 0LL;
  XamlLauncherState::SnapshotCpuCyclesUsedBySiHost(this, (unsigned __int64 *)this + 142);
}
