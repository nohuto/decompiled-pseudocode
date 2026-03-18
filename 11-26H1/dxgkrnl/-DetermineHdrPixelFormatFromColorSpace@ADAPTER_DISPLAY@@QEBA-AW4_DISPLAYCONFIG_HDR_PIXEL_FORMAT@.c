/*
 * XREFs of ?DetermineHdrPixelFormatFromColorSpace@ADAPTER_DISPLAY@@QEBA?AW4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@W4_D3DDDI_OUTPUT_WIRE_COLOR_SPACE_TYPE@@PEAUHDXGMONITOR__@@@Z @ 0x14036236C
 * Callers:
 *     ?GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJ_NAEAU_DXGK_DISPLAYMODE_INFO@@@Z @ 0x140362038 (-GetDisplayModeFromPath@DMMVIDPNPRESENTPATH@@QEBAJ_NAEAU_DXGK_DISPLAYMODE_INFO@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireMonitorShared@MONITOR_MGR@@SA?AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z @ 0x140035638 (-AcquireMonitorShared@MONITOR_MGR@@SA-AVCONST_MONITOR_REF_LOCK_ACCESSOR@@PEAUHDXGMONITOR__@@@Z.c)
 *     ??1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ @ 0x14003C96C (--1CONST_MONITOR_REF_LOCK_ACCESSOR@@QEAA@XZ.c)
 *     ?GetMonitorAndLinkHdrCapable@MonitorColorState@DxgMonitor@@QEBAXAEBU_DXGK_MONITORLINKINFO@@AEATMONITOR_AND_LINK_HDR_CAPS@@PEAW4MonitorAndLinkHDRIncapableReason@@@Z @ 0x140362FC8 (-GetMonitorAndLinkHdrCapable@MonitorColorState@DxgMonitor@@QEBAXAEBU_DXGK_MONITORLINKINFO@@AEATM.c)
 *     ?GetPreferredHdrPixelFormat@ADAPTER_DISPLAY@@QEBA?AW4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@XZ @ 0x1403F5984 (-GetPreferredHdrPixelFormat@ADAPTER_DISPLAY@@QEBA-AW4_DISPLAYCONFIG_HDR_PIXEL_FORMAT@@XZ.c)
 */

__int64 __fastcall ADAPTER_DISPLAY::DetermineHdrPixelFormatFromColorSpace(__int64 a1, int a2, __int64 a3)
{
  unsigned int v3; // edi
  char v7; // bl
  D3DKMDT_WIRE_FORMAT_AND_PREFERENCE v8; // eax
  DxgMonitor::MonitorColorState *v9; // rcx
  int v10; // ecx
  struct _DXGK_MONITORLINKINFO v12; // [rsp+50h] [rbp-59h] BYREF
  _QWORD v13[4]; // [rsp+60h] [rbp-49h] BYREF
  __int64 v14; // [rsp+80h] [rbp-29h] BYREF
  int v15; // [rsp+88h] [rbp-21h]
  const wchar_t *v16; // [rsp+90h] [rbp-19h]
  int *v17; // [rsp+98h] [rbp-11h]
  int v18; // [rsp+A0h] [rbp-9h]
  int *v19; // [rsp+A8h] [rbp-1h]
  int v20; // [rsp+B0h] [rbp+7h]
  __int64 v21; // [rsp+B8h] [rbp+Fh]
  int v22; // [rsp+C0h] [rbp+17h]
  __int64 v23; // [rsp+C8h] [rbp+1Fh]
  __int128 v24; // [rsp+D0h] [rbp+27h]
  __int128 v25; // [rsp+E0h] [rbp+37h]
  int v26; // [rsp+128h] [rbp+7Fh] BYREF

  v3 = 0;
  if ( g_OSTestSigningEnabled )
  {
    v26 = 0;
    v14 = 0LL;
    v16 = L"HighColor";
    v15 = 288;
    v17 = &v26;
    v18 = 0x4000000;
    v19 = &v26;
    v20 = 4;
    v21 = 0LL;
    v22 = 0;
    v23 = 0LL;
    v24 = 0LL;
    v25 = 0LL;
    if ( (int)RtlQueryRegistryValuesEx(0LL, L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\Dwm", &v14, 0LL, 0LL) >= 0
      && (unsigned int)(v26 - 1) <= 4 )
    {
      if ( v26 != 1 )
      {
        switch ( v26 )
        {
          case 2:
            return 1;
          case 3:
            return 2;
          case 5:
            return 3;
          default:
            return v3;
        }
      }
      return (unsigned int)ADAPTER_DISPLAY::GetPreferredHdrPixelFormat(a1);
    }
  }
  switch ( a2 )
  {
    case 12:
      if ( a3 )
      {
        v7 = 0;
        v26 = 0;
        MONITOR_MGR::AcquireMonitorShared(v13, a3);
        if ( !v13[0] )
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 3646;
          CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v13);
          return v3;
        }
        if ( (*(_BYTE *)(v13[0] + 177LL) & 2) != 0 )
        {
          v8.0 = *(struct _D3DKMDT_WIRE_FORMAT_AND_PREFERENCE::$BC67B894A1A9CCB3D1B7060E96581CDD *)(v13[0] + 340LL);
          v9 = *(DxgMonitor::MonitorColorState **)(v13[0] + 224LL);
          *(_QWORD *)&v12.UsageHints.0 = *(_QWORD *)(v13[0] + 332LL);
          v12.DitheringSupport = v8;
          DxgMonitor::MonitorColorState::GetMonitorAndLinkHdrCapable(
            v9,
            &v12,
            (union MONITOR_AND_LINK_HDR_CAPS *)&v26,
            0LL);
          v7 = v26;
        }
        CONST_MONITOR_REF_LOCK_ACCESSOR::~CONST_MONITOR_REF_LOCK_ACCESSOR((CONST_MONITOR_REF_LOCK_ACCESSOR *)v13);
        if ( (v7 & 1) != 0 )
          return (unsigned int)ADAPTER_DISPLAY::GetPreferredHdrPixelFormat(a1);
      }
      break;
    case 30:
      return 3;
    case 33:
      v10 = *(_DWORD *)(*(_QWORD *)(a1 + 16) + 444LL);
      if ( (v10 & 0x200) == 0 && (v10 & 8) == 0 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 3144;
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"this->GetAdapter()->IsXBoxOneDevice() || this->GetAdapter()->IsSoftGPU()",
          3144LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      break;
  }
  return v3;
}
