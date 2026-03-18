/*
 * XREFs of ?UpdateSessionPowerState@@YAXHW4POWER_MONITOR_REQUEST_REASON@@@Z @ 0x1401B0834
 * Callers:
 *     ?PowerOffSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1401B02CC (-PowerOffSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWERON_LOC@@@Z @ 0x1401B0460 (-PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWER.c)
 * Callees:
 *     W32GetCurrentWin32kSessionId @ 0x140049A34 (W32GetCurrentWin32kSessionId.c)
 *     CitDisplayPowerChange @ 0x14007F0D4 (CitDisplayPowerChange.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140081F58 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     EtwTraceDisplayChange @ 0x1400B7070 (EtwTraceDisplayChange.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1401A6050 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ?UpdateAdaptiveSessionState@@YAXXZ @ 0x1401B0780 (-UpdateAdaptiveSessionState@@YAXXZ.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

void __fastcall UpdateSessionPowerState(__int64 a1, __int64 a2)
{
  int v2; // esi
  int v3; // edi
  __int64 UserSessionState; // rbx
  int CurrentWin32kSessionId; // eax
  unsigned __int64 v6; // rcx
  unsigned __int128 v7; // rax
  _BOOL8 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  _BYTE v19[8]; // [rsp+30h] [rbp-48h] BYREF
  __int64 InputBuffer; // [rsp+38h] [rbp-40h] BYREF
  int v21; // [rsp+40h] [rbp-38h]
  char v22; // [rsp+44h] [rbp-34h]
  bool v23; // [rsp+45h] [rbp-33h]
  __int16 v24; // [rsp+46h] [rbp-32h]
  int v25; // [rsp+48h] [rbp-30h]

  v2 = a2;
  v3 = a1;
  UserSessionState = W32GetUserSessionState(a1, a2);
  v24 = 0;
  CurrentWin32kSessionId = W32GetCurrentWin32kSessionId();
  *(_DWORD *)(UserSessionState + 2884) = *(_DWORD *)(UserSessionState + 2888);
  *(_DWORD *)(UserSessionState + 2816) = CurrentWin32kSessionId;
  *(_DWORD *)(UserSessionState + 2888) = v3 != 0;
  *(_QWORD *)(UserSessionState + 2824) = ((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                                         * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                                       - *(_QWORD *)(UserSessionState + 2832);
  v6 = (unsigned __int64)MEMORY[0xFFFFF78000000004] << 32;
  v7 = v6 * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8);
  *(_QWORD *)(UserSessionState + 2832) = *((_QWORD *)&v7 + 1);
  v8 = *(_WORD *)(W32GetUserSessionState(v6, *((_QWORD *)&v7 + 1)) + 68752) == 0;
  *(_WORD *)(UserSessionState + 2892) = v8;
  *(_DWORD *)(UserSessionState + 2752) = v3;
  UpdateAdaptiveSessionState(v8, v9);
  LOBYTE(v10) = 1;
  LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)v19, v10);
  InputBuffer = 19LL;
  v21 = W32GetCurrentWin32kSessionId();
  v22 = v3;
  v25 = v2;
  v23 = *(_WORD *)(W32GetUserSessionState(v12, v11) + 68752) == 0;
  ZwPowerInformation(SystemPowerStateLogging|0x40, &InputBuffer, 0x14u, 0LL, 0);
  LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)v19, v13);
  EtwTraceDisplayChange(v15, v14, v16, v17);
  CitDisplayPowerChange(UserSessionState + 2816, v18);
}
