/*
 * XREFs of PowerOffGdi @ 0x1401259E0
 * Callers:
 *     xxxRemoteDisconnect @ 0x1401263A8 (xxxRemoteDisconnect.c)
 * Callees:
 *     _PostMessage @ 0x1400208B0 (_PostMessage.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?HidePointer@CursorApiRouter@@QEAA_N_N@Z @ 0x1401212F8 (-HidePointer@CursorApiRouter@@QEAA_N_N@Z.c)
 *     SetPointerMetaVisibility @ 0x1401229B0 (SetPointerMetaVisibility.c)
 *     zzzEnableDwmPointerSupport @ 0x140122C1C (zzzEnableDwmPointerSupport.c)
 *     ?SetCursorSuppression@Cursor@InputTraceLogging@@SAXW4CURSOR_SUPPRESSION_STATE@@00@Z @ 0x1401240BC (-SetCursorSuppression@Cursor@InputTraceLogging@@SAXW4CURSOR_SUPPRESSION_STATE@@00@Z.c)
 *     ReadCursorSuppressionConfig @ 0x140124CF0 (ReadCursorSuppressionConfig.c)
 */

int __fastcall PowerOffGdi(struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a1, __int64 a2)
{
  __int64 UserSessionState; // rsi
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // ebp
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  int CursorSuppressionConfig; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  int MDEVPowerState; // ebx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rcx

  UserSessionState = W32GetUserSessionState(a1, a2);
  v6 = *(_DWORD *)(W32GetUserSessionState(v5, v4) + 36340);
  v9 = W32GetUserSessionState(v8, v7);
  switch ( *(_DWORD *)(v9 + 36340) )
  {
    case 1:
    case 2:
    case 3:
    case 4:
      goto LABEL_11;
    case 5:
    case 6:
    case 8:
      zzzEnableDwmPointerSupport(0LL, 1LL);
      v20 = W32GetUserSessionState(v19, v18);
      CursorApiRouter::HidePointer(*(CursorApiRouter **)(v20 + 36304), 1u);
LABEL_11:
      *(_DWORD *)(W32GetUserSessionState(v11, v10) + 36340) = 2;
      break;
    case 9:
      CursorSuppressionConfig = ReadCursorSuppressionConfig();
      *(_DWORD *)(W32GetUserSessionState(v14, v13) + 36340) = CursorSuppressionConfig;
      v17 = W32GetUserSessionState(v16, v15);
      SetPointerMetaVisibility(*(_DWORD *)(v17 + 36340) == 0);
      break;
  }
  v21 = W32GetUserSessionState(v11, v10);
  InputTraceLogging::Cursor::SetCursorSuppression(v6, 2LL, *(_DWORD *)(v21 + 36340));
  v24 = W32GetUserSessionState(v23, v22);
  MDEVPowerState = DrvQueryMDEVPowerState(*(_QWORD *)(*(_QWORD *)(v24 + 56968) + 16LL));
  if ( MDEVPowerState )
  {
    SafeDisableMDEV(2LL);
    DestroyMonitorDCs();
    *(_DWORD *)(W32GetUserGdiSessionState() + 28) = 0;
  }
  DrvDxgkLogCodePointPacket(12LL, *(_DWORD *)(UserSessionState + 3020) == 5, 0LL, 0LL);
  v28 = W32GetUserSessionState(v27, v26);
  DrvSetMDEVPowerState(*(_QWORD *)(*(_QWORD *)(v28 + 56968) + 16LL), 0LL);
  LODWORD(v29) = DispBrokerAsyncSessionStateChanged(a1);
  if ( MDEVPowerState )
  {
    if ( *(_DWORD *)(UserSessionState + 3020) == 5 )
    {
      v29 = *((_QWORD *)PtiCurrent(v31, v30) + 62);
      if ( v29 )
      {
        v29 = *(_QWORD *)(v29 + 8);
        if ( v29 )
        {
          v32 = *(_QWORD *)(v29 + 168);
          if ( v32 )
            LODWORD(v29) = PostMessage(v32, 536, 12, 0);
        }
      }
    }
  }
  return v29;
}
