/*
 * XREFs of sub_1800BF2BC @ 0x1800BF2BC
 * Callers:
 *     sub_1800C1050 @ 0x1800C1050 (sub_1800C1050.c)
 *     sub_1800C1B5C @ 0x1800C1B5C (sub_1800C1B5C.c)
 *     sub_1800C2AD8 @ 0x1800C2AD8 (sub_1800C2AD8.c)
 *     sub_1800C3038 @ 0x1800C3038 (sub_1800C3038.c)
 *     sub_1800C3C1C @ 0x1800C3C1C (sub_1800C3C1C.c)
 *     sub_1800C3E50 @ 0x1800C3E50 (sub_1800C3E50.c)
 *     sub_1800C7CA0 @ 0x1800C7CA0 (sub_1800C7CA0.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_1800BF2BC(_QWORD *a1, _QWORD *a2)
{
  *a1 = 0LL;
  if ( a1 != a2 )
  {
    *a1 = *a2;
    *a2 = 0LL;
  }
  return a1;
}
