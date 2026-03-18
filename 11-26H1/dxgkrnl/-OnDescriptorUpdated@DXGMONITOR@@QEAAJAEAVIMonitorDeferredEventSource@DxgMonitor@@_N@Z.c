/*
 * XREFs of ?OnDescriptorUpdated@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z @ 0x1403F3AF8
 * Callers:
 *     ?RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x140270300 (-RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403E1480 (-_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@AEAVIMonitorDeferredEve.c)
 *     ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@@Z @ 0x1403E1EE0 (-_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@@Z.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403E2194 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@AEAVIMonitorDeferredEvent.c)
 * Callees:
 *     ?AcquireExclusive@MonitorResourceLock@@QEAAXXZ @ 0x14003586C (-AcquireExclusive@MonitorResourceLock@@QEAAXXZ.c)
 *     ??1?$RESOURCE_LOCK@VMonitorModes@DxgMonitor@@@@QEAA@XZ @ 0x140059934 (--1-$RESOURCE_LOCK@VMonitorModes@DxgMonitor@@@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?_CheckPortraitFirstMonitorFromEDID@DXGMONITOR@@AEAAJXZ @ 0x140276288 (-_CheckPortraitFirstMonitorFromEDID@DXGMONITOR@@AEAAJXZ.c)
 *     ?CreateDefaultMonitorProfile@MonitorModes@DxgMonitor@@QEAAJXZ @ 0x14027B610 (-CreateDefaultMonitorProfile@MonitorModes@DxgMonitor@@QEAAJXZ.c)
 *     ?OnDescriptorUpdated@MonitorColorState@DxgMonitor@@QEAAXPEBUIMonitorDescriptor@2@@Z @ 0x14027C314 (-OnDescriptorUpdated@MonitorColorState@DxgMonitor@@QEAAXPEBUIMonitorDescriptor@2@@Z.c)
 *     ?_EvaluateUsageState@MonitorUsageState@DxgMonitor@@AEAA_NPEBUIMonitorDescriptor@2@@Z @ 0x1403E287C (-_EvaluateUsageState@MonitorUsageState@DxgMonitor@@AEAA_NPEBUIMonitorDescriptor@2@@Z.c)
 *     ?_CleanupMonitorSourceModeAndFreqRanges@MonitorModes@DxgMonitor@@AEAAXXZ @ 0x1403F3C70 (-_CleanupMonitorSourceModeAndFreqRanges@MonitorModes@DxgMonitor@@AEAAXXZ.c)
 *     ?ParseDescriptorModes@MonitorModes@DxgMonitor@@AEAAJAEBUIMonitorDescriptor@2@@Z @ 0x1403F3EA8 (-ParseDescriptorModes@MonitorModes@DxgMonitor@@AEAAJAEBUIMonitorDescriptor@2@@Z.c)
 *     ?RetrieveIntegratedPanelNativeOverride@MonitorModes@DxgMonitor@@QEAAJXZ @ 0x14042E078 (-RetrieveIntegratedPanelNativeOverride@MonitorModes@DxgMonitor@@QEAAJXZ.c)
 */

__int64 __fastcall DXGMONITOR::OnDescriptorUpdated(
        DXGMONITOR *this,
        struct DxgMonitor::IMonitorDeferredEventSource *a2)
{
  struct _ERESOURCE *v4; // rdi
  __int64 v5; // rax
  const struct DxgMonitor::IMonitorDescriptor *v6; // rsi
  int v7; // edi
  __int64 v8; // rcx
  struct _ERESOURCE *v10; // [rsp+58h] [rbp+20h] BYREF

  WdLogSingleEntry1(7LL);
  v4 = (struct _ERESOURCE *)*((_QWORD *)this + 29);
  v5 = *((_QWORD *)this + 27);
  WdLogGlobalForLineNumber = 1089;
  v10 = v4;
  v6 = *(const struct DxgMonitor::IMonitorDescriptor **)(v5 + 160);
  if ( v4 )
    MonitorResourceLock::AcquireExclusive(v4);
  DxgMonitor::MonitorModes::_CleanupMonitorSourceModeAndFreqRanges((DxgMonitor::MonitorModes *)v4);
  if ( v6 )
  {
    v7 = DxgMonitor::MonitorModes::ParseDescriptorModes((DxgMonitor::MonitorModes *)v4, v6);
    RESOURCE_LOCK<DxgMonitor::MonitorModes>::~RESOURCE_LOCK<DxgMonitor::MonitorModes>(&v10);
    if ( v7 < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 1107;
      return (unsigned int)v7;
    }
    DxgMonitor::MonitorColorState::OnDescriptorUpdated(*((DxgMonitor::MonitorColorState **)this + 28), v6);
    DxgMonitor::MonitorUsageState::_EvaluateUsageState(*((DxgMonitor::MonitorUsageState **)this + 30), v6);
  }
  else if ( v4 )
  {
    ExReleaseResourceLite(v4);
    KeLeaveCriticalRegion();
  }
  v7 = 0;
  DXGMONITOR::_CheckPortraitFirstMonitorFromEDID(this);
  if ( (int)DxgMonitor::MonitorModes::RetrieveIntegratedPanelNativeOverride(*((PERESOURCE *)this + 29)) < 0 )
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 24) + 48LL))(*((_QWORD *)this + 24));
  v8 = *((_QWORD *)this + 29);
  if ( !*(_DWORD *)(v8 + 168) && !*(_DWORD *)(v8 + 120) )
    DxgMonitor::MonitorModes::CreateDefaultMonitorProfile((struct _ERESOURCE *)v8);
  (**(void (__fastcall ***)(struct DxgMonitor::IMonitorDeferredEventSource *, _QWORD, __int64))a2)(
    a2,
    *((unsigned int *)this + 45),
    3LL);
  return (unsigned int)v7;
}
