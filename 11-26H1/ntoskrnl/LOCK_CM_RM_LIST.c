/*
 * XREFs of LOCK_CM_RM_LIST @ 0x1408AF164
 * Callers:
 *     CmpIsCmRm @ 0x1408AE404 (CmpIsCmRm.c)
 *     CmpRunDownCmRM @ 0x1408AF194 (CmpRunDownCmRM.c)
 *     CmpInitCmRM @ 0x140A75780 (CmpInitCmRM.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x1403FC2F0 (ExAcquireFastMutexUnsafe.c)
 */

void LOCK_CM_RM_LIST()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpRmListLock);
}
