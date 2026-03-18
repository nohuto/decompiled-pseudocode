/*
 * XREFs of CmpReferenceHive @ 0x1408C8740
 * Callers:
 *     CmpLockHashEntryByIndexExclusive @ 0x140772428 (CmpLockHashEntryByIndexExclusive.c)
 *     CmpGetLastHive @ 0x1408B13C8 (CmpGetLastHive.c)
 *     CmpBlockHiveWrites @ 0x1408B1DD0 (CmpBlockHiveWrites.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x1408B1E74 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpBlockTwoHiveWrites @ 0x1408B2110 (CmpBlockTwoHiveWrites.c)
 *     CmpLockDeletedHashEntryExclusiveByKcb @ 0x1408B9E68 (CmpLockDeletedHashEntryExclusiveByKcb.c)
 *     CmpDoQueueLateUnloadWorker @ 0x1408C52DC (CmpDoQueueLateUnloadWorker.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1408C6670 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDereferenceKeyControlBlock @ 0x1408C8770 (CmpDereferenceKeyControlBlock.c)
 *     CmpDeleteKeyObject @ 0x1408C9470 (CmpDeleteKeyObject.c)
 *     CmpVEExecuteOpenLogic @ 0x1408D9360 (CmpVEExecuteOpenLogic.c)
 *     CmpTryToLockHashEntryExclusive @ 0x140AE5758 (CmpTryToLockHashEntryExclusive.c)
 * Callees:
 *     <none>
 */

char __fastcall CmpReferenceHive(__int64 a1)
{
  signed __int32 v1; // eax
  signed __int32 v2; // ett

  _m_prefetchw((const void *)(a1 + 4240));
  v1 = *(_DWORD *)(a1 + 4240);
  while ( v1 )
  {
    v2 = v1;
    v1 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 4240), v1 + 1, v1);
    if ( v2 == v1 )
      return 1;
  }
  return 0;
}
