/*
 * XREFs of ?_GetUsb4TargetList@MONITOR_MGR@@QEAAJPEAK0@Z @ 0x140274674
 * Callers:
 *     ?MonitorEnableDisableMonitor@@YAJPEAXKPEAKEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026E6F0 (-MonitorEnableDisableMonitor@@YAJPEAXKPEAKEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 * Callees:
 *     ??0?$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@PEAVDXGMONITOR@@_N@Z @ 0x1400355A4 (--0-$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@PEAVDXGMONITOR@@_N@Z.c)
 *     ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x1400383FC (--0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z.c)
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x14003C9DC (--1MUTEX_LOCK@@QEAA@XZ.c)
 *     ??1?$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@XZ @ 0x14003CD2C (--1-$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@XZ.c)
 */

__int64 __fastcall MONITOR_MGR::_GetUsb4TargetList(MONITOR_MGR *this, unsigned int *a2, unsigned int *a3)
{
  unsigned int v3; // r15d
  struct DXGFASTMUTEX *v4; // rbp
  _QWORD *v6; // r14
  _QWORD *v8; // rax
  __int64 v9; // rbx
  MUTEX_LOCK *i; // rcx
  unsigned int v11; // ecx
  _QWORD *v12; // rax
  __int64 v14; // [rsp+50h] [rbp+8h] BYREF
  char v15; // [rsp+58h] [rbp+10h] BYREF

  v3 = *a2;
  v4 = (MONITOR_MGR *)((char *)this + 104);
  v6 = (_QWORD *)((char *)this + 40);
  *a2 = 0;
  MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v14, (MONITOR_MGR *)((char *)this + 104));
  v8 = (_QWORD *)*v6;
  if ( (_QWORD *)*v6 == v6 )
  {
    v9 = 0LL;
  }
  else
  {
    v9 = (__int64)(v8 - 19);
    if ( !v8 )
      v9 = 0LL;
  }
  for ( i = (MUTEX_LOCK *)&v14; ; i = (MUTEX_LOCK *)&v15 )
  {
    MUTEX_LOCK::~MUTEX_LOCK(i);
    if ( !v9 )
      break;
    RESOURCE_LOCK<DXGMONITOR>::RESOURCE_LOCK<DXGMONITOR>(&v14, v9, 0);
    if ( *(_BYTE *)(*(_QWORD *)(v9 + 264) + 8LL) )
    {
      v11 = *a2;
      if ( *a2 >= v3 )
      {
        RESOURCE_LOCK<DXGMONITOR>::~RESOURCE_LOCK<DXGMONITOR>(&v14);
        return 3221225507LL;
      }
      *a3 = *(_DWORD *)(v9 + 180);
      *a2 = v11 + 1;
      ++a3;
    }
    RESOURCE_LOCK<DXGMONITOR>::~RESOURCE_LOCK<DXGMONITOR>(&v14);
    MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v15, v4);
    v12 = *(_QWORD **)(v9 + 152);
    if ( v12 == v6 )
    {
      v9 = 0LL;
    }
    else
    {
      v9 = (__int64)(v12 - 19);
      if ( !v12 )
        v9 = 0LL;
    }
  }
  return 0LL;
}
