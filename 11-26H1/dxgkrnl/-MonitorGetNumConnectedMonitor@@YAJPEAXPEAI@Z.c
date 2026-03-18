/*
 * XREFs of ?MonitorGetNumConnectedMonitor@@YAJPEAXPEAI@Z @ 0x140193504
 * Callers:
 *     ?GetNumTargetsWithMonitorObjects@VIDPN_MGR@@QEBA_KXZ @ 0x14006C758 (-GetNumTargetsWithMonitorObjects@VIDPN_MGR@@QEBA_KXZ.c)
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE@Z @ 0x14038395C (-CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_D.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MonitorGetNumConnectedMonitor(_QWORD *a1, unsigned int *a2)
{
  __int64 v4; // rax
  __int64 v6; // rax

  *(_QWORD *)(WdLogNewEntry5_WdTrace(a1, a2) + 24) = a1;
  WdLogGlobalForLineNumber = 514;
  if ( !a1 || !a2 )
    return 3221225485LL;
  v4 = a1[395];
  if ( !v4 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 536;
    return 3221225485LL;
  }
  v6 = *(_QWORD *)(v4 + 112);
  if ( !v6 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 549;
    return 3221225485LL;
  }
  *a2 = *(_DWORD *)(v6 + 32);
  return 0LL;
}
