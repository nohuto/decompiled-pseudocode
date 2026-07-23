/*
 * XREFs of EtwpRotateCompressionTarget @ 0x1406CC34C
 * Callers:
 *     EtwpCompressBuffer @ 0x1406CB9B4 (EtwpCompressBuffer.c)
 *     EtwpRotateCompressionTargetIfNeeded @ 0x1406CC3C0 (EtwpRotateCompressionTargetIfNeeded.c)
 * Callees:
 *     EtwpDequeueFreeBuffer @ 0x140219554 (EtwpDequeueFreeBuffer.c)
 *     EtwpEnqueueAvailableBuffer @ 0x140219758 (EtwpEnqueueAvailableBuffer.c)
 *     EtwpGetLoggerTimeStamp @ 0x14021D850 (EtwpGetLoggerTimeStamp.c)
 */

_QWORD *__fastcall EtwpRotateCompressionTarget(__int64 a1)
{
  _QWORD *v1; // rsi
  __int64 v3; // rbx
  _QWORD *result; // rax

  v1 = 0LL;
  if ( *(_QWORD *)(a1 + 1416) )
  {
    v3 = *(_QWORD *)(a1 + 1416);
    *(_QWORD *)(v3 + 16) = EtwpGetLoggerTimeStamp(a1);
    EtwpEnqueueAvailableBuffer(a1, *(unsigned int **)(a1 + 1416), 5u);
  }
  result = (_QWORD *)*(unsigned int *)(a1 + 1432);
  if ( (_DWORD)result )
  {
    result = EtwpDequeueFreeBuffer(a1);
    v1 = result;
  }
  *(_QWORD *)(a1 + 1416) = v1;
  return result;
}
