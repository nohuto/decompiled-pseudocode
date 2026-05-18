/*
 * XREFs of sub_18001BBE0 @ 0x18001BBE0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180018B60 @ 0x180018B60 (sub_180018B60.c)
 */

_QWORD *__fastcall sub_18001BBE0(__int64 a1)
{
  _QWORD *v1; // rcx
  _QWORD *result; // rax

  v1 = *(_QWORD **)(a1 + 16);
  if ( v1 )
    return sub_180018B60(v1, 1);
  return result;
}
