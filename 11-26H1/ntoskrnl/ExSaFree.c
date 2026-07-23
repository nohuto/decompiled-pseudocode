/*
 * XREFs of ExSaFree @ 0x14045C8AC
 * Callers:
 *     ExCleanupAutoExpandPushLock @ 0x14045C880 (ExCleanupAutoExpandPushLock.c)
 *     RtlpHpHeapDestroy @ 0x14063B6F8 (RtlpHpHeapDestroy.c)
 *     KiTraceCpuPartitionRundown @ 0x1407BE260 (KiTraceCpuPartitionRundown.c)
 *     PspProcessDelete @ 0x140800D10 (PspProcessDelete.c)
 * Callees:
 *     KeLeaveGuardedRegion @ 0x14027D080 (KeLeaveGuardedRegion.c)
 *     ExpSaAllocatorFree @ 0x14027D8B0 (ExpSaAllocatorFree.c)
 */

void __fastcall ExSaFree(__int64 a1, unsigned int a2)
{
  __int64 v3; // r9
  unsigned int v4; // ecx
  __int64 v5; // r8
  struct _KLOCK_ENTRIES *v6; // r9
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v8; // rdx
  struct _KTHREAD *v9; // rcx

  v3 = ((unsigned int)a1 >> 13) & 0x3FFFF;
  _BitScanReverse(&v4, v3);
  v5 = v3 ^ (unsigned int)(1 << v4);
  v6 = (struct _KLOCK_ENTRIES *)(((unsigned __int64)a2 + 7) >> 3);
  CurrentThread = KeGetCurrentThread();
  v8 = *(__int64 **)(*(_QWORD *)(ExSaPageGroupDescriptorArrayLock.QuantumTarget + 8LL * (v4 - 2)) + 8 * v5 + 8);
  v9 = (struct _KTHREAD *)v8[2];
  --CurrentThread->SpecialApcDisable;
  ExpSaAllocatorFree(v9, v8, a1, v6);
  KeLeaveGuardedRegion();
}
