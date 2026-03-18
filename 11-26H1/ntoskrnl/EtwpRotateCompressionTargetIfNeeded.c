/*
 * XREFs of EtwpRotateCompressionTargetIfNeeded @ 0x1406C83E0
 * Callers:
 *     EtwpCompressBuffer @ 0x1406C79D4 (EtwpCompressBuffer.c)
 *     EtwpCompressPendingBuffers @ 0x1406C7D5C (EtwpCompressPendingBuffers.c)
 * Callees:
 *     EtwpRotateCompressionTarget @ 0x1406C836C (EtwpRotateCompressionTarget.c)
 */

__int64 __fastcall EtwpRotateCompressionTargetIfNeeded(__int64 a1)
{
  __int64 v1; // rax
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 1416);
  if ( !v1 )
    return EtwpRotateCompressionTarget(a1);
  result = *(unsigned int *)(v1 + 8);
  if ( (unsigned int)(*(_DWORD *)(a1 + 4) - result) <= 0x148 )
    return EtwpRotateCompressionTarget(a1);
  return result;
}
