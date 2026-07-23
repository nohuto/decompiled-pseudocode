/*
 * XREFs of EtwpRemoveBufferFromGlobalList @ 0x140482608
 * Callers:
 *     EtwpAdjustSiloTraceBuffers @ 0x140482450 (EtwpAdjustSiloTraceBuffers.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall EtwpRemoveBufferFromGlobalList(__int64 a1, __int64 a2)
{
  _QWORD *v2; // r8
  _QWORD *result; // rax
  bool i; // zf
  _QWORD *v5; // rcx
  _QWORD *v6; // rdx

  v2 = (_QWORD *)(a1 + 80);
  result = *(_QWORD **)(a1 + 80);
  for ( i = result == (_QWORD *)(a1 + 80); ; i = v5 == v2 )
  {
    if ( i )
      result = 0LL;
    if ( !result )
      break;
    v5 = (_QWORD *)*result;
    if ( result[2] == a2 )
    {
      if ( (_QWORD *)v5[1] != result || (v6 = (_QWORD *)result[1], (_QWORD *)*v6 != result) )
        __fastfail(3u);
      *v6 = v5;
      v5[1] = v6;
      return result;
    }
    result = (_QWORD *)*result;
  }
  return result;
}
