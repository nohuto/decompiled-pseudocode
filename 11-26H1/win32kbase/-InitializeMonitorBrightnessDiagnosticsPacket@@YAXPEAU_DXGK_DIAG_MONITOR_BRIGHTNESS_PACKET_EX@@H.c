/*
 * XREFs of ?InitializeMonitorBrightnessDiagnosticsPacket@@YAXPEAU_DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX@@H@Z @ 0x140182F74
 * Callers:
 *     PowerDimUndimResend @ 0x14000AD94 (PowerDimUndimResend.c)
 *     PowerDimMonitor @ 0x1401D6144 (PowerDimMonitor.c)
 *     PowerUnDimMonitor @ 0x1401D6960 (PowerUnDimMonitor.c)
 * Callees:
 *     <none>
 */

void __fastcall InitializeMonitorBrightnessDiagnosticsPacket(
        struct _DXGK_DIAG_MONITOR_BRIGHTNESS_PACKET_EX *a1,
        int a2,
        int a3)
{
  unsigned __int8 v3; // si
  __int64 UserSessionState; // rax
  _DWORD *v6; // rdi
  __int64 v7; // rbx
  int v8; // eax
  int v9; // edx
  int v10; // ecx

  v3 = a2;
  UserSessionState = W32GetUserSessionState((_DWORD)a1, a2, a3);
  *(_DWORD *)a1 = 25;
  *((_DWORD *)a1 + 1) = 88;
  v6 = (_DWORD *)UserSessionState;
  *((_DWORD *)a1 + 10) = 0;
  *((_QWORD *)a1 + 4) = 0LL;
  *((_QWORD *)a1 + 1) = 0LL;
  *((_OWORD *)a1 + 1) = 0LL;
  v7 = MEMORY[0xFFFFF78000000320];
  *((_QWORD *)a1 + 6) = v7 * KeQueryTimeIncrement();
  *((_DWORD *)a1 + 14) = v6[730];
  *((_DWORD *)a1 + 15) = v6[725];
  *((_DWORD *)a1 + 16) = v6[724];
  *((_DWORD *)a1 + 17) = v6[727];
  *((_DWORD *)a1 + 18) = v6[726];
  *((_DWORD *)a1 + 19) = -1;
  v8 = v6[729];
  *((_DWORD *)a1 + 21) &= ~2u;
  *((_DWORD *)a1 + 20) = v8;
  v9 = *((_DWORD *)a1 + 21) ^ ((unsigned __int8)*((_DWORD *)a1 + 21) ^ (unsigned __int8)(4 * v6[699])) & 4;
  *((_DWORD *)a1 + 21) = v9;
  v10 = v9 ^ ((unsigned __int8)v9 ^ (unsigned __int8)(8 * v6[698])) & 8;
  *((_DWORD *)a1 + 21) = v10 ^ (v3 ^ (unsigned __int8)v10) & 1;
}
