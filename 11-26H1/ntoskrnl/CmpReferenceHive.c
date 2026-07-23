/*
 * XREFs of CmpReferenceHive @ 0x1408CECF0
 * Callers:
 *     CmpLockHashEntryByIndexExclusive @ 0x140775428 (CmpLockHashEntryByIndexExclusive.c)
 *     CmpGetLastHive @ 0x1408B79D4 (CmpGetLastHive.c)
 *     CmpBlockHiveWrites @ 0x1408B83AC (CmpBlockHiveWrites.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x1408B8450 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpBlockTwoHiveWrites @ 0x1408B86EC (CmpBlockTwoHiveWrites.c)
 *     CmpLockDeletedHashEntryExclusiveByKcb @ 0x1408C0438 (CmpLockDeletedHashEntryExclusiveByKcb.c)
 *     CmpDoQueueLateUnloadWorker @ 0x1408CB8AC (CmpDoQueueLateUnloadWorker.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1408CCC40 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDereferenceKeyControlBlock @ 0x1408CED20 (CmpDereferenceKeyControlBlock.c)
 *     CmpDeleteKeyObject @ 0x1408CFA20 (CmpDeleteKeyObject.c)
 *     CmpVEExecuteOpenLogic @ 0x1408DF920 (CmpVEExecuteOpenLogic.c)
 *     CmpTryToLockHashEntryExclusive @ 0x140AE3518 (CmpTryToLockHashEntryExclusive.c)
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
