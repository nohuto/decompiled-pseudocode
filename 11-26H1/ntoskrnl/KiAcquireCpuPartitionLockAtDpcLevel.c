/*
 * XREFs of KiAcquireCpuPartitionLockAtDpcLevel @ 0x140501828
 * Callers:
 *     KiAddCpuToSystemCpuPartition @ 0x140BFB4BC (KiAddCpuToSystemCpuPartition.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 */

void __fastcall KiAcquireCpuPartitionLockAtDpcLevel(__int64 a1)
{
  KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 8));
}
