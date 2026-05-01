/*
 * XREFs of ?SnapshotCpuCyclesUsedByStartMenu@XamlLauncherState@@AEAAJPEA_K@Z @ 0x1801C94CC
 * Callers:
 *     ?StartTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ @ 0x1801C9424 (-StartTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ.c)
 *     ?StopTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ @ 0x1804567C4 (-StopTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ.c)
 * Callees:
 *     ?QueryCpuCyclesUsedByWindow@@YAJPEAUHWND__@@PEA_K@Z @ 0x1800B89E4 (-QueryCpuCyclesUsedByWindow@@YAJPEAUHWND__@@PEA_K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall XamlLauncherState::SnapshotCpuCyclesUsedByStartMenu(XamlLauncherState *this, unsigned __int64 *a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rcx
  __int64 result; // rax
  int CpuCyclesUsedByWindow; // eax
  HWND v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  *a2 = 0LL;
  v4 = *((_QWORD *)this + 10);
  v7 = 0LL;
  result = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v4 + 320LL))(v4, &v7);
  if ( (int)result >= 0 )
  {
    CpuCyclesUsedByWindow = QueryCpuCyclesUsedByWindow(v7, a2);
    if ( CpuCyclesUsedByWindow < 0 )
      return (unsigned int)CpuCyclesUsedByWindow;
    return v2;
  }
  return result;
}
