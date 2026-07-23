/*
 * XREFs of EtwpRotateCompressionTargetIfNeeded @ 0x1406CC3C0
 * Callers:
 *     EtwpCompressBuffer @ 0x1406CB9B4 (EtwpCompressBuffer.c)
 *     EtwpCompressPendingBuffers @ 0x1406CBD3C (EtwpCompressPendingBuffers.c)
 * Callees:
 *     EtwpRotateCompressionTarget @ 0x1406CC34C (EtwpRotateCompressionTarget.c)
 */

_QWORD *__fastcall EtwpRotateCompressionTargetIfNeeded(__int64 a1)
{
  __int64 v1; // rax
  _QWORD *result; // rax

  v1 = *(_QWORD *)(a1 + 1416);
  if ( !v1 )
    return EtwpRotateCompressionTarget(a1);
  result = (_QWORD *)*(unsigned int *)(v1 + 8);
  if ( (unsigned int)(*(_DWORD *)(a1 + 4) - (_DWORD)result) <= 0x148 )
    return EtwpRotateCompressionTarget(a1);
  return result;
}
