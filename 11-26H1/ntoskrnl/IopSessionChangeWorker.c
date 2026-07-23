/*
 * XREFs of IopSessionChangeWorker @ 0x140427F30
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExNotifyWithProcessing @ 0x140427F90 (ExNotifyWithProcessing.c)
 *     PsSetSessionObjectIoEvent @ 0x140B4929C (PsSetSessionObjectIoEvent.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
