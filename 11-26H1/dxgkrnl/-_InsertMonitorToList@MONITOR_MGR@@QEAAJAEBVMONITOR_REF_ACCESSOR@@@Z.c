/*
 * XREFs of ?_InsertMonitorToList@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z @ 0x1403E0320
 * Callers:
 *     ?_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140274CF8 (-_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4_INFO@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14031DBE4 (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACCESSOR@@AEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403DFB64 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACC.c)
 *     ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEAEAVMONITOR_REF_ACCESSOR@@PEAU_DXGK_CONNECTION_USB4_INFO@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403E0E00 (-_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEAEAVMONITOR_REF_ACCESSOR@@PEAU_.c)
 * Callees:
 *     ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x1400383FC (--0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z.c)
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x14003C9DC (--1MUTEX_LOCK@@QEAA@XZ.c)
 */

__int64 __fastcall MONITOR_MGR::_InsertMonitorToList(MONITOR_MGR *this, const struct MONITOR_REF_ACCESSOR *a2)
{
  char *v4; // rcx
  MONITOR_MGR *v5; // rdx
  char *v6; // rax
  __int64 v7; // r8
  char **v8; // rdx
  char *v9; // rax
  char *v10; // rdx
  char v12; // [rsp+30h] [rbp+8h] BYREF

  if ( !*((_QWORD *)a2 + 1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2469;
  }
  MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v12, (MONITOR_MGR *)((char *)this + 104));
  v4 = (char *)this + 40;
  v5 = (MONITOR_MGR *)*((_QWORD *)this + 5);
  if ( v5 == (MONITOR_MGR *)((char *)this + 40) )
  {
    v6 = 0LL;
  }
  else
  {
    v6 = (char *)v5 - 152;
    if ( !v5 )
      v6 = 0LL;
  }
  v7 = *((_QWORD *)a2 + 1);
  while ( v6 )
  {
    if ( *(_DWORD *)(v7 + 180) == *((_DWORD *)v6 + 45) )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 2484;
      MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)&v12);
      return 3223192344LL;
    }
    v10 = (char *)*((_QWORD *)v6 + 19);
    if ( v10 == v4 )
    {
      v6 = 0LL;
    }
    else
    {
      v6 = v10 - 152;
      if ( !v10 )
        v6 = 0LL;
    }
  }
  v8 = (char **)*((_QWORD *)this + 6);
  v9 = (char *)(v7 + 152);
  if ( *v8 != v4 )
    __fastfail(3u);
  *(_QWORD *)v9 = v4;
  *(_QWORD *)(v7 + 160) = v8;
  *v8 = v9;
  *((_QWORD *)this + 6) = v9;
  ++*((_DWORD *)this + 8);
  MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)&v12);
  return 0LL;
}
