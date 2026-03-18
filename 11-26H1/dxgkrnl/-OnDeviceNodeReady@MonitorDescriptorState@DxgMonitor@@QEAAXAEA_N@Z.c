/*
 * XREFs of ?OnDeviceNodeReady@MonitorDescriptorState@DxgMonitor@@QEAAXAEA_N@Z @ 0x14018CBB4
 * Callers:
 *     ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@@Z @ 0x1403E1EE0 (-_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@@Z.c)
 *     ?_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403E2194 (-_OnMonitorFunctionDriverArrival@DXGMONITOR@@QEAAJPEAU_UNICODE_STRING@@AEAVIMonitorDeferredEvent.c)
 * Callees:
 *     ?AcquireExclusive@MonitorResourceLock@@QEAAXXZ @ 0x14003586C (-AcquireExclusive@MonitorResourceLock@@QEAAXXZ.c)
 *     Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline @ 0x140067340 (Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?_UpdateMonitorEDIDRegistryForGDI@MonitorDescriptorState@DxgMonitor@@AEBAJXZ @ 0x140419308 (-_UpdateMonitorEDIDRegistryForGDI@MonitorDescriptorState@DxgMonitor@@AEBAJXZ.c)
 *     ?AddDescriptorsToCache@MonitorDescriptorState@DxgMonitor@@AEAAXXZ @ 0x14041BDD4 (-AddDescriptorsToCache@MonitorDescriptorState@DxgMonitor@@AEAAXXZ.c)
 */

void __fastcall DxgMonitor::MonitorDescriptorState::OnDeviceNodeReady(struct _ERESOURCE *this, bool *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx

  if ( this )
    MonitorResourceLock::AcquireExclusive(this);
  if ( (unsigned int)Feature_SetMonitorDescriptorOverride__private_IsEnabledDeviceUsageNoInline() )
  {
    v4 = *(_QWORD *)&this[1].OwnerEntry.0;
    if ( !v4
      || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 56LL))(v4)
      || (*(int (__fastcall **)(_QWORD, POWNER_ENTRY))(**(_QWORD **)&this[1].OwnerEntry.0 + 32LL))(
           *(_QWORD *)&this[1].OwnerEntry.0,
           this[1].OwnerTable) < 0 )
    {
      goto LABEL_10;
    }
    v5 = *(_QWORD *)&this[1].OwnerEntry.0;
  }
  else
  {
    v6 = *(_QWORD *)&this[1].ActiveCount;
    if ( !v6
      || (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v6 + 56LL))(v6)
      || (*(int (__fastcall **)(_QWORD, POWNER_ENTRY))(**(_QWORD **)&this[1].ActiveCount + 32LL))(
           *(_QWORD *)&this[1].ActiveCount,
           this[1].OwnerTable) < 0 )
    {
      goto LABEL_10;
    }
    v5 = *(_QWORD *)&this[1].ActiveCount;
  }
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v5 + 56LL))(v5) )
  {
    *a2 = 1;
    DxgMonitor::MonitorDescriptorState::AddDescriptorsToCache((DxgMonitor::MonitorDescriptorState *)this);
  }
LABEL_10:
  DxgMonitor::MonitorDescriptorState::_UpdateMonitorEDIDRegistryForGDI((DxgMonitor::MonitorDescriptorState *)this);
  ExReleaseResourceLite(this);
  KeLeaveCriticalRegion();
}
