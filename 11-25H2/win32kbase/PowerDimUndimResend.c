/*
 * XREFs of PowerDimUndimResend @ 0x140142374
 * Callers:
 *     ?xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@@KPEAXW4_MODE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1400E26C4 (-xxxUserChangeDisplaySettingsInternal@@YAJPEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAUtagDESKTOP@.c)
 *     xxxUserSetDisplayConfig @ 0x1401683C0 (xxxUserSetDisplayConfig.c)
 * Callees:
 *     DrvSetMonitorBrightness @ 0x14007F6BC (DrvSetMonitorBrightness.c)
 *     ?PowerMonitorDimStateTelemetry@@YAXPEAU_DIM_UNDIM_TELEMETRY_DATA@@@Z @ 0x140080360 (-PowerMonitorDimStateTelemetry@@YAXPEAU_DIM_UNDIM_TELEMETRY_DATA@@@Z.c)
 *     DrvSetMonitorsDimState @ 0x140080510 (DrvSetMonitorsDimState.c)
 *     DrvDxgkWriteDiagEntry @ 0x1400E2600 (DrvDxgkWriteDiagEntry.c)
 *     ?InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX@@H@Z @ 0x1401469C4 (-InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX@@H.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memset @ 0x140243000 (memset.c)
 */

void __fastcall PowerDimUndimResend(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  int v7; // ebx
  __int64 v8; // rcx
  unsigned int v9; // esi
  char v10; // r12
  char Data3; // al
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r8
  __int64 v15; // r9
  __int128 v16; // [rsp+38h] [rbp-69h] BYREF
  GUID ActivityId[2]; // [rsp+48h] [rbp-59h] BYREF
  _BYTE v18[96]; // [rsp+68h] [rbp-39h] BYREF

  UserSessionState = W32GetUserSessionState(a1, a2);
  memset(ActivityId, 0, 24);
  v7 = 0;
  if ( !*(_WORD *)(W32GetUserSessionState(v4, v3) + 68752) && !*(_DWORD *)(W32GetUserGdiSessionState(v6) + 36) )
  {
    if ( *(_BYTE *)(UserSessionState + 2956) || (v9 = *(_DWORD *)(UserSessionState + 2920), v9 == -1) )
    {
      v10 = 0;
    }
    else
    {
      v10 = 1;
      v13 = W32GetUserSessionState(v8, v5);
      DrvSetMonitorBrightness(
        *(_QWORD *)(*(_QWORD *)(v13 + 56968) + 16LL),
        v9,
        v14,
        v15,
        (_BYTE *)(UserSessionState + 2956),
        1);
      LOBYTE(ActivityId[0].Data2) = 1;
    }
    Data3 = ActivityId[0].Data3;
    if ( *(_DWORD *)(UserSessionState + 2888) == 2 )
      Data3 = 1;
    LOBYTE(ActivityId[0].Data3) = Data3;
    EtwActivityIdControl(3u, (LPGUID)ActivityId[0].Data4);
    LOBYTE(v12) = ActivityId[0].Data3;
    v16 = *(_OWORD *)ActivityId[0].Data4;
    DrvSetMonitorsDimState(v12, &v16);
    HIBYTE(ActivityId[0].Data2) = 1;
    if ( v10 && *(_BYTE *)(UserSessionState + 2956) )
    {
      memset(v18, 0, 0x58uLL);
      LOBYTE(v7) = *(_DWORD *)(UserSessionState + 2920) == *(_DWORD *)(UserSessionState + 2908);
      InitializeMonitorBrightnessDiagnosticsPacket((struct _DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX *)v18, v7);
      DrvDxgkWriteDiagEntry((__int64)v18);
    }
  }
  PowerMonitorDimStateTelemetry((__int64)ActivityId, v5);
}
