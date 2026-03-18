/*
 * XREFs of ?_PrepareDefaultMonitorConfiguration@DXGMONITOR@@AEAAXXZ @ 0x14043054C
 * Callers:
 *     ?_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@AEAVIMonitorDeferredEventSource@DxgMonitor@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1403E1480 (-_InitializeMonitorWithDriver@DXGMONITOR@@QEAAJAEBVMONITOR_REF_ACCESSOR@@AEAVIMonitorDeferredEve.c)
 * Callees:
 *     ?IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x140054320 (-IsInternalVideoOutput@@YAEW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?_ValidateMonitorOrientation@DXGMONITOR@@AEAAEK@Z @ 0x14027FB70 (-_ValidateMonitorOrientation@DXGMONITOR@@AEAAEK@Z.c)
 *     DpiGetIntegratedDisplayOrientationOverrides @ 0x1404260D8 (DpiGetIntegratedDisplayOrientationOverrides.c)
 */

void __fastcall DXGMONITOR::_PrepareDefaultMonitorConfiguration(DXGMONITOR *this)
{
  int v2; // eax
  enum _D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY v3; // ecx
  int *v4; // rdi
  _DWORD *v5; // rsi
  int v6; // [rsp+30h] [rbp-89h] BYREF
  int v7; // [rsp+34h] [rbp-85h] BYREF
  __int64 v8; // [rsp+40h] [rbp-79h] BYREF
  int v9; // [rsp+48h] [rbp-71h]
  const wchar_t *v10; // [rsp+50h] [rbp-69h]
  char *v11; // [rsp+58h] [rbp-61h]
  int v12; // [rsp+60h] [rbp-59h]
  int *v13; // [rsp+68h] [rbp-51h]
  int v14; // [rsp+70h] [rbp-49h]
  __int64 v15; // [rsp+78h] [rbp-41h]
  int v16; // [rsp+80h] [rbp-39h]
  const wchar_t *v17; // [rsp+88h] [rbp-31h]
  char *v18; // [rsp+90h] [rbp-29h]
  int v19; // [rsp+98h] [rbp-21h]
  int *v20; // [rsp+A0h] [rbp-19h]
  int v21; // [rsp+A8h] [rbp-11h]
  __int64 v22; // [rsp+B0h] [rbp-9h]
  int v23; // [rsp+B8h] [rbp-1h]
  __int64 v24; // [rsp+C0h] [rbp+7h]
  __int128 v25; // [rsp+C8h] [rbp+Fh]
  __int128 v26; // [rsp+D8h] [rbp+1Fh]

  v6 = *((_DWORD *)this + 76);
  v2 = *((char *)this + 176);
  v3 = *((_DWORD *)this + 46);
  v7 = (v2 >> 31) & 3;
  if ( IsInternalVideoOutput(v3) )
  {
    v4 = (int *)((char *)this + 316);
    v5 = (_DWORD *)((char *)this + 308);
    if ( (int)DpiGetIntegratedDisplayOrientationOverrides(
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 21) + 24LL) + 16LL) + 216LL),
                *((_DWORD *)this + 45),
                (_DWORD *)this + 77,
                (_DWORD *)this + 79) < 0 )
    {
      v8 = 0LL;
      v14 = 4;
      v9 = 292;
      v12 = 67108868;
      v16 = 292;
      v10 = L"MonitorOrientation";
      v19 = 67108868;
      v13 = &v6;
      v21 = 4;
      v11 = (char *)this + 308;
      v17 = L"DockedOrientation";
      v20 = &v7;
      v15 = 0LL;
      v18 = (char *)this + 316;
      v22 = 0LL;
      v23 = 0;
      v24 = 0LL;
      v25 = 0LL;
      v26 = 0LL;
      if ( (int)RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v8, 0LL, 0LL) < 0 )
      {
        *v5 = v6;
        *v4 = v7;
      }
    }
    if ( !DXGMONITOR::_ValidateMonitorOrientation(this) )
    {
      WdLogSingleEntry1(2LL);
      *v5 = v6;
      WdLogGlobalForLineNumber = 1429;
    }
    if ( (unsigned int)*v4 > 3 )
    {
      WdLogSingleEntry1(2LL);
      *v4 = v7;
      WdLogGlobalForLineNumber = 1435;
    }
  }
  *((_DWORD *)this + 78) = *((_DWORD *)this + 77);
  *((_DWORD *)this + 80) = *((_DWORD *)this + 79);
}
