/*
 * XREFs of sub_1400313BC @ 0x1400313BC
 * Callers:
 *     sub_14002C870 @ 0x14002C870 (sub_14002C870.c)
 *     sub_14002DD08 @ 0x14002DD08 (sub_14002DD08.c)
 * Callees:
 *     sub_14004639C @ 0x14004639C (sub_14004639C.c)
 */

_QWORD *__fastcall sub_1400313BC(__int64 a1, _QWORD **a2)
{
  _QWORD *v2; // rcx

  v2 = *a2;
  if ( !*a2 )
    sub_14004639C(2147500037LL, a2);
  *a2 = (_QWORD *)*v2;
  return v2 + 2;
}
