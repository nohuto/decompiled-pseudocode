/*
 * XREFs of MiFreeHardwareDescriptor @ 0x140713170
 * Callers:
 *     MiZeroThreadStopZeroing @ 0x1404EF578 (MiZeroThreadStopZeroing.c)
 *     MiComputeCacheAttributeSpeeds @ 0x140714FCC (MiComputeCacheAttributeSpeeds.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiDeleteAcceleratorDescriptor @ 0x140714170 (MiDeleteAcceleratorDescriptor.c)
 */

void __fastcall MiFreeHardwareDescriptor(__int64 a1, __int64 a2)
{
  _QWORD *v3; // rdi
  __int64 v4; // rbx
  volatile LONG *v5; // rcx
  KIRQL v6; // si
  _QWORD *v7; // rax
  volatile LONG *v8; // rcx

  v3 = (_QWORD *)(a2 - 32);
  v4 = a2;
  v5 = (volatile LONG *)(*(_QWORD *)(a1 + 184) + 14200LL);
  if ( KeGetCurrentIrql() == 2 )
  {
    v6 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(v5);
  }
  else
  {
    v6 = ExAcquireSpinLockExclusive(v5);
  }
  if ( (*(_DWORD *)(v3[2] + 52LL) & 1) == 0 && !byte_140E36684 )
  {
    v7 = *(_QWORD **)(a1 + 80);
    if ( *v7 != a1 + 72 )
      __fastfail(3u);
    *v3 = a1 + 72;
    v4 = 0LL;
    v3[1] = v7;
    *v7 = v3;
    *(_QWORD *)(a1 + 80) = v3;
  }
  v8 = (volatile LONG *)(*(_QWORD *)(a1 + 184) + 14200LL);
  if ( v6 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v8);
  else
    ExReleaseSpinLockExclusive(v8, v6);
  if ( v4 )
    MiDeleteAcceleratorDescriptor(v4);
}
