/*
 * XREFs of PiDmObjectManagerInit @ 0x1407A7754
 * Callers:
 *     PiDmInit @ 0x140CC5670 (PiDmInit.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x140260870 (ExInitializeResourceLite.c)
 *     RtlInitializeGenericTableAvl @ 0x14048F5B0 (RtlInitializeGenericTableAvl.c)
 */

void __fastcall PiDmObjectManagerInit(__int64 a1, int a2)
{
  ExInitializeResourceLite((PERESOURCE)a1);
  RtlInitializeGenericTableAvl(
    (PRTL_AVL_TABLE)(a1 + 104),
    PiDmCompareObjects,
    PiDmAllocateGenericTableEntry,
    (PRTL_AVL_FREE_ROUTINE)PiDmFreeGenericTableEntry,
    0LL);
  *(_DWORD *)(a1 + 208) = a2;
}
