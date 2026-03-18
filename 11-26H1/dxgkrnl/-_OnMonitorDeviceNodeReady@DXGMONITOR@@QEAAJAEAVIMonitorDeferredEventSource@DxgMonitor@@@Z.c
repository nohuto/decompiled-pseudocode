/*
 * XREFs of ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@@Z @ 0x1403E1EE0
 * Callers:
 *     ?MonitorNotifyDeviceNodeReady@@YAJPEAXIPEAU_DEVICE_OBJECT@@@Z @ 0x1403E17AC (-MonitorNotifyDeviceNodeReady@@YAJPEAXIPEAU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     ?OnDeviceNodeReady@MonitorDescriptorState@DxgMonitor@@QEAAXAEA_N@Z @ 0x14018CBB4 (-OnDeviceNodeReady@MonitorDescriptorState@DxgMonitor@@QEAAXAEA_N@Z.c)
 *     ?OnDeviceNodeReady@MonitorUsb4State@DxgMonitor@@QEAAXAEAVMonitorPnpState@2@@Z @ 0x1401942FC (-OnDeviceNodeReady@MonitorUsb4State@DxgMonitor@@QEAAXAEAVMonitorPnpState@2@@Z.c)
 *     ?UpdatePnPDeviceProperties@MonitorPnpState@DxgMonitor@@AEAAJXZ @ 0x1403E2098 (-UpdatePnPDeviceProperties@MonitorPnpState@DxgMonitor@@AEAAJXZ.c)
 *     ?_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ @ 0x1403E2954 (-_RetrieveMonitorConfigurationFromDriverInf@DXGMONITOR@@AEAAJXZ.c)
 *     ?RetrieveMonitorFrequencyRangeFromRegistry@MonitorModes@DxgMonitor@@QEAAJXZ @ 0x1403E3788 (-RetrieveMonitorFrequencyRangeFromRegistry@MonitorModes@DxgMonitor@@QEAAJXZ.c)
 *     ?OnDescriptorUpdated@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z @ 0x1403F3AF8 (-OnDescriptorUpdated@DXGMONITOR@@QEAAJAEAVIMonitorDeferredEventSource@DxgMonitor@@_N@Z.c)
 */

__int64 __fastcall DXGMONITOR::_OnMonitorDeviceNodeReady(
        DXGMONITOR *this,
        struct DxgMonitor::IMonitorDeferredEventSource *a2)
{
  __int64 v4; // rax
  DxgMonitor::MonitorPnpState *v5; // rcx
  struct _ERESOURCE *v6; // rcx
  bool v7; // r8
  bool v9; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2) + 24) = this;
  v4 = *((_QWORD *)this + 25);
  WdLogGlobalForLineNumber = 1547;
  if ( !*(_BYTE *)(v4 + 16) )
  {
    if ( (*((_BYTE *)this + 176) & 1) == 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1566;
    }
    if ( !*(_QWORD *)(*((_QWORD *)this + 25) + 8LL) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1567;
    }
    if ( *((_DWORD *)this + 70) != 1 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1568;
    }
    v5 = (DxgMonitor::MonitorPnpState *)*((_QWORD *)this + 25);
    *((_BYTE *)v5 + 16) = 1;
    DxgMonitor::MonitorPnpState::UpdatePnPDeviceProperties(v5);
    DxgMonitor::MonitorUsb4State::OnDeviceNodeReady(
      *((DxgMonitor::MonitorUsb4State **)this + 33),
      *((struct DxgMonitor::MonitorPnpState **)this + 25));
    v6 = (struct _ERESOURCE *)*((_QWORD *)this + 27);
    v9 = 0;
    DxgMonitor::MonitorDescriptorState::OnDeviceNodeReady(v6, &v9);
    if ( v9 )
      DXGMONITOR::OnDescriptorUpdated(this, a2, v7);
    DxgMonitor::MonitorModes::RetrieveMonitorFrequencyRangeFromRegistry(*((DxgMonitor::MonitorModes **)this + 29));
    DXGMONITOR::_RetrieveMonitorConfigurationFromDriverInf(this);
  }
  return 0LL;
}
