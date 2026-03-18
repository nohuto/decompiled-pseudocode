/*
 * XREFs of ?MonitorCleanUpFromSimulatedMonitor@@YAXPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14031E7A4
 * Callers:
 *     ?CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x14031F060 (-CompleteTopologyTransitionCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400319C0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_CleanUpFromSimulatedMonitor@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14031E390 (-_CleanUpFromSimulatedMonitor@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 */

void __fastcall MonitorCleanUpFromSimulatedMonitor(PERESOURCE *a1, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  PERESOURCE v4; // rax
  MONITOR_MGR *Blink; // rcx

  if ( a1 )
  {
    if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(a1) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 5139;
    }
    v4 = a1[395];
    if ( v4 )
    {
      Blink = (MONITOR_MGR *)v4[1].SystemResourcesList.Blink;
      if ( Blink )
      {
        MONITOR_MGR::_CleanUpFromSimulatedMonitor(Blink, a2);
      }
      else
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 5155;
      }
    }
    else
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 5143;
    }
  }
}
