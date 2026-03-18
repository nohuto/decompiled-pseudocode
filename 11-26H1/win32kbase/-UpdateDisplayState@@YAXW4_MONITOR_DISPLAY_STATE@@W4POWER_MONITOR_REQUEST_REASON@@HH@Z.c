/*
 * XREFs of ?UpdateDisplayState@@YAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@HH@Z @ 0x1400EA20C
 * Callers:
 *     ?xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z @ 0x140112470 (-xxxUserPowerEventCalloutWorker@@YAJPEAU_WIN32_POWEREVENT_PARAMETERS@@@Z.c)
 *     PowerOffMonitor @ 0x1401D62C0 (PowerOffMonitor.c)
 *     PowerOnMonitor @ 0x1401D6660 (PowerOnMonitor.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     CitDisplayPowerChange @ 0x1400EA4D4 (CitDisplayPowerChange.c)
 *     ?UpdateDisplayState@Power@InputTraceLogging@@SAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUEST_REASON@@_N2@Z @ 0x1400EA5B4 (-UpdateDisplayState@Power@InputTraceLogging@@SAXW4_MONITOR_DISPLAY_STATE@@W4POWER_MONITOR_REQUES.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1400EA650 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ?UpdateAdaptiveSessionState@@YAXXZ @ 0x1400EA8F0 (-UpdateAdaptiveSessionState@@YAXXZ.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1400EAAF4 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     EtwTraceDisplayChange @ 0x1400EABC0 (EtwTraceDisplayChange.c)
 *     ??0?$ObjectLock@$$V@?$DomainExclusive@VDLT_POWERTRANSITIONSSTATE@@@?$DomainShared@$$V@@QEAA@XZ @ 0x1400EAC98 (--0-$ObjectLock@$$V@-$DomainExclusive@VDLT_POWERTRANSITIONSSTATE@@@-$DomainShared@$$V@@QEAA@XZ.c)
 *     ?SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z @ 0x14018CE58 (-SetInputMode@@YAXW4_WIN32K_INPUT_MODE@@@Z.c)
 *     ?SetProximityBlocking@@YAXXZ @ 0x1401D5974 (-SetProximityBlocking@@YAXXZ.c)
 *     xxxSendWinlogonPowerMessage @ 0x1401D9BF0 (xxxSendWinlogonPowerMessage.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

void __fastcall UpdateDisplayState(enum _MONITOR_DISPLAY_STATE a1, enum POWER_MONITOR_REQUEST_REASON a2, int a3)
{
  char v3; // r12
  char v4; // r14
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  __int64 UserSessionState; // rbx
  __int64 v11; // rcx
  int CurrentWin32kSessionId; // eax
  int v13; // ecx
  unsigned __int64 v14; // rcx
  unsigned __int128 v15; // rax
  bool v16; // r13
  __int64 v17; // rcx
  int v18; // eax
  int v19; // edx
  int v20; // ecx
  int v21; // r8d
  bool v22; // zf
  __int64 v23; // rcx
  _BYTE v24[8]; // [rsp+30h] [rbp-39h] BYREF
  __int128 v25; // [rsp+38h] [rbp-31h] BYREF
  _DWORD InputBuffer[3]; // [rsp+48h] [rbp-21h] BYREF
  bool v27; // [rsp+54h] [rbp-15h]
  char v28; // [rsp+55h] [rbp-14h]
  char v29; // [rsp+56h] [rbp-13h]
  char v30; // [rsp+57h] [rbp-12h]
  PERESOURCE *v31; // [rsp+58h] [rbp-11h] BYREF
  char v32; // [rsp+80h] [rbp+17h]

  v3 = a3;
  v4 = 0;
  InputTraceLogging::Power::UpdateDisplayState(a1, a2, a3 != 0, 1);
  UserSessionState = W32GetUserSessionState(v8, v7, v9);
  CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(v11);
  v13 = *(_DWORD *)(UserSessionState + 2888);
  *(_DWORD *)(UserSessionState + 2816) = CurrentWin32kSessionId;
  *(_DWORD *)(UserSessionState + 2884) = v13;
  *(_DWORD *)(UserSessionState + 2888) = a1;
  *(_QWORD *)(UserSessionState + 2824) = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                                         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                                       - *(_QWORD *)(UserSessionState + 2832);
  v14 = (unsigned __int64)MEMORY[0xFFFFF78000000004] << 32;
  v15 = v14 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8);
  *(_QWORD *)(UserSessionState + 2832) = *((_QWORD *)&v15 + 1);
  v16 = *(_WORD *)(W32GetUserSessionState(v14, DWORD2(v15), 800) + 68744) == 0;
  *(_WORD *)(UserSessionState + 2892) = v16;
  DomainShared<>::DomainExclusive<DLT_POWERTRANSITIONSSTATE>::ObjectLock<>::ObjectLock<>(&v31);
  if ( a1 )
  {
    *(_DWORD *)(UserSessionState + 2748) = 1;
    if ( v32 && v31 )
      ExReleaseResourceAndLeaveCriticalRegion(*v31);
    *(_QWORD *)(UserSessionState + 2768) = 0LL;
  }
  else
  {
    *(_DWORD *)(UserSessionState + 2748) = 0;
    if ( v32 && v31 )
      ExReleaseResourceAndLeaveCriticalRegion(*v31);
    *(_DWORD *)(UserSessionState + 2768) = a2 == MonitorRequestReasonGracePeriod;
    if ( a2 == MonitorRequestReasonNearProximity )
      SetProximityBlocking();
  }
  UpdateAdaptiveSessionState();
  LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v24, 1);
  if ( *(_BYTE *)W32GetUserGdiSessionState()
    || (unsigned int)(a1 - 1) <= 1
    || a1 == PowerMonitorOff && a2 != MonitorRequestReasonNearProximity && a2 != MonitorRequestReasonGracePeriod )
  {
    v4 = 1;
    if ( a1 != PowerMonitorDim )
    {
      v25 = 0LL;
      xxxSendWinlogonPowerMessage(0LL, 261 - (unsigned int)(a1 != PowerMonitorOff), &v25);
    }
  }
  v18 = W32GetCurrentWin32kSessionId(v17);
  InputBuffer[1] = a1;
  InputBuffer[0] = v18;
  InputBuffer[2] = a2;
  v27 = v16;
  v28 = v4;
  v29 = v3;
  if ( *(_DWORD *)(UserSessionState + 2748)
    || *(_DWORD *)(UserSessionState + 2768)
    || (v22 = *(_DWORD *)(UserSessionState + 2772) == 0, v30 = 0, !v22) )
  {
    v30 = 1;
  }
  ZwPowerInformation(SessionDisplayState, InputBuffer, 0x10u, 0LL, 0);
  if ( *(_BYTE *)(W32GetUserSessionState(v20, v19, v21) + 528) )
  {
    if ( (*(_DWORD *)(UserSessionState + 2748)
       || *(_DWORD *)(UserSessionState + 2768)
       || *(_DWORD *)(UserSessionState + 2772))
      && !*(_DWORD *)(UserSessionState + 2772) )
    {
      v23 = 0LL;
    }
    else
    {
      v23 = 2LL;
    }
    SetInputMode(v23);
  }
  LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v24);
  EtwTraceDisplayChange();
  CitDisplayPowerChange(UserSessionState + 2816);
}
