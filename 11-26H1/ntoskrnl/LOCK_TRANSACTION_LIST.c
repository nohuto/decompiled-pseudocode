/*
 * XREFs of LOCK_TRANSACTION_LIST @ 0x1408AEE3C
 * Callers:
 *     CmpTransEnlistUowInCmTrans @ 0x1404B8B98 (CmpTransEnlistUowInCmTrans.c)
 *     CmObliterateRMTxArray @ 0x14085BBD0 (CmObliterateRMTxArray.c)
 *     CmpLazyCommitWorker @ 0x14085BCC0 (CmpLazyCommitWorker.c)
 *     CmpTransInitializeTransaction @ 0x1408AC920 (CmpTransInitializeTransaction.c)
 *     CmSnapshotRMTxArray @ 0x1408ACD84 (CmSnapshotRMTxArray.c)
 *     CmpCleanupTransactionState @ 0x1408ACEE8 (CmpCleanupTransactionState.c)
 *     CmpLogCheckpoint @ 0x1408ADB44 (CmpLogCheckpoint.c)
 *     CmKtmNotification @ 0x1408ADED0 (CmKtmNotification.c)
 *     CmpCommitPreparedLightWeightTransaction @ 0x1408AE814 (CmpCommitPreparedLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x1408AE99C (CmpPrepareLightWeightTransaction.c)
 *     CmpCleanupLightWeightTransaction @ 0x1408AECE8 (CmpCleanupLightWeightTransaction.c)
 *     CmpTransMgrRollback @ 0x1408AEDA8 (CmpTransMgrRollback.c)
 *     CmpTransMgrPrepare @ 0x1408AEE6C (CmpTransMgrPrepare.c)
 *     CmpRunDownCmRM @ 0x1408AF194 (CmpRunDownCmRM.c)
 *     CmpRundownUnitOfWork @ 0x1408D0A08 (CmpRundownUnitOfWork.c)
 *     CmpTransSearchAddTrans @ 0x1408EC150 (CmpTransSearchAddTrans.c)
 *     CmpTransSearchAddLightWeightTrans @ 0x1408ED0C4 (CmpTransSearchAddLightWeightTrans.c)
 *     CmRmFinalizeRecovery @ 0x140B3A6E8 (CmRmFinalizeRecovery.c)
 * Callees:
 *     ExAcquireFastMutexUnsafe @ 0x1403FC2F0 (ExAcquireFastMutexUnsafe.c)
 */

void LOCK_TRANSACTION_LIST()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireFastMutexUnsafe(&CmpTransactionListLock);
}
