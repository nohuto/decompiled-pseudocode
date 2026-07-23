/*
 * XREFs of PfTAccessTracingCleanup @ 0x140BFEDFC
 * Callers:
 *     PfTCleanup @ 0x1407C92B4 (PfTCleanup.c)
 *     PfTTraceListAdd @ 0x140AF85FC (PfTTraceListAdd.c)
 *     PfpPowerActionStartScenarioTracingCallback @ 0x140BFE7E0 (PfpPowerActionStartScenarioTracingCallback.c)
 * Callees:
 *     PfpPartitionDereferenceParent @ 0x140383530 (PfpPartitionDereferenceParent.c)
 *     PfpPartitionReferenceParentSafe @ 0x140384710 (PfpPartitionReferenceParentSafe.c)
 *     ExWaitForRundownProtectionRelease @ 0x14045CD60 (ExWaitForRundownProtectionRelease.c)
 *     MmFreeAccessPfnBuffer @ 0x14049D998 (MmFreeAccessPfnBuffer.c)
 *     MmGetDefaultPagePriority @ 0x1404AFDB0 (MmGetDefaultPagePriority.c)
 *     PfLockExclusiveAcquire @ 0x1404BD3F0 (PfLockExclusiveAcquire.c)
 *     PfLockExclusiveRelease @ 0x1404C0F38 (PfLockExclusiveRelease.c)
 *     MmSetAccessLogging @ 0x140707EF0 (MmSetAccessLogging.c)
 *     RtlpInterlockedFlushSList @ 0x1407358E0 (RtlpInterlockedFlushSList.c)
 *     PfTAccessTracingInitialize @ 0x140BEF5CC (PfTAccessTracingInitialize.c)
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
