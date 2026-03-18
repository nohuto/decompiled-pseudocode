/*
 * XREFs of ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIAEBVMONITOR_REF_ACCESSOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14042F0EC
 * Callers:
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4_INFO@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14031DBE4 (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4.c)
 *     ?_FlushPendingCreation@MONITOR_MGR@@QEAAXAEBVMONITOR_REF_ACCESSOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403E2000 (-_FlushPendingCreation@MONITOR_MGR@@QEAAXAEBVMONITOR_REF_ACCESSOR@@PEAU_DXGK_DISPLAY_SCENARIO_CO.c)
 *     ?_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403E8810 (-_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@PEAU_DXGK_DISPLAY_SCENARIO_.c)
 * Callees:
 *     ??0MONITOR_REF_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z @ 0x14003CDDC (--0MONITOR_REF_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z.c)
 *     ?_LeaveMonitorPendingState@MONITOR_MGR@@QEAAXXZ @ 0x14009886C (-_LeaveMonitorPendingState@MONITOR_MGR@@QEAAXXZ.c)
 *     ?_CreateTtmDevice@DXGMONITOR@@QEAAJXZ @ 0x140191E54 (-_CreateTtmDevice@DXGMONITOR@@QEAAJXZ.c)
 *     ?_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z @ 0x140274514 (-_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z @ 0x1402CBB30 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CC050 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@UEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14031D820 (-_IssueMonitorEvent@MONITOR_MGR@@UEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?_CleanUpFromSimulatedMonitor@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14031E390 (-_CleanUpFromSimulatedMonitor@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403E8810 (-_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@PEAU_DXGK_DISPLAY_SCENARIO_.c)
 */

__int64 __fastcall MONITOR_MGR::_HandleCreateMonitorStep2(
        MONITOR_MGR *this,
        int a2,
        const struct MONITOR_REF_ACCESSOR *a3,
        const struct MONITOR_REF_ACCESSOR *a4,
        GUID *a5)
{
  __int64 v9; // rax
  bool v10; // r12
  int v11; // ecx
  __int64 v12; // rdx
  char *v13; // rbp
  __int64 v14; // rcx
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned int v18; // edx
  int v19; // eax
  __int64 v20; // rdx
  DXGMONITOR *v21; // rcx
  _BYTE v23[8]; // [rsp+30h] [rbp-28h] BYREF
  DXGMONITOR *v24; // [rsp+38h] [rbp-20h]

  if ( a2 == -1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 809;
  }
  v9 = *((_QWORD *)a3 + 1);
  v10 = 0;
  if ( v9 )
  {
    v11 = *(_DWORD *)(v9 + 280);
    if ( *(_DWORD *)(v9 + 180) == a2 )
    {
      v10 = v11 == 5;
    }
    else if ( v11 != 5 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 822;
    }
  }
  v12 = *((_QWORD *)a4 + 1);
  if ( v12 )
  {
    v14 = *((_QWORD *)a3 + 1);
    if ( v14 )
    {
      v15 = 1LL;
      if ( *(_DWORD *)(v14 + 180) == a2 )
        v15 = 3LL;
    }
    else
    {
      v15 = (-(__int64)(*(_DWORD *)(*(_QWORD *)(v12 + 240) + 16LL) != 0) & 3) + 1;
    }
    v13 = (char *)this + 8;
    MONITOR_MGR::_IssueMonitorEvent((__int64)this + 8, *(_DWORD *)(v12 + 180), 0, v15, *(_DWORD *)(v12 + 280), a5);
    v16 = *((_QWORD *)a4 + 1);
    if ( *(_BYTE *)(v16 + 360) )
    {
      *(_BYTE *)(v16 + 360) = 0;
      MONITOR_MGR::_LeaveMonitorPendingState(this);
    }
  }
  else
  {
    v13 = (char *)this + 8;
  }
  v17 = *((_QWORD *)a3 + 1);
  if ( v17 )
  {
    v18 = *(_DWORD *)(v17 + 180);
    if ( v18 != a2 )
      MONITOR_MGR::_IssueMonitorEvent((__int64)v13, v18, 0, 2LL, *(_DWORD *)(v17 + 280), a5);
    if ( *(_DWORD *)(*((_QWORD *)a3 + 1) + 280LL) == 1 )
      v19 = MONITOR_MGR::_DestroyPhysicalMonitor(this, a3, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)a5);
    else
      v19 = MONITOR_MGR::_DestroySimulatedMonitor(this, a3);
    if ( v19 < 0 )
    {
      WdLogSingleEntry2(2LL, *((_QWORD *)a3 + 1), v19);
      WdLogGlobalForLineNumber = 932;
    }
  }
  if ( *((_QWORD *)a4 + 1) )
  {
    MONITOR_REF_ACCESSOR::MONITOR_REF_ACCESSOR((MONITOR_REF_ACCESSOR *)v23, 0LL);
    if ( (int)MONITOR_MGR::_GetMonitorInstance(
                this,
                *(_DWORD *)(*((_QWORD *)a4 + 1) + 180LL),
                0,
                (struct MONITOR_REF_ACCESSOR *)v23) >= 0 )
    {
      v21 = (DXGMONITOR *)*((_QWORD *)a4 + 1);
      if ( v24 == v21 && MONITOR_MGR::_UsingCCDNameForTTM )
        DXGMONITOR::_CreateTtmDevice(v21, v20);
    }
    if ( v10 && (*(_BYTE *)(*((_QWORD *)a4 + 1) + 176LL) & 2) != 0 )
      MONITOR_MGR::_CleanUpFromSimulatedMonitor(this, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)a5);
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v23);
  }
  return 0LL;
}
