/*
 * XREFs of ?MonitorInitializeAdapterDone@@YAJPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026F3D4
 * Callers:
 *     DpiFdoStartAdapter @ 0x140245F9C (DpiFdoStartAdapter.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400319C0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_OnAdapterInitializationDone@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402751FC (-_OnAdapterInitializationDone@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 */

__int64 __fastcall MonitorInitializeAdapterDone(PERESOURCE *this, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  __int64 result; // rax
  MONITOR_MGR *v5; // rcx

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = this;
  WdLogGlobalForLineNumber = 374;
  if ( !this )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 392;
  }
  result = (__int64)this[395];
  if ( result )
  {
    v5 = *(MONITOR_MGR **)(result + 112);
    if ( !v5 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 412;
      return 3221225485LL;
    }
    return MONITOR_MGR::_OnAdapterInitializationDone(v5, a2);
  }
  return result;
}
