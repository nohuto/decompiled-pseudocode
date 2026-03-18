/*
 * XREFs of ?CitpProcessForegroundChange@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@0@Z @ 0x14012F12C
 * Callers:
 *     CitProcessForegroundChange @ 0x14012F0E0 (CitProcessForegroundChange.c)
 *     CitModerncoreProcessForegroundChange @ 0x1402408B0 (CitModerncoreProcessForegroundChange.c)
 * Callees:
 *     IsRemoteConnection @ 0x14002AFE4 (IsRemoteConnection.c)
 *     ?CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x14007BDA0 (-CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     ?CitIsEnabled@@YAEXZ @ 0x14007D3EC (-CitIsEnabled@@YAEXZ.c)
 */

void __fastcall CitpProcessForegroundChange(struct tagPROCESSINFO *a1, struct tagWND *a2, struct tagPROCESSINFO *a3)
{
  struct tagWND *v3; // rsi
  struct tagPROCESSINFO *v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  unsigned __int64 v8; // rbp

  v3 = a2;
  v4 = a1;
  if ( a3 )
    PsUpdateComponentPower(*(_QWORD *)a3, 4LL);
  if ( v4 )
  {
    if ( (*((_DWORD *)v4 + 3) & 0x1000) != 0 )
    {
      v4 = 0LL;
      v3 = 0LL;
    }
    else
    {
      PsUpdateComponentPower(*(_QWORD *)v4, 4LL);
    }
  }
  if ( CitIsEnabled((__int64)a1, (__int64)a2) )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v6, v5) + 18912) + 32LL);
    v8 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    if ( (unsigned int)IsRemoteConnection() && !*(_WORD *)(v7 + 114) )
    {
      if ( (unsigned int)dword_14029F124 < MEMORY[0xFFFFF7800000037C] )
        EtwTelemetryCoverageReport(&off_14029F118);
      *(_BYTE *)(v7 + 112) |= 4u;
      ++*(_WORD *)(v7 + 114);
    }
    *(_QWORD *)(v7 + 128) = v4;
    CitpSetForegroundProcess((struct _CIT_IMPACT_CONTEXT *)v7, (unsigned int)v8, v4, v3);
  }
}
