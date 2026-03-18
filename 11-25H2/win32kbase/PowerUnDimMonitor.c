/*
 * XREFs of PowerUnDimMonitor @ 0x140080194
 * Callers:
 *     PowerOnMonitor @ 0x14007FA80 (PowerOnMonitor.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1400E96D0 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     DrvSetMonitorBrightness @ 0x14007F6BC (DrvSetMonitorBrightness.c)
 *     ?PowerMonitorDimStateTelemetry@@YAXPEAU_DIM_UNDIM_TELEMETRY_DATA@@@Z @ 0x140080360 (-PowerMonitorDimStateTelemetry@@YAXPEAU_DIM_UNDIM_TELEMETRY_DATA@@@Z.c)
 *     DrvSetMonitorsDimState @ 0x140080510 (DrvSetMonitorsDimState.c)
 *     ?InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX@@H@Z @ 0x1401469C4 (-InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX@@H.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 *     memset @ 0x140243000 (memset.c)
 */

void __fastcall PowerUnDimMonitor(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // esi
  int v6; // r14d
  unsigned int v7; // ebx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  int (*v14)(void); // rax
  __int64 DxgkWin32kInterface; // rax
  int v16; // eax
  void (*v17)(void); // rax
  __int128 v18; // [rsp+38h] [rbp-59h] BYREF
  GUID ActivityId[2]; // [rsp+48h] [rbp-49h] BYREF
  _BYTE v20[96]; // [rsp+68h] [rbp-29h] BYREF

  memset(ActivityId, 0, 24);
  UserSessionState = W32GetUserSessionState(a1, a2);
  ActivityId[0].Data1 = 2;
  ActivityId[0].Data2 = 0;
  LOBYTE(ActivityId[0].Data3) = 0;
  if ( !*(_WORD *)(W32GetUserSessionState(v4, v3) + 68752) )
  {
    v5 = *(_DWORD *)(UserSessionState + 2920);
    v6 = *(_DWORD *)(UserSessionState + 2900);
    memset(v20, 0, 0x58uLL);
    if ( v5 == v6 )
    {
      if ( *(_DWORD *)(UserSessionState + 2888) == 1 )
        goto LABEL_4;
    }
    else
    {
      InitializeMonitorBrightnessDiagnosticsPacket((struct _DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX *)v20, 0);
      v7 = *(_DWORD *)(UserSessionState + 2924);
      v10 = W32GetUserSessionState(v9, v8);
      DrvSetMonitorBrightness(
        *(_QWORD *)(*(_QWORD *)(v10 + 56968) + 16LL),
        v7,
        v11,
        v12,
        (_BYTE *)(UserSessionState + 2956),
        0);
      LOBYTE(ActivityId[0].Data2) = 1;
    }
    EtwActivityIdControl(3u, (LPGUID)ActivityId[0].Data4);
    v18 = *(_OWORD *)ActivityId[0].Data4;
    DrvSetMonitorsDimState(0LL, &v18);
    HIBYTE(ActivityId[0].Data2) = 1;
    if ( v5 != v6 )
    {
      v13 = *(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48);
      v14 = *(int (**)(void))(v13 + 2360);
      if ( v14 )
      {
        if ( v14() >= 0 )
        {
          v13 = *(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48);
          v17 = *(void (**)(void))(v13 + 2368);
          if ( v17 )
            v17();
        }
      }
      DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v13);
      (*(void (__fastcall **)(_BYTE *))(DxgkWin32kInterface + 304))(v20);
      v16 = *(_DWORD *)(UserSessionState + 2924);
      *(_DWORD *)(UserSessionState + 2900) = v16;
      *(_DWORD *)(UserSessionState + 2920) = v16;
    }
  }
LABEL_4:
  PowerMonitorDimStateTelemetry((struct _DIM_UNDIM_TELEMETRY_DATA *)ActivityId);
}
