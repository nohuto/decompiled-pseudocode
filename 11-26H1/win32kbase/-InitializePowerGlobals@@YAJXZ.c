/*
 * XREFs of ?InitializePowerGlobals@@YAJXZ @ 0x140180184
 * Callers:
 *     Win32kBaseDriverEntry @ 0x1402F04E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     memset @ 0x14024BD80 (memset.c)
 */

NTSTATUS InitializePowerGlobals(void)
{
  int v0; // edx
  int v1; // ecx
  int v2; // r8d
  __int64 v3; // rbx
  NTSTATUS result; // eax
  NTSTATUS v5; // edi
  unsigned __int64 v6; // rcx
  __int64 v7; // rcx
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  unsigned __int64 v10; // rax
  int v11; // edx
  __int64 v12; // rcx
  _BYTE *UserGdiSessionState; // rax
  _QWORD OutputBuffer[8]; // [rsp+30h] [rbp-40h] BYREF

  memset(OutputBuffer, 0, sizeof(OutputBuffer));
  v3 = W32GetUserSessionState(v1, v0, v2) + 368;
  result = ZwPowerInformation(SessionPowerInit, 0LL, 0, OutputBuffer, 0x40u);
  v5 = result;
  if ( result >= 0 )
  {
    *(_DWORD *)(v3 + 2384) = LODWORD(OutputBuffer[3]) == 1;
    *(_DWORD *)(v3 + 2396) = HIDWORD(OutputBuffer[3]) == 0;
    v6 = MEMORY[0xFFFFF78000000320] * MEMORY[0xFFFFF78000000004];
    *(_DWORD *)(v3 + 2392) = 0;
    *(_DWORD *)(v3 + 2416) = v6 >> 24;
    *(_DWORD *)(v3 + 2424) = LOBYTE(OutputBuffer[6]);
    *(_DWORD *)(v3 + 2428) = HIDWORD(OutputBuffer[6]) != 0;
    *(_DWORD *)(v3 + 2432) = BYTE1(OutputBuffer[6]);
    *(_DWORD *)(v3 + 2436) = 0;
    *(_DWORD *)(v3 + 2440) = BYTE1(OutputBuffer[7]);
    *(_DWORD *)(v3 + 2520) = 1;
    *(_QWORD *)(v3 + 2456) = 0LL;
    v7 = MEMORY[0xFFFFF78000000004];
    v8 = MEMORY[0xFFFFF78000000320] << 8;
    *(_QWORD *)(v3 + 2480) = 0LL;
    *(_QWORD *)(v3 + 2488) = 0LL;
    *(_QWORD *)(v3 + 2496) = 0LL;
    *(_QWORD *)(v3 + 2504) = 0LL;
    *(_QWORD *)(v3 + 2472) = ((unsigned __int64)(v7 << 32) * (unsigned __int128)v8) >> 64;
    v9 = MEMORY[0xFFFFF78000000004];
    v10 = MEMORY[0xFFFFF78000000320] << 8;
    *(_DWORD *)(v3 + 2512) = 0;
    *(_QWORD *)(v3 + 2464) = ((unsigned __int64)(v9 << 32) * (unsigned __int128)v10) >> 64;
    *(_DWORD *)(v3 + 2544) = OutputBuffer[5];
    v11 = HIDWORD(OutputBuffer[4]);
    *(_DWORD *)(v3 + 2536) = HIDWORD(OutputBuffer[4]);
    v12 = LODWORD(OutputBuffer[4]);
    *(_DWORD *)(v3 + 2528) = OutputBuffer[4];
    *(_DWORD *)(v3 + 2548) = HIDWORD(OutputBuffer[5]);
    *(_DWORD *)(v3 + 2560) = -1;
    *(_DWORD *)(v3 + 2564) = -1;
    *(_DWORD *)(v3 + 2568) = -1;
    *(_DWORD *)(v3 + 2576) = -1;
    *(_DWORD *)(v3 + 2580) = -1;
    *(_DWORD *)(v3 + 2584) = -1;
    *(_DWORD *)(v3 + 2552) = -1;
    *(_DWORD *)(v3 + 2556) = v12;
    *(_DWORD *)(v3 + 2572) = v11;
    *(_BYTE *)(v3 + 2588) = 0;
    UserGdiSessionState = (_BYTE *)W32GetUserGdiSessionState(v12);
    *UserGdiSessionState = OutputBuffer[7];
    *(_DWORD *)(v3 + 2312) = 1000 * LODWORD(OutputBuffer[2]);
    *(_QWORD *)(v3 + 2352) = OutputBuffer[0];
    *(_QWORD *)(v3 + 2344) = OutputBuffer[1];
    LODWORD(UserGdiSessionState) = 1000 * HIDWORD(OutputBuffer[2]);
    *(_BYTE *)(v3 + 2304) = 1;
    *(_DWORD *)(v3 + 2320) = (_DWORD)UserGdiSessionState;
    return v5;
  }
  return result;
}
