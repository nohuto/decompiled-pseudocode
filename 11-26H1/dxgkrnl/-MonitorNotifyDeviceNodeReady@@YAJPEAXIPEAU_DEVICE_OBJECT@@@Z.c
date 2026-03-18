/*
 * XREFs of ?MonitorNotifyDeviceNodeReady@@YAJPEAXIPEAU_DEVICE_OBJECT@@@Z @ 0x1403E17AC
 * Callers:
 *     DpiPdoDispatchPnp @ 0x1403D1510 (DpiPdoDispatchPnp.c)
 *     DpiPdoHandleChildConnectionChange @ 0x140443F48 (DpiPdoHandleChildConnectionChange.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400319C0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0MONITOR_REF_LOCK_ACCESSOR@@QEAA@AEBVMONITOR_REF_ACCESSOR@@@Z @ 0x14003555C (--0MONITOR_REF_LOCK_ACCESSOR@@QEAA@AEBVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ??0CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@AEBVMONITOR_REF_ACCESSOR@@@Z @ 0x1400356D8 (--0CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@AEBVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?AcquireShared@MonitorResourceLock@@QEAAXXZ @ 0x140035838 (-AcquireShared@MonitorResourceLock@@QEAAXXZ.c)
 *     ?AcquireExclusive@MonitorResourceLock@@QEAAXXZ @ 0x14003586C (-AcquireExclusive@MonitorResourceLock@@QEAAXXZ.c)
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x14003C96C (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ??1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x14003CD00 (--1MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14004F144 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     ??4MONITOR_REF_ACCESSOR@@QEAAAEAV0@AEBV0@@Z @ 0x14005B090 (--4MONITOR_REF_ACCESSOR@@QEAAAEAV0@AEBV0@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?_CopyMonitorInformation@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z @ 0x14018D950 (-_CopyMonitorInformation@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z @ 0x1402CBB30 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ @ 0x1402CC034 (-AddReference@MONITOR_REF_ACCESSOR@@AEAAXXZ.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CC050 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x14031D68C (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?_GetMonitorDiagInfo@DXGMONITOR@@QEBAJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1403E1C6C (-_GetMonitorDiagInfo@DXGMONITOR@@QEBAJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z.c)
 *     ?FlushEventsWithContext@MonitorEventDeferral@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403E1E48 (-FlushEventsWithContext@MonitorEventDeferral@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@@Z @ 0x1403E1EE0 (-_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@@Z.c)
 *     ?_FlushPendingCreation@MONITOR_MGR@@QEAAXAEBVMONITOR_REF_ACCESSOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403E2000 (-_FlushPendingCreation@MONITOR_MGR@@QEAAXAEBVMONITOR_REF_ACCESSOR@@PEAU_DXGK_DISPLAY_SCENARIO_CO.c)
 */

__int64 __fastcall MonitorNotifyDeviceNodeReady(PERESOURCE *this, unsigned int a2, struct _DEVICE_OBJECT *a3)
{
  __int64 v3; // r13
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v6; // r12
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  MONITOR_MGR *Blink; // r15
  int MonitorInstance; // eax
  DXGMONITOR *v13; // rdi
  int v14; // ebx
  DXGMONITOR *v15; // rbx
  __int64 v16; // rsi
  __int64 v17; // rax
  int v18; // r14d
  DXGMONITOR *v19; // rcx
  DXGMONITOR *v20; // rbx
  void *v21; // [rsp+30h] [rbp-D0h] BYREF
  DXGMONITOR *v22; // [rsp+38h] [rbp-C8h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v23; // [rsp+40h] [rbp-C0h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v24; // [rsp+48h] [rbp-B8h] BYREF
  DXGMONITOR *v25; // [rsp+50h] [rbp-B0h] BYREF
  void *v26; // [rsp+58h] [rbp-A8h] BYREF
  DXGMONITOR *v27; // [rsp+60h] [rbp-A0h]
  _OWORD v28[2]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v29[24]; // [rsp+88h] [rbp-78h] BYREF
  GUID ActivityId; // [rsp+A0h] [rbp-60h] BYREF
  void **v31; // [rsp+B0h] [rbp-50h] BYREF
  char *v32; // [rsp+B8h] [rbp-48h]
  _BYTE v33[96]; // [rsp+C0h] [rbp-40h] BYREF
  int v34; // [rsp+120h] [rbp+20h]
  void *retaddr; // [rsp+178h] [rbp+78h]

  v3 = a2;
  LOBYTE(v23) = 0;
  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  DisplayScenarioContextEnsureAndAssociate(&ActivityId, 8u, 0, &v24, (unsigned __int8 *)&v23);
  v6 = v24;
  v9 = WdLogNewEntry5_WdTrace(v8, v7);
  *(_QWORD *)(v9 + 24) = v3;
  *(_QWORD *)(v9 + 32) = this;
  WdLogGlobalForLineNumber = 1796;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1805;
  }
  if ( !this[395] )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1806;
  }
  Blink = (MONITOR_MGR *)this[395][1].SystemResourcesList.Blink;
  if ( !Blink )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1816;
    if ( (_BYTE)v23 )
      DisplayScenarioContextDissociate(&v24);
    return 3221225485LL;
  }
  *(_QWORD *)&ActivityId.Data1 = retaddr;
  *(_QWORD *)ActivityId.Data4 = 0LL;
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&ActivityId);
  v21 = retaddr;
  v22 = 0LL;
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v21);
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(Blink, v3, 0, (struct MONITOR_REF_ACCESSOR *)&ActivityId);
  v13 = *(DXGMONITOR **)ActivityId.Data4;
  v14 = MonitorInstance;
  if ( MonitorInstance < 0 )
  {
    if ( *(_QWORD *)ActivityId.Data4 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1848;
    }
    if ( v14 != -1073741275 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1849;
    }
  }
  else
  {
    if ( !*(_QWORD *)ActivityId.Data4 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1831;
    }
    if ( *((_DWORD *)v13 + 70) == 1 )
    {
      MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v21);
      v15 = v13;
      v13 = 0LL;
      v21 = *(void **)&ActivityId.Data1;
      *(_QWORD *)ActivityId.Data4 = 0LL;
      v22 = v15;
      goto LABEL_20;
    }
    MONITOR_REF_ACCESSOR::operator=((MONITOR_REF_ACCESSOR *)&v21, (__int64)v13 + 288);
  }
  v15 = v22;
LABEL_20:
  if ( !v15 )
  {
    WdLogSingleEntry1(7LL);
    WdLogGlobalForLineNumber = 1927;
LABEL_24:
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v21);
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&ActivityId);
    CDisplayScenarioContextScope::~CDisplayScenarioContextScope(&v23);
    return 3221226021LL;
  }
  if ( *(struct _DEVICE_OBJECT **)(*((_QWORD *)v15 + 25) + 8LL) != a3 )
  {
    WdLogSingleEntry1(7LL);
    WdLogGlobalForLineNumber = 1866;
    goto LABEL_24;
  }
  v31 = &MonitorEventDeferral::`vftable';
  memset(v33, 0, sizeof(v33));
  v34 = 0;
  v32 = (char *)Blink + 8;
  v25 = v15;
  MonitorResourceLock::AcquireExclusive((PERESOURCE)((char *)v15 + 40));
  v16 = 2LL;
  v26 = retaddr;
  v17 = 2LL;
  do
  {
    v27 = v22;
    --v17;
  }
  while ( v17 );
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v26);
  v18 = DXGMONITOR::_OnMonitorDeviceNodeReady(v15, (struct DxgMonitor::IMonitorDeferredEventSource *)&v31);
  ExReleaseResourceLite((PERESOURCE)((char *)v15 + 40));
  KeLeaveCriticalRegion();
  v25 = 0LL;
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v26);
  if ( v25 )
  {
    ExReleaseResourceLite((PERESOURCE)((char *)v25 + 40));
    KeLeaveCriticalRegion();
  }
  MonitorEventDeferral::FlushEventsWithContext((MonitorEventDeferral *)&v31, v6);
  MONITOR_MGR::_FlushPendingCreation(Blink, (const struct MONITOR_REF_ACCESSOR *)&v21, v6);
  if ( v18 >= 0 && v13 )
  {
    MONITOR_REF_LOCK_ACCESSOR::MONITOR_REF_LOCK_ACCESSOR(
      (MONITOR_REF_LOCK_ACCESSOR *)&v25,
      (const struct MONITOR_REF_ACCESSOR *)&ActivityId);
    CONST_MONITOR_REF_LOCK_ACCESSOR::CONST_MONITOR_REF_LOCK_ACCESSOR(
      (CONST_MONITOR_REF_LOCK_ACCESSOR *)v29,
      (const struct MONITOR_REF_ACCESSOR *)&v21);
    DXGMONITOR::_CopyMonitorInformation(v25, (const struct MONITOR_REF_ACCESSOR *)&v21);
    CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v29);
    MONITOR_REF_LOCK_ACCESSOR::~MONITOR_REF_LOCK_ACCESSOR((MONITOR_REF_LOCK_ACCESSOR *)&v25);
  }
  v19 = v22;
  v25 = v22;
  v20 = v22;
  memset(v28, 0, sizeof(v28));
  if ( v22 )
  {
    MonitorResourceLock::AcquireShared((PERESOURCE)((char *)v22 + 40));
    v19 = v22;
  }
  v26 = retaddr;
  do
  {
    v27 = v19;
    --v16;
  }
  while ( v16 );
  MONITOR_REF_ACCESSOR::AddReference((MONITOR_REF_ACCESSOR *)&v26);
  DXGMONITOR::_GetMonitorDiagInfo(v20, (struct _DXGK_DIAG_MONITOR_MGR_EXTRA_INFO *)v28);
  CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)&v25);
  MONITOR_MGR::_LogMonitorPresentEvent((__int64)Blink, 7, v3, v18, v28);
  v31 = &MonitorEventDeferral::`vftable';
  if ( v34 && v32 )
    MonitorEventDeferral::FlushEventsWithContext((MonitorEventDeferral *)&v31, 0LL);
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v21);
  MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&ActivityId);
  if ( (_BYTE)v23 )
    DisplayScenarioContextDissociate(&v24);
  return (unsigned int)v18;
}
