/*
 * XREFs of ?GetMonitorAndLinkWcgCapable@MonitorColorState@DxgMonitor@@QEBAXAEBU_DXGK_MONITORLINKINFO@@AEA_N1@Z @ 0x14027C270
 * Callers:
 *     ?TriggerMonitorTelemetry@DXGMONITOR@@UEBAXW4TELEMETRY_MONITOR_INVENTORY_TRIGGER@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403E2A30 (-TriggerMonitorTelemetry@DXGMONITOR@@UEBAXW4TELEMETRY_MONITOR_INVENTORY_TRIGGER@DxgMonitor@@PEAU.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?GetColorPrimariesType@MonitorColorState@DxgMonitor@@SA?AW4ColorPrimaryType@12@AEBUDISPLAY_COLOR_DATA_RAW@@@Z @ 0x140362B58 (-GetColorPrimariesType@MonitorColorState@DxgMonitor@@SA-AW4ColorPrimaryType@12@AEBUDISPLAY_COLOR.c)
 *     ?WcgDriverCapsSet@MonitorColorState@DxgMonitor@@QEBA_NAEBU_DXGK_MONITORLINKINFO@@@Z @ 0x140362E40 (-WcgDriverCapsSet@MonitorColorState@DxgMonitor@@QEBA_NAEBU_DXGK_MONITORLINKINFO@@@Z.c)
 */

void __fastcall DxgMonitor::MonitorColorState::GetMonitorAndLinkWcgCapable(
        DxgMonitor::MonitorColorState *this,
        const struct _DXGK_MONITORLINKINFO *a2,
        bool *a3,
        bool *a4)
{
  bool v7; // bl
  int ColorPrimariesType; // ebp
  __int64 v9; // rax
  bool v10; // zf
  bool v11; // al

  v7 = DxgMonitor::MonitorColorState::WcgDriverCapsSet(this, a2);
  ColorPrimariesType = DxgMonitor::MonitorColorState::GetColorPrimariesType((char *)this + 240);
  if ( v7
    && (v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this),
        (*(_DWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 24LL))(v9) + 48) & 8) != 0)
    && ColorPrimariesType == 2 )
  {
    v10 = *((_BYTE *)this + 468) == 0;
    v11 = 1;
    *a4 = 1;
    if ( !v10 )
      goto LABEL_8;
  }
  else
  {
    *a4 = 0;
  }
  v11 = 0;
LABEL_8:
  *a3 = v11;
}
