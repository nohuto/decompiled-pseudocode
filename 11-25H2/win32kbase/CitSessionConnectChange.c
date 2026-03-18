/*
 * XREFs of CitSessionConnectChange @ 0x140155A50
 * Callers:
 *     <none>
 * Callees:
 *     ?CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@@Z @ 0x14007BDA0 (-CitpSetForegroundProcess@@YAXPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@@Z.c)
 *     ?CitIsEnabled@@YAEXZ @ 0x14007D3EC (-CitIsEnabled@@YAEXZ.c)
 *     ?CitpAllowForegroundProcess@@YAHPEBU_CIT_IMPACT_CONTEXT@@@Z @ 0x140141314 (-CitpAllowForegroundProcess@@YAHPEBU_CIT_IMPACT_CONTEXT@@@Z.c)
 */

void __fastcall CitSessionConnectChange(__int64 a1, __int64 a2)
{
  char v2; // bp
  char v3; // si
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  unsigned __int64 v7; // rdi
  char **v8; // rcx
  char v9; // cl
  int v10; // eax
  struct _CIT_IMPACT_CONTEXT *v11; // rcx
  struct tagPROCESSINFO *v12; // r8

  v2 = a2;
  v3 = a1;
  if ( !CitIsEnabled(a1, a2) )
    return;
  v6 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v5, v4) + 18912) + 32LL);
  if ( ((*(_BYTE *)(v6 + 112) & 2) != 0) == v3 )
    return;
  v7 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  if ( v3 )
    ++*(_WORD *)(v6 + 114);
  else
    CitpSetForegroundProcess((struct _CIT_IMPACT_CONTEXT *)v6, (unsigned int)v7, 0LL, 0LL);
  if ( !v2 )
  {
    if ( v3 )
    {
      if ( (unsigned int)dword_14029F0F4 < MEMORY[0xFFFFF7800000037C] )
      {
        v8 = &off_14029F0E8;
LABEL_12:
        EtwTelemetryCoverageReport(v8);
      }
    }
    else if ( (unsigned int)dword_14029F10C < MEMORY[0xFFFFF7800000037C] )
    {
      v8 = &off_14029F100;
      goto LABEL_12;
    }
  }
  v9 = *(_BYTE *)(v6 + 112) & 0xFB | (v2 == 0 ? 4 : 0);
  *(_BYTE *)(v6 + 112) = v9 ^ (v9 ^ (2 * v3)) & 2;
  if ( v3 )
  {
    LOBYTE(v10) = CitpAllowForegroundProcess((const struct _CIT_IMPACT_CONTEXT *)v6);
    if ( v10 )
    {
      v12 = *(struct tagPROCESSINFO **)(v6 + 128);
      if ( v12 )
        CitpSetForegroundProcess(v11, (unsigned int)v7, v12, 0LL);
    }
  }
}
