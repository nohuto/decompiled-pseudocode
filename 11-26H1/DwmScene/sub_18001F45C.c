/*
 * XREFs of sub_18001F45C @ 0x18001F45C
 * Callers:
 *     sub_1800880D0 @ 0x1800880D0 (sub_1800880D0.c)
 * Callees:
 *     sub_18001EA5C @ 0x18001EA5C (sub_18001EA5C.c)
 */

void **__fastcall sub_18001F45C(void **a1, __int64 a2)
{
  if ( a1 != (void **)a2 )
    sub_18001EA5C(a1, *(char **)a2, (__int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) >> 2);
  return a1;
}
