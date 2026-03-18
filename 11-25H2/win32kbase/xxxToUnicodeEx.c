/*
 * XREFs of xxxToUnicodeEx @ 0x1400A03C0
 * Callers:
 *     NtUserToUnicodeEx @ 0x140176C30 (NtUserToUnicodeEx.c)
 * Callees:
 *     xxxInternalToUnicode @ 0x1400A04D0 (xxxInternalToUnicode.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 *     memset @ 0x140243000 (memset.c)
 */

__int64 __fastcall xxxToUnicodeEx(unsigned int a1, __int64 a2, char *a3, __int64 a4, int a5, char a6, __int64 a7)
{
  int v9; // edx
  _BYTE *v10; // r8
  char v11; // r10
  int v12; // eax
  int v13; // eax
  char v14; // cl
  int v15; // eax
  __int64 v17; // [rsp+40h] [rbp-88h] BYREF
  _BYTE v18[64]; // [rsp+50h] [rbp-78h] BYREF

  memset(v18, 0, sizeof(v18));
  v9 = 0;
  LODWORD(v17) = 0;
  do
  {
    v10 = &v18[(unsigned __int64)(unsigned __int8)v9 >> 2];
    v11 = 2 * (v9 & 3);
    v12 = (unsigned __int8)*v10;
    if ( *a3 < 0 )
      v13 = v12 | (1 << v11);
    else
      v13 = v12 & ~(1 << v11);
    v14 = 2 * (v9 & 3) + 1;
    if ( (*a3 & 1) != 0 )
      v15 = (unsigned __int8)v13 | (1 << v14);
    else
      v15 = (unsigned __int8)v13 & ~(1 << v14);
    ++v9;
    *v10 = v15;
    ++a3;
  }
  while ( v9 < 256 );
  return xxxInternalToUnicode(a1, a5, a6, (__int64)&v17, a7);
}
