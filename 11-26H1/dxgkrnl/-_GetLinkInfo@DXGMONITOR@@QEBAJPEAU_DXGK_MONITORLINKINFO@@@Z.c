/*
 * XREFs of ?_GetLinkInfo@DXGMONITOR@@QEBAJPEAU_DXGK_MONITORLINKINFO@@@Z @ 0x1403C0348
 * Callers:
 *     ?_SerializeMonitor@DXGMONITOR@@QEBAJPEA_KPEAU_DMM_MONITOR_SERIALIZATION@@@Z @ 0x140276B58 (-_SerializeMonitor@DXGMONITOR@@QEBAJPEA_KPEAU_DMM_MONITOR_SERIALIZATION@@@Z.c)
 *     ?MonitorGetLinkInfoFromMonitor@@YAJPEAUHDXGMONITOR__@@AEAU_DXGK_MONITORLINKINFO@@@Z @ 0x1403C0138 (-MonitorGetLinkInfoFromMonitor@@YAJPEAUHDXGMONITOR__@@AEAU_DXGK_MONITORLINKINFO@@@Z.c)
 *     ?MonitorGetLinkInfoFromTarget@@YAJPEAXIPEAU_DXGK_MONITORLINKINFO@@@Z @ 0x1403C0298 (-MonitorGetLinkInfoFromTarget@@YAJPEAXIPEAU_DXGK_MONITORLINKINFO@@@Z.c)
 *     ?TriggerMonitorTelemetry@DXGMONITOR@@UEBAXW4TELEMETRY_MONITOR_INVENTORY_TRIGGER@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403E2A30 (-TriggerMonitorTelemetry@DXGMONITOR@@UEBAXW4TELEMETRY_MONITOR_INVENTORY_TRIGGER@DxgMonitor@@PEAU.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGMONITOR::_GetLinkInfo(DXGMONITOR *this, struct _DXGK_MONITORLINKINFO *a2)
{
  if ( (*((_BYTE *)this + 177) & 2) != 0 )
  {
    *a2 = *(struct _DXGK_MONITORLINKINFO *)((char *)this + 332);
    return 0LL;
  }
  else
  {
    *(_QWORD *)&a2->UsageHints.0 = 0LL;
    a2->DitheringSupport.Value = 0;
    return 3221226021LL;
  }
}
