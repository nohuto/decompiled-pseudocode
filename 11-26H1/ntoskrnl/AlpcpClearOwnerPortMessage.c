/*
 * XREFs of AlpcpClearOwnerPortMessage @ 0x140A498F4
 * Callers:
 *     AlpcpReplyLegacySynchronousRequest @ 0x140A49448 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpCancelMessage @ 0x140ACCE1C (AlpcpCancelMessage.c)
 *     AlpcpDispatchReplyToPort @ 0x140B6F318 (AlpcpDispatchReplyToPort.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 */

LONG_PTR __fastcall AlpcpClearOwnerPortMessage(__int64 a1)
{
  void *v2; // rcx
  LONG_PTR result; // rax

  v2 = *(void **)(a1 + 24);
  if ( v2 )
  {
    if ( (*(_DWORD *)(a1 + 40) & 0x1000) != 0 )
      result = ObfDereferenceObject(v2);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  return result;
}
