/*
 * XREFs of ?InitializePowerGlobals@@YAJXZ @ 0x14014F2D8
 * Callers:
 *     Win32kBaseDriverEntryOrFault @ 0x1401B34A8 (Win32kBaseDriverEntryOrFault.c)
 *     Win32kBaseDriverEntry @ 0x1402E85E0 (Win32kBaseDriverEntry.c)
 * Callees:
 *     memset @ 0x140243000 (memset.c)
 */

NTSTATUS InitializePowerGlobals(void)
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rbx
  NTSTATUS result; // eax
  NTSTATUS v4; // edi
  unsigned __int64 v5; // rcx
  __int64 v6; // rcx
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rax
  int v10; // edx
  __int64 v11; // rcx
  _BYTE *UserGdiSessionState; // rax
  _QWORD OutputBuffer[8]; // [rsp+30h] [rbp-40h] BYREF

  memset(OutputBuffer, 0, sizeof(OutputBuffer));
  v2 = W32GetUserSessionState(v1, v0) + 368;
  result = ZwPowerInformation(SessionPowerInit, 0LL, 0, OutputBuffer, 0x40u);
  v4 = result;
  if ( result >= 0 )
  {
    *(_DWORD *)(v2 + 2388) = LODWORD(OutputBuffer[3]) == 1;
    *(_DWORD *)(v2 + 2400) = HIDWORD(OutputBuffer[3]) == 0;
    v5 = MEMORY[0xFFFFF78000000320] * MEMORY[0xFFFFF78000000004];
    *(_DWORD *)(v2 + 2396) = 0;
    *(_DWORD *)(v2 + 2420) = v5 >> 24;
    *(_DWORD *)(v2 + 2428) = LOBYTE(OutputBuffer[6]);
    *(_DWORD *)(v2 + 2432) = HIDWORD(OutputBuffer[6]) != 0;
    *(_DWORD *)(v2 + 2436) = BYTE1(OutputBuffer[6]);
    *(_DWORD *)(v2 + 2440) = 0;
    *(_DWORD *)(v2 + 2444) = BYTE1(OutputBuffer[7]);
    *(_DWORD *)(v2 + 2520) = 1;
    *(_QWORD *)(v2 + 2456) = 0LL;
    v6 = MEMORY[0xFFFFF78000000004];
    v7 = MEMORY[0xFFFFF78000000320] << 8;
    *(_QWORD *)(v2 + 2480) = 0LL;
    *(_QWORD *)(v2 + 2488) = 0LL;
    *(_QWORD *)(v2 + 2496) = 0LL;
    *(_QWORD *)(v2 + 2504) = 0LL;
    *(_QWORD *)(v2 + 2472) = ((unsigned __int64)(v6 << 32) * (unsigned __int128)v7) >> 64;
    v8 = MEMORY[0xFFFFF78000000004];
    v9 = MEMORY[0xFFFFF78000000320] << 8;
    *(_DWORD *)(v2 + 2512) = 0;
    *(_QWORD *)(v2 + 2464) = ((unsigned __int64)(v8 << 32) * (unsigned __int128)v9) >> 64;
    *(_DWORD *)(v2 + 2544) = OutputBuffer[5];
    *(_DWORD *)(v2 + 2536) = HIDWORD(OutputBuffer[4]);
    v10 = HIDWORD(OutputBuffer[4]);
    *(_DWORD *)(v2 + 2528) = OutputBuffer[4];
    v11 = LODWORD(OutputBuffer[4]);
    *(_DWORD *)(v2 + 2548) = HIDWORD(OutputBuffer[5]);
    *(_DWORD *)(v2 + 2560) = -1;
    *(_DWORD *)(v2 + 2564) = -1;
    *(_DWORD *)(v2 + 2568) = -1;
    *(_DWORD *)(v2 + 2576) = -1;
    *(_DWORD *)(v2 + 2580) = -1;
    *(_DWORD *)(v2 + 2584) = -1;
    *(_DWORD *)(v2 + 2552) = -1;
    *(_DWORD *)(v2 + 2556) = v11;
    *(_DWORD *)(v2 + 2572) = v10;
    *(_BYTE *)(v2 + 2588) = 0;
    UserGdiSessionState = (_BYTE *)W32GetUserGdiSessionState(v11);
    *UserGdiSessionState = OutputBuffer[7];
    *(_DWORD *)(v2 + 2312) = 1000 * LODWORD(OutputBuffer[2]);
    *(_QWORD *)(v2 + 2352) = OutputBuffer[0];
    *(_QWORD *)(v2 + 2344) = OutputBuffer[1];
    LODWORD(UserGdiSessionState) = 1000 * HIDWORD(OutputBuffer[2]);
    *(_BYTE *)(v2 + 2304) = 1;
    *(_DWORD *)(v2 + 2320) = (_DWORD)UserGdiSessionState;
    return v4;
  }
  return result;
}
