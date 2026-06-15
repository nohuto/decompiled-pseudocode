/*
 * XREFs of sub_140012F60 @ 0x140012F60
 * Callers:
 *     sub_140014350 @ 0x140014350 (sub_140014350.c)
 *     sub_140015070 @ 0x140015070 (sub_140015070.c)
 * Callees:
 *     sub_140014E60 @ 0x140014E60 (sub_140014E60.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 */

__int64 sub_140012F60(int a1, __int64 a2, ...)
{
  _QWORD v3[6]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v4; // [rsp+90h] [rbp+18h] BYREF
  va_list va; // [rsp+90h] [rbp+18h]
  va_list va1; // [rsp+98h] [rbp+20h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v4 = va_arg(va1, _QWORD);
  v3[3] = 8LL;
  va_copy((va_list)&v3[2], va);
  v3[5] = 8LL;
  va_copy((va_list)&v3[4], va1);
  return sub_140014E60(a1, (unsigned int)&unk_1400C57C0, v4, 3, (__int64)v3);
}
