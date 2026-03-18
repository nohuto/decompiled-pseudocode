/*
 * XREFs of UNLOCK_TRANSACTION_LIST @ 0x140AE0EFC
 * Callers:
 *     CmpTransEnlistUowInCmTrans @ 0x1404B8B98 (CmpTransEnlistUowInCmTrans.c)
 *     CmpRundownUnitOfWork @ 0x1408D0A08 (CmpRundownUnitOfWork.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x140276140 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 */

void UNLOCK_TRANSACTION_LIST()
{
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KeLeaveCriticalRegion();
}
