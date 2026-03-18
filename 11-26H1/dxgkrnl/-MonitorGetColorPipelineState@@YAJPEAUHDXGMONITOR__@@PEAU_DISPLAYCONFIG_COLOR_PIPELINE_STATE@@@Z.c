/*
 * XREFs of ?MonitorGetColorPipelineState@@YAJPEAUHDXGMONITOR__@@PEAU_DISPLAYCONFIG_COLOR_PIPELINE_STATE@@@Z @ 0x14026ED14
 * Callers:
 *     DxgkDisplayConfigDeviceInfoForAdapter @ 0x140435B30 (DxgkDisplayConfigDeviceInfoForAdapter.c)
 * Callees:
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z @ 0x140035638 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z.c)
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x14003C96C (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?GetCachedGammaRampForDiagnostics@MonitorGammaState@DxgMonitor@@QEBAJPEAU_DXGK_DIAG_BLACK_SCREEN_DXGKRNL_SAMPLED_GAMMA@@@Z @ 0x14027AA58 (-GetCachedGammaRampForDiagnostics@MonitorGammaState@DxgMonitor@@QEBAJPEAU_DXGK_DIAG_BLACK_SCREEN.c)
 *     ?_QueryColorSpaceTransformCaps@MonitorGammaState@DxgMonitor@@AEBAJKPEAXPEA_K@Z @ 0x1403AAAD4 (-_QueryColorSpaceTransformCaps@MonitorGammaState@DxgMonitor@@AEBAJKPEAXPEA_K@Z.c)
 */

__int64 __fastcall MonitorGetColorPipelineState(
        struct HDXGMONITOR__ *a1,
        struct _DISPLAYCONFIG_COLOR_PIPELINE_STATE *a2)
{
  DxgMonitor::MonitorGammaState *v4; // rdi
  int *v5; // rdx
  int v6; // eax
  _DWORD *v7; // r8
  __int64 v8; // r9
  int v9; // eax
  int v10; // eax
  unsigned __int64 v11; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v12[3]; // [rsp+28h] [rbp-D8h] BYREF
  _DWORD v13[16]; // [rsp+40h] [rbp-C0h] BYREF
  _OWORD v14[15]; // [rsp+80h] [rbp-80h] BYREF

  if ( !a1 || !a2 )
    return 3221225485LL;
  MONITOR_MGR::AcquireMonitorShared(v12, (__int64)a1);
  if ( v12[0] )
  {
    v4 = *(DxgMonitor::MonitorGammaState **)(v12[0] + 248LL);
    memset(v14, 0, 0xE8uLL);
    DxgMonitor::MonitorGammaState::GetCachedGammaRampForDiagnostics(
      v4,
      (struct _DXGK_DIAG_BLACK_SCREEN_DXGKRNL_SAMPLED_GAMMA *)v14);
    v5 = (int *)&v14[4];
    v6 = DWORD1(v14[14]);
    v7 = (_DWORD *)((char *)a2 + 76);
    *((_OWORD *)a2 + 2) = v14[12];
    v8 = 16LL;
    *((_DWORD *)a2 + 5) = v6;
    *((_OWORD *)a2 + 3) = v14[13];
    *((_DWORD *)a2 + 16) = v14[14];
    do
    {
      *(v7 - 1) = *(v5 - 16);
      v9 = *v5++;
      *v7 = v9;
      v7 += 3;
      *(v7 - 2) = v5[15];
      --v8;
    }
    while ( v8 );
    memset(v13, 0, sizeof(v13));
    v11 = 0LL;
    DxgMonitor::MonitorGammaState::_QueryColorSpaceTransformCaps(v4, 0x40u, v13, &v11);
    v10 = v13[6] & 0x3FF;
    *((_DWORD *)a2 + 7) = (v13[6] >> 10) & 0x3FF;
    *((_DWORD *)a2 + 6) = v10;
    *((_DWORD *)a2 + 17) = v13[11];
    CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v12);
    return 0LL;
  }
  else
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 3851;
    CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v12);
    return 3221226021LL;
  }
}
