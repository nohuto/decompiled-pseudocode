/*
 * XREFs of ?GetSafeStdDev@TrackedWorkloadMonitor@@AEAANPEAVRollingStats@@@Z @ 0x1400A4D4C
 * Callers:
 *     ?ShouldDecreasePower@TrackedWorkloadMonitor@@AEAA_NPEAVRollingStats@@PEAI@Z @ 0x1400A50A4 (-ShouldDecreasePower@TrackedWorkloadMonitor@@AEAA_NPEAVRollingStats@@PEAI@Z.c)
 *     ?ShouldIncreasePower@TrackedWorkloadMonitor@@AEAA_NPEAVRollingStats@@PEAI@Z @ 0x1400A516C (-ShouldIncreasePower@TrackedWorkloadMonitor@@AEAA_NPEAVRollingStats@@PEAI@Z.c)
 * Callees:
 *     ?Update@RollingStats@@QEAAXXZ @ 0x1400A5214 (-Update@RollingStats@@QEAAXXZ.c)
 *     sqrt_0 @ 0x1400A5976 (sqrt_0.c)
 */

double __fastcall TrackedWorkloadMonitor::GetSafeStdDev(TrackedWorkloadMonitor *this, struct RollingStats *a2)
{
  double v2; // xmm6_8

  v2 = 0.0;
  RollingStats::Update(a2);
  if ( *((double *)a2 + 5) > 0.01 )
  {
    RollingStats::Update(a2);
    return sqrt_0(*((double *)a2 + 5)) * 1.1;
  }
  return v2;
}
