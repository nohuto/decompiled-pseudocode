/*
 * XREFs of strtok_s @ 0x14053ED50
 * Callers:
 *     <none>
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1404CB9A0 (xHalTimerWatchdogStop.c)
 */

char *__cdecl strtok_s(char *Str, const char *Delim, char **Context)
{
  const char *v4; // r10
  char *v5; // r9
  unsigned int v6; // r8d
  char v7; // r8
  char v8; // cl
  unsigned __int64 v9; // rax
  char v10; // al
  char *v11; // rdi
  char *v12; // r8
  unsigned __int8 v13; // bl
  char *v14; // r10
  _OWORD v16[3]; // [rsp+30h] [rbp-38h] BYREF

  v4 = Delim;
  v5 = Str;
  if ( Context && Delim && (Str || *Context) )
  {
    memset(v16, 0, 32);
    do
    {
      v6 = *(unsigned __int8 *)v4++;
      *((_BYTE *)v16 + ((unsigned __int64)v6 >> 3)) |= 1 << (v6 & 7);
    }
    while ( (_BYTE)v6 );
    if ( !Str )
      v5 = *Context;
    v7 = *v5;
    v8 = *v5;
    v9 = (unsigned __int8)*v5;
    while ( ((unsigned __int8)(1 << (v8 & 7)) & *((_BYTE *)v16 + (v9 >> 3))) != 0 && v7 )
    {
      v9 = (unsigned __int8)*++v5;
      v7 = *v5;
      v8 = *v5;
    }
    v10 = *v5;
    v11 = v5;
    v12 = v5;
    if ( *v5 )
    {
      v13 = *v5;
      while ( 1 )
      {
        v14 = v5 + 1;
        if ( ((unsigned __int8)(1 << (v10 & 7)) & *((_BYTE *)v16 + ((unsigned __int64)v13 >> 3))) != 0 )
          break;
        v10 = *v14;
        ++v5;
        v13 = *v14;
        if ( !*v14 )
          goto LABEL_19;
      }
      *v5++ = 0;
    }
LABEL_19:
    *Context = v5;
    if ( v11 == v5 )
      return 0LL;
    return v12;
  }
  else
  {
    xHalTimerWatchdogStop();
    return 0LL;
  }
}
