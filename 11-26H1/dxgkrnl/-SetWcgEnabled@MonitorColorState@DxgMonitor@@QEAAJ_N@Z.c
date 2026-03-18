/*
 * XREFs of ?SetWcgEnabled@MonitorColorState@DxgMonitor@@QEAAJ_N@Z @ 0x14027D804
 * Callers:
 *     ?MonitorEnableDisableWcg@@YAJPEAUHDXGMONITOR__@@_N@Z @ 0x14026EAA0 (-MonitorEnableDisableWcg@@YAJPEAUHDXGMONITOR__@@_N@Z.c)
 *     ?OnFunctionDriverArrival@MonitorColorState@DxgMonitor@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x14027CF1C (-OnFunctionDriverArrival@MonitorColorState@DxgMonitor@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DxgMonitor::MonitorColorState::SetWcgEnabled(DxgMonitor::MonitorColorState *this, char a2)
{
  char v2; // si
  __int64 v5; // r9

  v2 = *((_BYTE *)this + 457);
  *((_BYTE *)this + 457) = a2;
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)this + 72LL))(*(_QWORD *)this) )
  {
    LOBYTE(v5) = a2;
    (*(void (__fastcall **)(_QWORD, __int64, const wchar_t *, __int64))(**((_QWORD **)this + 1) + 152LL))(
      *((_QWORD *)this + 1),
      4LL,
      L"AutoColorManagementEnabled",
      v5);
  }
  if ( v2 != a2 )
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)this + 128LL))(*(_QWORD *)this, 3LL);
  return 0LL;
}
