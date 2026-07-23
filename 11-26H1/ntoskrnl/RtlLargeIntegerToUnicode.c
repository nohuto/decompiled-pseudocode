/*
 * XREFs of RtlLargeIntegerToUnicode @ 0x140B53E94
 * Callers:
 *     RtlConvertSidToUnicodeString @ 0x140901480 (RtlConvertSidToUnicodeString.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

__int64 __fastcall RtlLargeIntegerToUnicode(unsigned __int64 *a1, __int64 a2, int a3, char *a4)
{
  char *v4; // r14
  int v5; // edi
  _WORD *v6; // r10
  unsigned __int64 v7; // rdx
  char v8; // al
  __int64 v9; // rbx
  bool v10; // cc
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  _WORD *v13; // rdi
  _BYTE v15[14]; // [rsp+A2h] [rbp-36h] BYREF

  v4 = a4;
  v5 = a3;
  v6 = v15;
  v7 = *a1;
  do
  {
    v8 = v7;
    v7 >>= 4;
    *--v6 = RtlpIntegerWChars[v8 & 0xF];
  }
  while ( v7 );
  v9 = (v15 - (_BYTE *)v6) >> 1;
  if ( a3 < 0 )
  {
    v5 = -a3;
    v10 = (int)v9 <= -a3;
    if ( (int)v9 >= -a3 )
      goto LABEL_10;
    v11 = 2LL * (unsigned int)(v5 - v9);
    v12 = v11 >> 1;
    v13 = a4;
    while ( v12 )
    {
      *v13++ = 48;
      --v12;
    }
    v5 = (v15 - (_BYTE *)v6) >> 1;
    v4 = &a4[v11];
  }
  v10 = (int)v9 <= v5;
LABEL_10:
  if ( !v10 )
    return 2147483653LL;
  memmove(v4, v6, 2LL * (unsigned int)v9);
  if ( (int)v9 < v5 )
    *(_WORD *)&v4[2 * (unsigned int)v9] = 0;
  return 0LL;
}
