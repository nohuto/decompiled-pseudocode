/*
 * XREFs of RtlLargeIntegerToChar @ 0x14097B250
 * Callers:
 *     RtlInt64ToUnicodeString @ 0x14097B1A0 (RtlInt64ToUnicodeString.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

NTSTATUS __cdecl RtlLargeIntegerToChar(PLARGE_INTEGER Value, ULONG Base, LONG OutputLength, PSTR String)
{
  int v6; // r8d
  int v7; // r9d
  char *v8; // r14
  unsigned __int64 QuadPart; // rax
  unsigned __int64 v10; // rdx
  int v11; // esp
  __int64 v12; // rsi
  bool v13; // cc
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rtt
  size_t v17; // rbx
  char v18; // [rsp+61h] [rbp-37h] BYREF

  if ( Base )
  {
    if ( Base == 16 )
    {
      v6 = 4;
LABEL_4:
      v7 = (1 << v6) - 1;
      goto LABEL_5;
    }
    if ( Base != 10 )
    {
      if ( Base == 2 )
      {
        v6 = 1;
      }
      else
      {
        if ( Base != 8 )
          return -1073741811;
        v6 = 3;
      }
      goto LABEL_4;
    }
  }
  else
  {
    Base = 10;
  }
  v6 = 0;
  v7 = 0;
LABEL_5:
  v8 = &v18;
  QuadPart = Value->QuadPart;
  if ( v6 )
  {
    do
    {
      v10 = v7 & (unsigned int)QuadPart;
      QuadPart >>= v6;
      *--v8 = *((_BYTE *)RtlpIntegerChars + v10);
    }
    while ( QuadPart );
  }
  else
  {
    v15 = Base;
    do
    {
      v16 = QuadPart;
      QuadPart /= v15;
      v10 = v16 % v15;
      *--v8 = *((_BYTE *)RtlpIntegerChars + (unsigned int)(v16 % v15));
    }
    while ( QuadPart );
  }
  v12 = (unsigned int)(v11 + 97 - (_DWORD)v8);
  if ( OutputLength >= 0 )
    goto LABEL_8;
  OutputLength = -OutputLength;
  v13 = (int)v12 <= OutputLength;
  if ( (int)v12 < OutputLength )
  {
    v17 = (unsigned int)(OutputLength - v12);
    LOBYTE(v10) = 48;
    memset_0(String, v10, v17);
    OutputLength = v12;
    String += v17;
LABEL_8:
    v13 = (int)v12 <= OutputLength;
  }
  if ( !v13 )
    return -2147483643;
  memmove(String, v8, (unsigned int)v12);
  if ( (int)v12 < OutputLength )
    String[v12] = 0;
  return 0;
}
