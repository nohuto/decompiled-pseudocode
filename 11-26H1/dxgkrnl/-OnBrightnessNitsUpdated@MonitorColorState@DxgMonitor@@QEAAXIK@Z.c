/*
 * XREFs of ?OnBrightnessNitsUpdated@MonitorColorState@DxgMonitor@@QEAAXIK@Z @ 0x140416F3C
 * Callers:
 *     ?_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_KK@Z @ 0x140402F6C (-_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_KK@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?SendAdjustedHDRParamsToDriver@MonitorColorState@DxgMonitor@@QEAAJ_N@Z @ 0x1403633A8 (-SendAdjustedHDRParamsToDriver@MonitorColorState@DxgMonitor@@QEAAJ_N@Z.c)
 *     ?TriggerMonitorColorimetryChangedWnf@MonitorColorState@DxgMonitor@@AEAAJXZ @ 0x1403635A4 (-TriggerMonitorColorimetryChangedWnf@MonitorColorState@DxgMonitor@@AEAAJXZ.c)
 *     ?SetLuminanceValuesWithBrightnessCompensation@MonitorColorState@DxgMonitor@@AEAAJK@Z @ 0x140416FA0 (-SetLuminanceValuesWithBrightnessCompensation@MonitorColorState@DxgMonitor@@AEAAJK@Z.c)
 */

void __fastcall DxgMonitor::MonitorColorState::OnBrightnessNitsUpdated(__m128i *this, __int32 a2, unsigned int a3)
{
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  DxgMonitor::MonitorColorState *v8; // rcx

  this[29].m128i_i32[2] = a2;
  if ( DxgMonitor::MonitorColorState::SetLuminanceValuesWithBrightnessCompensation(
         (DxgMonitor::MonitorColorState *)this,
         a3) >= 0 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)this->m128i_i64[0] + 112LL))(this->m128i_i64[0]);
    if ( v4 )
    {
      v5 = v4 - 12;
      if ( !v5 || (v6 = v5 - 18) != 0 && (v7 = v6 - 1) != 0 && (unsigned int)(v7 - 1) <= 1 )
      {
        DxgMonitor::MonitorColorState::SendAdjustedHDRParamsToDriver(this, 1);
        DxgMonitor::MonitorColorState::TriggerMonitorColorimetryChangedWnf(v8);
      }
    }
  }
}
