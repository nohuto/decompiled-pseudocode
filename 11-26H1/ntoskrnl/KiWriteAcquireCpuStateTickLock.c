/*
 * XREFs of KiWriteAcquireCpuStateTickLock @ 0x14046AC0C
 * Callers:
 *     KiAddCpuToSystemCpuPartition @ 0x140BF54BC (KiAddCpuToSystemCpuPartition.c)
 * Callees:
 *     RtlWriteAcquireTickLock @ 0x14046AC24 (RtlWriteAcquireTickLock.c)
 */

__int64 __fastcall KiWriteAcquireCpuStateTickLock(__int64 a1)
{
  return RtlWriteAcquireTickLock(a1);
}
