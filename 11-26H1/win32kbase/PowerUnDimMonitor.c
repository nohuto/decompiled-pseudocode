/*
 * XREFs of PowerUnDimMonitor @ 0x1401D6960
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x140112470 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     PowerOnMonitor @ 0x1401D6660 (PowerOnMonitor.c)
 * Callees:
 *     ?PowerMonitorDimStateTelemetry@@YAXPEAU_DIM_UNDIM_TELEMETRY_DATA@@@Z @ 0x14000AF30 (-PowerMonitorDimStateTelemetry@@YAXPEAU_DIM_UNDIM_TELEMETRY_DATA@@@Z.c)
 *     DrvSetMonitorBrightness @ 0x14000C12C (DrvSetMonitorBrightness.c)
 *     DrvSetMonitorsDimState @ 0x14000C4E0 (DrvSetMonitorsDimState.c)
 *     DrvDxgkWriteDiagEntry @ 0x14014FFD0 (DrvDxgkWriteDiagEntry.c)
 *     ?InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX@@H@Z @ 0x140182F74 (-InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX@@H.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

void __fastcall PowerUnDimMonitor(int a1, int a2, int a3)
{
  __int64 UserSessionState; // rsi
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  int v7; // r14d
  int v8; // r15d
  int v9; // r8d
  unsigned int v10; // edi
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  int v18; // eax
  __int128 v19; // [rsp+38h] [rbp-59h] BYREF
  GUID ActivityId[2]; // [rsp+48h] [rbp-49h] BYREF
  _BYTE v21[96]; // [rsp+68h] [rbp-29h] BYREF

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  memset(ActivityId, 0, 24);
  ActivityId[0].Data2 = 0;
  LOBYTE(ActivityId[0].Data3) = 0;
  ActivityId[0].Data1 = 2;
  if ( !*(_WORD *)(W32GetUserSessionState(v5, v4, v6) + 68744) )
  {
    v7 = *(_DWORD *)(UserSessionState + 2920);
    v8 = *(_DWORD *)(UserSessionState + 2900);
    memset(v21, 0, 0x58uLL);
    if ( v7 == v8 )
    {
      if ( *(_DWORD *)(UserSessionState + 2888) == 1 )
        goto LABEL_7;
    }
    else
    {
      InitializeMonitorBrightnessDiagnosticsPacket((struct _DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX *)v21, 0, v9);
      v10 = *(_DWORD *)(UserSessionState + 2924);
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
    v19 = *(_OWORD *)ActivityId[0].Data4;
    DrvSetMonitorsDimState(0LL, &v19);
    HIBYTE(ActivityId[0].Data2) = 1;
    if ( v7 != v8 )
    {
      DrvDxgkWriteDiagEntry((__int64)v21, v17);
      v18 = *(_DWORD *)(UserSessionState + 2924);
      *(_DWORD *)(UserSessionState + 2900) = v18;
      *(_DWORD *)(UserSessionState + 2920) = v18;
    }
  }
LABEL_7:
  PowerMonitorDimStateTelemetry((struct _DIM_UNDIM_TELEMETRY_DATA *)ActivityId);
}
