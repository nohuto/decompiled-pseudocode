/*
 * XREFs of ??0?$RESOURCE_LOCK@VDXGMONITOR@@@@QEAA@PEAVDXGMONITOR@@_N@Z @ 0x1400355A4
 * Callers:
 *     ??0CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z @ 0x1400985E4 (--0CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@PEAVDXGMONITOR@@@Z.c)
 *     ?_GetUsb4TargetList@MONITOR_MGR@@QEAAJPEAK0@Z @ 0x140274674 (-_GetUsb4TargetList@MONITOR_MGR@@QEAAJPEAK0@Z.c)
 *     ?_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z @ 0x140274780 (-_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z.c)
 *     ?_ReleaseAllPoFxResources@MONITOR_MGR@@QEAAXXZ @ 0x140275744 (-_ReleaseAllPoFxResources@MONITOR_MGR@@QEAAXXZ.c)
 *     ?_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z @ 0x140276540 (-_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z.c)
 * Callees:
 *     ?AcquireExclusive@MonitorResourceLock@@QEAAXXZ @ 0x14003586C (-AcquireExclusive@MonitorResourceLock@@QEAAXXZ.c)
 */

_QWORD *__fastcall RESOURCE_LOCK<DXGMONITOR>::RESOURCE_LOCK<DXGMONITOR>(_QWORD *a1, __int64 a2, char a3)
{
  struct _ERESOURCE *v4; // rbx

  *a1 = a2;
  if ( a2 )
  {
    v4 = (struct _ERESOURCE *)(a2 + 40);
    if ( a3 == 1 )
    {
      MonitorResourceLock::AcquireExclusive((PERESOURCE)(a2 + 40));
    }
    else
    {
      KeEnterCriticalRegion();
      ExAcquireResourceSharedLite(v4, 1u);
    }
  }
  return a1;
}
