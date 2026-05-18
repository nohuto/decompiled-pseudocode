/*
 * XREFs of sub_180080E34 @ 0x180080E34
 * Callers:
 *     sub_18007A030 @ 0x18007A030 (sub_18007A030.c)
 *     sub_180080F34 @ 0x180080F34 (sub_180080F34.c)
 *     sub_180091B00 @ 0x180091B00 (sub_180091B00.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_1800143E4 @ 0x1800143E4 (sub_1800143E4.c)
 *     sub_180080C94 @ 0x180080C94 (sub_180080C94.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180080E34(_QWORD *a1, int a2, __int64 a3)
{
  __int64 v4; // rbx

  v4 = a2;
  sub_180080C94(a1, a2);
  sub_1800143E4((__int64)&a1[4 * v4 + 24], a3);
  return sub_1800129D0(a3);
}
