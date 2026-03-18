/*
 * XREFs of PowerOffMonitor @ 0x1400E1480
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1400E96D0 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1400EA660 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 * Callees:
 *     DrvSetMonitorPowerState @ 0x14006A8A0 (DrvSetMonitorPowerState.c)
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x14007FE94 (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140081F58 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1400E1920 (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     DrvDxgkLogCodePointPacket @ 0x1400E2640 (DrvDxgkLogCodePointPacket.c)
 *     ?GetGlobalTickCountWithSequence@CInputGlobals@@QEBA_KW4INPUT_GLOBALS_TICK_COUNT@@PEA_K@Z @ 0x1400EDBA0 (-GetGlobalTickCountWithSequence@CInputGlobals@@QEBA_KW4INPUT_GLOBALS_TICK_COUNT@@PEA_K@Z.c)
 *     PrepareGammaRampData @ 0x1401522CC (PrepareGammaRampData.c)
 *     PostWinlogonMessage @ 0x14016BE20 (PostWinlogonMessage.c)
 *     ?PowerOffMonitor@Power@InputTraceLogging@@SAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1401A1A04 (-PowerOffMonitor@Power@InputTraceLogging@@SAXW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1401A6050 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ?SetProximityBlocking@@YAXXZ @ 0x1401B05AC (-SetProximityBlocking@@YAXXZ.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1401B6C6C (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     FadeDesktop @ 0x14023ECA0 (FadeDesktop.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall PowerOffMonitor(__int64 a1, __int64 a2)
{
  enum POWER_MONITOR_REQUEST_REASON v3; // ebx
  _DWORD *UserSessionState; // rax
  _DWORD *v5; // rdi
  int v6; // r14d
  int v7; // r15d
  int v8; // r12d
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  int (*v18)(void); // rax
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  int (*v22)(void); // rax
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  int (*v28)(void); // rax
  void (*v29)(void); // rax
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rcx
  int (*v33)(void); // rax
  __int64 v34; // rsi
  void (__fastcall *v35)(__int64); // rax
  unsigned __int64 v36; // rcx
  unsigned __int128 v37; // rax
  __int64 v38; // rax
  unsigned __int64 GlobalTickCountWithSequence; // rax
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  unsigned int v43; // [rsp+40h] [rbp-20h] BYREF
  __int64 v44; // [rsp+48h] [rbp-18h] BYREF
  __int64 v45; // [rsp+50h] [rbp-10h] BYREF
  int v46; // [rsp+B0h] [rbp+50h] BYREF
  int v47; // [rsp+B8h] [rbp+58h] BYREF

  v3 = (int)a1;
  UserSessionState = (_DWORD *)W32GetUserSessionState(a1, a2);
  v5 = UserSessionState;
  v43 = 0;
  v6 = 0;
  v44 = 0LL;
  v7 = 0;
  v47 = 0;
  v8 = UserSessionState[688];
  v45 = 0LL;
  if ( v8 || UserSessionState[693] || UserSessionState[694] )
  {
    InputTraceLogging::Power::PowerOffMonitor(v3);
    if ( !*(_WORD *)(W32GetUserSessionState(v10, v9) + 68752) )
    {
      if ( v3 != MonitorRequestReasonGracePeriod && v3 != MonitorRequestReasonNearProximity )
      {
        v46 = 2;
        ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v46, 4LL, 0LL, 0LL);
        v7 = 1;
      }
      UserSessionSwitchBlock_Start();
      if ( !*(_DWORD *)(W32GetUserSessionState(v12, v11) + 42976)
        && *(_QWORD *)(W32GetUserSessionState(v14, v13) + 19144)
        && (v6 = 1,
            *(_DWORD *)(W32GetUserSessionState(v16, v15) + 42976) = 1,
            (v18 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(1LL, v17) + 48) + 2296LL)) != 0LL)
        && v18() >= 0
        && (int)PrepareGammaRampData(&v43, &v44, &v47) < 0 )
      {
        v19 = 0LL;
        v44 = 0LL;
      }
      else
      {
        v19 = v44;
      }
      if ( v47 )
      {
        LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v46, 1);
        v22 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v21, v20) + 48) + 2312LL);
        if ( v22 && v22() >= 0 )
          FadeDesktop(v43, v44);
        DrvDxgkLogCodePointPacket(14LL, v44 != 0, 0LL, 0LL);
        LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v46, v23);
      }
      else
      {
        DrvDxgkLogCodePointPacket(14LL, v19 != 0, 0LL, 0LL);
      }
      v27 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v25, v24) + 48);
      v28 = *(int (**)(void))(v27 + 2328);
      if ( v28 )
      {
        if ( v28() >= 0 )
        {
          v27 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v27, v26) + 48);
          v29 = *(void (**)(void))(v27 + 2336);
          if ( v29 )
            v29();
        }
      }
      v30 = W32GetUserSessionState(v27, v26);
      DrvSetMonitorPowerState(*(_QWORD *)(*(_QWORD *)(v30 + 56968) + 16LL), 4u, 1, a2);
      if ( v44 )
      {
        v32 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v32, v31) + 48);
        v33 = *(int (**)(void))(v32 + 2376);
        if ( v33 )
        {
          if ( v33() >= 0 )
          {
            v34 = v44;
            v31 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v32, v31) + 48);
            v35 = *(void (__fastcall **)(__int64))(v31 + 2384);
            if ( v35 )
              v35(v34);
          }
        }
      }
      if ( v6 )
        *(_DWORD *)(W32GetUserSessionState(v32, v31) + 42976) = 0;
      UserSessionSwitchBlock_End();
    }
    if ( v3 != MonitorRequestReasonGracePeriod && v3 != MonitorRequestReasonNearProximity )
    {
      v36 = (unsigned __int64)MEMORY[0xFFFFF78000000004] << 32;
      v37 = v36 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8);
      *((_QWORD *)v5 + 355) = *((_QWORD *)&v37 + 1);
      v38 = W32GetUserSessionState(v36, *((_QWORD *)&v37 + 1));
      GlobalTickCountWithSequence = CInputGlobals::GetGlobalTickCountWithSequence(*(_QWORD *)(v38 + 3056), 0LL, &v45);
      v40 = v45;
      if ( GlobalTickCountWithSequence > *((_QWORD *)v5 + 355) )
        v40 = 0LL;
      *((_QWORD *)v5 + 356) = v40;
    }
    UpdateDisplayState(PowerMonitorOff, v3, v8);
    if ( *(_QWORD *)(W32GetUserSessionState(v42, v41) + 62824) )
      PostWinlogonMessage(1029LL, 0LL);
    if ( v7 )
    {
      v46 = 0;
      ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v46, 4LL, 0LL, 0LL);
    }
  }
  else if ( v3 == MonitorRequestReasonNearProximity )
  {
    SetProximityBlocking();
  }
}
