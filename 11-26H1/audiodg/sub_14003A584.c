/*
 * XREFs of sub_14003A584 @ 0x14003A584
 * Callers:
 *     sub_14006D1D0 @ 0x14006D1D0 (sub_14006D1D0.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_14003A584(_QWORD *a1, _QWORD *a2)
{
  _QWORD *i; // r8

  for ( i = (_QWORD *)*a1; i; i = (_QWORD *)*i )
  {
    if ( i[2] == *a2 )
      return i;
  }
  return 0LL;
}
