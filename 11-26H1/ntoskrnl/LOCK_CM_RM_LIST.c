/*
 * XREFs of LOCK_CM_RM_LIST @ 0x1408B5570
 * Callers:
 *     CmpIsCmRm @ 0x1408B4844 (CmpIsCmRm.c)
 *     CmpRunDownCmRM @ 0x1408B55A0 (CmpRunDownCmRM.c)
 *     CmpInitCmRM @ 0x140A7E4A0 (CmpInitCmRM.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x1403F8AE0 (ExAcquireFastMutexUnsafe.c)
 */

void LOCK_CM_RM_LIST()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpRmListLock);
}
