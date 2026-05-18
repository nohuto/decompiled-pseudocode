/*
 * XREFs of sub_18001F524 @ 0x18001F524
 * Callers:
 *     sub_18001F4F4 @ 0x18001F4F4 (sub_18001F4F4.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_1800141BC @ 0x1800141BC (sub_1800141BC.c)
 *     sub_180014244 @ 0x180014244 (sub_180014244.c)
 *     sub_18001F348 @ 0x18001F348 (sub_18001F348.c)
 *     sub_18001F378 @ 0x18001F378 (sub_18001F378.c)
 *     sub_18001FBDC @ 0x18001FBDC (sub_18001FBDC.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18001F524(__int64 a1, const CHAR *a2, __int64 a3)
{
  int v3; // edi
  __int64 cchWideChar; // rbp
  WCHAR *lpWideCharStr; // rax
  _BYTE v9[32]; // [rsp+40h] [rbp-48h] BYREF

  v3 = a3;
  if ( a3 )
  {
    cchWideChar = MultiByteToWideChar(0xFDE9u, 0, a2, a3, 0LL, 0);
    sub_18001F378((__int64)v9);
    if ( (int)cchWideChar <= 0 )
      __fastfail(7u);
    sub_18001FBDC(v9, cchWideChar);
    lpWideCharStr = (WCHAR *)sub_1800141BC((__int64)v9);
    MultiByteToWideChar(0xFDE9u, 0, a2, v3, lpWideCharStr, cchWideChar);
    sub_18001F348(a1);
    sub_180014244((__int64)v9);
  }
  else
  {
    sub_18001F378(a1);
  }
  return a1;
}
