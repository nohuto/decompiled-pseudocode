/*
 * XREFs of AlpcpSetOwnerPortMessage @ 0x1408E84A0
 * Callers:
 *     AlpcpDispatchConnectionRequest @ 0x1408E8048 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpDispatchCloseMessage @ 0x1408E8CF0 (AlpcpDispatchCloseMessage.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x140A49448 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x140A4992C (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpDispatchReplyToPort @ 0x140B6F318 (AlpcpDispatchReplyToPort.c)
 * Callees:
 *     PsReferenceSiloContext @ 0x140277800 (PsReferenceSiloContext.c)
 */

LONG_PTR __fastcall AlpcpSetOwnerPortMessage(__int64 a1, void *a2)
{
  LONG_PTR result; // rax

  result = PsReferenceSiloContext(a2);
  *(_DWORD *)(a1 + 40) |= 0x1000u;
  *(_QWORD *)(a1 + 24) = a2;
  return result;
}
