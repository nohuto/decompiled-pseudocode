/*
 * XREFs of ?_ReleaseAllPoFxResources@MONITOR_MGR@@QEAAXXZ @ 0x140275744
 * Callers:
 *     ?PrepareToRemove@DXGADAPTER@@QEAAXXZ @ 0x14019D2F4 (-PrepareToRemove@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ??0?$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@PEAVDXGMONITOR@@_N@Z @ 0x1400355A4 (--0-$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@PEAVDXGMONITOR@@_N@Z.c)
 *     ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x1400383FC (--0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z.c)
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x14003C9DC (--1MUTEX_LOCK@@QEAA@XZ.c)
 *     ??1?$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@XZ @ 0x14003CD2C (--1-$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@XZ.c)
 *     ??0MONITOR_REF_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z @ 0x14003CDDC (--0MONITOR_REF_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z.c)
 *     ?Assign@MONITOR_REF_ACCESSOR@@QEAAXPEAVDXGMONITOR@@@Z @ 0x140042284 (-Assign@MONITOR_REF_ACCESSOR@@QEAAXPEAVDXGMONITOR@@@Z.c)
 *     ?DestroyPowerConnectionWithUsb4Stack@MonitorUsb4State@DxgMonitor@@AEAAX_N@Z @ 0x140277E80 (-DestroyPowerConnectionWithUsb4Stack@MonitorUsb4State@DxgMonitor@@AEAAX_N@Z.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CC050 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 */

void __fastcall MONITOR_MGR::_ReleaseAllPoFxResources(MONITOR_MGR *this)
{
  _QWORD *v2; // rsi
  __int64 v3; // rax
  struct DXGMONITOR *v4; // rdx
  MUTEX_LOCK *i; // rcx
  __int64 v6; // rdi
  DxgMonitor::MonitorUsb4State *v7; // rcx
  _QWORD *v8; // rax
  struct DXGMONITOR *v9; // rdx
  _BYTE v10[8]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+28h] [rbp-20h]
  __int64 v12; // [rsp+50h] [rbp+8h] BYREF
  char v13; // [rsp+58h] [rbp+10h] BYREF

  MONITOR_REF_ACCESSOR::MONITOR_REF_ACCESSOR((MONITOR_REF_ACCESSOR *)v10, 0LL);
  MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v12, (MONITOR_MGR *)((char *)this + 104));
  v2 = (_QWORD *)((char *)this + 40);
  v3 = *((_QWORD *)this + 5);
  if ( (_QWORD *)*v2 == v2 )
  {
    v4 = 0LL;
  }
  else
  {
    v4 = (struct DXGMONITOR *)(v3 - 152);
    if ( !v3 )
      v4 = 0LL;
  }
  MONITOR_REF_ACCESSOR::Assign((MONITOR_REF_ACCESSOR *)v10, v4);
  for ( i = (MUTEX_LOCK *)&v12; ; i = (MUTEX_LOCK *)&v13 )
  {
    MUTEX_LOCK::~MUTEX_LOCK(i);
    v6 = v11;
    if ( !v11 )
      break;
    RESOURCE_LOCK<DXGMONITOR>::RESOURCE_LOCK<DXGMONITOR>(&v12, v11, 1);
    v7 = *(DxgMonitor::MonitorUsb4State **)(v6 + 264);
    if ( *((_BYTE *)v7 + 8) )
      DxgMonitor::MonitorUsb4State::DestroyPowerConnectionWithUsb4Stack(v7, 0);
    RESOURCE_LOCK<DXGMONITOR>::~RESOURCE_LOCK<DXGMONITOR>(&v12);
    MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v13, (MONITOR_MGR *)((char *)this + 104));
    v8 = *(_QWORD **)(v6 + 152);
    if ( v8 == v2 )
    {
      v9 = 0LL;
    }
    else
    {
      v9 = (struct DXGMONITOR *)(v8 - 19);
      if ( !v8 )
        v9 = 0LL;
    }
    MONITOR_REF_ACCESSOR::Assign((MONITOR_REF_ACCESSOR *)v10, v9);
  }
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v10);
}
