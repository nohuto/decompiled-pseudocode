/*
 * XREFs of sub_180078B44 @ 0x180078B44
 * Callers:
 *     sub_1800780E0 @ 0x1800780E0 (sub_1800780E0.c)
 *     sub_180078BE0 @ 0x180078BE0 (sub_180078BE0.c)
 *     sub_180078F80 @ 0x180078F80 (sub_180078F80.c)
 *     sub_18007A030 @ 0x18007A030 (sub_18007A030.c)
 *     sub_1800926D0 @ 0x1800926D0 (sub_1800926D0.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_1800143E4 @ 0x1800143E4 (sub_1800143E4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180078B44(__int64 a1, __int64 a2)
{
  sub_1800143E4(a1 + 496, a2);
  return sub_1800129D0(a2);
}
