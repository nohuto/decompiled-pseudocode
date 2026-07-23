/*
 * XREFs of KiWriteAcquireCpuStateTickLock @ 0x14046438C
 * Callers:
 *     KiAddCpuToSystemCpuPartition @ 0x140BFB4BC (KiAddCpuToSystemCpuPartition.c)
 * Callees:
 *     RtlWriteAcquireTickLock @ 0x1404643A4 (RtlWriteAcquireTickLock.c)
 */

__int64 __fastcall KiWriteAcquireCpuStateTickLock(__int64 a1)
{
  return RtlWriteAcquireTickLock(a1);
}
