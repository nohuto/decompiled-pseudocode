/*
 * XREFs of ?_DisableVirtualModeSupport@DXGMONITOR@@QEAAX_NAEAVIMonitorDeferredEventSource@DxgMonitor@@@Z @ 0x140276340
 * Callers:
 *     ?MonitorDisableMonitorVirtualModeSupport@@YAJPEAXIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14026E3C8 (-MonitorDisableMonitorVirtualModeSupport@@YAJPEAXIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?WriteBool@MonitorDataStore@DxgMonitor@@UEAAXW4MonitorDataStoreBehavior@2@PEBG_N@Z @ 0x14027F600 (-WriteBool@MonitorDataStore@DxgMonitor@@UEAAXW4MonitorDataStoreBehavior@2@PEBG_N@Z.c)
 */

void __fastcall DXGMONITOR::_DisableVirtualModeSupport(
        DXGMONITOR *this,
        char a2,
        struct DxgMonitor::IMonitorDeferredEventSource *a3,
        __int64 a4)
{
  __int64 v7; // rcx

  if ( (*((_BYTE *)this + 176) & 2) != 0 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3563;
  }
  v7 = *((_QWORD *)this + 26);
  LOBYTE(a4) = a2;
  *((_BYTE *)this + 176) = (a2 << 6) | *((_BYTE *)this + 176) & 0xBF;
  DxgMonitor::MonitorDataStore::WriteBool(v7, 4LL, L"VMSDisabled", a4);
  (**(void (__fastcall ***)(struct DxgMonitor::IMonitorDeferredEventSource *, _QWORD, __int64))a3)(
    a3,
    *((unsigned int *)this + 45),
    11LL);
}
