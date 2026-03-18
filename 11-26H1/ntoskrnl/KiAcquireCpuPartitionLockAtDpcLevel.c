/*
 * XREFs of KiAcquireCpuPartitionLockAtDpcLevel @ 0x140507E54
 * Callers:
 *     KiAddCpuToSystemCpuPartition @ 0x140BF54BC (KiAddCpuToSystemCpuPartition.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x14032F2C0 (KxAcquireSpinLock.c)
 */

void __fastcall KiAcquireCpuPartitionLockAtDpcLevel(__int64 a1)
{
  KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 8));
}
