/*
 * XREFs of PiSwInterfaceFree @ 0x14090FC1C
 * Callers:
 *     PiSwIrpInterfaceRegister @ 0x14090BA58 (PiSwIrpInterfaceRegister.c)
 *     PiSwCompleteCreate @ 0x14090F730 (PiSwCompleteCreate.c)
 *     PiSwInterfaceCreate @ 0x140A7B574 (PiSwInterfaceCreate.c)
 *     PiSwFreeInterfaceList @ 0x140A7B794 (PiSwFreeInterfaceList.c)
 * Callees:
 *     PnpFreeDevPropertyArray @ 0x140990C90 (PnpFreeDevPropertyArray.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall PiSwInterfaceFree(_QWORD *P)
{
  void *v2; // rcx
  __int64 v3; // rdx

  v2 = (void *)P[2];
  if ( v2 )
    ExFreePoolWithTag(v2, 0x57706E50u);
  v3 = P[3];
  if ( v3 )
    PnpFreeDevPropertyArray(*((unsigned int *)P + 8), v3, 1466986064LL);
  ExFreePoolWithTag(P, 0x57706E50u);
}
