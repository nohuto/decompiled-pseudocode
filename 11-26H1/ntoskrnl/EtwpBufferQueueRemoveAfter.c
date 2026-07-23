/*
 * XREFs of EtwpBufferQueueRemoveAfter @ 0x14048F94C
 * Callers:
 *     EtwpEnqueueAvailableBuffer @ 0x140219758 (EtwpEnqueueAvailableBuffer.c)
 *     EtwpDequeueBufferPendingCompressionFromQueue @ 0x1406CC0A8 (EtwpDequeueBufferPendingCompressionFromQueue.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall EtwpBufferQueueRemoveAfter(_QWORD *a1, _QWORD **a2)
{
  _QWORD *v2; // r8

  v2 = *a2;
  *a2 = (_QWORD *)**a2;
  if ( *v2 )
    *v2 = 0LL;
  else
    *a1 = a2;
  return v2;
}
