/*
 * XREFs of PowerOnMonitor @ 0x14007FA80
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1400E96D0 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1400EA660 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 * Callees:
 *     DrvSetMonitorPowerState @ 0x14006A8A0 (DrvSetMonitorPowerState.c)
 *     ?PowerOnMonitor@Power@InputTraceLogging@@SAXW4POWER_MONITOR_REQUEST_REASON@@W4_POWERON_LOC@@@Z @ 0x14007FE18 (-PowerOnMonitor@Power@InputTraceLogging@@SAXW4POWER_MONITOR_REQUEST_REASON@@W4_POWERON_LOC@@@Z.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x14007FE94 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     EtwTracePowerOnMonitorEnd @ 0x140080144 (EtwTracePowerOnMonitorEnd.c)
 *     EtwTracPowerOnMonitoreBegin @ 0x14008016C (EtwTracPowerOnMonitoreBegin.c)
 *     PowerUnDimMonitor @ 0x140080194 (PowerUnDimMonitor.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1400E1920 (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     DrvDxgkLogCodePointPacket @ 0x1400E2640 (DrvDxgkLogCodePointPacket.c)
 *     DCompositionForceRender @ 0x1400E82F8 (DCompositionForceRender.c)
 *     ?ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1400EA3AC (-ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z.c)
 *     ?DisarmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1400F090C (-DisarmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z.c)
 *     DrvChangeD3RequestsState @ 0x140141730 (DrvChangeD3RequestsState.c)
 *     SetPointer @ 0x14014A2C0 (SetPointer.c)
 *     IsSetPointerSupported @ 0x14014FCB8 (IsSetPointerSupported.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1401B6C6C (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

char __fastcall PowerOnMonitor(__int64 a1, __int64 a2, unsigned int a3)
{
  enum POWER_MONITOR_REQUEST_REASON v5; // r14d
  int v6; // edi
  _DWORD *UserSessionState; // rbx
  int v8; // ebp
  int v9; // r15d
  __int64 v10; // rdx
  __int64 v11; // rcx
  char result; // al
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // r9d
  struct tagTHREADINFO *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  int (*v32)(void); // rax
  __int64 v33; // rcx
  int (*v34)(void); // rax
  void (*v35)(void); // rax
  __int64 v36; // rax
  __int64 v37; // rax
  void (*v38)(void); // rax
  int v39; // [rsp+88h] [rbp+20h] BYREF

  v5 = (int)a1;
  v6 = 0;
  UserSessionState = (_DWORD *)W32GetUserSessionState(a1, a2);
  v8 = UserSessionState[688];
  v9 = 0;
  result = **(_BYTE **)(W32GetUserSessionState(v11, v10) + 2712);
  if ( !result )
  {
    EtwTracPowerOnMonitoreBegin(a3);
    InputTraceLogging::Power::PowerOnMonitor((unsigned int)v5, a3);
    if ( !v8 )
    {
      if ( !*(_WORD *)(W32GetUserSessionState(v14, v13) + 68752) )
      {
        if ( !UserSessionState[688] && !UserSessionState[693] && !UserSessionState[694] )
        {
          v9 = 1;
          v39 = 1;
          ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v39, 4LL, 0LL, 0LL);
        }
        DrvChangeD3RequestsState(0LL);
        UserSessionSwitchBlock_Start();
        v18 = PtiCurrent();
        if ( v18 )
        {
          v36 = *((_QWORD *)v18 + 62);
          if ( v36 )
          {
            v37 = *(_QWORD *)(v36 + 8);
            if ( v37 )
            {
              if ( (*(_DWORD *)(*(_QWORD *)v37 + 64LL) & 1) != 0 )
                DCompositionForceRender();
            }
          }
        }
        DrvDxgkLogCodePointPacket(13LL, 0LL, 0LL, 0LL);
        if ( *(_QWORD *)(W32GetUserSessionState(v20, v19) + 19144) && (int)IsSetPointerSupported() >= 0 )
          SetPointer(0LL);
        DisplayRestoreVidPnJournalBegin((unsigned int)v5);
        v23 = W32GetUserSessionState(v22, v21);
        ArmPowerWatchdog(*(_QWORD *)(v23 + 552), 80LL);
        v26 = W32GetUserSessionState(v25, v24);
        DrvSetMonitorPowerState(*(_QWORD *)(*(_QWORD *)(v26 + 56968) + 16LL), 1u, 0, a2);
        v29 = W32GetUserSessionState(v28, v27);
        DisarmPowerWatchdog(*(_QWORD *)(v29 + 552));
        DisplayRestoreVidPnJournalFinalize(a2);
        v31 = *(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48);
        v32 = *(int (**)(void))(v31 + 2424);
        if ( v32 )
        {
          if ( v32() >= 0 )
          {
            v31 = *(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48);
            v38 = *(void (**)(void))(v31 + 2432);
            if ( v38 )
              v38();
          }
        }
        if ( *(_QWORD *)(W32GetUserSessionState(v31, v30) + 19144) && (int)IsSetPointerSupported() >= 0 )
          SetPointer(1LL);
        UserSessionSwitchBlock_End();
        LOBYTE(v33) = 1;
        DrvChangeD3RequestsState(v33);
      }
      v6 = 1;
    }
    PowerUnDimMonitor();
    if ( UserSessionState[722] == 2 || v6 )
      UpdateDisplayState(PowerMonitorOn, v5, v8 == 0, v17);
    if ( !v8 )
    {
      if ( *(_QWORD *)(W32GetUserSessionState(v16, v15) + 19144) )
      {
        v34 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 2408LL);
        if ( v34 )
        {
          if ( v34() >= 0 )
          {
            v35 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable() + 48) + 2416LL);
            if ( v35 )
              v35();
          }
        }
      }
    }
    if ( v9 )
    {
      v39 = 3;
      ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v39, 4LL, 0LL, 0LL);
    }
    return EtwTracePowerOnMonitorEnd(a3);
  }
  return result;
}
