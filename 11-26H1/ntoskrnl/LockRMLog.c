/*
 * XREFs of LockRMLog @ 0x1408AD924
 * Callers:
 *     CmpStartRMLog @ 0x1408AC340 (CmpStartRMLog.c)
 *     CmpStopRMLog @ 0x1408ACBAC (CmpStopRMLog.c)
 *     CmpAccountForLogReservation @ 0x1408ACE58 (CmpAccountForLogReservation.c)
 *     CmpCleanupTransactionState @ 0x1408ACEE8 (CmpCleanupTransactionState.c)
 *     CmpTransWriteLog @ 0x1408AD634 (CmpTransWriteLog.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140275200 (ExAcquireResourceExclusiveLite.c)
 */

BOOLEAN __fastcall LockRMLog(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceExclusiveLite(*(PERESOURCE *)(a1 + 128), 1u);
}
