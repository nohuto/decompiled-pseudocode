/*
 * XREFs of MiDeleteKernelStackNode @ 0x14052F540
 * Callers:
 *     MiInPageSingleKernelStack @ 0x14029F764 (MiInPageSingleKernelStack.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlAvlRemoveNode @ 0x1402EE660 (RtlAvlRemoveNode.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall MiDeleteKernelStackNode(PVOID P)
{
  KIRQL v2; // di

  v2 = ExAcquireSpinLockExclusive(&dword_140E34D18);
  RtlAvlRemoveNode((unsigned __int64 *)&qword_140E34D10, (__int64)P);
  if ( v2 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E34D18);
  else
    ExReleaseSpinLockExclusive(&dword_140E34D18, v2);
  ExFreePoolWithTag(P, 0);
}
