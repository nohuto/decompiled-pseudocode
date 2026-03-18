/*
 * XREFs of PowerOnGdi @ 0x1401257F0
 * Callers:
 *     xxxRemoteDisconnect @ 0x1401263A8 (xxxRemoteDisconnect.c)
 * Callees:
 *     ?HidePointer@CursorApiRouter@@QEAA_N_N@Z @ 0x1401212F8 (-HidePointer@CursorApiRouter@@QEAA_N_N@Z.c)
 *     SetPointerMetaVisibility @ 0x1401229B0 (SetPointerMetaVisibility.c)
 *     zzzEnableDwmPointerSupport @ 0x140122C1C (zzzEnableDwmPointerSupport.c)
 *     ?SetCursorSuppression@Cursor@InputTraceLogging@@SAXW4CURSOR_SUPPRESSION_STATE@@00@Z @ 0x1401240BC (-SetCursorSuppression@Cursor@InputTraceLogging@@SAXW4CURSOR_SUPPRESSION_STATE@@00@Z.c)
 *     ReadCursorSuppressionConfig @ 0x140124CF0 (ReadCursorSuppressionConfig.c)
 *     xxxUserResetDisplayDevice @ 0x140125400 (xxxUserResetDisplayDevice.c)
 *     ProcessDelayedSdc @ 0x14022EDA0 (ProcessDelayedSdc.c)
 */

__int64 __fastcall PowerOnGdi(struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a1, __int64 a2, unsigned int a3)
{
  int v4; // esi
  __int64 UserSessionState; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // edi
  __int64 UserGdiSessionState; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int v16; // esi
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rdx
  int CursorSuppressionConfig; // ebx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rax

  v4 = a2;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v9 = 0;
  if ( !(unsigned int)DrvQueryMDEVPowerState(*(_QWORD *)(*(_QWORD *)(UserSessionState + 56968) + 16LL)) )
  {
    UserGdiSessionState = W32GetUserGdiSessionState();
    DrvDxgkLogCodePointPacket(11LL, 0LL, *(unsigned int *)(UserGdiSessionState + 16), 0LL);
    EtwTracePowerOnGdiBegin(a3);
    *(_DWORD *)(W32GetUserGdiSessionState() + 28) = 1;
    SafeEnableMDEV(2LL);
    v13 = W32GetUserSessionState(v12, v11);
    DrvSetMDEVPowerState(*(_QWORD *)(*(_QWORD *)(v13 + 56968) + 16LL), 1LL);
    DispBrokerAsyncSessionStateChanged(a1);
    xxxUserResetDisplayDevice(v15, v14);
    if ( v4 )
      ProcessDelayedSdc(a1);
  }
  v16 = *(_DWORD *)(W32GetUserSessionState(v8, v7) + 36340);
  v19 = W32GetUserSessionState(v18, v17);
  v21 = (unsigned int)(*(_DWORD *)(v19 + 36340) - 1);
  if ( *(_DWORD *)(v19 + 36340) == 1 )
    goto LABEL_14;
  v21 = (unsigned int)(*(_DWORD *)(v19 + 36340) - 2);
  if ( *(_DWORD *)(v19 + 36340) == 2 )
    goto LABEL_14;
  v21 = (unsigned int)(*(_DWORD *)(v19 + 36340) - 3);
  if ( *(_DWORD *)(v19 + 36340) == 3 )
    goto LABEL_14;
  v21 = (unsigned int)(*(_DWORD *)(v19 + 36340) - 4);
  if ( *(_DWORD *)(v19 + 36340) == 4 )
    goto LABEL_14;
  if ( *(_DWORD *)(v19 + 36340) == 5
    || *(_DWORD *)(v19 + 36340) == 6
    || (v22 = (unsigned int)(*(_DWORD *)(v19 + 36340) - 8), *(_DWORD *)(v19 + 36340) == 8) )
  {
    zzzEnableDwmPointerSupport(0LL, 1LL);
    v30 = W32GetUserSessionState(v29, v28);
    CursorApiRouter::HidePointer(*(CursorApiRouter **)(v30 + 36304), 1u);
LABEL_14:
    *(_DWORD *)(W32GetUserSessionState(v20, v21) + 36340) = 2;
    goto LABEL_15;
  }
  if ( *(_DWORD *)(v19 + 36340) == 9 )
  {
    CursorSuppressionConfig = ReadCursorSuppressionConfig();
    *(_DWORD *)(W32GetUserSessionState(v25, v24) + 36340) = CursorSuppressionConfig;
    LOBYTE(v9) = *(_DWORD *)(W32GetUserSessionState(v27, v26) + 36340) == 0;
    SetPointerMetaVisibility(v9);
  }
LABEL_15:
  v31 = W32GetUserSessionState(v20, v22);
  InputTraceLogging::Cursor::SetCursorSuppression(v16, 2LL, *(_DWORD *)(v31 + 36340));
  return EtwTracePowerOnGdiEnd(a3);
}
