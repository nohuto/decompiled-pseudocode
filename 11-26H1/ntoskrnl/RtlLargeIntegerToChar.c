/*
 * XREFs of RtlLargeIntegerToChar @ 0x14096A910
 * Callers:
 *     RtlInt64ToUnicodeString @ 0x14096A860 (RtlInt64ToUnicodeString.c)
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall RtlLargeIntegerToChar(unsigned __int64 *a1, unsigned int a2, int a3, char *a4)
{
  int v6; // r8d
  int v7; // r9d
  char *v8; // r14
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdx
  int v11; // esp
  __int64 v12; // rsi
  bool v13; // cc
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rtt
  size_t v17; // rbx
  char v18; // [rsp+61h] [rbp-37h] BYREF

  if ( a2 )
  {
    if ( a2 == 16 )
    {
      v6 = 4;
LABEL_4:
      v7 = (1 << v6) - 1;
      goto LABEL_5;
    }
    if ( a2 != 10 )
    {
      if ( a2 == 2 )
      {
        v6 = 1;
      }
      else
      {
        if ( a2 != 8 )
          return 3221225485LL;
        v6 = 3;
      }
      goto LABEL_4;
    }
  }
  else
  {
    a2 = 10;
  }
  v6 = 0;
  v7 = 0;
LABEL_5:
  v8 = &v18;
  v9 = *a1;
  if ( v6 )
  {
    do
    {
      v10 = v7 & (unsigned int)v9;
      v9 >>= v6;
      *--v8 = *((_BYTE *)RtlpIntegerChars + v10);
    }
    while ( v9 );
  }
  else
  {
    v15 = a2;
    do
    {
      v16 = v9;
      v9 /= v15;
      v10 = v16 % v15;
      *--v8 = *((_BYTE *)RtlpIntegerChars + (unsigned int)(v16 % v15));
    }
    while ( v9 );
  }
  v12 = (unsigned int)(v11 + 97 - (_DWORD)v8);
  if ( a3 >= 0 )
    goto LABEL_8;
  a3 = -a3;
  v13 = (int)v12 <= a3;
  if ( (int)v12 < a3 )
  {
    v17 = (unsigned int)(a3 - v12);
    LOBYTE(v10) = 48;
    memset_0(a4, v10, v17);
    a3 = v12;
    a4 += v17;
LABEL_8:
    v13 = (int)v12 <= a3;
  }
  if ( !v13 )
    return 2147483653LL;
  memmove(a4, v8, (unsigned int)v12);
  if ( (int)v12 < a3 )
    a4[v12] = 0;
  return 0LL;
}
