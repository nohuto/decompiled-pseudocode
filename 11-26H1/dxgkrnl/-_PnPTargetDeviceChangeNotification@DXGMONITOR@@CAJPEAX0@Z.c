/*
 * XREFs of ?_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z @ 0x140276540
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z @ 0x14002E4CC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@IPEBD@Z.c)
 *     ??0?$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@PEAVDXGMONITOR@@_N@Z @ 0x1400355A4 (--0-$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@PEAVDXGMONITOR@@_N@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z @ 0x14003BC9C (-ContextScopeConstructor@CDisplayScenarioContextScope@@QEAAXPEBU_GUID@@II@Z.c)
 *     ??1?$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@XZ @ 0x14003CD2C (--1-$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@XZ.c)
 *     ??0MONITOR_REF_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z @ 0x14003CDDC (--0MONITOR_REF_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z.c)
 *     ??1CDisplayScenarioContextScope@@QEAA@XZ @ 0x14004F144 (--1CDisplayScenarioContextScope@@QEAA@XZ.c)
 *     ?reset@?$unique_storage@U?$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1?DereferenceObject@details@widxg@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAAXPEAU_FILE_OBJECT@@@Z @ 0x14006A7FC (-reset@-$unique_storage@U-$resource_policy@PEAU_FILE_OBJECT@@$$A6AXPEAX@Z$1-DereferenceObject@de.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?_OnMonitorFunctionDriverDeparture@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14027648C (-_OnMonitorFunctionDriverDeparture@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?HandleDeviceRemoveCancelled@MonitorPnpState@DxgMonitor@@QEAAXXZ @ 0x140279A3C (-HandleDeviceRemoveCancelled@MonitorPnpState@DxgMonitor@@QEAAXXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z @ 0x1402CBB30 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEAEAVMONITOR_REF_ACCESSOR@@@Z.c)
 *     ?Release@MONITOR_REF_ACCESSOR@@QEAAXXZ @ 0x1402CC050 (-Release@MONITOR_REF_ACCESSOR@@QEAAXXZ.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x14031D68C (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z @ 0x14040BCEC (-DxgkCallDriverIoControl@@YAJPEAU_DEVICE_OBJECT@@KPEAXK1KEPEA_K@Z.c)
 */

__int64 __fastcall DXGMONITOR::_PnPTargetDeviceChangeNotification(
        char *NotificationStructure,
        struct _DEVICE_OBJECT *Context)
{
  unsigned int v2; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  int v8; // eax
  struct DXGADAPTER *v10; // rdi
  unsigned int v11; // r15d
  int v12; // r8d
  unsigned int v13; // r13d
  int v14; // eax
  MONITOR_MGR *v15; // r12
  __int64 v16; // rdi
  PDEVICE_OBJECT DeviceAttachmentBaseRef; // r14
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rdx
  unsigned __int8 v22; // [rsp+38h] [rbp-D0h]
  unsigned __int64 *v23; // [rsp+40h] [rbp-C8h]
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v24[2]; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v25; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v26; // [rsp+60h] [rbp-A8h] BYREF
  __int64 InputBuffer; // [rsp+68h] [rbp-A0h]
  struct DXGADAPTER *InputBuffer_8[2]; // [rsp+70h] [rbp-98h] BYREF
  __int128 v29; // [rsp+80h] [rbp-88h]
  __int64 v30; // [rsp+90h] [rbp-78h]
  _BYTE v31[144]; // [rsp+98h] [rbp-70h] BYREF

  v2 = 0;
  LOBYTE(v24[0]) = 0;
  CDisplayScenarioContextScope::ContextScopeConstructor(v24, 0LL, 3u, 0);
  v7 = WdLogNewEntry5_WdTrace(v6, v5);
  *(_QWORD *)(v7 + 24) = Context;
  *(_QWORD *)(v7 + 32) = NotificationStructure;
  WdLogGlobalForLineNumber = 1917;
  if ( NotificationStructure && Context )
  {
    v30 = 0LL;
    *(_OWORD *)InputBuffer_8 = 0LL;
    v29 = 0LL;
    v8 = DxgkCallDriverIoControl(Context, 0x232407u, InputBuffer_8, 0x28u, InputBuffer_8, 0x28u, v22, v23);
    if ( v8 < 0 )
    {
      WdLogSingleEntry2(3LL, Context, v8);
      WdLogGlobalForLineNumber = 1959;
LABEL_5:
      CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v24);
      return 0LL;
    }
    v10 = InputBuffer_8[0];
    v11 = v29;
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v31, InputBuffer_8[0], 0LL);
    v13 = v12 + 1;
    v14 = COREADAPTERACCESS::AcquireExclusive((__int64)v31, (unsigned int)(v12 + 1));
    if ( v14 < 0 )
    {
      if ( v14 != -1073741130 )
      {
        WdLogSingleEntry0(v13);
        WdLogGlobalForLineNumber = 1978;
      }
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 1981;
      goto LABEL_10;
    }
    if ( !*((_QWORD *)v10 + 395) )
    {
      WdLogSingleEntry0(v13);
      WdLogGlobalForLineNumber = 1986;
    }
    v15 = *(MONITOR_MGR **)(*((_QWORD *)v10 + 395) + 112LL);
    if ( !v15 )
    {
      WdLogSingleEntry0(v13);
      WdLogGlobalForLineNumber = 1993;
    }
    MONITOR_REF_ACCESSOR::MONITOR_REF_ACCESSOR((MONITOR_REF_ACCESSOR *)&v26, 0LL);
    if ( MONITOR_MGR::_GetMonitorInstance(v15, v11, v13, (struct MONITOR_REF_ACCESSOR *)&v26) < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 2000;
LABEL_17:
      MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v26);
LABEL_10:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v31);
      goto LABEL_5;
    }
    v16 = InputBuffer;
    if ( !InputBuffer )
    {
      WdLogSingleEntry0(v13);
      WdLogGlobalForLineNumber = 2005;
    }
    if ( *(_DWORD *)(v16 + 280) != v13 )
    {
      WdLogSingleEntry0(v13);
      WdLogGlobalForLineNumber = 2006;
    }
    RESOURCE_LOCK<DXGMONITOR>::RESOURCE_LOCK<DXGMONITOR>(&v25, v16, v13);
    DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(Context);
    if ( !DeviceAttachmentBaseRef )
    {
      WdLogSingleEntry0(v13);
      WdLogGlobalForLineNumber = 2029;
    }
    ObfDereferenceObject(DeviceAttachmentBaseRef);
    if ( DeviceAttachmentBaseRef != *(PDEVICE_OBJECT *)(*(_QWORD *)(v16 + 200) + 8LL) )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 2035;
      RESOURCE_LOCK<DXGMONITOR>::~RESOURCE_LOCK<DXGMONITOR>(&v25);
      goto LABEL_17;
    }
    v18 = *(_QWORD *)(NotificationStructure + 4);
    v19 = *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1 - v18;
    if ( *(_QWORD *)&GUID_TARGET_DEVICE_QUERY_REMOVE.Data1 == v18 )
      v19 = *(_QWORD *)GUID_TARGET_DEVICE_QUERY_REMOVE.Data4 - *(_QWORD *)(NotificationStructure + 12);
    if ( v19 )
    {
      v20 = *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1 - v18;
      if ( *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data1 == v18 )
        v20 = *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_CANCELLED.Data4 - *(_QWORD *)(NotificationStructure + 12);
      if ( v20 )
      {
        v21 = *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1 - v18;
        if ( *(_QWORD *)&GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data1 == v18 )
          v21 = *(_QWORD *)GUID_TARGET_DEVICE_REMOVE_COMPLETE.Data4 - *(_QWORD *)(NotificationStructure + 12);
        if ( v21 )
        {
          v2 = -1073741811;
        }
        else
        {
          DXGMONITOR::_OnMonitorFunctionDriverDeparture((DxgMonitor::MonitorPnpState **)v16, 0LL);
          MONITOR_MGR::_LogMonitorPresentEvent(v15, 6LL, v11, 0LL, 0LL);
        }
      }
      else
      {
        MONITOR_MGR::_LogMonitorPresentEvent(v15, 5LL, v11, 0LL, 0LL);
        DxgMonitor::MonitorPnpState::HandleDeviceRemoveCancelled(*(DxgMonitor::MonitorPnpState **)(v16 + 200));
      }
    }
    else
    {
      MONITOR_MGR::_LogMonitorPresentEvent(v15, 4LL, v11, 0LL, 0LL);
      wil::details::unique_storage<wil::details::resource_policy<_FILE_OBJECT *,void (void *),&void widxg::details::DereferenceObject(void *),wistd::integral_constant<unsigned __int64,0>,_FILE_OBJECT *,_FILE_OBJECT *,0,std::nullptr_t>>::reset(
        (DxgkCompositionObject **)(*(_QWORD *)(v16 + 200) + 40LL),
        0LL);
    }
    RESOURCE_LOCK<DXGMONITOR>::~RESOURCE_LOCK<DXGMONITOR>(&v25);
    MONITOR_REF_ACCESSOR::Release((MONITOR_REF_ACCESSOR *)&v26);
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v31);
    CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v24);
    return v2;
  }
  else
  {
    CDisplayScenarioContextScope::~CDisplayScenarioContextScope(v24);
    return 3221225485LL;
  }
}
