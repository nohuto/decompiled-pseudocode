/*
 * XREFs of ?_DispatchIoctrls@DXGMONITOR@@QEBAJKKPEAXK0PEA_KK@Z @ 0x1403EA898
 * Callers:
 *     DpiPdoDispatchIoctl @ 0x1402560E0 (DpiPdoDispatchIoctl.c)
 * Callees:
 *     Feature_ScalarMultiplierForBrightness__private_IsEnabledDeviceUsageNoInline @ 0x140076FC4 (Feature_ScalarMultiplierForBrightness__private_IsEnabledDeviceUsageNoInline.c)
 *     ?OnIoctl@MonitorGammaState@DxgMonitor@@QEAAJKKPEAXK0PEA_K@Z @ 0x14027ADFC (-OnIoctl@MonitorGammaState@DxgMonitor@@QEAAJKKPEAXK0PEA_K@Z.c)
 *     ?OnExternalBrightnessNitsUpdated@MonitorColorState@DxgMonitor@@QEAAXIK@Z @ 0x14027CE9C (-OnExternalBrightnessNitsUpdated@MonitorColorState@DxgMonitor@@QEAAXIK@Z.c)
 *     ?OnIoctl@MonitorMipiDsiState@DxgMonitor@@QEAAJKKPEAXK0PEA_K@Z @ 0x14027FBB0 (-OnIoctl@MonitorMipiDsiState@DxgMonitor@@QEAAJKKPEAXK0PEA_K@Z.c)
 */

__int64 __fastcall DXGMONITOR::_DispatchIoctrls(
        DxgMonitor::MonitorGammaState **this,
        __int64 a2,
        unsigned int a3,
        _DWORD *a4,
        unsigned int a5,
        _QWORD *a6,
        unsigned __int64 *a7,
        unsigned int a8)
{
  __int64 v9; // rbp
  unsigned int v12; // ebx
  __int64 v13; // rax
  DxgMonitor::MonitorColorState *v14; // rcx
  DxgMonitor::MonitorMipiDsiState *v15; // rcx

  v9 = (unsigned int)a2;
  v12 = -1073741637;
  v13 = WdLogNewEntry5_WdTrace(this, a2);
  *(_QWORD *)(v13 + 24) = v9;
  *(_QWORD *)(v13 + 32) = this;
  WdLogGlobalForLineNumber = 2315;
  switch ( (_DWORD)v9 )
  {
    case 0x231000:
    case 0x231004:
    case 0x231008:
      return (unsigned int)DxgMonitor::MonitorGammaState::OnIoctl(this[31], v9, a3, a4, a5, a6, a7);
    case 0x23100C:
    case 0x231010:
      if ( !(unsigned int)Feature_ScalarMultiplierForBrightness__private_IsEnabledDeviceUsageNoInline() )
        return v12;
      return (unsigned int)DxgMonitor::MonitorGammaState::OnIoctl(this[31], v9, a3, a4, a5, a6, a7);
    case 0x231400:
    case 0x231404:
    case 0x231408:
      v15 = this[32];
      if ( !v15 )
        return v12;
      return (unsigned int)DxgMonitor::MonitorMipiDsiState::OnIoctl(v15, v9, a3, a4, a5, a6, a7);
    case 0x234014:
      if ( a3 >= 4 )
      {
        v14 = this[28];
        if ( v14 )
        {
          DxgMonitor::MonitorColorState::OnExternalBrightnessNitsUpdated(v14, *a4, a8);
          return 0;
        }
      }
      else
      {
        return (unsigned int)-1073741789;
      }
      break;
  }
  return v12;
}
