/*
 * XREFs of RtlpFreeAtom @ 0x1409E0B64
 * Callers:
 *     RtlAddAtomToAtomTableEx @ 0x140461AD0 (RtlAddAtomToAtomTableEx.c)
 *     RtlpAllocateAtomTableEntry @ 0x140461D3C (RtlpAllocateAtomTableEntry.c)
 *     RtlDestroyLowBoxAtoms @ 0x1404A519C (RtlDestroyLowBoxAtoms.c)
 *     RtlpDereferenceAtom @ 0x1404A5274 (RtlpDereferenceAtom.c)
 *     RtlpFreeAllAtom @ 0x1404A5300 (RtlpFreeAllAtom.c)
 *     RtlCreateAtomTableEx @ 0x1404D3CC0 (RtlCreateAtomTableEx.c)
 *     RtlEmptyAtomTable @ 0x140803E00 (RtlEmptyAtomTable.c)
 *     RtlDestroyAtomTable @ 0x1409E0A60 (RtlDestroyAtomTable.c)
 * Callees:
 *     PsReturnSharedPoolQuota @ 0x1409E0BA0 (PsReturnSharedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall RtlpFreeAtom(__int64 a1)
{
  void *v1; // rbx

  v1 = (void *)(a1 - 16);
  PsReturnSharedPoolQuota(*(PVOID *)(a1 - 16));
  ExFreePoolWithTag(v1, 0);
}
