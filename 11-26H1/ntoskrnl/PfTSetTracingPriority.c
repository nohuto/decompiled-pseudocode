/*
 * XREFs of PfTSetTracingPriority @ 0x140BFEF54
 * Callers:
 *     PfpLogEventRequest @ 0x140B51D4C (PfpLogEventRequest.c)
 * Callees:
 *     PfLockExclusiveAcquire @ 0x1404BD3F0 (PfLockExclusiveAcquire.c)
 *     PfLockExclusiveRelease @ 0x1404C0F38 (PfLockExclusiveRelease.c)
 *     PfpPartitionToParent @ 0x1404CF710 (PfpPartitionToParent.c)
 *     MmSetAccessLogging @ 0x140707EF0 (MmSetAccessLogging.c)
 */

void __fastcall PfTSetTracingPriority(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  int v5; // edi
  _QWORD *v6; // rax
  int v7; // edx

  v5 = a2;
  PfLockExclusiveAcquire((unsigned __int64 *)(a1 + 80), a2, a3, a4);
  v6 = (_QWORD *)PfpPartitionToParent(a1);
  MmSetAccessLogging(v6, v7, v5);
  PfLockExclusiveRelease((struct _KTHREAD *)(a1 + 80));
}
