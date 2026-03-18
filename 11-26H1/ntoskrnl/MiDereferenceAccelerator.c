/*
 * XREFs of MiDereferenceAccelerator @ 0x14070F68C
 * Callers:
 *     MiZeroLargePage @ 0x1402A1A04 (MiZeroLargePage.c)
 *     MiRevertThreadAffinity @ 0x1403C354C (MiRevertThreadAffinity.c)
 *     MiAllocateAcceleratorDescriptor @ 0x1405319C8 (MiAllocateAcceleratorDescriptor.c)
 *     MiSoloZeroHugeRange @ 0x140705384 (MiSoloZeroHugeRange.c)
 *     MiDeleteAcceleratorDescriptor @ 0x14070F474 (MiDeleteAcceleratorDescriptor.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021AA80 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x140249CD0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402DECD0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402DED10 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlinkAccelerator @ 0x14070FBA8 (MiUnlinkAccelerator.c)
 */

void __fastcall MiDereferenceAccelerator(__int64 a1)
{
  KIRQL v2; // di
  __int64 v3; // rdx
  bool v4; // zf
  __int64 *v5; // rax

  if ( KeGetCurrentIrql() == 2 )
  {
    v2 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E36530);
  }
  else
  {
    v2 = ExAcquireSpinLockExclusive(&dword_140E36530);
  }
  v4 = (*(_DWORD *)(a1 + 48))-- == 1;
  if ( v4 && (*(_DWORD *)(a1 + 52) & 1) != 0 )
  {
    MiUnlinkAccelerator(a1, v3);
    v5 = (__int64 *)qword_140E36510;
    if ( *(PVOID **)qword_140E36510 != &P )
      __fastfail(3u);
    *(_QWORD *)a1 = &P;
    *(_QWORD *)(a1 + 8) = v5;
    *v5 = a1;
    qword_140E36510 = a1;
  }
  if ( v2 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E36530);
  else
    ExReleaseSpinLockExclusive(&dword_140E36530, v2);
}
