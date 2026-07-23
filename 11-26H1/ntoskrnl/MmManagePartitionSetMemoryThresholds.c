/*
 * XREFs of MmManagePartitionSetMemoryThresholds @ 0x14070EDF4
 * Callers:
 *     NtManagePartition @ 0x140802EF0 (NtManagePartition.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 */

__int64 __fastcall MmManagePartitionSetMemoryThresholds(__int64 *a1, __int64 a2)
{
  __int64 v3; // rdi
  unsigned __int64 v4; // rax
  KIRQL v5; // al
  volatile LONG *v6; // rcx

  v3 = *a1;
  if ( *(_DWORD *)a2 )
    return 3221225485LL;
  v4 = *(_QWORD *)(a2 + 16);
  if ( v4 < *(_QWORD *)(a2 + 8) )
  {
    if ( v4 )
      return 3221225485LL;
  }
  v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + 272));
  v6 = (volatile LONG *)(v3 + 272);
  *(_QWORD *)(v3 + 17008) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(v3 + 17016) = *(_QWORD *)(a2 + 16);
  *(_BYTE *)(v3 + 12) = 1;
  if ( v5 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(v6);
  else
    ExReleaseSpinLockExclusive(v6, v5);
  KeSetEvent((PRKEVENT)(v3 + 21360), 0, 0);
  return 0LL;
}
