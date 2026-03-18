/*
 * XREFs of ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACCESSOR@@AEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403DFB64
 * Callers:
 *     ?MonitorCreateSimulatedMonitor@@YAJPEAXIW4_DMM_VIDPN_MONITOR_TYPE@@PEAUHDXGMONITOR__@@0EPEAPEAU2@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026DF04 (-MonitorCreateSimulatedMonitor@@YAJPEAXIW4_DMM_VIDPN_MONITOR_TYPE@@PEAUHDXGMONITOR__@@0EPEAPEAU2.c)
 *     ?_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140273E20 (-_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?_CreateTtmDevice@DXGMONITOR@@QEAAJXZ @ 0x140191E54 (-_CreateTtmDevice@DXGMONITOR@@QEAAJXZ.c)
 *     ?_AddTargetIntoPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z @ 0x140273BEC (-_AddTargetIntoPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z.c)
 *     ?_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z @ 0x140274514 (-_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACCESSOR@@AEAV3@@Z @ 0x140275070 (-_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACCESSOR.c)
 *     ?_SetAttachedPhysicalMonitor@DXGMONITOR@@QEAAXAEBVMONITOR_REF_ACCESSOR@@@Z @ 0x140277020 (-_SetAttachedPhysicalMonitor@DXGMONITOR@@QEAAXAEBVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z @ 0x1402CBB30 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ @ 0x1402CC034 (-AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CC050 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@UEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14031D820 (-_IssueMonitorEvent@MONITOR_MGR@@UEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?_RemoveMonitorFromList@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z @ 0x14031E1FC (-_RemoveMonitorFromList@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?_GetEmergencySimulatedMonitor@MONITOR_MGR@@QEAAJAEAVMONITOR_REF_ACCESSOR@@@Z @ 0x14031E2D0 (-_GetEmergencySimulatedMonitor@MONITOR_MGR@@QEAAJAEAVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACCESSOR@@AEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403DFFAC (-_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACCESSOR@.c)
 *     ?_InsertMonitorToList@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z @ 0x1403E0320 (-_InsertMonitorToList@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ @ 0x1403E8AB0 (-_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ.c)
 */

__int64 __fastcall MONITOR_MGR::_HandleCreateSimulatedMonitor(
        MONITOR_MGR *a1,
        unsigned int a2,
        unsigned int a3,
        const struct MONITOR_REF_ACCESSOR *a4,
        MONITOR_REF_ACCESSOR *a5,
        GUID *a6)
{
  __int64 v10; // rsi
  int MonitorInstance; // edi
  DXGMONITOR *v12; // rdi
  int v13; // r14d
  int EmergencySimulatedMonitor; // eax
  void **v15; // r9
  DXGMONITOR *v16; // rdi
  DXGMONITOR *v17; // r13
  char v18; // dl
  char v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  void *v23; // [rsp+30h] [rbp-30h] BYREF
  DXGMONITOR *v24; // [rsp+38h] [rbp-28h]
  void *v25; // [rsp+40h] [rbp-20h] BYREF
  DXGMONITOR *v26; // [rsp+48h] [rbp-18h]
  void *v27; // [rsp+50h] [rbp-10h] BYREF
  __int64 v28; // [rsp+58h] [rbp-8h]
  void *retaddr; // [rsp+88h] [rbp+28h]

  if ( a2 == -1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1282;
  }
  if ( a3 == 1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1283;
  }
  v27 = retaddr;
  v10 = 0LL;
  v28 = 0LL;
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v27);
  v23 = retaddr;
  v24 = 0LL;
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v23);
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(a1, a2, 0, (struct MONITOR_REF_ACCESSOR *)&v23);
  if ( MonitorInstance < 0 )
  {
    if ( v24 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1339;
    }
    if ( MonitorInstance != -1073741275 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1340;
    }
    EmergencySimulatedMonitor = MONITOR_MGR::_GetEmergencySimulatedMonitor(a1, (struct MONITOR_REF_ACCESSOR *)&v27);
    if ( EmergencySimulatedMonitor < 0 )
    {
      if ( EmergencySimulatedMonitor != -1073741275 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1354;
      }
      v10 = v28;
      if ( v28 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1355;
      }
    }
    else
    {
      v10 = v28;
      if ( !v28 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1350;
      }
    }
  }
  else
  {
    v12 = v24;
    if ( !v24 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1297;
    }
    if ( a3 == 5 )
    {
      v13 = -1071774323;
      goto LABEL_47;
    }
    if ( *((_DWORD *)v12 + 70) != 1 )
    {
      v13 = MONITOR_MGR::_MigrateSimulatedMonitor(a1, a2, a3, a4, (DXGMONITOR **)a5);
      if ( v13 >= 0 )
      {
        if ( !*((_QWORD *)a5 + 1) )
        {
          WdLogSingleEntry0(1LL);
          WdLogGlobalForLineNumber = 1316;
        }
        MONITOR_MGR::_IssueMonitorEvent((__int64)a1 + 8, a2, 0, 3LL, a3, a6);
      }
      goto LABEL_47;
    }
    MONITOR_MGR::_RemoveMonitorFromList(a1, (const struct MONITOR_REF_ACCESSOR *)&v23);
  }
  v25 = retaddr;
  v26 = 0LL;
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v25);
  v15 = &v23;
  if ( *((_QWORD *)a4 + 1) )
    v15 = (void **)a4;
  v13 = MONITOR_MGR::_CreateSimulatedMonitor(a1, a2, a3, v15, &v25, a6);
  if ( v13 >= 0 )
  {
    v16 = v26;
    if ( !v26 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1374;
    }
    v17 = v24;
    if ( v24 )
    {
      if ( *((_DWORD *)v24 + 70) != 1 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 1378;
      }
      v18 = *((_BYTE *)v16 + 176) ^ (*((_BYTE *)v17 + 176) ^ *((_BYTE *)v16 + 176)) & 2;
      *((_BYTE *)v16 + 176) = v18;
      v19 = v18 ^ (*((_BYTE *)v17 + 176) ^ v18) & 4;
      *((_BYTE *)v16 + 176) = v19;
      *((_BYTE *)v16 + 176) = v19 ^ (*((_BYTE *)v17 + 176) ^ v19) & 0x20;
      DXGMONITOR::_SetAttachedPhysicalMonitor(v16, (const struct MONITOR_REF_ACCESSOR *)&v23);
      DXGMONITOR::_DestroyTtmDevice(v17);
    }
    if ( v10 )
      MONITOR_MGR::_RemoveMonitorFromList(a1, (const struct MONITOR_REF_ACCESSOR *)&v27);
    MONITOR_MGR::_InsertMonitorToList(a1, (const struct MONITOR_REF_ACCESSOR *)&v25);
    if ( a3 == 2 )
      v13 = MONITOR_MGR::_AddTargetIntoPersistencyRegistry(a1, a2);
    if ( *((_QWORD *)v16 + 37) )
      v20 = *(_DWORD *)(*((_QWORD *)v16 + 30) + 16LL) != 0 ? 4LL : 1LL;
    else
      v20 = 3LL;
    MONITOR_MGR::_IssueMonitorEvent((__int64)a1 + 8, *((_DWORD *)v16 + 45), 0, v20, *((_DWORD *)v16 + 70), a6);
    if ( v10 )
    {
      MONITOR_MGR::_IssueMonitorEvent((__int64)a1 + 8, *(_DWORD *)(v10 + 180), 0, 2LL, *(_DWORD *)(v10 + 280), a6);
      MONITOR_MGR::_DestroySimulatedMonitor(a1, (const struct MONITOR_REF_ACCESSOR *)&v27);
    }
    DXGMONITOR::_CreateTtmDevice(v16, v21);
    MONITOR_REF_ACCESSOR::Release(a5);
    *(_QWORD *)a5 = v25;
    *((_QWORD *)a5 + 1) = v16;
    v26 = 0LL;
  }
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v25);
LABEL_47:
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v23);
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v27);
  return (unsigned int)v13;
}
