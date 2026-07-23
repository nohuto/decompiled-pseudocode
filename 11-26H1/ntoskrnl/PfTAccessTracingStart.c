/*
 * XREFs of PfTAccessTracingStart @ 0x140BFEEDC
 * Callers:
 *     PfTStart @ 0x1407C9844 (PfTStart.c)
 *     PfGetCompletedTrace @ 0x140A5CBD4 (PfGetCompletedTrace.c)
 *     PfpPowerActionStartScenarioTracingCallback @ 0x140BFE7E0 (PfpPowerActionStartScenarioTracingCallback.c)
 * Callees:
 *     MmGetDefaultPagePriority @ 0x1404AFDB0 (MmGetDefaultPagePriority.c)
 *     PfLockExclusiveAcquire @ 0x1404BD3F0 (PfLockExclusiveAcquire.c)
 *     PfLockExclusiveRelease @ 0x1404C0F38 (PfLockExclusiveRelease.c)
 *     PfpPartitionToParent @ 0x1404CF710 (PfpPartitionToParent.c)
 *     MmSetAccessLogging @ 0x140707EF0 (MmSetAccessLogging.c)
 */

void __fastcall PfTAccessTracingStart(__int64 a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  int v5; // ebx
  int v6; // ebx
  bool v7; // zf
  _QWORD *v8; // rbx
  int DefaultPagePriority; // eax

  v5 = a2;
  PfLockExclusiveAcquire((unsigned __int64 *)(a1 + 80), a2, a3, a4);
  v6 = ~v5;
  v7 = (v6 & *(_DWORD *)(a1 + 76)) == 0;
  *(_DWORD *)(a1 + 76) &= v6;
  if ( v7 )
  {
    v8 = (_QWORD *)PfpPartitionToParent(a1);
    *(_DWORD *)(a1 + 760) = 256;
    DefaultPagePriority = MmGetDefaultPagePriority();
    MmSetAccessLogging(v8, 1, DefaultPagePriority);
    *(_BYTE *)(*v8 + 18617LL) = 1;
  }
  PfLockExclusiveRelease((struct _KTHREAD *)(a1 + 80));
}
