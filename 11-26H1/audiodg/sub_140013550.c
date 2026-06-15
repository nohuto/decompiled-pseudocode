/*
 * XREFs of sub_140013550 @ 0x140013550
 * Callers:
 *     sub_140041048 @ 0x140041048 (sub_140041048.c)
 * Callees:
 *     sub_140014E60 @ 0x140014E60 (sub_140014E60.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 */

__int64 sub_140013550(int a1, __int64 a2, ...)
{
  _QWORD v3[8]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v4; // [rsp+A0h] [rbp+18h] BYREF
  va_list va; // [rsp+A0h] [rbp+18h]
  __int64 v6; // [rsp+A8h] [rbp+20h] BYREF
  va_list va1; // [rsp+A8h] [rbp+20h]
  va_list va2; // [rsp+B0h] [rbp+28h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v4 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v6 = va_arg(va2, _QWORD);
  v3[3] = 8LL;
  va_copy((va_list)&v3[2], va);
  v3[5] = 8LL;
  va_copy((va_list)&v3[4], va1);
  v3[7] = 8LL;
  va_copy((va_list)&v3[6], va2);
  return sub_140014E60(a1, (unsigned int)&unk_1400C5670, v4, 4, (__int64)v3);
}
