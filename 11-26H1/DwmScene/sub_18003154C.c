/*
 * XREFs of sub_18003154C @ 0x18003154C
 * Callers:
 *     sub_180031790 @ 0x180031790 (sub_180031790.c)
 *     sub_180031D30 @ 0x180031D30 (sub_180031D30.c)
 *     sub_18006BBB0 @ 0x18006BBB0 (sub_18006BBB0.c)
 *     sub_1800BF7A8 @ 0x1800BF7A8 (sub_1800BF7A8.c)
 * Callees:
 *     sub_18002E4EC @ 0x18002E4EC (sub_18002E4EC.c)
 */

__int64 __fastcall sub_18003154C(void **a1)
{
  sub_18002E4EC((__int64)a1, (__int64)a1, *((_QWORD *)*a1 + 1));
  return sub_18000E26C(*a1, 0x30uLL);
}
