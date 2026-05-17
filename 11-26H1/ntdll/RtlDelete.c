/*
 * XREFs of RtlDelete @ 0x1800B7940
 * Callers:
 *     RtlpTpIoDllLoaded @ 0x1800B7648 (RtlpTpIoDllLoaded.c)
 *     RtlDeleteElementGenericTable @ 0x1800B7870 (RtlDeleteElementGenericTable.c)
 *     PfxRemovePrefix @ 0x18013CB10 (PfxRemovePrefix.c)
 * Callees:
 *     RtlSubtreePredecessor @ 0x1800B79F0 (RtlSubtreePredecessor.c)
 *     SwapSplayLinks @ 0x1800B7A20 (SwapSplayLinks.c)
 *     RtlSplay @ 0x1800B7F60 (RtlSplay.c)
 */

_QWORD *__fastcall RtlDelete(_QWORD *a1)
{
  _QWORD *result; // rax
  _QWORD *v3; // rcx
  _QWORD *v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rdx

  if ( a1[1] && a1[2] )
  {
    v5 = RtlSubtreePredecessor();
    SwapSplayLinks(v5, a1);
  }
  result = (_QWORD *)a1[1];
  if ( result || (result = (_QWORD *)a1[2]) != 0LL )
  {
    v3 = (_QWORD *)*a1;
    if ( (_QWORD *)*a1 == a1 )
    {
      *result = result;
      return result;
    }
    v7 = 1LL;
    if ( (_QWORD *)v3[1] != a1 )
      v7 = 2LL;
    v3[v7] = result;
    v4 = (_QWORD *)*a1;
    *result = *a1;
    return (_QWORD *)RtlSplay(v4);
  }
  v4 = (_QWORD *)*a1;
  if ( (_QWORD *)*a1 != a1 )
  {
    v6 = 1LL;
    if ( (_QWORD *)v4[1] != a1 )
      v6 = 2LL;
    v4[v6] = 0LL;
    return (_QWORD *)RtlSplay(v4);
  }
  return result;
}
