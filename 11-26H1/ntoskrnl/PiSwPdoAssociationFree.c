/*
 * XREFs of PiSwPdoAssociationFree @ 0x140A7CB74
 * Callers:
 *     PiSwUnassociateDeviceObject @ 0x140A7B310 (PiSwUnassociateDeviceObject.c)
 *     PiSwFreePdoAssociationsList @ 0x140A7B7D8 (PiSwFreePdoAssociationsList.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall PiSwPdoAssociationFree(PVOID *P)
{
  ObfDereferenceObject(P[4]);
  ObfDereferenceObject(P[5]);
  ExFreePoolWithTag(P, 0x57706E50u);
}
