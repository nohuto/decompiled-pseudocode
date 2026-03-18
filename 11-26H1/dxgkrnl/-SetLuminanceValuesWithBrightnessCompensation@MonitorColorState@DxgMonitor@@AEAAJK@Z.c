/*
 * XREFs of ?SetLuminanceValuesWithBrightnessCompensation@MonitorColorState@DxgMonitor@@AEAAJK@Z @ 0x140416FA0
 * Callers:
 *     ?OnExternalBrightnessNitsUpdated@MonitorColorState@DxgMonitor@@QEAAXIK@Z @ 0x14027CE9C (-OnExternalBrightnessNitsUpdated@MonitorColorState@DxgMonitor@@QEAAXIK@Z.c)
 *     ?SetSDRWhiteLevel@MonitorColorState@DxgMonitor@@QEAAJK@Z @ 0x14027D6E0 (-SetSDRWhiteLevel@MonitorColorState@DxgMonitor@@QEAAJK@Z.c)
 *     ?_SetLuminanceValuesToHDR@MonitorColorState@DxgMonitor@@AEAAXXZ @ 0x14027E094 (-_SetLuminanceValuesToHDR@MonitorColorState@DxgMonitor@@AEAAXXZ.c)
 *     ?_ReevaluateColorAndLuminanceSources@MonitorColorState@DxgMonitor@@AEAA_NXZ @ 0x140362598 (-_ReevaluateColorAndLuminanceSources@MonitorColorState@DxgMonitor@@AEAA_NXZ.c)
 *     ?_SetLuminanceValuesToSDR@MonitorColorState@DxgMonitor@@AEAAXXZ @ 0x140416EE8 (-_SetLuminanceValuesToSDR@MonitorColorState@DxgMonitor@@AEAAXXZ.c)
 *     ?OnBrightnessNitsUpdated@MonitorColorState@DxgMonitor@@QEAAXIK@Z @ 0x140416F3C (-OnBrightnessNitsUpdated@MonitorColorState@DxgMonitor@@QEAAXIK@Z.c)
 * Callees:
 *     Feature_HdrBrightnessPolicy__private_IsEnabledDeviceUsageNoInline @ 0x1400674F4 (Feature_HdrBrightnessPolicy__private_IsEnabledDeviceUsageNoInline.c)
 *     ?TriggerExternalMonitorSdrWhiteLevelChangedWnf@MonitorColorState@DxgMonitor@@AEAAJK@Z @ 0x14027D894 (-TriggerExternalMonitorSdrWhiteLevelChangedWnf@MonitorColorState@DxgMonitor@@AEAAJK@Z.c)
 *     ?TriggerMonitorColorimetryChangedWnf@MonitorColorState@DxgMonitor@@AEAAJXZ @ 0x1403635A4 (-TriggerMonitorColorimetryChangedWnf@MonitorColorState@DxgMonitor@@AEAAJXZ.c)
 */

__int64 __fastcall DxgMonitor::MonitorColorState::SetLuminanceValuesWithBrightnessCompensation(
        DxgMonitor::MonitorColorState *this,
        int a2)
{
  _DWORD *v5; // rdi
  int v6; // eax
  DxgMonitor::MonitorColorState *v7; // rcx
  int v8; // eax
  DxgMonitor::MonitorColorState *v9; // rcx
  int v10; // ecx
  float v11; // xmm1_4
  float v12; // xmm9_4
  float v13; // xmm6_4
  float v14; // xmm7_4
  float v15; // xmm1_4

  if ( !(80 * *((_DWORD *)this + 119)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 2112;
  }
  if ( !*((_DWORD *)this + 118) )
  {
    *(_OWORD *)((char *)this + 376) = *(_OWORD *)((char *)this + 360);
    return 0LL;
  }
  v5 = (_DWORD *)((char *)this + 524);
  if ( (unsigned int)Feature_HdrBrightnessPolicy__private_IsEnabledDeviceUsageNoInline() && !*v5 )
  {
    v6 = *((_DWORD *)this + 118);
    v7 = (DxgMonitor::MonitorColorState *)*((unsigned int *)this + 119);
    if ( (unsigned int)v6 < 0x13880 && *((_BYTE *)this + 528) )
      v8 = 1000;
    else
      v8 = (int)(float)((float)((float)((float)v6 / 1000.0)
                              / (float)((float)((float)((float)((float)v6 / 1000.0) - 80.0)
                                              / (float)((float)*((int *)this + 133) / 1000.0))
                                      + 80.0))
                      * 1000.0);
    *((_DWORD *)this + 119) = v8;
    if ( v8 != (_DWORD)v7 )
    {
      DxgMonitor::MonitorColorState::TriggerMonitorColorimetryChangedWnf(v7);
      if ( a2 != -1 )
        DxgMonitor::MonitorColorState::TriggerExternalMonitorSdrWhiteLevelChangedWnf(v9);
    }
  }
  v10 = 80 * *((_DWORD *)this + 119);
  if ( v10 )
  {
    v11 = (float)*((int *)this + 118) / (float)v10;
    v12 = (float)((float)*((int *)this + 91) / 10000.0) / v11;
    v13 = (float)((float)*((int *)this + 92) / 10000.0) / v11;
    v14 = (float)((float)*((int *)this + 93) / 10000.0) / v11;
    if ( (unsigned int)Feature_HdrBrightnessPolicy__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( !*v5 )
      {
        v15 = (float)((float)*((int *)this + 134) / 1000.0) * (float)((float)*((int *)this + 92) / 10000.0);
        v14 = fminf(v15, v14);
        v13 = fminf(v15, v13);
      }
    }
    *((_DWORD *)this + 96) = (int)(float)(v13 * 10000.0);
    *((_DWORD *)this + 97) = (int)(float)(v14 * 10000.0);
    *((_DWORD *)this + 95) = (int)(float)(v12 * 10000.0);
    return 0LL;
  }
  return 3221225473LL;
}
