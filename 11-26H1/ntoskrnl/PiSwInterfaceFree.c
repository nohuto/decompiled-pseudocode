/*
 * XREFs of PiSwInterfaceFree @ 0x1409B1D4C
 * Callers:
 *     PiSwIrpInterfaceRegister @ 0x1409ADB7C (PiSwIrpInterfaceRegister.c)
 *     PiSwCompleteCreate @ 0x1409B1860 (PiSwCompleteCreate.c)
 *     PiSwInterfaceCreate @ 0x140A8C6B4 (PiSwInterfaceCreate.c)
 *     PiSwFreeInterfaceList @ 0x140A8C8D4 (PiSwFreeInterfaceList.c)
 * Callees:
 *     PnpFreeDevPropertyArray @ 0x1409516F0 (PnpFreeDevPropertyArray.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PiSwInterfaceFree(PVOID P)
{
  void *v2; // rcx
  PVOID *v3; // rdx

  v2 = (void *)*((_QWORD *)P + 2);
  if ( v2 )
    ExFreePoolWithTag(v2, 0x57706E50u);
  v3 = (PVOID *)*((_QWORD *)P + 3);
  if ( v3 )
    PnpFreeDevPropertyArray(*((_DWORD *)P + 8), v3, 0x57706E50u);
  ExFreePoolWithTag(P, 0x57706E50u);
}
