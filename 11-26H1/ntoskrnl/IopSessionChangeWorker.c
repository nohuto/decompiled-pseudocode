/*
 * XREFs of IopSessionChangeWorker @ 0x1404392D0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ExNotifyWithProcessing @ 0x140439330 (ExNotifyWithProcessing.c)
 *     PsSetSessionObjectIoEvent @ 0x140B4726C (PsSetSessionObjectIoEvent.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall IopSessionChangeWorker(PVOID *P)
{
  PVOID v2; // rcx

  ExNotifyWithProcessing(IopSessionCallbackObject, P, 0LL, 0LL);
  PsSetSessionObjectIoEvent(P[7]);
  ObfDereferenceObjectWithTag(P[7], 0x746C6644u);
  v2 = P[6];
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  ExFreePoolWithTag(P, 0);
}
