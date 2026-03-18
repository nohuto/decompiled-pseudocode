/*
 * XREFs of ?_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACCESSOR@@AEAV3@@Z @ 0x140275070
 * Callers:
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACCESSOR@@AEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403DFB64 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACC.c)
 * Callees:
 *     ?_CopyMonitorInformation@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z @ 0x14018D950 (-_CopyMonitorInformation@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?_AddTargetIntoPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z @ 0x140273BEC (-_AddTargetIntoPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z.c)
 *     ?_DeleteTargetFromPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z @ 0x1402743DC (-_DeleteTargetFromPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z @ 0x1402CBB30 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_MigrateSimulatedMonitor(
        MONITOR_MGR *a1,
        unsigned int a2,
        int a3,
        const struct MONITOR_REF_ACCESSOR *a4,
        DXGMONITOR **a5)
{
  __int64 v5; // rbp
  __int64 v7; // rsi
  int MonitorInstance; // ebx
  int v10; // ecx
  DXGMONITOR *v11; // rax

  v5 = a3;
  v7 = a2;
  if ( a2 == -1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2379;
  }
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(a1, v7, 0, (struct MONITOR_REF_ACCESSOR *)a5);
  if ( MonitorInstance >= 0 )
  {
    if ( !a5[1] )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 2390;
    }
    v10 = *((_DWORD *)a5[1] + 70);
    if ( v10 == 1 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 2433;
      return (unsigned int)-1073741637;
    }
    else
    {
      if ( v10 == (_DWORD)v5 )
      {
        WdLogSingleEntry2(7LL, v7, v5);
        MonitorInstance = 0;
        WdLogGlobalForLineNumber = 2396;
      }
      else
      {
        WdLogSingleEntry2(7LL, v7, v5);
        v11 = a5[1];
        WdLogGlobalForLineNumber = 2402;
        if ( *((_DWORD *)v11 + 70) == 2 )
          MONITOR_MGR::_DeleteTargetFromPersistencyRegistry(a1, (unsigned int)v7);
        *((_DWORD *)a5[1] + 70) = v5;
        if ( (_DWORD)v5 == 2 )
          MONITOR_MGR::_AddTargetIntoPersistencyRegistry(a1, (unsigned int)v7);
      }
      if ( *((_QWORD *)a4 + 1) )
        MonitorInstance = DXGMONITOR::_CopyMonitorInformation(a5[1], a4);
      if ( MonitorInstance >= 0 && !a5[1] )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 2439;
      }
    }
  }
  return (unsigned int)MonitorInstance;
}
