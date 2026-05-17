/*
 * XREFs of RtlLargeIntegerToChar @ 0x1800FB0F0
 * Callers:
 *     RtlInt64ToUnicodeString @ 0x180141960 (RtlInt64ToUnicodeString.c)
 * Callees:
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memmove @ 0x180164700 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180170030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlLargeIntegerToChar(unsigned __int64 *a1, unsigned int a2, int a3, char *a4)
{
  int v7; // r8d
  int v8; // r9d
  char *v9; // r14
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rtt
  int v14; // esp
  __int64 v15; // rsi
  bool v16; // cc
  size_t v17; // rbx
  char v18; // [rsp+61h] [rbp-37h] BYREF

  switch ( a2 )
  {
    case 0u:
      a2 = 10;
      goto LABEL_8;
    case 0xAu:
LABEL_8:
      v7 = 0;
      v8 = 0;
      goto LABEL_9;
    case 0x10u:
      v7 = 4;
      break;
    case 8u:
      v7 = 3;
      break;
    case 2u:
      v7 = 1;
      break;
    default:
      return 3221225485LL;
  }
  v8 = (1 << v7) - 1;
LABEL_9:
  v9 = &v18;
  v10 = *a1;
  if ( v7 )
  {
    do
    {
      v12 = v8 & (unsigned int)v10;
      v10 >>= v7;
      *--v9 = RtlpIntegerChars[v12];
    }
    while ( v10 );
  }
  else
  {
    v11 = a2;
    do
    {
      v13 = v10;
      v10 /= v11;
      v12 = v13 % v11;
      *--v9 = RtlpIntegerChars[(unsigned int)(v13 % v11)];
    }
    while ( v10 );
  }
  v15 = (unsigned int)(v14 + 97 - (_DWORD)v9);
  if ( a3 >= 0 )
    goto LABEL_13;
  a3 = -a3;
  v16 = (int)v15 <= a3;
  if ( (int)v15 < a3 )
  {
    v17 = (unsigned int)(a3 - v15);
    LOBYTE(v12) = 48;
    memset_thunk_772440563353939046(a4, v12, v17);
    a3 = v15;
    a4 += v17;
LABEL_13:
    v16 = (int)v15 <= a3;
  }
  if ( !v16 )
    return 2147483653LL;
  memmove(a4, v9, (unsigned int)v15);
  if ( (int)v15 < a3 )
    a4[v15] = 0;
  return 0LL;
}
