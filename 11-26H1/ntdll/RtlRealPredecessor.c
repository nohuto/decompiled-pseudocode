/*
 * XREFs of RtlRealPredecessor @ 0x1800DFFD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall RtlRealPredecessor(_QWORD *a1)
{
  __int64 v1; // r8
  _QWORD *result; // rax
  _QWORD *v3; // rdx
  __int64 i; // rcx

  v1 = a1[1];
  result = 0LL;
  v3 = a1;
  if ( v1 )
  {
    for ( i = *(_QWORD *)(v1 + 16); i; i = *(_QWORD *)(i + 16) )
      v1 = i;
    return (_QWORD *)v1;
  }
  else
  {
    while ( 1 )
    {
      a1 = (_QWORD *)*a1;
      if ( (_QWORD *)a1[1] != v3 )
        break;
      v3 = a1;
    }
    if ( (_QWORD *)a1[2] == v3 )
      return a1;
  }
  return result;
}
