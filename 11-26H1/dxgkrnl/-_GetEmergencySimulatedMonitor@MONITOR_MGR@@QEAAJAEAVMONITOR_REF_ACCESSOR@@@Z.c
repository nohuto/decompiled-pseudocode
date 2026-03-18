/*
 * XREFs of ?_GetEmergencySimulatedMonitor@MONITOR_MGR@@QEAAJAEAVMONITOR_REF_ACCESSOR@@@Z @ 0x14031E2D0
 * Callers:
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4_INFO@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14031DBE4 (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_CONNECTION_USB4.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACCESSOR@@AEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403DFB64 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@AEBVMONITOR_REF_ACC.c)
 * Callees:
 *     ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x1400383FC (--0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z.c)
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x14003C9DC (--1MUTEX_LOCK@@QEAA@XZ.c)
 *     ?Assign@MONITOR_REF_ACCESSOR@@QEAAXPEAVDXGMONITOR@@@Z @ 0x140042284 (-Assign@MONITOR_REF_ACCESSOR@@QEAAXPEAVDXGMONITOR@@@Z.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CC050 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 */

__int64 __fastcall MONITOR_MGR::_GetEmergencySimulatedMonitor(MONITOR_MGR *this, struct MONITOR_REF_ACCESSOR *a2)
{
  char *v4; // rcx
  unsigned int v5; // edi
  char *i; // rax
  char *v7; // rbx
  char v9; // [rsp+30h] [rbp+8h] BYREF

  MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v9, (MONITOR_MGR *)((char *)this + 104));
  v4 = (char *)this + 40;
  v5 = 0;
  for ( i = (char *)*((_QWORD *)this + 5); ; i = (char *)*((_QWORD *)v7 + 19) )
  {
    if ( i == v4 )
    {
      v7 = 0LL;
    }
    else
    {
      v7 = i - 152;
      if ( !i )
        v7 = 0LL;
    }
    if ( !v7 )
    {
      MONITOR_REF_ACCESSOR::Release(a2);
      v5 = -1073741275;
      goto LABEL_9;
    }
    if ( *((_DWORD *)v7 + 70) == 5 )
      break;
  }
  if ( *((_QWORD *)v7 + 37) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2609;
  }
  MONITOR_REF_ACCESSOR::Assign(a2, (struct DXGMONITOR *)v7);
LABEL_9:
  MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)&v9);
  return v5;
}
