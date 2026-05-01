/*
 * XREFs of ??$_Integer_to_chars@I@std@@YA?AUto_chars_result@0@PEADQEADIH@Z @ 0x180289C80
 * Callers:
 *     ??$hstring_convert@I@impl@winrt@@YA?AUhstring@1@I@Z @ 0x180289BDC (--$hstring_convert@I@impl@winrt@@YA-AUhstring@1@I@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memcpy_0 @ 0x1802CE20A (memcpy_0.c)
 */

_QWORD *__fastcall std::_Integer_to_chars<unsigned int>(_QWORD *a1, void *a2, __int64 a3, unsigned int a4)
{
  char *v5; // r10
  char *v7; // rdi
  _QWORD v9[3]; // [rsp+40h] [rbp-18h] BYREF

  v5 = (char *)v9;
  do
  {
    *--v5 = a4 % 0xA + 48;
    a4 /= 0xAu;
  }
  while ( a4 );
  v7 = (char *)((char *)v9 - v5);
  if ( a3 - (__int64)a2 >= (char *)v9 - v5 )
  {
    memcpy_0(a2, v5, (char *)v9 - v5);
    a1[1] = 0LL;
    *a1 = &v7[(_QWORD)a2];
  }
  else
  {
    *a1 = a3;
    a1[1] = 132LL;
  }
  return a1;
}
