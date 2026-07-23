/*
 * XREFs of RtlpFreeAtom @ 0x1409B8DD4
 * Callers:
 *     RtlAddAtomToAtomTableEx @ 0x14045AA90 (RtlAddAtomToAtomTableEx.c)
 *     RtlpAllocateAtomTableEntry @ 0x14045ACFC (RtlpAllocateAtomTableEntry.c)
 *     RtlDestroyLowBoxAtoms @ 0x14049E82C (RtlDestroyLowBoxAtoms.c)
 *     RtlpDereferenceAtom @ 0x14049E904 (RtlpDereferenceAtom.c)
 *     RtlpFreeAllAtom @ 0x14049E990 (RtlpFreeAllAtom.c)
 *     RtlCreateAtomTableEx @ 0x1404CD530 (RtlCreateAtomTableEx.c)
 *     RtlEmptyAtomTable @ 0x1408098A0 (RtlEmptyAtomTable.c)
 *     RtlDestroyAtomTable @ 0x1409B8CD0 (RtlDestroyAtomTable.c)
 * Callees:
 *     PsReturnSharedPoolQuota @ 0x1409B8E10 (PsReturnSharedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall RtlpFreeAtom(__int64 a1)
{
  void *v1; // rbx

  v1 = (void *)(a1 - 16);
  PsReturnSharedPoolQuota(*(PVOID *)(a1 - 16));
  ExFreePoolWithTag(v1, 0);
}
