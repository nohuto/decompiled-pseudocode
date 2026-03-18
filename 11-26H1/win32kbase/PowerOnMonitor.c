/*
 * XREFs of PowerOnMonitor @ 0x1401D6660
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x140112470 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1401132A0 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 * Callees:
 *     DrvChangeD3RequestsState @ 0x14000C07C (DrvChangeD3RequestsState.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1400EA20C (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1401116D8 (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1401117CC (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     DCompositionForceRender @ 0x140135368 (DCompositionForceRender.c)
 *     EtwTracPowerOnMonitoreBegin @ 0x140148A68 (EtwTracPowerOnMonitoreBegin.c)
 *     EtwTracePowerOnMonitorEnd @ 0x140148A94 (EtwTracePowerOnMonitorEnd.c)
 *     ?DisarmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x14014B2CC (-DisarmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z.c)
 *     DrvDxgkLogCodePointPacket @ 0x14014FF40 (DrvDxgkLogCodePointPacket.c)
 *     ?PowerOnMonitor@Power@InputTraceLogging@@SAXW4POWER_MONITOR_REQUEST_REASON@@W4_POWERON_LOC@@@Z @ 0x140161408 (-PowerOnMonitor@Power@InputTraceLogging@@SAXW4POWER_MONITOR_REQUEST_REASON@@W4_POWERON_LOC@@@Z.c)
 *     DrvSetMonitorPowerState @ 0x140181340 (DrvSetMonitorPowerState.c)
 *     SetPointer @ 0x1401853CC (SetPointer.c)
 *     IsSetPointerSupported @ 0x14018D104 (IsSetPointerSupported.c)
 *     ?ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z @ 0x1401C1404 (-ArmPowerWatchdog@@YAXPEAXW4_POWER_WATCHDOG_TYPE@@@Z.c)
 *     PowerUnDimMonitor @ 0x1401D6960 (PowerUnDimMonitor.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

char __fastcall PowerOnMonitor(enum POWER_MONITOR_REQUEST_REASON a1, __int64 a2, unsigned int a3)
{
  int v6; // edi
  _DWORD *UserSessionState; // rbx
  int v8; // ebp
  int v9; // r15d
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  char result; // al
  __int64 v14; // rdx
  __int64 v15; // r8
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  __int64 v19; // rdx
  __int64 v20; // rcx
  struct tagTHREADINFO *v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  int v25; // edx
  int v26; // ecx
  int v27; // r8d
  __int64 v28; // rcx
  int v29; // edx
  int v30; // ecx
  int v31; // r8d
  __int64 v32; // rax
  int v33; // edx
  int v34; // ecx
  int v35; // r8d
  __int64 v36; // rax
  int v37; // edx
  int v38; // ecx
  int v39; // r8d
  __int64 v40; // rax
  int v41; // edx
  int v42; // ecx
  int v43; // r8d
  __int64 v44; // rcx
  __int64 v45; // rdx
  int v46; // ecx
  __int64 v47; // r8
  __int64 v48; // rcx
  int (*v49)(void); // rax
  __int64 v50; // rcx
  void (*v51)(void); // rax
  int v52; // [rsp+88h] [rbp+20h] BYREF

  v6 = 0;
  UserSessionState = (_DWORD *)W32GetUserSessionState(a1, a2, a3);
  v8 = UserSessionState[687];
  v9 = 0;
  result = **(_BYTE **)(W32GetUserSessionState(v11, v10, v12) + 2712);
  if ( !result )
  {
    EtwTracPowerOnMonitoreBegin(a3, v14, v15);
    InputTraceLogging::Power::PowerOnMonitor((unsigned int)a1, a3);
    if ( !v8 )
    {
      if ( !*(_WORD *)(W32GetUserSessionState(v17, v16, v18) + 68744) )
      {
        if ( !UserSessionState[687] && !UserSessionState[692] && !UserSessionState[693] )
        {
          v9 = 1;
          v52 = 1;
          ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v52, 4LL, 0LL, 0LL, 0, 0);
        }
        DrvChangeD3RequestsState(0);
        UserSessionSwitchBlock_Start();
        v21 = PtiCurrent(v20, v19);
        if ( v21 )
        {
          v22 = *((_QWORD *)v21 + 61);
          if ( v22 )
          {
            v23 = *(_QWORD *)(v22 + 8);
            if ( v23 )
            {
              v24 = *(unsigned int *)(*(_QWORD *)v23 + 64LL);
              if ( (v24 & 1) != 0 )
                DCompositionForceRender(v24);
            }
          }
        }
        DrvDxgkLogCodePointPacket(13LL, 0LL, 0, 0);
        if ( *(_QWORD *)(W32GetUserSessionState(v26, v25, v27) + 19176) && (int)IsSetPointerSupported(v28) >= 0 )
          SetPointer(0LL);
        DisplayRestoreVidPnJournalBegin((unsigned int)a1);
        v32 = W32GetUserSessionState(v30, v29, v31);
        ArmPowerWatchdog(*(_QWORD *)(v32 + 552), 80);
        v36 = W32GetUserSessionState(v34, v33, v35);
        DrvSetMonitorPowerState(*(_QWORD *)(*(_QWORD *)(v36 + 56968) + 16LL), 1LL, 0LL, a2);
        v40 = W32GetUserSessionState(v38, v37, v39);
        DisarmPowerWatchdog(*(_QWORD *)(v40 + 552));
        DisplayRestoreVidPnJournalFinalize(a2);
        if ( *(_QWORD *)(W32GetUserSessionState(v42, v41, v43) + 19176) && (int)IsSetPointerSupported(v44) >= 0 )
          SetPointer(1LL);
        UserSessionSwitchBlock_End();
        DrvChangeD3RequestsState(1);
      }
      v6 = 1;
    }
    PowerUnDimMonitor();
    if ( UserSessionState[722] == 2 || v6 )
      UpdateDisplayState(PowerMonitorOn, a1, v8 == 0);
    if ( !v8 )
    {
      if ( *(_QWORD *)(W32GetUserSessionState(v46, v45, v47) + 19176) )
      {
        v49 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v48) + 48) + 2080LL);
        if ( v49 )
        {
          if ( v49() >= 0 )
          {
            v51 = *(void (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v50) + 48) + 2088LL);
            if ( v51 )
              v51();
          }
        }
      }
    }
    if ( v9 )
    {
      v52 = 3;
      ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v52, 4LL, 0LL, 0LL, 0, 0);
    }
    return EtwTracePowerOnMonitorEnd(a3, v45, v47);
  }
  return result;
}
