/*
 * XREFs of ??$_Integer_to_chars@H@std@@YA?AUto_chars_result@0@PEADQEADHH@Z @ 0x180671428
 * Callers:
 *     ??$hstring_convert@H@impl@winrt@@YA?AUhstring@1@H@Z @ 0x180671798 (--$hstring_convert@H@impl@winrt@@YA-AUhstring@1@H@Z.c)
 * Callees:
 *     ??$_Copy_memmove_n@PEADPEAD@std@@YAPEADPEAD_K0@Z @ 0x180232FEC (--$_Copy_memmove_n@PEADPEAD@std@@YAPEADPEAD_K0@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 */

_QWORD *__fastcall std::_Integer_to_chars<int>(_QWORD *a1, _BYTE *a2, _BYTE *a3, int a4)
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
      *a1 = a3;
      a1[1] = 132LL;
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
    std::_Copy_memmove_n<char *,char *>(v6, (char *)v9 - v6, v4);
    a1[1] = 0LL;
    *a1 = &v7[(_QWORD)v4];
  }
  else
  {
    *a1 = a3;
    a1[1] = 132LL;
  }
  return a1;
}
