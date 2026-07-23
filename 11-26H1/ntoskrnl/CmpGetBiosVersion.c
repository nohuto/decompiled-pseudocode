/*
 * XREFs of CmpGetBiosVersion @ 0x140CF2FE8
 * Callers:
 *     CmpSetSystemBiosInformation @ 0x140CF371C (CmpSetSystemBiosInformation.c)
 *     CmpSetVideoBiosInformation @ 0x140CF3AB4 (CmpSetVideoBiosInformation.c)
 * Callees:
 *     strstr @ 0x140537FA0 (strstr.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

char __fastcall CmpGetBiosVersion(__int64 a1, unsigned int a2, __int64 a3)
{
  __int64 v4; // rbx
  char v5; // al
  char *p_Str; // rsi
  unsigned __int16 v7; // cx
  char *v8; // rbx
  char v9; // al
  char *v10; // rbx
  unsigned __int16 i; // di
  const char *v12; // rdx
  unsigned __int16 j; // dx
  char v14; // r8
  __int64 v15; // rcx
  char result; // al
  char Str; // [rsp+9Fh] [rbp-29h] BYREF

  if ( a1 )
  {
    BiosBegin = a1;
    Start = a1 + 1;
    End = a2 + a1 - 2;
  }
  while ( 1 )
  {
    v4 = Start;
    if ( Start > (unsigned __int64)End )
      break;
    if ( *(_BYTE *)Start == 46
      && (unsigned __int8)(*(_BYTE *)(Start + 1) - 48) <= 9u
      && (v5 = *(_BYTE *)(Start - 1), v5 >= 48)
      && v5 <= 57 )
    {
      Str = 0;
      Start += 2LL;
      p_Str = &Str;
      v7 = 0;
      v8 = (char *)(v4 - 1);
      do
      {
        if ( (unsigned __int64)v8 < BiosBegin )
          break;
        v9 = *v8;
        if ( *v8 < 32 )
          break;
        if ( v9 == 36 )
          break;
        --p_Str;
        --v8;
        ++v7;
        *p_Str = v9;
      }
      while ( v7 < 0x78u );
      v10 = v8 + 1;
      for ( i = 0; ; ++i )
      {
        v12 = SearchStrings[i];
        if ( !v12 )
          break;
        if ( strstr(p_Str, v12) )
        {
          for ( ; v10; ++v10 )
          {
            if ( *v10 != 32 )
              break;
          }
          for ( j = 0; j < 0x7Fu; ++j )
          {
            if ( !v10 )
              break;
            if ( (unsigned __int64)v10 > End + 1 )
              break;
            v14 = *v10;
            if ( *v10 < 32 )
              break;
            if ( v14 == 36 )
              break;
            v15 = j;
            ++v10;
            *(_BYTE *)(v15 + a3) = v14;
          }
          result = 1;
          *(_BYTE *)(j + a3) = 0;
          return result;
        }
      }
    }
    else
    {
      ++Start;
    }
  }
  return 0;
}
