/*
 * XREFs of ?_CleanUpFromSimulatedMonitor@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14031E390
 * Callers:
 *     ?MonitorCleanUpFromSimulatedMonitor@@YAXPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14031E7A4 (-MonitorCleanUpFromSimulatedMonitor@@YAXPEAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIAEBVMONITOR_REF_ACCESSOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14042F0EC (-_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIAEBVMONITOR_REF_ACCESSOR@@0PEAU_DXGK_DISPLAY_SCENA.c)
 * Callees:
 *     ?AcquireShared@MonitorResourceLock@@QEAAXXZ @ 0x140035838 (-AcquireShared@MonitorResourceLock@@QEAAXXZ.c)
 *     ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x1400383FC (--0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z.c)
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x14003C9DC (--1MUTEX_LOCK@@QEAA@XZ.c)
 *     ?_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@PEA_N@Z @ 0x14031CED4 (-_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 */

void __fastcall MONITOR_MGR::_CleanUpFromSimulatedMonitor(MONITOR_MGR *this, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a2)
{
  int v4; // ebp
  MONITOR_MGR *v5; // rax
  char *v6; // rdi
  __int64 v7; // r8
  int v8; // edx
  MONITOR_MGR *v9; // rax
  char v10; // [rsp+70h] [rbp+8h] BYREF

  v4 = 0;
  MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v10, (MONITOR_MGR *)((char *)this + 104));
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
  MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)&v10);
  if ( !v6 )
    goto LABEL_4;
  do
  {
    MonitorResourceLock::AcquireShared((PERESOURCE)(v6 + 40));
    v8 = v4 + 1;
    if ( *((_DWORD *)v6 + 71) != 5 )
      v8 = v4;
    v4 = v8;
    ExReleaseResourceLite((PERESOURCE)(v6 + 40));
    KeLeaveCriticalRegion();
    MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v10, (MONITOR_MGR *)((char *)this + 104));
    v9 = (MONITOR_MGR *)*((_QWORD *)v6 + 19);
    if ( v9 == (MONITOR_MGR *)((char *)this + 40) )
    {
      v6 = 0LL;
    }
    else
    {
      v6 = (char *)v9 - 152;
      if ( !v9 )
        v6 = 0LL;
    }
    MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)&v10);
  }
  while ( v6 );
  if ( !v4 )
  {
LABEL_4:
    LOBYTE(v7) = 1;
    MONITOR_MGR::_EnableDisableMonitor((__int64)this, 0xFFFFFFFFLL, v7, 8LL, 0LL, (__int64)a2, 0LL);
  }
}
