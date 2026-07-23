/*
 * XREFs of MiDereferenceAccelerator @ 0x140714388
 * Callers:
 *     MiZeroLargePage @ 0x1402A0F54 (MiZeroLargePage.c)
 *     MiRevertThreadAffinity @ 0x1403CD44C (MiRevertThreadAffinity.c)
 *     MiAllocateAcceleratorDescriptor @ 0x140533E70 (MiAllocateAcceleratorDescriptor.c)
 *     MiSoloZeroHugeRange @ 0x14070A054 (MiSoloZeroHugeRange.c)
 *     MiDeleteAcceleratorDescriptor @ 0x140714170 (MiDeleteAcceleratorDescriptor.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiUnlinkAccelerator @ 0x1407148A4 (MiUnlinkAccelerator.c)
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
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E366B0);
  }
  else
  {
    v2 = ExAcquireSpinLockExclusive(&dword_140E366B0);
  }
  v4 = (*(_DWORD *)(a1 + 48))-- == 1;
  if ( v4 && (*(_DWORD *)(a1 + 52) & 1) != 0 )
  {
    MiUnlinkAccelerator(a1, v3);
    v5 = (__int64 *)qword_140E36690;
    if ( *(PVOID **)qword_140E36690 != &P )
      __fastfail(3u);
    *(_QWORD *)a1 = &P;
    *(_QWORD *)(a1 + 8) = v5;
    *v5 = a1;
    qword_140E36690 = a1;
  }
  if ( v2 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E366B0);
  else
    ExReleaseSpinLockExclusive(&dword_140E366B0, v2);
}
