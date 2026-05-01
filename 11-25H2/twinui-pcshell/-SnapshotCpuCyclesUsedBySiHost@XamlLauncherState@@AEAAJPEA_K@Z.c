/*
 * XREFs of ?SnapshotCpuCyclesUsedBySiHost@XamlLauncherState@@AEAAJPEA_K@Z @ 0x18022D424
 * Callers:
 *     ?StartTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ @ 0x1801C9424 (-StartTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ.c)
 *     ?StopTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ @ 0x1804567C4 (-StopTrackingCpuUsageOfCriticalProcesses@XamlLauncherState@@AEAAXXZ.c)
 * Callees:
 *     ?GetSiHostProcessHandle@@YAJKPEAPEAX@Z @ 0x1800D15A4 (-GetSiHostProcessHandle@@YAJKPEAPEAX@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180290FC8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall XamlLauncherState::SnapshotCpuCyclesUsedBySiHost(XamlLauncherState *this, unsigned __int64 *a2)
{
  HANDLE *v2; // rbx
  __int64 result; // rax
  const char *v5; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *a2 = 0LL;
  v2 = (HANDLE *)((char *)this + 1144);
  if ( ((*((_QWORD *)this + 143) + 1LL) & 0xFFFFFFFFFFFFFFFEuLL) != 0
    || (result = GetSiHostProcessHandle(0x1000u, (void **)this + 143), (int)result >= 0) )
  {
    if ( QueryProcessCycleTime(*v2, a2) )
      return 0LL;
    else
      return wil::details::in1diag3::Return_GetLastError(
               retaddr,
               (void *)0xC85,
               (unsigned int)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
               v5);
  }
  return result;
}
