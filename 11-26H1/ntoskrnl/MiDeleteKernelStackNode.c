/*
 * XREFs of MiDeleteKernelStackNode @ 0x14052D020
 * Callers:
 *     MiInPageSingleKernelStack @ 0x1402A0214 (MiInPageSingleKernelStack.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlAvlRemoveNode @ 0x14030C5E0 (RtlAvlRemoveNode.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteKernelStackNode(PVOID P)
{
  KIRQL v2; // di

  v2 = ExAcquireSpinLockExclusive(&dword_140E34B98);
  RtlAvlRemoveNode((unsigned __int64 *)&qword_140E34B90, (__int64)P);
  if ( v2 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E34B98);
  else
    ExReleaseSpinLockExclusive(&dword_140E34B98, v2);
  ExFreePoolWithTag(P, 0);
}
