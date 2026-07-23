/*
 * XREFs of DifAvlRealSuccessor @ 0x140488EC8
 * Callers:
 *     DifObjTrkQeuryInvokeDeleteRange @ 0x14051E9C0 (DifObjTrkQeuryInvokeDeleteRange.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall DifAvlRealSuccessor(_QWORD *a1)
{
  __int64 v1; // r8
  _QWORD *result; // rax
  _QWORD *v3; // rdx
  __int64 i; // rcx

  v1 = a1[2];
  result = 0LL;
  v3 = a1;
  if ( v1 )
  {
    for ( i = *(_QWORD *)(v1 + 8); i; i = *(_QWORD *)(i + 8) )
      v1 = i;
    return (_QWORD *)v1;
  }
  else
  {
    while ( 1 )
    {
      a1 = (_QWORD *)*a1;
      if ( (_QWORD *)a1[2] != v3 )
        break;
      v3 = a1;
    }
    if ( (_QWORD *)a1[1] == v3 )
      return a1;
  }
  return result;
}
