/*
 * XREFs of PowerDimMonitor @ 0x140146808
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1400E96D0 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     DrvSetMonitorBrightness @ 0x14007F6BC (DrvSetMonitorBrightness.c)
 *     ?PowerMonitorDimStateTelemetry@@YAXPEAU_DIM_UNDIM_TELEMETRY_DATA@@@Z @ 0x140080360 (-PowerMonitorDimStateTelemetry@@YAXPEAU_DIM_UNDIM_TELEMETRY_DATA@@@Z.c)
 *     DrvSetMonitorsDimState @ 0x140080510 (DrvSetMonitorsDimState.c)
 *     DrvDxgkWriteDiagEntry @ 0x1400E2600 (DrvDxgkWriteDiagEntry.c)
 *     ?InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX@@H@Z @ 0x1401469C4 (-InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX@@H.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 *     memset @ 0x140243000 (memset.c)
 */

void __fastcall PowerDimMonitor(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  unsigned int v6; // eax
  char v7; // si
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rcx
  int (*v16)(void); // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  void (*v19)(void); // rax
  int v20; // eax
  __int128 v21; // [rsp+38h] [rbp-49h] BYREF
  GUID ActivityId[2]; // [rsp+48h] [rbp-39h] BYREF
  _BYTE v23[96]; // [rsp+68h] [rbp-19h] BYREF

  memset(ActivityId, 0, 24);
  UserSessionState = W32GetUserSessionState(a1, a2);
  ActivityId[0].Data1 = 1;
  ActivityId[0].Data2 = 0;
  LOBYTE(ActivityId[0].Data3) = 1;
  if ( !*(_WORD *)(W32GetUserSessionState(v4, v3) + 68752) )
  {
    v6 = *(_DWORD *)(UserSessionState + 2908);
    v7 = 1;
    if ( *(_DWORD *)(UserSessionState + 2920) == v6 || v6 >= *(_DWORD *)(UserSessionState + 2900) )
      v7 = 0;
    memset(v23, 0, 0x58uLL);
    if ( v7 )
    {
      InitializeMonitorBrightnessDiagnosticsPacket((struct _DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX *)v23, 1);
      v8 = *(_DWORD *)(UserSessionState + 2940);
      v11 = W32GetUserSessionState(v10, v9);
      DrvSetMonitorBrightness(
        *(_QWORD *)(*(_QWORD *)(v11 + 56968) + 16LL),
        v8,
        v12,
        v13,
        (_BYTE *)(UserSessionState + 2956),
        0);
      LOBYTE(ActivityId[0].Data2) = 1;
    }
    EtwActivityIdControl(3u, (LPGUID)ActivityId[0].Data4);
    LOBYTE(v14) = 1;
    v21 = *(_OWORD *)ActivityId[0].Data4;
    DrvSetMonitorsDimState(v14, &v21);
    HIBYTE(ActivityId[0].Data2) = 1;
    if ( v7 )
    {
      v16 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v15, v5) + 48) + 2344LL);
      if ( v16 )
      {
        if ( v16() >= 0 )
        {
          v19 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v18, v17) + 48) + 2352LL);
          if ( v19 )
            v19();
        }
      }
      DrvDxgkWriteDiagEntry((__int64)v23);
      v20 = *(_DWORD *)(UserSessionState + 2940);
      *(_DWORD *)(UserSessionState + 2908) = v20;
      *(_DWORD *)(UserSessionState + 2920) = v20;
    }
  }
  PowerMonitorDimStateTelemetry((__int64)ActivityId, v5);
}
