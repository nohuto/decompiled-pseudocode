/*
 * XREFs of PspCompleteHardDereferenceSiloDeferred @ 0x140B3CE80
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     PspStorageEmptyNonReadonly @ 0x140B3CEB0 (PspStorageEmptyNonReadonly.c)
 */

LONG_PTR __fastcall PspCompleteHardDereferenceSiloDeferred(_QWORD *Object)
{
  if ( Object[192] )
    PspStorageEmptyNonReadonly();
  return ObfDereferenceObject(Object);
}
