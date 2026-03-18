/*
 * XREFs of HalpFindTimer @ 0x140581834
 * Callers:
 *     HalpInitializeTimers @ 0x140576C98 (HalpInitializeTimers.c)
 *     HalpTimerFindIdealClockSource @ 0x140576FC0 (HalpTimerFindIdealClockSource.c)
 *     HalpTimerFindIdealPerformanceCounterSource @ 0x1405771E0 (HalpTimerFindIdealPerformanceCounterSource.c)
 *     HalpTimerFindIdealScalingSource @ 0x140577340 (HalpTimerFindIdealScalingSource.c)
 *     HalpTimerFindIdealWatchdog @ 0x140577420 (HalpTimerFindIdealWatchdog.c)
 *     HalpTimerInitializeEarlyStallSource @ 0x14057797C (HalpTimerInitializeEarlyStallSource.c)
 *     HalpTimerQueryCycleCounter @ 0x140577BA0 (HalpTimerQueryCycleCounter.c)
 *     HalpTimerSelectRoles @ 0x140577E78 (HalpTimerSelectRoles.c)
 *     HalpTimerFindBestAlwaysOnTimer @ 0x1405820F8 (HalpTimerFindBestAlwaysOnTimer.c)
 *     HalpTscAdvSynchLeader @ 0x140583650 (HalpTscAdvSynchLeader.c)
 *     HalpTscSynchronization @ 0x140583F70 (HalpTscSynchronization.c)
 *     HalpTimerInitializeHypervisorTimer @ 0x140584840 (HalpTimerInitializeHypervisorTimer.c)
 *     HalpTimerConfigureQpcBypass @ 0x140584CD8 (HalpTimerConfigureQpcBypass.c)
 *     HalpTimerSaveProcessorFrequency @ 0x140584DF8 (HalpTimerSaveProcessorFrequency.c)
 *     HalpTimerMeasureProcessorsWorker @ 0x140586790 (HalpTimerMeasureProcessorsWorker.c)
 * Callees:
 *     <none>
 */

ULONG_PTR *__fastcall HalpFindTimer(int a1, int a2, int a3, int a4, char a5)
{
  ULONG_PTR *v10; // r9
  ULONG_PTR *v11; // rdx
  ULONG_PTR *v12; // rsi
  ULONG_PTR *v13; // r8
  int v14; // ecx
  int v15; // r11d
  ULONG_PTR v16; // rax
  ULONG_PTR v17; // rcx

  if ( !(_DWORD)HalpRegisteredTimerCount )
    return 0LL;
  v10 = (ULONG_PTR *)HalpRegisteredTimers;
  v11 = 0LL;
  while ( v10 != &HalpRegisteredTimers )
  {
    v12 = v10;
    v13 = v10;
    v10 = (ULONG_PTR *)*v10;
    v14 = *((_DWORD *)v12 + 46);
    if ( ((v14 & 0x100) == 0 || (a5 & 4) == 0)
      && (v14 & 1) == 0
      && ((v14 & 4) == 0 || (a5 & 1) != 0)
      && (!a1 || a1 == *((_DWORD *)v12 + 57)) )
    {
      v15 = *((_DWORD *)v13 + 56);
      if ( (a2 & v15) == a2 && (v15 & a3) == 0 && (!a4 || (v15 & a4) != 0) )
      {
        if ( !v11 )
          goto LABEL_15;
        v16 = v12[24];
        v17 = v11[24];
        if ( (a5 & 2) == 0 )
        {
          if ( v16 > v17 )
            v11 = v13;
          continue;
        }
        if ( v16 < v17 )
LABEL_15:
          v11 = v13;
      }
    }
  }
  if ( (a5 & 4) != 0 )
  {
    if ( v11 )
      *((_DWORD *)v11 + 46) |= 0x100u;
  }
  return v11;
}
