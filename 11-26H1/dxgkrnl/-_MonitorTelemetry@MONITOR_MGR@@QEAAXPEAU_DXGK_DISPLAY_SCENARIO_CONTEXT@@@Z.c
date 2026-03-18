/*
 * XREFs of ?_MonitorTelemetry@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403E3D84
 * Callers:
 *     ?AdapterTelemetryEnabledCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x140357FA0 (-AdapterTelemetryEnabledCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x140031B50 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?AcquireShared@MonitorResourceLock@@QEAAXXZ @ 0x140035838 (-AcquireShared@MonitorResourceLock@@QEAAXXZ.c)
 *     ??0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z @ 0x1400383FC (--0MUTEX_LOCK@@QEAA@AEAVDXGFASTMUTEX@@@Z.c)
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x14003C96C (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ??1MUTEX_LOCK@@QEAA@XZ @ 0x14003C9DC (--1MUTEX_LOCK@@QEAA@XZ.c)
 *     ??4MONITOR_REF_ACCESSOR@@QEAAAEAV0@AEBV0@@Z @ 0x14005B090 (--4MONITOR_REF_ACCESSOR@@QEAAAEAV0@AEBV0@@Z.c)
 *     ?AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ @ 0x1402CC034 (-AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CC050 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?TriggerMonitorTelemetry@DXGMONITOR@@UEBAXW4TELEMETRY_MONITOR_INVENTORY_TRIGGER@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403E2A30 (-TriggerMonitorTelemetry@DXGMONITOR@@UEBAXW4TELEMETRY_MONITOR_INVENTORY_TRIGGER@DxgMonitor@@PEAU.c)
 */

void __fastcall MONITOR_MGR::_MonitorTelemetry(MONITOR_MGR *this, GUID *a2)
{
  struct DXGFASTMUTEX *v4; // r14
  char *v5; // rsi
  MONITOR_MGR *v6; // rax
  char *v7; // rbx
  char *v8; // rdi
  __int64 v9; // rax
  char *v10; // rax
  void *v11; // [rsp+50h] [rbp-9h] BYREF
  char *v12; // [rsp+58h] [rbp-1h]
  void *v13; // [rsp+60h] [rbp+7h] BYREF
  char *v14; // [rsp+68h] [rbp+Fh]
  char *v15; // [rsp+70h] [rbp+17h] BYREF
  _QWORD v16[3]; // [rsp+78h] [rbp+1Fh] BYREF
  void *retaddr; // [rsp+B8h] [rbp+5Fh]
  char v18; // [rsp+C0h] [rbp+67h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 3) + 16LL)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 5043;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"_GetAdapter()->IsCoreResourceSharedOwner()",
      5043LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v11 = retaddr;
  v12 = 0LL;
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v11);
  v4 = (MONITOR_MGR *)((char *)this + 104);
  MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v18, (MONITOR_MGR *)((char *)this + 104));
  v5 = (char *)this + 40;
  v6 = (MONITOR_MGR *)*((_QWORD *)this + 5);
  if ( v6 == (MONITOR_MGR *)((char *)this + 40) )
  {
    v7 = 0LL;
  }
  else
  {
    v7 = (char *)v6 - 152;
    if ( !v6 )
      v7 = 0LL;
  }
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v11);
  v12 = v7;
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v11);
  MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)&v18);
  while ( v7 )
  {
    v13 = retaddr;
    v8 = v7;
    v14 = v7;
    MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v13);
    if ( *((_DWORD *)v7 + 70) != 1 && *((_QWORD *)v7 + 37) )
    {
      MONITOR_REF_ACCESSOR::operator=((MONITOR_REF_ACCESSOR *)&v13, (__int64)(v7 + 288));
      v8 = v14;
    }
    v15 = v8;
    if ( v8 )
      MonitorResourceLock::AcquireShared((PERESOURCE)(v8 + 40));
    v16[0] = retaddr;
    v9 = 2LL;
    do
    {
      v16[1] = v8;
      --v9;
    }
    while ( v9 );
    MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)v16);
    DXGMONITOR::TriggerMonitorTelemetry((__int64)(v8 + 16), 2, a2);
    CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)&v15);
    MUTEX_LOCK::MUTEX_LOCK((MUTEX_LOCK *)&v18, v4);
    v10 = (char *)*((_QWORD *)v7 + 19);
    if ( v10 == v5 )
    {
      v7 = 0LL;
    }
    else
    {
      v7 = v10 - 152;
      if ( !v10 )
        v7 = 0LL;
    }
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v11);
    v12 = v7;
    MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v11);
    MUTEX_LOCK::~MUTEX_LOCK((MUTEX_LOCK *)&v18);
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v13);
  }
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v11);
}
