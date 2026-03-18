/*
 * XREFs of ?UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1401D5B48
 * Callers:
 *     ?PowerOffSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401D5704 (-PowerOffSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWERON_LOC@@@Z @ 0x1401D5828 (-PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWER.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x1400584BC (W32GetCurrentWin32kSessionId.c)
 *     CitDisplayPowerChange @ 0x1400EA4D4 (CitDisplayPowerChange.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1400EA650 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ?UpdateAdaptiveSessionState@@YAXXZ @ 0x1400EA8F0 (-UpdateAdaptiveSessionState@@YAXXZ.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1400EAAF4 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     EtwTraceDisplayChange @ 0x1400EABC0 (EtwTraceDisplayChange.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

void __fastcall UpdateSessionPowerState(int a1, enum POWER_MONITOR_REQUEST_REASON a2, int a3)
{
  __int64 UserSessionState; // rbx
  __int64 v6; // rcx
  int CurrentWin32kSessionId; // eax
  unsigned __int64 v8; // rcx
  unsigned __int128 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  int v17; // edx
  int v18; // r8d
  __int64 v19; // rdx
  int v20; // ecx
  int v21; // r8d
  int v22; // edx
  int v23; // r8d
  _BYTE v24[8]; // [rsp+30h] [rbp-48h] BYREF
  __int64 InputBuffer; // [rsp+38h] [rbp-40h] BYREF
  int v26; // [rsp+40h] [rbp-38h]
  char v27; // [rsp+44h] [rbp-34h]
  bool v28; // [rsp+45h] [rbp-33h]
  __int16 v29; // [rsp+46h] [rbp-32h]
  enum POWER_MONITOR_REQUEST_REASON v30; // [rsp+48h] [rbp-30h]

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  v29 = 0;
  CurrentWin32kSessionId = W32GetCurrentWin32kSessionId(v6);
  *(_DWORD *)(UserSessionState + 2884) = *(_DWORD *)(UserSessionState + 2888);
  *(_DWORD *)(UserSessionState + 2816) = CurrentWin32kSessionId;
  *(_DWORD *)(UserSessionState + 2888) = a1 != 0;
  *(_QWORD *)(UserSessionState + 2824) = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                                         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                                       - *(_QWORD *)(UserSessionState + 2832);
  v8 = (unsigned __int64)MEMORY[0xFFFFF78000000004] << 32;
  v9 = v8 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8);
  *(_QWORD *)(UserSessionState + 2832) = *((_QWORD *)&v9 + 1);
  *(_WORD *)(UserSessionState + 2892) = *(_WORD *)(W32GetUserSessionState(v8, DWORD2(v9), 800) + 68744) == 0;
  *(_DWORD *)(UserSessionState + 2748) = a1;
  UpdateAdaptiveSessionState();
  LOBYTE(v10) = 1;
  LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v24, v10, v11, v12);
  InputBuffer = 19LL;
  v26 = W32GetCurrentWin32kSessionId(v13);
  v27 = a1;
  v30 = a2;
  v28 = *(_WORD *)(W32GetUserSessionState(v15, v14, v16) + 68744) == 0;
  ZwPowerInformation(SystemPowerStateLogging|0x40, &InputBuffer, 0x14u, 0LL, 0);
  LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v24, v17, v18);
  EtwTraceDisplayChange(v20, v19, v21);
  CitDisplayPowerChange(UserSessionState + 2816, v22, v23);
}
