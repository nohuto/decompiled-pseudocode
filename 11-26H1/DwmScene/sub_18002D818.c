/*
 * XREFs of sub_18002D818 @ 0x18002D818
 * Callers:
 *     sub_180032AD4 @ 0x180032AD4 (sub_180032AD4.c)
 *     sub_180033140 @ 0x180033140 (sub_180033140.c)
 *     sub_1800336C8 @ 0x1800336C8 (sub_1800336C8.c)
 *     sub_180035438 @ 0x180035438 (sub_180035438.c)
 *     sub_18003FC1C @ 0x18003FC1C (sub_18003FC1C.c)
 *     sub_180040570 @ 0x180040570 (sub_180040570.c)
 *     sub_180063990 @ 0x180063990 (sub_180063990.c)
 *     sub_18006904C @ 0x18006904C (sub_18006904C.c)
 *     sub_1800BC4A0 @ 0x1800BC4A0 (sub_1800BC4A0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_1800181BC @ 0x1800181BC (sub_1800181BC.c)
 *     sub_18001E7AC @ 0x18001E7AC (sub_18001E7AC.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall sub_18002D818(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rax
  _BYTE v5[32]; // [rsp+30h] [rbp-38h] BYREF

  v3 = sub_18001E7AC((__int64)v5, a2);
  sub_1800181BC(a1, v3);
  sub_1800129D0((__int64)v5);
  return a1;
}
