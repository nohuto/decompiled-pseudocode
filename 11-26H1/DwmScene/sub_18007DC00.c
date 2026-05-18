/*
 * XREFs of sub_18007DC00 @ 0x18007DC00
 * Callers:
 *     sub_18007D99C @ 0x18007D99C (sub_18007D99C.c)
 * Callees:
 *     sub_18007D480 @ 0x18007D480 (sub_18007D480.c)
 */

void **__fastcall sub_18007DC00(void **a1, __int64 a2)
{
  if ( a1 != (void **)a2 )
    sub_18007D480(a1, *(char **)a2, (__int64)(*(_QWORD *)(a2 + 8) - *(_QWORD *)a2) >> 2);
  return a1;
}
