/*
 * XREFs of ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x14007FE94
 * Callers:
 *     PowerOnMonitor @ 0x14007FA80 (PowerOnMonitor.c)
 *     PowerOffMonitor @ 0x1400E1480 (PowerOffMonitor.c)
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x1400E96D0 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140049A34 (W32GetCurrentWin32kSessionId.c)
 *     CitDisplayPowerChange @ 0x14007F0D4 (CitDisplayPowerChange.c)
 *     ?UpdateDisplayState@Power@InputTraceLogging@@SAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@_N2@Z @ 0x140081D58 (-UpdateDisplayState@Power@InputTraceLogging@@SAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUES.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140081F58 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     EtwTraceDisplayChange @ 0x1400B7070 (EtwTraceDisplayChange.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_POWERTRANSITIONSSTATE@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400BAB1C (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_POWERTRANSITIONSSTATE@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     ??1?$ObjectLock@$$V@?$DomainExclusive@VDLT_THREADLOCK@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400EE958 (--1-$ObjectLock@$$V@-$DomainExclusive@VDLT_THREADLOCK@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     ?SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x14014D7E0 (-SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 *     xxxSendWinlogonPowerMessage @ 0x14016C260 (xxxSendWinlogonPowerMessage.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1401A6050 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ?SetProximityBlocking@@YAXXZ @ 0x1401B05AC (-SetProximityBlocking@@YAXXZ.c)
 *     ?UpdateAdaptiveSessionState@@YAXXZ @ 0x1401B0780 (-UpdateAdaptiveSessionState@@YAXXZ.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

void __fastcall UpdateDisplayState(enum _MONITOR_DISPLAY_STATE a1, enum POWER_MONITOR_REQUEST_REASON a2, int a3)
{
  char v3; // r12
  char v4; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 UserSessionState; // rbx
  int CurrentWin32kSessionId; // eax
  int v11; // ecx
  unsigned __int64 v12; // rcx
  unsigned __int128 v13; // rax
  bool v14; // r13
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rdx
  bool v19; // zf
  __int64 v20; // rcx
  _BYTE v21[8]; // [rsp+30h] [rbp-39h] BYREF
  __int128 v22; // [rsp+38h] [rbp-31h] BYREF
  _DWORD InputBuffer[3]; // [rsp+48h] [rbp-21h] BYREF
  bool v24; // [rsp+54h] [rbp-15h]
  char v25; // [rsp+55h] [rbp-14h]
  char v26; // [rsp+56h] [rbp-13h]
  char v27; // [rsp+57h] [rbp-12h]
  _QWORD v28[5]; // [rsp+58h] [rbp-11h] BYREF
  char v29; // [rsp+80h] [rbp+17h]

  v3 = a3;
  v4 = 0;
  InputTraceLogging::Power::UpdateDisplayState(a1, a2, a3 != 0, 1);
  UserSessionState = W32GetUserSessionState(v8, v7);
  CurrentWin32kSessionId = W32GetCurrentWin32kSessionId();
  v11 = *(_DWORD *)(UserSessionState + 2888);
  *(_DWORD *)(UserSessionState + 2816) = CurrentWin32kSessionId;
  *(_DWORD *)(UserSessionState + 2884) = v11;
  *(_DWORD *)(UserSessionState + 2888) = a1;
  *(_QWORD *)(UserSessionState + 2824) = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                                         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                                       - *(_QWORD *)(UserSessionState + 2832);
  v12 = (unsigned __int64)MEMORY[0xFFFFF78000000004] << 32;
  v13 = v12 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8);
  *(_QWORD *)(UserSessionState + 2832) = *((_QWORD *)&v13 + 1);
  v14 = *(_WORD *)(W32GetUserSessionState(v12, *((_QWORD *)&v13 + 1)) + 68752) == 0;
  *(_WORD *)(UserSessionState + 2892) = v14;
  DomainShared<>::DomainExclusive<DLT_POWERTRANSITIONSSTATE>::ObjectLock<>::ObjectLock<>(v28);
  if ( a1 )
  {
    *(_DWORD *)(UserSessionState + 2752) = 1;
    if ( v29 && v28[0] )
      ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)v28[0]);
    *(_QWORD *)(UserSessionState + 2772) = 0LL;
  }
  else
  {
    *(_DWORD *)(UserSessionState + 2752) = 0;
    DomainShared<>::DomainExclusive<DLT_THREADLOCK>::ObjectLock<>::~ObjectLock<>(v28);
    *(_DWORD *)(UserSessionState + 2772) = a2 == MonitorRequestReasonGracePeriod;
    if ( a2 == MonitorRequestReasonNearProximity )
      SetProximityBlocking();
  }
  UpdateAdaptiveSessionState();
  LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v21, 1);
  if ( *(_BYTE *)W32GetUserGdiSessionState()
    || (unsigned int)(a1 - 1) <= 1
    || a1 == PowerMonitorOff && a2 != MonitorRequestReasonGracePeriod && a2 != MonitorRequestReasonNearProximity )
  {
    v4 = 1;
    if ( a1 != PowerMonitorDim )
    {
      v22 = 0LL;
      xxxSendWinlogonPowerMessage(0LL, 261 - (unsigned int)(a1 != PowerMonitorOff), &v22);
    }
  }
  v15 = W32GetCurrentWin32kSessionId();
  InputBuffer[1] = a1;
  InputBuffer[0] = v15;
  InputBuffer[2] = a2;
  v24 = v14;
  v25 = v4;
  v26 = v3;
  if ( *(_DWORD *)(UserSessionState + 2752)
    || *(_DWORD *)(UserSessionState + 2772)
    || (v19 = *(_DWORD *)(UserSessionState + 2776) == 0, v27 = 0, !v19) )
  {
    v27 = 1;
  }
  ZwPowerInformation(SessionDisplayState, InputBuffer, 0x10u, 0LL, 0);
  if ( *(_BYTE *)(W32GetUserSessionState(v17, v16) + 528) )
  {
    if ( (*(_DWORD *)(UserSessionState + 2752)
       || *(_DWORD *)(UserSessionState + 2772)
       || *(_DWORD *)(UserSessionState + 2776))
      && !*(_DWORD *)(UserSessionState + 2776) )
    {
      v20 = 0LL;
    }
    else
    {
      v20 = 2LL;
    }
    SetInputMode(v20);
  }
  LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v21);
  EtwTraceDisplayChange();
  CitDisplayPowerChange(UserSessionState + 2816, v18);
}
