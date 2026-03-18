/*
 * XREFs of EtwpRotateCompressionTarget @ 0x1406C836C
 * Callers:
 *     EtwpCompressBuffer @ 0x1406C79D4 (EtwpCompressBuffer.c)
 *     EtwpRotateCompressionTargetIfNeeded @ 0x1406C83E0 (EtwpRotateCompressionTargetIfNeeded.c)
 * Callees:
 *     EtwpDequeueFreeBuffer @ 0x1402193F4 (EtwpDequeueFreeBuffer.c)
 *     EtwpEnqueueAvailableBuffer @ 0x1402195F8 (EtwpEnqueueAvailableBuffer.c)
 *     EtwpGetLoggerTimeStamp @ 0x14021BEC0 (EtwpGetLoggerTimeStamp.c)
 */

__int64 __fastcall EtwpRotateCompressionTarget(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v3; // rbx
  __int64 result; // rax

  v1 = 0LL;
  if ( *(_QWORD *)(a1 + 1416) )
  {
    v3 = *(_QWORD *)(a1 + 1416);
    *(_QWORD *)(v3 + 16) = EtwpGetLoggerTimeStamp(a1);
    EtwpEnqueueAvailableBuffer(a1, *(unsigned int **)(a1 + 1416), 5u);
  }
  result = *(unsigned int *)(a1 + 1432);
  if ( (_DWORD)result )
  {
    result = EtwpDequeueFreeBuffer(a1);
    v1 = result;
  }
  *(_QWORD *)(a1 + 1416) = v1;
  return result;
}
