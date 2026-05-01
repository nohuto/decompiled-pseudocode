/*
 * XREFs of ?SnapshotCpuCyclesUsedBySiHost@XamlLauncherState@@AEAAJPEA_K@Z @ 0x1801F2DD8
 * Callers:
 *     ?StartTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ @ 0x1801F2D84 (-StartTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ.c)
 *     ?StopTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ @ 0x180462FE4 (-StopTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ.c)
 * Callees:
 *     ?GetSiHostProcessHandle@@YAJKPEAPEAX@Z @ 0x18021402C (-GetSiHostProcessHandle@@YAJKPEAPEAX@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802C6380 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall XamlLauncherState::SnapshotCpuCyclesUsedBySiHost(XamlLauncherState *this, unsigned __int64 *a2)
{
  HANDLE *v2; // rbx
  __int64 result; // rax
  const char *v5; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (HANDLE *)((char *)this + 1144);
  *a2 = 0LL;
  if ( *((_QWORD *)this + 143) && *v2 != (HANDLE)-1LL
    || (result = GetSiHostProcessHandle(0x1000u, (void **)this + 143), (int)result >= 0) )
  {
    if ( QueryProcessCycleTime(*v2, a2) )
      return 0LL;
    else
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0xCB1,
               (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
               v5);
  }
  return result;
}
