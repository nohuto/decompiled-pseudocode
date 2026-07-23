/*
 * XREFs of RealSuccessor @ 0x1403C2100
 * Callers:
 *     RtlEnumerateGenericTableAvl @ 0x1403C1F60 (RtlEnumerateGenericTableAvl.c)
 *     RtlEnumerateGenericTableLikeADirectory @ 0x1403C1FD0 (RtlEnumerateGenericTableLikeADirectory.c)
 *     RtlGetElementGenericTableAvl @ 0x1404C3EA0 (RtlGetElementGenericTableAvl.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall RealSuccessor(_QWORD *a1)
{
  _QWORD *result; // rax
  _QWORD *i; // rcx
  _QWORD *j; // rdx

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
