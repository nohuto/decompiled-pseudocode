/*
 * XREFs of sub_14008661C @ 0x14008661C
 * Callers:
 *     sub_14000F730 @ 0x14000F730 (sub_14000F730.c)
 * Callees:
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

_QWORD *__fastcall sub_14008661C(_QWORD *a1)
{
  _QWORD *result; // rax
  __int64 v2; // rcx

  result = a1;
  v2 = *a1;
  if ( v2 )
  {
    *result = 0LL;
    return (_QWORD *)sub_1400B6010(v2);
  }
  return result;
}
