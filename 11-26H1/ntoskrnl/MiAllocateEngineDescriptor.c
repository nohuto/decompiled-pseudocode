/*
 * XREFs of MiAllocateEngineDescriptor @ 0x14050E6A8
 * Callers:
 *     MiTryZeroMemory @ 0x140456F34 (MiTryZeroMemory.c)
 *     MiComputeCacheAttributeSpeeds @ 0x140714FCC (MiComputeCacheAttributeSpeeds.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiAllocateAcceleratorDescriptor @ 0x140533E70 (MiAllocateAcceleratorDescriptor.c)
 *     MiDeleteAcceleratorDescriptor @ 0x140714170 (MiDeleteAcceleratorDescriptor.c)
 */

__int64 __fastcall MiAllocateEngineDescriptor(__int64 a1)
{
  _QWORD **v2; // rdi
  unsigned __int8 CurrentIrql; // bp
  volatile LONG *v4; // rcx
  _QWORD *v5; // rcx
  _QWORD *v6; // rbx
  _QWORD *v7; // rax
  volatile LONG *v8; // rcx
  __int64 AcceleratorDescriptor; // rax

  v2 = (_QWORD **)(a1 + 72);
  while ( 1 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v4 = (volatile LONG *)(*(_QWORD *)(a1 + 184) + 14200LL);
    if ( CurrentIrql == 2 )
      ExAcquireSpinLockExclusiveAtDpcLevel(v4);
    else
      CurrentIrql = ExAcquireSpinLockExclusive(v4);
    v5 = *v2;
    if ( *v2 == v2 )
    {
      v6 = 0LL;
    }
    else
    {
      if ( (_QWORD **)v5[1] != v2 || (v7 = (_QWORD *)*v5, *(_QWORD **)(*v5 + 8LL) != v5) )
        __fastfail(3u);
      *v2 = v7;
      v6 = v5;
      v7[1] = v2;
    }
    v8 = (volatile LONG *)(*(_QWORD *)(a1 + 184) + 14200LL);
    if ( CurrentIrql == 17 )
      ExReleaseSpinLockExclusiveFromDpcLevel(v8);
    else
      ExReleaseSpinLockExclusive(v8, CurrentIrql);
    if ( !v6 )
      break;
    if ( (*(_DWORD *)(v6[2] + 52LL) & 1) == 0 && !byte_140E36684 )
      return (__int64)(v6 + 4);
    MiDeleteAcceleratorDescriptor(v6 + 4);
  }
  AcceleratorDescriptor = MiAllocateAcceleratorDescriptor(*(unsigned int *)(*(_QWORD *)(a1 + 136) + 56LL));
  return (AcceleratorDescriptor + 32) & -(__int64)(AcceleratorDescriptor != 0);
}
