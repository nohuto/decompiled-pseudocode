/*
 * XREFs of AlpcpSetOwnerPortMessage @ 0x1408EEA60
 * Callers:
 *     AlpcpDispatchConnectionRequest @ 0x1408EE608 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpDispatchCloseMessage @ 0x1408EF2B0 (AlpcpDispatchCloseMessage.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x140A52738 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x140A52C1C (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpDispatchReplyToPort @ 0x140B73328 (AlpcpDispatchReplyToPort.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x140276D70 (PsReferenceSiloContext.c)
 */

LONG_PTR __fastcall AlpcpSetOwnerPortMessage(__int64 a1, void *a2)
{
  LONG_PTR result; // rax

  result = PsReferenceSiloContext(a2);
  *(_DWORD *)(a1 + 40) |= 0x1000u;
  *(_QWORD *)(a1 + 24) = a2;
  return result;
}
