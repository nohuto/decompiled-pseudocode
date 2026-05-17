/*
 * XREFs of RtlRealSuccessor @ 0x1800B81A0
 * Callers:
 *     RtlEnumerateGenericTable @ 0x1800B7730 (RtlEnumerateGenericTable.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall RtlRealSuccessor(_QWORD *a1)
{
  _QWORD *result; // rax
  _QWORD *j; // rdx
  _QWORD *i; // rcx

  result = (_QWORD *)a1[2];
  if ( result )
  {
    for ( i = (_QWORD *)result[1]; i; i = (_QWORD *)i[1] )
      result = i;
  }
  else
  {
    for ( j = (_QWORD *)*a1; (_QWORD *)j[2] == a1; j = (_QWORD *)*j )
      a1 = j;
    result = 0LL;
    if ( (_QWORD *)j[1] == a1 )
      return j;
  }
  return result;
}
