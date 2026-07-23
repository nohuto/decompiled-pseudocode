/*
 * XREFs of RtlLargeIntegerToChar @ 0x1800FA860
 * Callers:
 *     RtlInt64ToUnicodeString @ 0x180141860 (RtlInt64ToUnicodeString.c)
 * Callees:
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memmove @ 0x180164600 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

NTSTATUS __cdecl RtlLargeIntegerToChar(PLARGE_INTEGER Value, ULONG Base, LONG OutputLength, PSTR String)
{
  int v7; // r8d
  int v8; // r9d
  char *v9; // r14
  unsigned __int64 QuadPart; // rax
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rtt
  int v14; // esp
  __int64 v15; // rsi
  bool v16; // cc
  size_t v17; // rbx
  char v18; // [rsp+61h] [rbp-37h] BYREF

  switch ( Base )
  {
    case 0u:
      Base = 10;
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
      return -1073741811;
  }
  v8 = (1 << v7) - 1;
LABEL_9:
  v9 = &v18;
  QuadPart = Value->QuadPart;
  if ( v7 )
  {
    do
    {
      v12 = v8 & (unsigned int)QuadPart;
      QuadPart >>= v7;
      *--v9 = RtlpIntegerChars[v12];
    }
    while ( QuadPart );
  }
  else
  {
    v11 = Base;
    do
    {
      v13 = QuadPart;
      QuadPart /= v11;
      v12 = v13 % v11;
      *--v9 = RtlpIntegerChars[(unsigned int)(v13 % v11)];
    }
    while ( QuadPart );
  }
  v15 = (unsigned int)(v14 + 97 - (_DWORD)v9);
  if ( OutputLength >= 0 )
    goto LABEL_13;
  OutputLength = -OutputLength;
  v16 = (int)v15 <= OutputLength;
  if ( (int)v15 < OutputLength )
  {
    v17 = (unsigned int)(OutputLength - v15);
    LOBYTE(v12) = 48;
    memset_thunk_772440563353939046(String, v12, v17);
    OutputLength = v15;
    String += v17;
LABEL_13:
    v16 = (int)v15 <= OutputLength;
  }
  if ( !v16 )
    return -2147483643;
  memmove(String, v9, (unsigned int)v15);
  if ( (int)v15 < OutputLength )
    String[v15] = 0;
  return 0;
}
