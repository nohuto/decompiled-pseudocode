/*
 * XREFs of ?GetColorPrimariesType@MonitorColorState@DxgMonitor@@SA?AW4ColorPrimaryType@12@AEBUDISPLAY_COLOR_DATA_RAW@@@Z @ 0x140362B58
 * Callers:
 *     ?GetMonitorAndLinkWcgCapable@MonitorColorState@DxgMonitor@@QEBAXAEBU_DXGK_MONITORLINKINFO@@AEA_N1@Z @ 0x14027C270 (-GetMonitorAndLinkWcgCapable@MonitorColorState@DxgMonitor@@QEBAXAEBU_DXGK_MONITORLINKINFO@@AEA_N.c)
 *     ?_ReevaluateColorAndLuminanceSources@MonitorColorState@DxgMonitor@@AEAA_NXZ @ 0x140362598 (-_ReevaluateColorAndLuminanceSources@MonitorColorState@DxgMonitor@@AEAA_NXZ.c)
 *     ?GetMonitorAndLinkWcgCapable@MonitorColorState@DxgMonitor@@QEBAXAEBU_DXGK_MONITORLINKINFO@@AEA_NPEAW4MonitorAndLinkWCGIncapableReason@@@Z @ 0x140362A3C (-GetMonitorAndLinkWcgCapable@MonitorColorState@DxgMonitor@@QEBAXAEBU_DXGK_MONITORLI_ea_140362A3C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgMonitor::MonitorColorState::GetColorPrimariesType(int *a1)
{
  int v1; // edx
  int v2; // eax
  int v3; // r8d
  int v4; // r9d
  int v5; // r10d
  int v6; // r11d
  int v7; // ecx
  double v8; // xmm9_8
  double v9; // xmm8_8
  double v10; // xmm10_8
  double v11; // xmm7_8
  double v12; // xmm6_8
  double v13; // xmm3_8
  double v14; // xmm1_8
  double v15; // xmm2_8
  double v16; // xmm2_8
  double v17; // xmm5_8
  double v18; // xmm4_8
  double v19; // xmm4_8
  double v20; // xmm5_8
  double v21; // xmm1_8
  double v22; // xmm1_8
  double v23; // xmm3_8
  double v24; // xmm2_8
  double v25; // xmm2_8
  double v26; // xmm2_8

  v1 = 0;
  v2 = *a1;
  if ( !*a1 )
    return 0LL;
  v3 = a1[1];
  if ( !v3 )
    return 0LL;
  v4 = a1[2];
  if ( !v4 )
    return 0LL;
  v5 = a1[3];
  if ( !v5 )
    return 0LL;
  v6 = a1[4];
  if ( !v6 )
    return 0LL;
  v7 = a1[5];
  if ( !v7 )
    return 0LL;
  v8 = (float)((float)v2 * 0.00000095367432);
  v9 = (float)((float)v5 * 0.00000095367432);
  v10 = (float)((float)v3 * 0.00000095367432);
  v11 = (float)((float)v7 * 0.00000095367432);
  v12 = (float)((float)v4 * 0.00000095367432);
  v13 = (float)((float)v6 * 0.00000095367432);
  if ( v10 + v8 > 1.0 || v9 + v12 > 1.0 || v11 + v13 > 1.0 )
    return 0LL;
  v14 = v8 <= 0.6399999856948853 ? 0.6399999856948853 - v8 : v8 - 0.6399999856948853;
  v15 = v10 > 0.3300000131130219 ? v10 - 0.3300000131130219 : 0.3300000131130219 - v10;
  v16 = v15 * v15 + v14 * v14;
  v17 = v12 <= 0.239999994635582 ? 0.239999994635582 - v12 : v12 - 0.239999994635582;
  v18 = v9 > 0.6499999761581421 ? v9 - 0.6499999761581421 : 0.6499999761581421 - v9;
  v19 = v18 * v18 + v17 * v17;
  v20 = v13 <= 0.1500000059604645 ? 0.1500000059604645 - v13 : v13 - 0.1500000059604645;
  v21 = v11 > 0.07500000298023224 ? v11 - 0.07500000298023224 : 0.07500000298023224 - v11;
  if ( v16 > 0.0081 || v19 > 0.030625 || v21 * v21 + v20 * v20 > 0.0049 )
    return 0LL;
  v22 = v13 * v10;
  v23 = v13 * v9 + v12 * v10 + v11 * v8;
  v24 = v11 * v12 + v9 * v8 + v22;
  v25 = v24 <= v23 ? v23 - v24 : v24 - v23;
  v26 = v25 * 0.5;
  if ( v26 < 0.056025 )
    return 0LL;
  LOBYTE(v1) = v26 >= 0.1064475;
  return (unsigned int)(v1 + 1);
}
