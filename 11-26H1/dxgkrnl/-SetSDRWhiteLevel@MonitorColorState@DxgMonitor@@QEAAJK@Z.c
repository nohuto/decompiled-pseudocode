/*
 * XREFs of ?SetSDRWhiteLevel@MonitorColorState@DxgMonitor@@QEAAJK@Z @ 0x14027D6E0
 * Callers:
 *     ?MonitorSetSDRWhiteLevel@@YAJPEAUHDXGMONITOR__@@K@Z @ 0x14026FE6C (-MonitorSetSDRWhiteLevel@@YAJPEAUHDXGMONITOR__@@K@Z.c)
 *     ?MonitorSetSDRWhiteLevelOverride@@YAJPEAXIK@Z @ 0x14026FF60 (-MonitorSetSDRWhiteLevelOverride@@YAJPEAXIK@Z.c)
 *     ?_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_KK@Z @ 0x140402F6C (-_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_KK@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?SendAdjustedHDRParamsToDriver@MonitorColorState@DxgMonitor@@QEAAJ_N@Z @ 0x1403633A8 (-SendAdjustedHDRParamsToDriver@MonitorColorState@DxgMonitor@@QEAAJ_N@Z.c)
 *     ?TriggerMonitorColorimetryChangedWnf@MonitorColorState@DxgMonitor@@AEAAJXZ @ 0x1403635A4 (-TriggerMonitorColorimetryChangedWnf@MonitorColorState@DxgMonitor@@AEAAJXZ.c)
 *     ?SetLuminanceValuesWithBrightnessCompensation@MonitorColorState@DxgMonitor@@AEAAJK@Z @ 0x140416FA0 (-SetLuminanceValuesWithBrightnessCompensation@MonitorColorState@DxgMonitor@@AEAAJK@Z.c)
 */

__int64 __fastcall DxgMonitor::MonitorColorState::SetSDRWhiteLevel(
        DxgMonitor::MonitorColorState *this,
        unsigned int a2)
{
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // edi
  DxgMonitor::MonitorColorState *v10; // rcx

  if ( *((_DWORD *)this + 119) == a2 )
    return 255LL;
  *((_DWORD *)this + 119) = a2;
  if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)this + 72LL))(*(_QWORD *)this) )
    (*(void (__fastcall **)(_QWORD, __int64, const wchar_t *, _QWORD))(**((_QWORD **)this + 1) + 136LL))(
      *((_QWORD *)this + 1),
      4LL,
      L"SDRWhiteLevel",
      a2);
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 112LL))(*(_QWORD *)this);
  if ( v5 )
  {
    v6 = v5 - 12;
    if ( !v6 || (v7 = v6 - 18) != 0 && (v8 = v7 - 1) != 0 && (unsigned int)(v8 - 1) <= 1 )
    {
      v9 = DxgMonitor::MonitorColorState::SetLuminanceValuesWithBrightnessCompensation(this, 0xFFFFFFFF);
      if ( v9 < 0 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 1901;
        return (unsigned int)v9;
      }
      v9 = DxgMonitor::MonitorColorState::SendAdjustedHDRParamsToDriver(this, 1);
      if ( v9 < 0 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 1905;
        return (unsigned int)v9;
      }
      DxgMonitor::MonitorColorState::TriggerMonitorColorimetryChangedWnf(v10);
    }
  }
  (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)this + 128LL))(*(_QWORD *)this, 4LL);
  return 0LL;
}
