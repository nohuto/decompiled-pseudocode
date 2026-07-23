/*
 * XREFs of CmpTransMgrRollback @ 0x1408B51E8
 * Callers:
 *     CmpRmUnDoPhase @ 0x140864A08 (CmpRmUnDoPhase.c)
 *     CmKtmNotification @ 0x1408B4310 (CmKtmNotification.c)
 *     CmpAbortLightWeightTransaction @ 0x1408B4958 (CmpAbortLightWeightTransaction.c)
 *     CmRmFinalizeRecovery @ 0x140B3CA88 (CmRmFinalizeRecovery.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402756B0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     LOCK_TRANSACTION_LIST @ 0x1408B527C (LOCK_TRANSACTION_LIST.c)
 *     CmListGetNextElement @ 0x140C5EA70 (CmListGetNextElement.c)
 */

__int64 __fastcall CmpTransMgrRollback(__int64 a1, _DWORD *a2)
{
  __int64 NextElement; // rax
  int v5; // edx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  *a2 = 0;
  LOCK_TRANSACTION_LIST();
  *(_DWORD *)(a1 + 48) |= 2u;
  while ( 1 )
  {
    NextElement = CmListGetNextElement(a1 + 16, &v7, 0LL);
    if ( !NextElement )
      break;
    v5 = *(_DWORD *)(NextElement + 64);
    if ( (v5 & 1) == 0 )
    {
      ++*a2;
      if ( !*(_DWORD *)(NextElement + 68) && !*(_DWORD *)(NextElement + 88) )
        *(_DWORD *)(NextElement + 88) = *(_DWORD *)(*(_QWORD *)(NextElement + 48) + 40LL);
      *(_DWORD *)(NextElement + 64) = v5 | 1;
    }
  }
  ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
  KeLeaveCriticalRegion();
  return 0LL;
}
