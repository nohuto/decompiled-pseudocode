/*
 * XREFs of ?_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z @ 0x140274780
 * Callers:
 *     <none>
 * Callees:
 *     ?PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ @ 0x140009BE0 (-PopProfilerEntry@DXGETWPROFILER_BASE@@QEAAXXZ.c)
 *     DXGETWPROFILER_BASE_PushProfilerEntry @ 0x14000AA40 (DXGETWPROFILER_BASE_PushProfilerEntry.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x14000FC94 (McTemplateK0q_EtwWriteTransfer.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14002E4CC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     ??0?$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@PEAVDXGMONITOR@@_N@Z @ 0x1400355A4 (--0-$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@PEAVDXGMONITOR@@_N@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x14003BC9C (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ??1?$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@XZ @ 0x14003CD2C (--1-$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@XZ.c)
 *     ??0MONITOR_REF_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z @ 0x14003CDDC (--0MONITOR_REF_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14004F144 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     DxgkGetDeviceObjectPointerSessionAware @ 0x140061A58 (DxgkGetDeviceObjectPointerSessionAware.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     memcmp @ 0x1400A6320 (memcmp.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z @ 0x1402CBB30 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CC050 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x14031D68C (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?FlushEventsWithContext@MonitorEventDeferral@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403E1E48 (-FlushEventsWithContext@MonitorEventDeferral@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403E2194 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@AEAVIMonitorDeferredEvent.c)
 *     ?DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z @ 0x14040BCEC (-DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z.c)
 *     ??1MonitorEventDeferral@@UEAA@XZ @ 0x14041BAA8 (--1MonitorEventDeferral@@UEAA@XZ.c)
 */

__int64 __fastcall MONITOR_MGR::_HandleMonitorPnPNotification(_QWORD *NotificationStructure, PVOID Context)
{
  __int64 v3; // rcx
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v4; // r13
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbx
  UNICODE_STRING *v10; // rsi
  int DeviceObjectPointerSessionAware; // eax
  int v12; // edi
  __int64 v13; // rcx
  bool v14; // zf
  __int64 v15; // rcx
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // r12
  struct DXGADAPTER *v17; // rdi
  __int64 v18; // r15
  int v19; // eax
  int v20; // eax
  MONITOR_MGR *v21; // rdi
  int MonitorInstance; // eax
  DXGMONITOR *v23; // rbx
  __int64 v24; // rdx
  unsigned int v25; // eax
  unsigned __int8 v27; // [rsp+38h] [rbp-D0h]
  unsigned __int64 *v28; // [rsp+40h] [rbp-C8h]
  _QWORD v29[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v30; // [rsp+58h] [rbp-B0h]
  PVOID Object; // [rsp+60h] [rbp-A8h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+68h] [rbp-A0h] BYREF
  DXGMONITOR *v33; // [rsp+70h] [rbp-98h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v34[2]; // [rsp+78h] [rbp-90h] BYREF
  struct DXGADAPTER *InputBuffer[2]; // [rsp+88h] [rbp-80h] BYREF
  unsigned int v36[4]; // [rsp+98h] [rbp-70h]
  __int64 v37; // [rsp+A8h] [rbp-60h]
  _QWORD v38[14]; // [rsp+B8h] [rbp-50h] BYREF
  int v39; // [rsp+128h] [rbp+20h]
  _BYTE v40[144]; // [rsp+138h] [rbp+30h] BYREF

  LOBYTE(v34[0]) = 0;
  CDisplayScenarioContextScope::ContextScopeConstructor(v34, 0LL, 2u, 0);
  v4 = v34[1];
  LODWORD(v29[0]) = -1;
  v29[1] = 0LL;
  if ( (qword_1401664C0 & 2) != 0 )
  {
    LOBYTE(v30) = 1;
    LODWORD(v29[0]) = 7061;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v3, (__int64)&EventProfilerEnter);
  }
  else
  {
    LOBYTE(v30) = 0;
  }
  DXGETWPROFILER_BASE_PushProfilerEntry((__int64)v29, 7061);
  WdLogNewEntry5_WdTrace(v6, v5);
  WdLogGlobalForLineNumber = 4198;
  if ( !NotificationStructure )
    goto LABEL_10;
  v7 = *(_QWORD *)&GUID_DEVINTERFACE_MONITOR_DRIVER.Data1 - *(_QWORD *)((char *)NotificationStructure + 20);
  if ( *(_QWORD *)&GUID_DEVINTERFACE_MONITOR_DRIVER.Data1 == *(_QWORD *)((char *)NotificationStructure + 20) )
    v7 = *(_QWORD *)GUID_DEVINTERFACE_MONITOR_DRIVER.Data4 - *(_QWORD *)((char *)NotificationStructure + 28);
  if ( v7 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 4217;
LABEL_10:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)v29);
    if ( (_BYTE)v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v8, (__int64)&EventProfilerExit);
    LODWORD(v9) = -1073741811;
    goto LABEL_52;
  }
  v10 = (UNICODE_STRING *)NotificationStructure[5];
  DeviceObject = 0LL;
  Object = 0LL;
  DeviceObjectPointerSessionAware = DxgkGetDeviceObjectPointerSessionAware(v10, 0LL, &Object, &DeviceObject);
  v12 = DeviceObjectPointerSessionAware;
  LODWORD(v9) = -1073741772;
  if ( DeviceObjectPointerSessionAware == -1073741772 )
  {
    WdLogSingleEntry1(7LL);
    WdLogGlobalForLineNumber = 4239;
LABEL_16:
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)v29);
    v14 = (_BYTE)v30 == 0;
LABEL_49:
    if ( !v14 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      McTemplateK0q_EtwWriteTransfer(v13, (__int64)&EventProfilerExit);
    goto LABEL_52;
  }
  if ( DeviceObjectPointerSessionAware >= 0 )
  {
    DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(DeviceObject);
    ObfDereferenceObject(DeviceAttachmentBaseRef);
    v37 = 0LL;
    *(_OWORD *)InputBuffer = 0LL;
    *(_OWORD *)v36 = 0LL;
    v9 = (int)DxgkCallDriverIoControl(DeviceObject, 0x232407u, InputBuffer, 0x28u, InputBuffer, 0x28u, v27, v28);
    ObfDereferenceObject(Object);
    if ( (int)v9 < 0 )
    {
      WdLogSingleEntry2(3LL, v10->Buffer, v9);
      WdLogGlobalForLineNumber = 4300;
      goto LABEL_16;
    }
    v17 = InputBuffer[0];
    v18 = v36[0];
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v40, InputBuffer[0], 0LL);
    v19 = memcmp(&GUID_DEVICE_INTERFACE_ARRIVAL, (char *)NotificationStructure + 4, 0x10uLL);
    v20 = COREADAPTERACCESS::AcquireExclusive((__int64)v40, 2 - (unsigned int)(v19 != 0));
    LODWORD(v9) = v20;
    if ( v20 < 0 )
    {
      if ( v20 != -1073741130 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 4323;
      }
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 4326;
      goto LABEL_48;
    }
    if ( !*((_QWORD *)v17 + 395) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 4335;
    }
    v21 = *(MONITOR_MGR **)(*((_QWORD *)v17 + 395) + 112LL);
    if ( !v21 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 4337;
    }
    v38[0] = &MonitorEventDeferral::`vftable';
    memset(&v38[2], 0, 0x60uLL);
    v39 = 0;
    v38[1] = ((unsigned __int64)v21 + 8) & -(__int64)(v21 != 0LL);
    MONITOR_REF_ACCESSOR::MONITOR_REF_ACCESSOR((MONITOR_REF_ACCESSOR *)&DeviceObject, 0LL);
    MonitorInstance = MONITOR_MGR::_GetMonitorInstance(v21, v18, 1u, (struct MONITOR_REF_ACCESSOR *)&DeviceObject);
    LODWORD(v9) = MonitorInstance;
    if ( MonitorInstance < 0 )
    {
      if ( MonitorInstance == -1073741275 )
      {
        WdLogSingleEntry2(3LL, v18, v21);
        LODWORD(v9) = 0;
        WdLogGlobalForLineNumber = 4404;
      }
      else
      {
        WdLogSingleEntry3(2LL, v18, v21, MonitorInstance);
        WdLogGlobalForLineNumber = 4415;
      }
      goto LABEL_47;
    }
    v23 = v33;
    if ( !v33 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 4348;
    }
    RESOURCE_LOCK<DXGMONITOR>::RESOURCE_LOCK<DXGMONITOR>(&Object, (__int64)v23, 1);
    if ( *(PDEVICE_OBJECT *)(*((_QWORD *)v23 + 25) + 8LL) == DeviceAttachmentBaseRef )
    {
      v24 = *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1 - *(_QWORD *)((char *)NotificationStructure + 4);
      if ( *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1 == *(_QWORD *)((char *)NotificationStructure + 4) )
        v24 = *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4 - *(_QWORD *)((char *)NotificationStructure + 12);
      if ( v24 )
      {
        LODWORD(v9) = memcmp(&GUID_DEVICE_INTERFACE_REMOVAL, (char *)NotificationStructure + 4, 0x10uLL) != 0
                    ? 0xC000000D
                    : 0;
        goto LABEL_43;
      }
      v25 = DXGMONITOR::_OnMonitorFunctionDriverArrival(
              v23,
              v10,
              (struct DxgMonitor::IMonitorDeferredEventSource *)v38,
              v4);
      MONITOR_MGR::_LogMonitorPresentEvent(v21, 3LL, (unsigned int)v18, v25, 0LL);
    }
    else
    {
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 4365;
    }
    LODWORD(v9) = 0;
LABEL_43:
    RESOURCE_LOCK<DXGMONITOR>::~RESOURCE_LOCK<DXGMONITOR>((__int64 *)&Object);
LABEL_47:
    MonitorEventDeferral::FlushEventsWithContext((MonitorEventDeferral *)v38, v4);
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&DeviceObject);
    MonitorEventDeferral::~MonitorEventDeferral((MonitorEventDeferral *)v38);
LABEL_48:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v40);
    DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)v29);
    v14 = (_BYTE)v30 == 0;
    goto LABEL_49;
  }
  WdLogSingleEntry2(2LL, v10->Buffer, DeviceObjectPointerSessionAware);
  WdLogGlobalForLineNumber = 4249;
  DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)v29);
  if ( (_BYTE)v30 && (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
    McTemplateK0q_EtwWriteTransfer(v15, (__int64)&EventProfilerExit);
  LODWORD(v9) = v12;
LABEL_52:
  CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v34);
  return (unsigned int)v9;
}
