/*
 * XREFs of xwcschr @ 0x140426A30
 * Callers:
 *     ?_ProcessMonitorResolutionKey@MonitorModes@DxgMonitor@@AEAAJPEAXPEAU_KEY_BASIC_INFORMATION@@@Z @ 0x1403E398C (-_ProcessMonitorResolutionKey@MonitorModes@DxgMonitor@@AEAAJPEAXPEAU_KEY_BASIC_INFORMATION@@@Z.c)
 *     ParseModeCap @ 0x140415F80 (ParseModeCap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall xwcschr(unsigned __int64 a1, __int16 a2)
{
  while ( *(_WORD *)a1 && *(_WORD *)a1 != a2 )
    a1 += 2LL;
  return a1 & -(__int64)(*(_WORD *)a1 != 0);
}
