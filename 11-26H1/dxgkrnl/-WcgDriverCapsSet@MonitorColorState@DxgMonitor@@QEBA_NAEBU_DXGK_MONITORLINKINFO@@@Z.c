/*
 * XREFs of ?WcgDriverCapsSet@MonitorColorState@DxgMonitor@@QEBA_NAEBU_DXGK_MONITORLINKINFO@@@Z @ 0x140362E40
 * Callers:
 *     ?GetMonitorAndLinkWcgCapable@MonitorColorState@DxgMonitor@@QEBAXAEBU_DXGK_MONITORLINKINFO@@AEA_N1@Z @ 0x14027C270 (-GetMonitorAndLinkWcgCapable@MonitorColorState@DxgMonitor@@QEBAXAEBU_DXGK_MONITORLINKINFO@@AEA_N.c)
 *     ?GetMonitorAndLinkWcgCapable@MonitorColorState@DxgMonitor@@QEBAXAEBU_DXGK_MONITORLINKINFO@@AEA_NPEAW4MonitorAndLinkWCGIncapableReason@@@Z @ 0x140362A3C (-GetMonitorAndLinkWcgCapable@MonitorColorState@DxgMonitor@@QEBAXAEBU_DXGK_MONITORLI_ea_140362A3C.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

char __fastcall DxgMonitor::MonitorColorState::WcgDriverCapsSet(
        DxgMonitor::MonitorColorState *this,
        const struct _DXGK_MONITORLINKINFO *a2)
{
  char v3; // bl

  if ( (*(_BYTE *)&a2->Capabilities.0 & 2) != 0 )
    return 1;
  v3 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)this + 72LL))(*(_QWORD *)this) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64, const wchar_t *))(**((_QWORD **)this + 1) + 56LL))(
           *((_QWORD *)this + 1),
           2LL,
           L"OverrideWCGCapabilities") )
    {
      return 1;
    }
  }
  return v3;
}
