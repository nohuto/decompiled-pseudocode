/*
 * XREFs of ?_RemoveMonitorFromList@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z @ 0x14031E1FC
 * Callers:
 *     ?_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140274CF8 (-_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4_INFO@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14031DBE4 (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACCESSOR@@AEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403DFB64 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACC.c)
 *     ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEAEAVMONITOR_REF_ACCESSOR@@PEAU_DXGK_CONNECTION_USB4_INFO@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403E0E00 (-_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEAEAVMONITOR_REF_ACCESSOR@@PEAU_.c)
 *     ?_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403E8508 (-_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x1400383FC (--0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z.c)
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x14003C9DC (--1MUTEX_LOCK@@QEAA@XZ.c)
 */

__int64 __fastcall MONITOR_MGR::_RemoveMonitorFromList(MONITOR_MGR *this, const struct MONITOR_REF_ACCESSOR *a2)
{
  __int64 v4; // rdx
  _QWORD **v5; // rcx
  _QWORD *v6; // rax
  _QWORD *v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  _QWORD *v10; // rax
  char v12; // [rsp+30h] [rbp+8h] BYREF

  if ( !*((_QWORD *)a2 + 1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2526;
  }
  MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v12, (MONITOR_MGR *)((char *)this + 104));
  v4 = *((_QWORD *)a2 + 1);
  v5 = (_QWORD **)((char *)this + 40);
  if ( !v4 || (v6 = *v5, *v5 == v5) )
  {
LABEL_11:
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2535;
  }
  else
  {
    v7 = (_QWORD *)(v4 + 152);
    while ( v6 != v7 )
    {
      if ( v5 == v6 )
        goto LABEL_11;
      v6 = (_QWORD *)*v6;
    }
  }
  v8 = *((_QWORD *)a2 + 1) + 152LL;
  v9 = *(_QWORD *)v8;
  if ( *(_QWORD *)(*(_QWORD *)v8 + 8LL) != v8 || (v10 = *(_QWORD **)(*((_QWORD *)a2 + 1) + 160LL), *v10 != v8) )
    __fastfail(3u);
  *v10 = v9;
  *(_QWORD *)(v9 + 8) = v10;
  --*((_DWORD *)this + 8);
  MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)&v12);
  return 0LL;
}
