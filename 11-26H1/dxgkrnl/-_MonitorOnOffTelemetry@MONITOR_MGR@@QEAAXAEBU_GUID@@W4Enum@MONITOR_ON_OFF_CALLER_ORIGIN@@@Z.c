/*
 * XREFs of ?_MonitorOnOffTelemetry@MONITOR_MGR@@QEAAXAEBU_GUID@@W4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z @ 0x1403E8C90
 * Callers:
 *     ?LogMonitorOnOffTelemetry@@YAJAEBU_GUID@@PEAVDXGADAPTER@@W4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z @ 0x1403E8AF4 (-LogMonitorOnOffTelemetry@@YAJAEBU_GUID@@PEAVDXGADAPTER@@W4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z.c)
 * Callees:
 *     ?AcquireExclusive@MonitorResourceLock@@QEAAXXZ @ 0x14003586C (-AcquireExclusive@MonitorResourceLock@@QEAAXXZ.c)
 *     ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x1400383FC (--0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z.c)
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x14003C9DC (--1MUTEX_LOCK@@QEAA@XZ.c)
 *     ?AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ @ 0x1402CC034 (-AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CC050 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?LogMonitorObjectOnOffState@DXGMONITOR@@QEAAXAEBU_GUID@@IW4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z @ 0x1403E8EAC (-LogMonitorObjectOnOffState@DXGMONITOR@@QEAAXAEBU_GUID@@IW4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z.c)
 */

void __fastcall MONITOR_MGR::_MonitorOnOffTelemetry(__int64 a1, __int64 a2, char a3)
{
  struct DXGFASTMUTEX *v6; // r15
  _QWORD **v7; // r14
  __int64 v8; // rax
  _QWORD **v9; // rbx
  __int64 v10; // rax
  __int64 v11; // r9
  void *v12; // rsi
  _QWORD **v13; // rdi
  _QWORD *v14; // rax
  _QWORD *v15; // rbx
  _QWORD **v16; // rax
  void *v17; // [rsp+20h] [rbp-40h] BYREF
  _QWORD **v18; // [rsp+28h] [rbp-38h]
  void *v19; // [rsp+30h] [rbp-30h] BYREF
  _QWORD **v20; // [rsp+38h] [rbp-28h]
  _QWORD **v21; // [rsp+40h] [rbp-20h]
  _QWORD v22[3]; // [rsp+48h] [rbp-18h] BYREF
  void *retaddr; // [rsp+88h] [rbp+28h]
  char v24; // [rsp+90h] [rbp+30h] BYREF

  v17 = retaddr;
  v18 = 0LL;
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v17);
  v6 = (struct DXGFASTMUTEX *)(a1 + 104);
  MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v24, (struct DXGFASTMUTEX *)(a1 + 104));
  v7 = (_QWORD **)(a1 + 40);
  v8 = *(_QWORD *)(a1 + 40);
  if ( v8 == a1 + 40 )
  {
    v9 = 0LL;
  }
  else
  {
    v9 = (_QWORD **)(v8 - 152);
    if ( !v8 )
      v9 = 0LL;
  }
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v17);
  v18 = v9;
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v17);
  MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)&v24);
  while ( v9 )
  {
    v21 = v9;
    MonitorResourceLock::AcquireExclusive((PERESOURCE)(v9 + 5));
    v22[0] = retaddr;
    v10 = 2LL;
    do
    {
      v22[1] = v9;
      --v10;
    }
    while ( v10 );
    MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)v22);
    LOBYTE(v11) = a3;
    DXGMONITOR::LogMonitorObjectOnOffState(v9, a2, 0LL, v11);
    ExReleaseResourceLite((PERESOURCE)(v9 + 5));
    KeLeaveCriticalRegion();
    v21 = 0LL;
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)v22);
    if ( v21 )
    {
      ExReleaseResourceLite((PERESOURCE)(v21 + 5));
      KeLeaveCriticalRegion();
    }
    v12 = retaddr;
    v13 = 0LL;
    v19 = retaddr;
    v20 = 0LL;
    MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v19);
    MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v24, v6);
    v14 = *v7;
    if ( *v7 != v7 )
    {
      v15 = v9 + 19;
      while ( v14 != v15 )
      {
        if ( v7 == v14 )
          goto LABEL_14;
        v14 = (_QWORD *)*v14;
      }
      v16 = (_QWORD **)*v15;
      if ( (_QWORD **)*v15 != v7 )
      {
        v13 = v16 - 19;
        if ( !v16 )
          v13 = 0LL;
      }
      MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v19);
      v20 = v13;
      MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v19);
      v12 = v19;
    }
LABEL_14:
    MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)&v24);
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v17);
    v17 = v12;
    v9 = v13;
    v20 = 0LL;
    v18 = v13;
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v19);
  }
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v17);
}
