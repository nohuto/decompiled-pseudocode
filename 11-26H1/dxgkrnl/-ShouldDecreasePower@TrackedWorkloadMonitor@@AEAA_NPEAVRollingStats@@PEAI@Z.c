/*
 * XREFs of ?ShouldDecreasePower@TrackedWorkloadMonitor@@AEAA_NPEAVRollingStats@@PEAI@Z @ 0x1400A50A4
 * Callers:
 *     ?GetTargetPowerLevel@TrackedWorkloadMonitor@@QEAA_NPEAVRollingStats@@PEAI1@Z @ 0x1400A4E1C (-GetTargetPowerLevel@TrackedWorkloadMonitor@@QEAA_NPEAVRollingStats@@PEAI1@Z.c)
 * Callees:
 *     ?GetPowerLevel@TrackedWorkloadMonitor@@AEAAINNPEBUTrackedWorkloadStateInfo@@@Z @ 0x1400A4D04 (-GetPowerLevel@TrackedWorkloadMonitor@@AEAAINNPEBUTrackedWorkloadStateInfo@@@Z.c)
 *     ?GetSafeStdDev@TrackedWorkloadMonitor@@AEAANPEAVRollingStats@@@Z @ 0x1400A4D4C (-GetSafeStdDev@TrackedWorkloadMonitor@@AEAANPEAVRollingStats@@@Z.c)
 *     ?Update@RollingStats@@QEAAXXZ @ 0x1400A5214 (-Update@RollingStats@@QEAAXXZ.c)
 */

char __fastcall TrackedWorkloadMonitor::ShouldDecreasePower(
        TrackedWorkloadMonitor *this,
        struct RollingStats *a2,
        unsigned int *a3)
{
  __int64 i; // r9
  __int64 v7; // rax
  char *v8; // rbp
  double SafeStdDev; // xmm0_8
  double v10; // xmm5_8
  unsigned int PowerLevel; // eax

  for ( i = 0LL; (unsigned int)i < 5; i = (unsigned int)(i + 1) )
  {
    if ( *((_BYTE *)this + 40 * i + 60) && *((_DWORD *)this + 10 * i + 6) == 4 )
      return 0;
  }
  v7 = *((unsigned int *)this + 56);
  v8 = (char *)this + 40 * v7;
  SafeStdDev = TrackedWorkloadMonitor::GetSafeStdDev((TrackedWorkloadMonitor *)(5 * v7), a2);
  RollingStats::Update(a2);
  if ( (double)*((int *)this + 3) > SafeStdDev + *((double *)a2 + 4) )
  {
    RollingStats::Update(a2);
    PowerLevel = TrackedWorkloadMonitor::GetPowerLevel(
                   this,
                   *((double *)a2 + 4),
                   v10 - SafeStdDev,
                   (const struct TrackedWorkloadStateInfo *)(v8 + 24));
    if ( PowerLevel < *((_DWORD *)v8 + 12) )
    {
      *a3 = PowerLevel;
      return 1;
    }
  }
  return 0;
}
