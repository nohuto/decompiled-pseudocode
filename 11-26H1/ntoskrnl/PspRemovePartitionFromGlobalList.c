/*
 * XREFs of PspRemovePartitionFromGlobalList @ 0x1406199DC
 * Callers:
 *     PspDeletePartition @ 0x140803A00 (PspDeletePartition.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 */

void __fastcall PspRemovePartitionFromGlobalList(__int64 a1)
{
  KIRQL v2; // al
  _QWORD *v3; // rbx
  __int64 v4; // r8
  _QWORD *v5; // rdx

  v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)&NormalizationListLock.WaitBlockFill11[88]);
  v3 = (_QWORD *)(a1 + 56);
  v4 = *v3;
  if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v5 = (_QWORD *)v3[1], (_QWORD *)*v5 != v3) )
    __fastfail(3u);
  *v5 = v4;
  *(_QWORD *)(v4 + 8) = v5;
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)&NormalizationListLock.WaitBlockFill11[88], v2);
}
