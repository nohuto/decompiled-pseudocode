/*
 * XREFs of ?MonitorAdapterPowerChange@@YAJPEAXEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14030CD68
 * Callers:
 *     DpiPowerArbiterThread @ 0x14030C2C0 (DpiPowerArbiterThread.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400319C0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402CDC34 (-_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DIS.c)
 */

__int64 __fastcall MonitorAdapterPowerChange(PERESOURCE *this, __int64 a2, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  __int64 result; // rax
  __int64 v6; // rcx

  if ( (_BYTE)a2 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = this;
    WdLogGlobalForLineNumber = 1360;
  }
  else
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = this;
    WdLogGlobalForLineNumber = 1364;
  }
  if ( !this )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1383;
  }
  result = (__int64)this[395];
  if ( result )
  {
    v6 = *(_QWORD *)(result + 112);
    if ( v6 )
      return MONITOR_MGR::_DestroyAllSameTypeSimulatedMonitor(v6, 3, 1, (__int64)a3);
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1403;
    return 3221225485LL;
  }
  return result;
}
