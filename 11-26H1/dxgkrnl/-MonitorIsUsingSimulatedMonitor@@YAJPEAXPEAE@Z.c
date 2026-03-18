/*
 * XREFs of ?MonitorIsUsingSimulatedMonitor@@YAJPEAXPEAE@Z @ 0x1403825FC
 * Callers:
 *     ?CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_DMM_COMMITVIDPNREQUEST_DIAGINFO@@PEAE@Z @ 0x14038395C (-CommitVidPn@VIDPN_MGR@@QEAAJPEBVDMMVIDPN@@QEAXIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@EEAEBU_D.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x140031B50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_IsUsingSimulatedMonitor@MONITOR_MGR@@QEAAEXZ @ 0x1403826D4 (-_IsUsingSimulatedMonitor@MONITOR_MGR@@QEAAEXZ.c)
 */

__int64 __fastcall MonitorIsUsingSimulatedMonitor(DXGADAPTER *this, unsigned __int8 *a2)
{
  __int64 v4; // rax
  MONITOR_MGR *v5; // rcx

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = this;
  WdLogGlobalForLineNumber = 443;
  if ( this && a2 )
  {
    *a2 = 0;
    if ( !DXGADAPTER::IsCoreResourceSharedOwner(this) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 463;
    }
    v4 = *((_QWORD *)this + 395);
    if ( v4 )
    {
      v5 = *(MONITOR_MGR **)(v4 + 112);
      if ( v5 )
      {
        *a2 = MONITOR_MGR::_IsUsingSimulatedMonitor(v5);
        return 0LL;
      }
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 480;
    }
    else
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 467;
    }
  }
  return 3221225485LL;
}
