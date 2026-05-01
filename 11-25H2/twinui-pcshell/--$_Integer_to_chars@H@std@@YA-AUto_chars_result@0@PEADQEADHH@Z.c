/*
 * XREFs of ??$_Integer_to_chars@H@std@@YA?AUto_chars_result@0@PEADQEADHH@Z @ 0x18064B48C
 * Callers:
 *     ??$hstring_convert@H@impl@winrt@@YA?AUhstring@1@H@Z @ 0x18064B800 (--$hstring_convert@H@impl@winrt@@YA-AUhstring@1@H@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1806A4B0C (memcpy_0.c)
 */

__int64 __fastcall std::_Integer_to_chars<int>(__int64 a1, _BYTE *a2, _BYTE *a3, int a4)
{
  void *v4; // rdi
  char *v6; // r10
  char *v7; // rsi
  _QWORD v9[3]; // [rsp+40h] [rbp-18h] BYREF

  v4 = a2;
  if ( a4 < 0 )
  {
    if ( a2 == a3 )
    {
      *(_QWORD *)a1 = a3;
      *(_QWORD *)(a1 + 8) = 132LL;
      return a1;
    }
    v4 = a2 + 1;
    *a2 = 45;
    a4 = -a4;
  }
  v6 = (char *)v9;
  do
  {
    *--v6 = a4 % 0xAu + 48;
    a4 /= 0xAu;
  }
  while ( a4 );
  v7 = (char *)((char *)v9 - v6);
  if ( a3 - (_BYTE *)v4 >= (char *)v9 - v6 )
  {
    memcpy_0(v4, v6, (char *)v9 - v6);
    *(_DWORD *)(a1 + 8) = 0;
    *(_QWORD *)a1 = &v7[(_QWORD)v4];
    *(_DWORD *)(a1 + 12) = 0;
  }
  else
  {
    *(_QWORD *)a1 = a3;
    *(_QWORD *)(a1 + 8) = 132LL;
  }
  return a1;
}
