/*
 * XREFs of PfTAccessTracingCleanup @ 0x140BF8DFC
 * Callers:
 *     PfTCleanup @ 0x1407C6254 (PfTCleanup.c)
 *     PfTTraceListAdd @ 0x140AF5F5C (PfTTraceListAdd.c)
 *     PfpPowerActionStartScenarioTracingCallback @ 0x140BF87E0 (PfpPowerActionStartScenarioTracingCallback.c)
 * Callees:
 *     PfpPartitionDereferenceParent @ 0x140381780 (PfpPartitionDereferenceParent.c)
 *     PfpPartitionReferenceParentSafe @ 0x140382960 (PfpPartitionReferenceParentSafe.c)
 *     ExWaitForRundownProtectionRelease @ 0x140463DA0 (ExWaitForRundownProtectionRelease.c)
 *     MmFreeAccessPfnBuffer @ 0x1404A3E88 (MmFreeAccessPfnBuffer.c)
 *     MmGetDefaultPagePriority @ 0x1404B6960 (MmGetDefaultPagePriority.c)
 *     PfLockExclusiveAcquire @ 0x1404C3BA0 (PfLockExclusiveAcquire.c)
 *     PfLockExclusiveRelease @ 0x1404C761C (PfLockExclusiveRelease.c)
 *     MmSetAccessLogging @ 0x140703220 (MmSetAccessLogging.c)
 *     RtlpInterlockedFlushSList @ 0x140730D10 (RtlpInterlockedFlushSList.c)
 *     PfTAccessTracingInitialize @ 0x140BE95CC (PfTAccessTracingInitialize.c)
 */

void __fastcall PfTAccessTracingCleanup(__int64 a1, int a2, char a3)
{
  char v6; // r15
  _QWORD *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // r8
  struct _KLOCK_ENTRIES *v10; // r9
  int v11; // ebp
  int DefaultPagePriority; // eax
  PSLIST_ENTRY v13; // rbx
  _QWORD *p_Next; // rcx

  v6 = a2 == 4;
  v7 = (_QWORD *)PfpPartitionReferenceParentSafe((__int64 *)a1);
  PfLockExclusiveAcquire((unsigned __int64 *)(a1 + 80), v8, v9, v10);
  *(_DWORD *)(a1 + 76) |= a2;
  v11 = a3 & 1;
  if ( !v11 )
  {
    DefaultPagePriority = MmGetDefaultPagePriority();
    MmSetAccessLogging(v7, 0, DefaultPagePriority);
  }
  *(_DWORD *)(a1 + 760) = 0;
  ExWaitForRundownProtectionRelease((PEX_RUNDOWN_REF)(a1 + 728));
  v13 = RtlpInterlockedFlushSList((PSLIST_HEADER)(a1 + 768));
  while ( v13 )
  {
    p_Next = &v13->Next;
    v13 = v13->Next;
    MmFreeAccessPfnBuffer(p_Next, v6);
  }
  if ( !v11 )
    *(_BYTE *)(*v7 + 18617LL) = 0;
  PfTAccessTracingInitialize(a1, 1);
  PfLockExclusiveRelease((struct _KTHREAD *)(a1 + 80));
  if ( v7 )
    PfpPartitionDereferenceParent((__int64)v7);
}
