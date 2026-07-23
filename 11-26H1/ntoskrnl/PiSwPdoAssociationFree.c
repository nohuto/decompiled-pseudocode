/*
 * XREFs of PiSwPdoAssociationFree @ 0x140A8DD8C
 * Callers:
 *     PiSwUnassociateDeviceObject @ 0x140A8C454 (PiSwUnassociateDeviceObject.c)
 *     PiSwFreePdoAssociationsList @ 0x140A8C918 (PiSwFreePdoAssociationsList.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PiSwPdoAssociationFree(PVOID *P)
{
  ObfDereferenceObject(P[4]);
  ObfDereferenceObject(P[5]);
  ExFreePoolWithTag(P, 0x57706E50u);
}
