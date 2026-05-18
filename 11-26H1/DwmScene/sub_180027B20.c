/*
 * XREFs of sub_180027B20 @ 0x180027B20
 * Callers:
 *     sub_180027C54 @ 0x180027C54 (sub_180027C54.c)
 *     sub_180042974 @ 0x180042974 (sub_180042974.c)
 *     sub_18007DAA0 @ 0x18007DAA0 (sub_18007DAA0.c)
 *     sub_18007DAF8 @ 0x18007DAF8 (sub_18007DAF8.c)
 *     sub_180098410 @ 0x180098410 (sub_180098410.c)
 *     sub_1800BADE4 @ 0x1800BADE4 (sub_1800BADE4.c)
 * Callees:
 *     sub_180027744 @ 0x180027744 (sub_180027744.c)
 */

__int64 __fastcall sub_180027B20(void **a1)
{
  sub_180027744((__int64)a1, (__int64)a1, *((_QWORD *)*a1 + 1));
  return sub_18000E26C(*a1, 0x28uLL);
}
