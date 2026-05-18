/*
 * XREFs of sub_180097B2C @ 0x180097B2C
 * Callers:
 *     sub_180097D90 @ 0x180097D90 (sub_180097D90.c)
 * Callees:
 *     sub_1800977D4 @ 0x1800977D4 (sub_1800977D4.c)
 */

char *__fastcall sub_180097B2C(__int64 a1, int *a2)
{
  int *v2; // r9

  v2 = *(int **)(a1 + 8);
  if ( v2 == *(int **)(a1 + 16) )
    return sub_1800977D4((void **)a1, *(_QWORD *)(a1 + 8), a2);
  *v2 = *a2;
  *(_QWORD *)(a1 + 8) = v2 + 1;
  return (char *)v2;
}
