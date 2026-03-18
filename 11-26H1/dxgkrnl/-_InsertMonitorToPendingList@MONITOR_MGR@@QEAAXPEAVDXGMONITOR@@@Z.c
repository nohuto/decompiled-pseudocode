/*
 * XREFs of ?_InsertMonitorToPendingList@MONITOR_MGR@@QEAAXPEAVDXGMONITOR@@@Z @ 0x14006ABF0
 * Callers:
 *     ?_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z @ 0x140274514 (-_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403E8810 (-_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@PEAU_DXGK_DISPLAY_SCENARIO_.c)
 * Callees:
 *     ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x1400383FC (--0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z.c)
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x14003C9DC (--1MUTEX_LOCK@@QEAA@XZ.c)
 */

void __fastcall MONITOR_MGR::_InsertMonitorToPendingList(MONITOR_MGR *this, struct DXGMONITOR *a2)
{
  char **v4; // rax
  char *v5; // rdi
  char *v6; // rbx
  char v7; // [rsp+30h] [rbp+8h] BYREF

  MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v7, (MONITOR_MGR *)((char *)this + 104));
  v4 = (char **)*((_QWORD *)this + 8);
  v5 = (char *)this + 56;
  v6 = (char *)a2 + 152;
  if ( *v4 != v5 )
    __fastfail(3u);
  *(_QWORD *)v6 = v5;
  *((_QWORD *)v6 + 1) = v4;
  *v4 = v6;
  *((_QWORD *)v5 + 1) = v6;
  MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)&v7);
}
