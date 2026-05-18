/*
 * XREFs of sub_18006BA78 @ 0x18006BA78
 * Callers:
 *     sub_18006BC20 @ 0x18006BC20 (sub_18006BC20.c)
 *     sub_18006BF04 @ 0x18006BF04 (sub_18006BF04.c)
 * Callees:
 *     sub_18008F54C @ 0x18008F54C (sub_18008F54C.c)
 */

_QWORD *__fastcall sub_18006BA78(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 i; // rsi
  _QWORD *result; // rax

  for ( i = a2; i != a3; i += 128LL )
  {
    if ( sub_18008F54C(i) == a4 )
      break;
  }
  result = a1;
  *a1 = i;
  return result;
}
