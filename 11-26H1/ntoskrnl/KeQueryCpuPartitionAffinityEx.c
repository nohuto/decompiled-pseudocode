/*
 * XREFs of KeQueryCpuPartitionAffinityEx @ 0x14052DA38
 * Callers:
 *     KiQueryCpuPartitionAffinityProcess @ 0x14025DAC4 (KiQueryCpuPartitionAffinityProcess.c)
 *     KiUpdateSystemAvailableCpuState @ 0x1405E8664 (KiUpdateSystemAvailableCpuState.c)
 *     PspSelectNodeForProcess @ 0x1407F8950 (PspSelectNodeForProcess.c)
 * Callees:
 *     ?RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140253210 (-RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KiAcquireCpuPartitionLock @ 0x1404D0C8C (KiAcquireCpuPartitionLock.c)
 *     KiReleaseCpuPartitionLock @ 0x1404D9D20 (KiReleaseCpuPartitionLock.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall KeQueryCpuPartitionAffinityEx(struct _KAFFINITY_EX **a1, struct _KAFFINITY_EX *a2)
{
  size_t v3; // r8
  unsigned __int8 v5; // [rsp+30h] [rbp+8h] BYREF

  v3 = 8LL * a2->Count;
  v5 = 0;
  memset_0(&a2->8, 0, v3);
  a2->Count = 1;
  KiAcquireCpuPartitionLock((__int64)a1, &v5);
  RtlpCopyAffinityEx(a2, a2->Size, *a1);
  KiReleaseCpuPartitionLock((__int64)a1, v5);
}
