/*
 * XREFs of DifAvlRealPredecessor @ 0x140650E74
 * Callers:
 *     DifObjTrkQeuryInvokeDeleteRange @ 0x14051E9C0 (DifObjTrkQeuryInvokeDeleteRange.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall DifAvlRealPredecessor(_QWORD *a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  _QWORD *v3; // rax
  __int64 i; // rcx

  v1 = a1[1];
  v2 = 0LL;
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
    {
      if ( (_QWORD *)*a1 != a1 )
        return a1;
      return (_QWORD *)v2;
    }
    else
    {
      return 0LL;
    }
  }
}
