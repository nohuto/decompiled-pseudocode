/*
 * XREFs of sub_1800187D4 @ 0x1800187D4
 * Callers:
 *     sub_180018808 @ 0x180018808 (sub_180018808.c)
 *     sub_1800345EC @ 0x1800345EC (sub_1800345EC.c)
 *     sub_1800780E0 @ 0x1800780E0 (sub_1800780E0.c)
 *     sub_180078BE0 @ 0x180078BE0 (sub_180078BE0.c)
 *     sub_180078F80 @ 0x180078F80 (sub_180078F80.c)
 *     sub_18007A030 @ 0x18007A030 (sub_18007A030.c)
 *     sub_1800926D0 @ 0x1800926D0 (sub_1800926D0.c)
 * Callees:
 *     sub_1800177F0 @ 0x1800177F0 (sub_1800177F0.c)
 */

__int64 *__fastcall sub_1800187D4(__int64 *a1, __int64 a2)
{
  if ( a1 != (__int64 *)a2 )
    sub_1800177F0(a1, *(char **)a2, (__int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) >> 2);
  return a1;
}
