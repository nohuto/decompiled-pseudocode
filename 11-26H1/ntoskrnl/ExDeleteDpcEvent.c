/*
 * XREFs of ExDeleteDpcEvent @ 0x1406CFBE0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall ExDeleteDpcEvent(PVOID *P)
{
  ObfDereferenceObjectWithTag(P[7], 0x65447845u);
  ExFreePoolWithTag(P, 0);
}
