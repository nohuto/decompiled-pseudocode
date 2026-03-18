/*
 * XREFs of ?CitpProcessForegroundChange@@YAXPEAUtagPROCESSINFO@@PEAUtagWND@@0@Z @ 0x1401BB940
 * Callers:
 *     CitProcessForegroundChange @ 0x1401678C0 (CitProcessForegroundChange.c)
 * Callees:
 *     IsRemoteConnection @ 0x14007E9B8 (IsRemoteConnection.c)
 *     ?CitIsEnabled@@YAEXZ @ 0x1400D598C (-CitIsEnabled@@YAEXZ.c)
 *     ?CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1400D5DF8 (-CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 */

void __fastcall CitpProcessForegroundChange(struct tagPROCESSINFO *a1, struct tagWND *a2, struct tagPROCESSINFO *a3)
{
  struct tagWND *v3; // rsi
  struct tagPROCESSINFO *v4; // rdi
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  __int64 v8; // rbx
  unsigned __int64 v9; // rbp

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
  if ( CitIsEnabled((int)a1, (int)a2, (int)a3) )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v6, v5, v7) + 18952) + 32LL);
    v9 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    if ( (unsigned int)IsRemoteConnection(0xFFFFF78000000004uLL) && !*(_WORD *)(v8 + 114) )
    {
      if ( (unsigned int)dword_1402AA144 < MEMORY[0xFFFFF7800000037C] )
        EtwTelemetryCoverageReport(&off_1402AA138);
      *(_BYTE *)(v8 + 112) |= 4u;
      ++*(_WORD *)(v8 + 114);
    }
    *(_QWORD *)(v8 + 128) = v4;
    CitpSetForegroundProcess((struct _CIT_IMPACT_CONTEXT *)v8, v9, v4, v3);
  }
}
