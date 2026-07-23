/*
 * XREFs of CmSnapshotRMTxArray @ 0x1408B31C4
 * Callers:
 *     CmpTryToRundownHive @ 0x14045CB08 (CmpTryToRundownHive.c)
 *     CmpPerformUnloadKey @ 0x1408B6104 (CmpPerformUnloadKey.c)
 * Callees:
 *     ExReleaseFastMutexUnsafe @ 0x1402756B0 (ExReleaseFastMutexUnsafe.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     CmpAddEnlistmentToRollbackPacket @ 0x140863E9C (CmpAddEnlistmentToRollbackPacket.c)
 *     CmpReserveRollbackPacketSpace @ 0x1408640E4 (CmpReserveRollbackPacketSpace.c)
 *     LOCK_TRANSACTION_LIST @ 0x1408B527C (LOCK_TRANSACTION_LIST.c)
 *     CmListGetNextElement @ 0x140C5EA70 (CmListGetNextElement.c)
 */

__int64 __fastcall CmSnapshotRMTxArray(__int64 a1, unsigned int *a2)
{
  __int64 v3; // rsi
  unsigned int v4; // ebx
  __int64 NextElement; // rax
  __int64 v6; // rax
  __int64 result; // rax
  bool v8; // zf
  unsigned int v9; // eax
  __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    v3 = a1 + 16;
    while ( 1 )
    {
      LOCK_TRANSACTION_LIST();
      v4 = 0;
      v10 = 0LL;
      while ( 1 )
      {
        NextElement = CmListGetNextElement(v3, &v10, 0LL);
        if ( !NextElement )
          break;
        v8 = (*(_DWORD *)(NextElement + 48) & 8) == 0;
        v9 = v4 + 1;
        if ( !v8 )
          v9 = v4;
        v4 = v9;
      }
      if ( v4 <= a2[1] - *a2 )
        break;
      ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
      KeLeaveCriticalRegion();
      result = CmpReserveRollbackPacketSpace(a2, v4);
      if ( (int)result < 0 )
        return result;
    }
    v10 = 0LL;
    while ( 1 )
    {
      v6 = CmListGetNextElement(v3, &v10, 0LL);
      if ( !v6 )
        break;
      if ( (*(_DWORD *)(v6 + 48) & 8) == 0 )
        CmpAddEnlistmentToRollbackPacket((__int64)a2, *(void **)(v6 + 72));
    }
    ExReleaseFastMutexUnsafe(&CmpTransactionListLock);
    KeLeaveCriticalRegion();
  }
  return 0LL;
}
