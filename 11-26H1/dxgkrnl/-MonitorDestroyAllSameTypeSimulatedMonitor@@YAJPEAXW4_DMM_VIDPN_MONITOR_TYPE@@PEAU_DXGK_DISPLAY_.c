/*
 * XREFs of ?MonitorDestroyAllSameTypeSimulatedMonitor@@YAJPEAXW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1403F17B0
 * Callers:
 *     ?DisplayConfigDestroySimulatedMonitors@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1403F1680 (-DisplayConfigDestroySimulatedMonitors@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400319C0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1402CDC34 (-_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DIS.c)
 */

__int64 __fastcall MonitorDestroyAllSameTypeSimulatedMonitor(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v5; // rdi
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // rcx

  v5 = (int)a2;
  v8 = WdLogNewEntry5_WdTrace(a1, a2);
  *(_QWORD *)(v8 + 24) = a1;
  *(_QWORD *)(v8 + 32) = v5;
  WdLogGlobalForLineNumber = 1249;
  if ( !a1 || (_DWORD)v5 == 1 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner((PERESOURCE *)a1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1267;
  }
  result = *(_QWORD *)(a1 + 3160);
  if ( result )
  {
    v10 = *(_QWORD *)(result + 112);
    if ( v10 )
      return MONITOR_MGR::_DestroyAllSameTypeSimulatedMonitor(v10, v5, a4, a3);
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1283;
    return 3221225485LL;
  }
  return result;
}
