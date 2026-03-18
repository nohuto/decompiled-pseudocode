/*
 * XREFs of AlpcpSetOwnerProcessPort @ 0x1408EBD74
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x1408E6A30 (AlpcpAcceptConnectPort.c)
 *     AlpcpCreateClientPort @ 0x1408E9A60 (AlpcpCreateClientPort.c)
 *     AlpcpCreateConnectionPort @ 0x140AE7730 (AlpcpCreateConnectionPort.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 */

LONG_PTR __fastcall AlpcpSetOwnerProcessPort(__int64 a1, _DWORD *a2)
{
  PEPROCESS Process; // rbx
  LONG_PTR result; // rax

  if ( a2 && (*a2 & 0x100000) != 0 )
    Process = PsInitialSystemProcess;
  else
    Process = KeGetCurrentThread()->ApcState.Process;
  result = ObfReferenceObjectWithTag(Process, 0x63706C41u);
  *(_QWORD *)(a1 + 24) = Process;
  return result;
}
