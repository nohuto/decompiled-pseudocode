/*
 * XREFs of sub_18006F374 @ 0x18006F374
 * Callers:
 *     sub_180091F8C @ 0x180091F8C (sub_180091F8C.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_1800276A8 @ 0x1800276A8 (sub_1800276A8.c)
 *     sub_18002793C @ 0x18002793C (sub_18002793C.c)
 */

_QWORD *__fastcall sub_18006F374(_QWORD *a1, unsigned int a2)
{
  _BYTE *v3; // rax
  _BYTE v5[3]; // [rsp+45h] [rbp-13h] BYREF

  v3 = (_BYTE *)sub_18002793C((__int64)v5, a2);
  sub_1800276A8(a1, v3, v5);
  return a1;
}
