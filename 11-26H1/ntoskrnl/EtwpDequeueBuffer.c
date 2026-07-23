/*
 * XREFs of EtwpDequeueBuffer @ 0x140219118
 * Callers:
 *     EtwpDequeueFreeBuffer @ 0x140219554 (EtwpDequeueFreeBuffer.c)
 *     EtwpAdjustSiloTraceBuffers @ 0x140482450 (EtwpAdjustSiloTraceBuffers.c)
 *     EtwpFreeTraceBufferPool @ 0x140A154F4 (EtwpFreeTraceBufferPool.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall EtwpDequeueBuffer(__int64 a1, _QWORD *a2)
{
  _QWORD **v2; // r9
  _QWORD *v3; // r8
  _QWORD *result; // rax

  v2 = (_QWORD **)(a2 + 1);
  while ( 1 )
  {
    v3 = *v2;
    if ( !*v2 )
      break;
    *v2 = (_QWORD *)*v3;
    if ( *v3 )
      *v3 = 0LL;
    else
      *a2 = v2;
    result = v3 - 4;
    if ( *((_DWORD *)v3 + 3) != 6 )
      return result;
    *v3 = *(_QWORD *)(a1 + 1448);
    *(_QWORD *)(a1 + 1448) = v3;
  }
  return 0LL;
}
