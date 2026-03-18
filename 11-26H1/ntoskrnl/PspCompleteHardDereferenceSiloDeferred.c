/*
 * XREFs of PspCompleteHardDereferenceSiloDeferred @ 0x140B3AC00
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     PspStorageEmptyNonReadonly @ 0x140B3AC30 (PspStorageEmptyNonReadonly.c)
 */

LONG_PTR __fastcall PspCompleteHardDereferenceSiloDeferred(_QWORD *Object)
{
  if ( Object[192] )
    PspStorageEmptyNonReadonly();
  return ObfDereferenceObject(Object);
}
