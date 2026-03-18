/*
 * XREFs of CitSessionConnectChange @ 0x140192D40
 * Callers:
 *     <none>
 * Callees:
 *     ?CitIsEnabled@@YAEXZ @ 0x1400D598C (-CitIsEnabled@@YAEXZ.c)
 *     ?CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x1400D5DF8 (-CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     ?CitpAllowForegroundProcess@@YAHPEBU_CIT_IMPACT_CONTEXT@@@Z @ 0x1400D7518 (-CitpAllowForegroundProcess@@YAHPEBU_CIT_IMPACT_CONTEXT@@@Z.c)
 */

void __fastcall CitSessionConnectChange(int a1, int a2, int a3)
{
  char v3; // bp
  char v4; // si
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  __int64 v8; // rbx
  unsigned __int64 v9; // rdi
  char **v10; // rcx
  char v11; // cl
  int v12; // eax
  struct _CIT_IMPACT_CONTEXT *v13; // rcx
  struct tagPROCESSINFO *v14; // r8

  v3 = a2;
  v4 = a1;
  if ( !CitIsEnabled(a1, a2, a3) )
    return;
  v8 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v6, v5, v7) + 18952) + 32LL);
  if ( ((*(_BYTE *)(v8 + 112) & 2) != 0) == v4 )
    return;
  v9 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( v4 )
    ++*(_WORD *)(v8 + 114);
  else
    CitpSetForegroundProcess((struct _CIT_IMPACT_CONTEXT *)v8, v9, 0LL, 0LL);
  if ( !v3 )
  {
    if ( v4 )
    {
      if ( (unsigned int)dword_1402AA0FC < MEMORY[0xFFFFF7800000037C] )
      {
        v10 = &off_1402AA0F0;
LABEL_12:
        EtwTelemetryCoverageReport(v10);
      }
    }
    else if ( (unsigned int)dword_1402AA0E4 < MEMORY[0xFFFFF7800000037C] )
    {
      v10 = &off_1402AA0D8;
      goto LABEL_12;
    }
  }
  v11 = *(_BYTE *)(v8 + 112) & 0xFB | (v3 == 0 ? 4 : 0);
  *(_BYTE *)(v8 + 112) = v11 ^ (v11 ^ (2 * v4)) & 2;
  if ( v4 )
  {
    LOBYTE(v12) = CitpAllowForegroundProcess((const struct _CIT_IMPACT_CONTEXT *)v8);
    if ( v12 )
    {
      v14 = *(struct tagPROCESSINFO **)(v8 + 128);
      if ( v14 )
        CitpSetForegroundProcess(v13, v9, v14, 0LL);
    }
  }
}
