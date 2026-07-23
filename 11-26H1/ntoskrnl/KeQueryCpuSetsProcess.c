/*
 * XREFs of KeQueryCpuSetsProcess @ 0x14045BE9C
 * Callers:
 *     KiCpuPartitionCheckAffinitization @ 0x1405F6B2C (KiCpuPartitionCheckAffinitization.c)
 *     NtQueryInformationProcess @ 0x140A534E0 (NtQueryInformationProcess.c)
 * Callees:
 *     KiAcquireProcessLockShared @ 0x14045BFC0 (KiAcquireProcessLockShared.c)
 *     KiReleaseProcessLockShared @ 0x14045C064 (KiReleaseProcessLockShared.c)
 *     KiQueryCpuSetsProcessWithLock @ 0x14045C0C0 (KiQueryCpuSetsProcessWithLock.c)
 */

__int64 __fastcall KeQueryCpuSetsProcess(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  unsigned int CpuSetsProcessWithLock; // eax
  __int64 v9; // rdx
  unsigned int v10; // ebx
  _BYTE v12[24]; // [rsp+20h] [rbp-18h] BYREF

  v12[0] = 0;
  KiAcquireProcessLockShared(a1, v12);
  CpuSetsProcessWithLock = KiQueryCpuSetsProcessWithLock(a1, a2, a3, a4);
  LOBYTE(v9) = v12[0];
  v10 = CpuSetsProcessWithLock;
  KiReleaseProcessLockShared(a1, v9);
  return v10;
}
