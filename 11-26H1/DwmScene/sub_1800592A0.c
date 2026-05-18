/*
 * XREFs of sub_1800592A0 @ 0x1800592A0
 * Callers:
 *     sub_180057C70 @ 0x180057C70 (sub_180057C70.c)
 * Callees:
 *     sub_18005AF08 @ 0x18005AF08 (sub_18005AF08.c)
 *     sub_18005B5C4 @ 0x18005B5C4 (sub_18005B5C4.c)
 */

_QWORD *__fastcall sub_1800592A0(__int64 a1, _QWORD *a2)
{
  _QWORD *result; // rax

  if ( (unsigned __int8)sub_18005B5C4() )
    sub_18005AF08(a1);
  result = a2;
  *a2 = *(_QWORD *)(a1 + 1604);
  return result;
}
