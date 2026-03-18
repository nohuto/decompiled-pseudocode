/*
 * XREFs of PowerDimMonitor @ 0x1401D6144
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x140112470 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     ?PowerMonitorDimStateTelemetry@@YAXPEAU_DIM_UNDIM_TELEMETRY_DATA@@@Z @ 0x14000AF30 (-PowerMonitorDimStateTelemetry@@YAXPEAU_DIM_UNDIM_TELEMETRY_DATA@@@Z.c)
 *     DrvSetMonitorBrightness @ 0x14000C12C (DrvSetMonitorBrightness.c)
 *     DrvSetMonitorsDimState @ 0x14000C4E0 (DrvSetMonitorsDimState.c)
 *     DrvDxgkWriteDiagEntry @ 0x14014FFD0 (DrvDxgkWriteDiagEntry.c)
 *     ?InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX@@H@Z @ 0x140182F74 (-InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX@@H.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

void __fastcall PowerDimMonitor(int a1, int a2, int a3)
{
  __int64 UserSessionState; // rsi
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  unsigned int v7; // eax
  char v8; // r14
  int v9; // r8d
  unsigned int v10; // edi
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  __int64 v18; // rdx
  int v19; // eax
  __int128 v20; // [rsp+38h] [rbp-49h] BYREF
  GUID ActivityId[2]; // [rsp+48h] [rbp-39h] BYREF
  _BYTE v22[96]; // [rsp+68h] [rbp-19h] BYREF

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  memset(ActivityId, 0, 24);
  ActivityId[0].Data1 = 1;
  ActivityId[0].Data2 = 0;
  LOBYTE(ActivityId[0].Data3) = 1;
  if ( !*(_WORD *)(W32GetUserSessionState(v5, v4, v6) + 68744) )
  {
    v7 = *(_DWORD *)(UserSessionState + 2908);
    v8 = 1;
    if ( *(_DWORD *)(UserSessionState + 2920) == v7 || v7 >= *(_DWORD *)(UserSessionState + 2900) )
      v8 = 0;
    memset(v22, 0, 0x58uLL);
    if ( v8 )
    {
      InitializeMonitorBrightnessDiagnosticsPacket((struct _DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX *)v22, 1, v9);
      v10 = *(_DWORD *)(UserSessionState + 2940);
      v14 = W32GetUserSessionState(v12, v11, v13);
      DrvSetMonitorBrightness(
        *(_QWORD *)(*(_QWORD *)(v14 + 56968) + 16LL),
        v10,
        v15,
        v16,
        (_BYTE *)(UserSessionState + 2956),
        0);
      LOBYTE(ActivityId[0].Data2) = 1;
    }
    EtwActivityIdControl(3u, (LPGUID)ActivityId[0].Data4);
    LOBYTE(v17) = 1;
    v20 = *(_OWORD *)ActivityId[0].Data4;
    DrvSetMonitorsDimState(v17, &v20);
    HIBYTE(ActivityId[0].Data2) = 1;
    if ( v8 )
    {
      DrvDxgkWriteDiagEntry((__int64)v22, v18);
      v19 = *(_DWORD *)(UserSessionState + 2940);
      *(_DWORD *)(UserSessionState + 2908) = v19;
      *(_DWORD *)(UserSessionState + 2920) = v19;
    }
  }
  PowerMonitorDimStateTelemetry((struct _DIM_UNDIM_TELEMETRY_DATA *)ActivityId);
}
