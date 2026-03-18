/*
 * XREFs of ?OnExternalBrightnessNitsUpdated@MonitorColorState@DxgMonitor@@QEAAXIK@Z @ 0x14027CE9C
 * Callers:
 *     ?_DispatchIoctrls@DXGMONITOR@@QEBAJKKPEAXK0PEA_KK@Z @ 0x1403EA898 (-_DispatchIoctrls@DXGMONITOR@@QEBAJKKPEAXK0PEA_KK@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?TriggerMonitorColorimetryChangedWnf@MonitorColorState@DxgMonitor@@AEAAJXZ @ 0x1403635A4 (-TriggerMonitorColorimetryChangedWnf@MonitorColorState@DxgMonitor@@AEAAJXZ.c)
 *     ?SetLuminanceValuesWithBrightnessCompensation@MonitorColorState@DxgMonitor@@AEAAJK@Z @ 0x140416FA0 (-SetLuminanceValuesWithBrightnessCompensation@MonitorColorState@DxgMonitor@@AEAAJK@Z.c)
 */

void __fastcall DxgMonitor::MonitorColorState::OnExternalBrightnessNitsUpdated(
        DxgMonitor::MonitorColorState *this,
        int a2,
        unsigned int a3)
{
  int v3; // eax
  int v5; // edi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  int v9; // eax
  DxgMonitor::MonitorColorState *v10; // rcx

  v3 = *((_DWORD *)this + 119);
  *((_DWORD *)this + 118) = a2;
  v5 = 80 * v3;
  if ( DxgMonitor::MonitorColorState::SetLuminanceValuesWithBrightnessCompensation(this, a3) >= 0 )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 112LL))(*(_QWORD *)this);
    if ( v6 )
    {
      v7 = v6 - 12;
      if ( !v7 || (v8 = v7 - 18) != 0 && (v9 = v8 - 1) != 0 && (unsigned int)(v9 - 1) <= 1 )
      {
        v10 = (DxgMonitor::MonitorColorState *)(unsigned int)(80 * *((_DWORD *)this + 119));
        if ( v5 != (_DWORD)v10 )
          DxgMonitor::MonitorColorState::TriggerMonitorColorimetryChangedWnf(v10);
      }
    }
  }
}
