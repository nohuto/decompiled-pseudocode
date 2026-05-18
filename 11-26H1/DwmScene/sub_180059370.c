/*
 * XREFs of sub_180059370 @ 0x180059370
 * Callers:
 *     sub_180057C70 @ 0x180057C70 (sub_180057C70.c)
 * Callees:
 *     sub_18005AF08 @ 0x18005AF08 (sub_18005AF08.c)
 *     sub_18005B5C4 @ 0x18005B5C4 (sub_18005B5C4.c)
 */

_QWORD *__fastcall sub_180059370(__int64 a1, _QWORD *a2)
{
  _QWORD *result; // rax

  if ( (unsigned __int8)sub_18005B5C4() )
    sub_18005AF08(a1);
  result = a2;
  *a2 = *(_QWORD *)(a1 + 1596);
  return result;
}
