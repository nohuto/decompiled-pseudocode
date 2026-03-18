/*
 * XREFs of PowerDimUndimResend @ 0x14000AD94
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401D0C98 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     xxxUserSetDisplayConfig @ 0x1401D2DF0 (xxxUserSetDisplayConfig.c)
 * Callees:
 *     ?PowerMonitorDimStateTelemetry@@YAXPEAU_DIM_UNDIM_TELEMETRY_DATA@@@Z @ 0x14000AF30 (-PowerMonitorDimStateTelemetry@@YAXPEAU_DIM_UNDIM_TELEMETRY_DATA@@@Z.c)
 *     DrvSetMonitorBrightness @ 0x14000C12C (DrvSetMonitorBrightness.c)
 *     DrvSetMonitorsDimState @ 0x14000C4E0 (DrvSetMonitorsDimState.c)
 *     DrvDxgkWriteDiagEntry @ 0x14014FFD0 (DrvDxgkWriteDiagEntry.c)
 *     ?InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX@@H@Z @ 0x140182F74 (-InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX@@H.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

void PowerDimUndimResend()
{
  __int64 UserSessionState; // rdi
  int v1; // ebx
  _DWORD *v2; // r14
  int v3; // r15d
  char v4; // r12
  __int64 v5; // rax
  int v6; // r8d
  int v7; // r9d
  char Data3; // al
  __int64 v9; // rcx
  __int128 v10; // [rsp+38h] [rbp-69h] BYREF
  GUID ActivityId[2]; // [rsp+48h] [rbp-59h] BYREF
  _BYTE v12[96]; // [rsp+68h] [rbp-39h] BYREF

  UserSessionState = W32GetUserSessionState();
  memset(ActivityId, 0, 24);
  v1 = 0;
  if ( !*(_WORD *)(W32GetUserSessionState() + 68744) && !*(_DWORD *)(W32GetUserGdiSessionState() + 36) )
  {
    if ( *(_BYTE *)(UserSessionState + 2956)
      || (v2 = (_DWORD *)(UserSessionState + 2920), v3 = *(_DWORD *)(UserSessionState + 2920), v3 == -1) )
    {
      v4 = 0;
      v2 = (_DWORD *)(UserSessionState + 2920);
    }
    else
    {
      v4 = 1;
      v5 = W32GetUserSessionState();
      DrvSetMonitorBrightness(*(_QWORD *)(*(_QWORD *)(v5 + 56968) + 16LL), v3, v6, v7, UserSessionState + 2956, 1);
      LOBYTE(ActivityId[0].Data2) = 1;
    }
    Data3 = ActivityId[0].Data3;
    if ( *(_DWORD *)(UserSessionState + 2888) == 2 )
      Data3 = 1;
    LOBYTE(ActivityId[0].Data3) = Data3;
    EtwActivityIdControl(3u, (LPGUID)ActivityId[0].Data4);
    LOBYTE(v9) = ActivityId[0].Data3;
    v10 = *(_OWORD *)ActivityId[0].Data4;
    DrvSetMonitorsDimState(v9, &v10);
    HIBYTE(ActivityId[0].Data2) = 1;
    if ( v4 && *(_BYTE *)(UserSessionState + 2956) )
    {
      memset(v12, 0, 0x58uLL);
      LOBYTE(v1) = *v2 == *(_DWORD *)(UserSessionState + 2908);
      InitializeMonitorBrightnessDiagnosticsPacket((struct _DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX *)v12, v1);
      DrvDxgkWriteDiagEntry(v12);
    }
  }
  PowerMonitorDimStateTelemetry((struct _DIM_UNDIM_TELEMETRY_DATA *)ActivityId);
}
