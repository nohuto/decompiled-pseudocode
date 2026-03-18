/*
 * XREFs of InbvDetermineFunction @ 0x1405C4B30
 * Callers:
 *     InbvDriverInitialize @ 0x140CBA030 (InbvDriverInitialize.c)
 * Callees:
 *     _strupr @ 0x140535360 (_strupr.c)
 *     strstr @ 0x140535B20 (strstr.c)
 */

__int64 __fastcall InbvDetermineFunction(__int64 a1)
{
  unsigned int v1; // edx
  char *v3; // rcx
  bool v4; // bl
  char *v5; // rax
  char *v6; // rax
  __int64 (__fastcall **v7)(); // rax

  v1 = dword_140E65CEC;
  if ( !dword_140E65CEC )
  {
    v3 = *(char **)(a1 + 216);
    v4 = 1;
    if ( v3 )
    {
      v5 = strupr(v3);
      v6 = strstr(v5, "NOVGA");
      v1 = dword_140E65CEC;
      v4 = v6 == 0LL;
    }
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 240) + 288LL) )
    {
      v7 = off_140E00DE0;
      if ( !v4 )
        v7 = off_140E00D20;
      qword_140E65CE0 = (__int64)v7;
      v1 = 2 * v4 + 1;
      goto LABEL_10;
    }
    if ( v4 )
    {
      v1 = 2;
      qword_140E65CE0 = (__int64)off_140E00DE0;
LABEL_10:
      dword_140E65CEC = v1;
    }
  }
  return v1;
}
