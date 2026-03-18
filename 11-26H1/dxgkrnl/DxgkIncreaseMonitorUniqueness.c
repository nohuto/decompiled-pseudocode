/*
 * XREFs of DxgkIncreaseMonitorUniqueness @ 0x1403FA2E8
 * Callers:
 *     DxgkNotifyMonitorChange @ 0x1401933F4 (DxgkNotifyMonitorChange.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@UEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14031D820 (-_IssueMonitorEvent@MONITOR_MGR@@UEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IncreaseMonitorUniquenessAllSessions@DXGSESSIONMGR@@QEAAXXZ @ 0x1403FA380 (-IncreaseMonitorUniquenessAllSessions@DXGSESSIONMGR@@QEAAXXZ.c)
 */

__int64 DxgkIncreaseMonitorUniqueness()
{
  DXGSESSIONMGR *v0; // rcx

  v0 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 123);
  if ( v0 )
  {
    DXGSESSIONMGR::IncreaseMonitorUniquenessAllSessions(v0);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1160;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Cannot find the session manager, status 0x%I64x.",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
}
