/*
 * XREFs of ExDeleteDpcEvent @ 0x1406D3C10
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall ExDeleteDpcEvent(PVOID *P)
{
  ObfDereferenceObjectWithTag(P[7], 0x65447845u);
  ExFreePoolWithTag(P, 0);
}
