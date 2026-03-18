/*
 * XREFs of PowerOffMonitor @ 0x1401D62C0
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x140112470 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1401132A0 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 * Callees:
 *     ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1400EA20C (-UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1400EA650 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1400EAAF4 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1401116D8 (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1401117CC (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     ?GetGlobalTickCountWithSequence@CInputGlobals@@QEBA_KW4INPUT_GLOBALS_TICK_COUNT@@PEA_K@Z @ 0x140135820 (-GetGlobalTickCountWithSequence@CInputGlobals@@QEBA_KW4INPUT_GLOBALS_TICK_COUNT@@PEA_K@Z.c)
 *     DrvDxgkLogCodePointPacket @ 0x14014FF40 (DrvDxgkLogCodePointPacket.c)
 *     DrvSetMonitorPowerState @ 0x140181340 (DrvSetMonitorPowerState.c)
 *     ?PowerOffMonitor@Power@InputTraceLogging@@SAXW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1401C58AC (-PowerOffMonitor@Power@InputTraceLogging@@SAXW4POWER_MONITOR_REQUEST_REASON@@@Z.c)
 *     ?SetProximityBlocking@@YAXXZ @ 0x1401D5974 (-SetProximityBlocking@@YAXXZ.c)
 *     PostWinlogonMessage @ 0x1401D97F0 (PostWinlogonMessage.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

void __fastcall PowerOffMonitor(enum POWER_MONITOR_REQUEST_REASON a1, __int64 a2, int a3)
{
  _DWORD *UserSessionState; // rax
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  _DWORD *v8; // rdi
  int v9; // r15d
  int v10; // r12d
  int v11; // r13d
  int v12; // edx
  int v13; // ecx
  int v14; // r8d
  int v15; // r8d
  int v16; // edx
  int v17; // ecx
  int v18; // r8d
  __int64 v19; // rdx
  int v20; // ecx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // ecx
  __int64 v24; // rcx
  int (*v25)(void); // rax
  __int64 v26; // rcx
  int (__fastcall *v27)(unsigned int *, __int64 *, int *); // rax
  __int64 v28; // rax
  __int64 v29; // rsi
  unsigned int v30; // r14d
  __int64 v31; // rcx
  void (__fastcall *v32)(_QWORD, __int64, __int64, _QWORD); // rax
  int v33; // edx
  int v34; // r8d
  int v35; // edx
  int v36; // ecx
  int v37; // r8d
  __int64 v38; // rax
  __int64 v39; // r8
  __int64 v40; // rdx
  __int64 v41; // rcx
  int v42; // r8d
  int (*v43)(void); // rax
  __int64 v44; // rsi
  void (__fastcall *v45)(__int64); // rax
  unsigned __int64 v46; // rcx
  unsigned __int128 v47; // rax
  __int64 v48; // rax
  unsigned __int64 GlobalTickCountWithSequence; // rax
  __int64 v50; // rcx
  int v51; // edx
  int v52; // ecx
  int v53; // r8d
  unsigned int v54; // [rsp+40h] [rbp-20h] BYREF
  __int64 v55; // [rsp+48h] [rbp-18h] BYREF
  __int64 v56; // [rsp+50h] [rbp-10h] BYREF
  int v58; // [rsp+B0h] [rbp+50h] BYREF
  int v59; // [rsp+B8h] [rbp+58h] BYREF

  UserSessionState = (_DWORD *)W32GetUserSessionState(a1, a2, a3);
  v8 = UserSessionState;
  v54 = 0;
  v9 = 0;
  v55 = 0LL;
  v10 = 0;
  v59 = 0;
  v11 = UserSessionState[687];
  v56 = 0LL;
  if ( v11 || UserSessionState[692] || UserSessionState[693] )
  {
    InputTraceLogging::Power::PowerOffMonitor(a1);
    if ( !*(_WORD *)(W32GetUserSessionState(v13, v12, v14) + 68744) )
    {
      if ( a1 != MonitorRequestReasonGracePeriod && a1 != MonitorRequestReasonNearProximity )
      {
        v58 = 2;
        ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v58, 4LL, 0LL, 0LL, 0, 0);
        v10 = 1;
      }
      UserSessionSwitchBlock_Start();
      if ( *(_DWORD *)(W32GetUserSessionState(v17, v16, v18) + 43000)
        || !*(_QWORD *)(W32GetUserSessionState(v20, v19, v21) + 19176)
        || (v9 = 1,
            *(_DWORD *)(W32GetUserSessionState(v23, v19, v21) + 43000) = 1,
            (v25 = *(int (**)(void))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v24) + 48) + 2024LL)) == 0LL)
        || v25() < 0
        || (v27 = *(int (__fastcall **)(unsigned int *, __int64 *, int *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v26)
                                                                                     + 48)
                                                                         + 2032LL)) != 0LL
        && v27(&v54, &v55, &v59) >= 0 )
      {
        v28 = v55;
      }
      else
      {
        v28 = 0LL;
        v55 = 0LL;
      }
      if ( v59 )
      {
        LOBYTE(v19) = 1;
        LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v58, v19, v21, v22);
        v29 = v55;
        v30 = v54;
        v32 = *(void (__fastcall **)(_QWORD, __int64, __int64, _QWORD))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v31) + 48)
                                                                      + 2040LL);
        if ( v32 )
          v32(v30, v29, 167LL, 0LL);
        DrvDxgkLogCodePointPacket(14LL, v55 != 0, 0, 0);
        LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v58, v33, v34);
      }
      else
      {
        DrvDxgkLogCodePointPacket(14LL, v28 != 0, 0, 0);
      }
      v38 = W32GetUserSessionState(v36, v35, v37);
      LOBYTE(v39) = 1;
      DrvSetMonitorPowerState(*(_QWORD *)(*(_QWORD *)(v38 + 56968) + 16LL), 4LL, v39, a2);
      if ( v55 )
      {
        v41 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v41) + 48);
        v43 = *(int (**)(void))(v41 + 2048);
        if ( v43 )
        {
          if ( v43() >= 0 )
          {
            v44 = v55;
            v40 = *(_QWORD *)(W32GetWin32kBaseApiSetTable(v41) + 48);
            v45 = *(void (__fastcall **)(__int64))(v40 + 2056);
            if ( v45 )
              v45(v44);
          }
        }
      }
      if ( v9 )
        *(_DWORD *)(W32GetUserSessionState(v41, v40, v42) + 43000) = 0;
      UserSessionSwitchBlock_End();
    }
    if ( a1 != MonitorRequestReasonGracePeriod && a1 != MonitorRequestReasonNearProximity )
    {
      v46 = (unsigned __int64)MEMORY[0xFFFFF78000000004] << 32;
      v47 = v46 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8);
      *((_QWORD *)v8 + 355) = *((_QWORD *)&v47 + 1);
      v48 = W32GetUserSessionState(v46, DWORD2(v47), v15);
      GlobalTickCountWithSequence = CInputGlobals::GetGlobalTickCountWithSequence(*(_QWORD *)(v48 + 3056), 0, &v56);
      v50 = v56;
      if ( GlobalTickCountWithSequence > *((_QWORD *)v8 + 355) )
        v50 = 0LL;
      *((_QWORD *)v8 + 356) = v50;
    }
    UpdateDisplayState(PowerMonitorOff, a1, v11);
    if ( *(_QWORD *)(W32GetUserSessionState(v52, v51, v53) + 62816) )
      PostWinlogonMessage(1029LL, 0LL);
    if ( v10 )
    {
      v58 = 0;
      ZwUpdateWnfStateData(&WNF_PO_PRIMARY_DISPLAY_LOGICAL_STATE, &v58, 4LL, 0LL, 0LL, 0, 0);
    }
  }
  else if ( a1 == MonitorRequestReasonNearProximity )
  {
    SetProximityBlocking(v6, v5, v7);
  }
}
