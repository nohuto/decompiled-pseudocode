/*
 * XREFs of ?GetMonitorAndLinkWcgCapable@MonitorColorState@DxgMonitor@@QEBAXAEBU_DXGK_MONITORLINKINFO@@AEA_NPEAW4MonitorAndLinkWCGIncapableReason@@@Z @ 0x140362A3C
 * Callers:
 *     ?_SerializeMonitor@DXGMONITOR@@QEBAJPEA_KPEAU_DMM_MONITOR_SERIALIZATION@@@Z @ 0x140276B58 (-_SerializeMonitor@DXGMONITOR@@QEBAJPEA_KPEAU_DMM_MONITOR_SERIALIZATION@@@Z.c)
 *     ?MonitorIsMonitorAndDriverWCGCapable@@YAJPEAUHDXGMONITOR__@@PEA_NPEAW4MonitorAndLinkWCGIncapableReason@@@Z @ 0x140362930 (-MonitorIsMonitorAndDriverWCGCapable@@YAJPEAUHDXGMONITOR__@@PEA_NPEAW4MonitorAndLinkWCGIncapable.c)
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
        enum MonitorAndLinkWCGIncapableReason *a4)
{
  bool v8; // bl
  int ColorPrimariesType; // ebp
  bool v10; // al
  __int64 v11; // rax
  int v12; // ecx
  __int64 v13; // rax
  int v14; // eax

  v8 = DxgMonitor::MonitorColorState::WcgDriverCapsSet(this, a2);
  ColorPrimariesType = DxgMonitor::MonitorColorState::GetColorPrimariesType((char *)this + 240);
  v10 = 0;
  if ( v8 )
  {
    if ( *((_BYTE *)this + 468) )
    {
      v11 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this);
      if ( (*(_DWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 24LL))(v11) + 48) & 8) != 0
        && ColorPrimariesType == 2 )
      {
        v10 = 1;
      }
    }
  }
  *a3 = v10;
  if ( !v10 && a4 )
  {
    v12 = 0;
    *(_DWORD *)a4 = 0;
    if ( (*(_BYTE *)&a2->Capabilities.0 & 2) == 0 )
    {
      *(_DWORD *)a4 = 2;
      v12 = 2;
    }
    if ( !*((_BYTE *)this + 468) )
      *(_DWORD *)a4 = v12 | 4;
    v13 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 32LL))(*(_QWORD *)this);
    if ( (*(_DWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 24LL))(v13) + 48) & 8) == 0 )
      *(_DWORD *)a4 |= 8u;
    v14 = *(_DWORD *)a4;
    if ( ColorPrimariesType != 2 )
    {
      v14 |= 0x10u;
      *(_DWORD *)a4 = v14;
    }
    if ( !v14 )
      *(_DWORD *)a4 = 1;
  }
}
