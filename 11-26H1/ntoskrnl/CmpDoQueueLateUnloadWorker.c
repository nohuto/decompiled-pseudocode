/*
 * XREFs of CmpDoQueueLateUnloadWorker @ 0x1408CB8AC
 * Callers:
 *     CmpDoFlushNextHive @ 0x1408B8230 (CmpDoFlushNextHive.c)
 *     CmpFindSubKeyByNumberEx @ 0x1408C94A0 (CmpFindSubKeyByNumberEx.c)
 *     CmpDelayDerefKeyControlBlock @ 0x1408C9E60 (CmpDelayDerefKeyControlBlock.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1408C9F40 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1408CB390 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1408CCC40 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDereferenceKeyControlBlock @ 0x1408CED20 (CmpDereferenceKeyControlBlock.c)
 *     CmReleaseLoadKeyContext @ 0x14093D270 (CmReleaseLoadKeyContext.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     CmLockHive @ 0x1408CEC48 (CmLockHive.c)
 *     CmUnlockHive @ 0x1408CECB0 (CmUnlockHive.c)
 *     CmpReferenceHive @ 0x1408CECF0 (CmpReferenceHive.c)
 */

__int64 __fastcall CmpDoQueueLateUnloadWorker(__int64 a1)
{
  WORK_QUEUE_TYPE v2; // r8d

  CmLockHive(a1);
  *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4244), 1u) & 0x7F) + 4248) = 19;
  if ( **(_QWORD **)(a1 + 2944) == 2LL )
  {
    *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4244), 1u) & 0x7F) + 4248) = 20;
    if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 4808), 1, 0) )
    {
      *(_DWORD *)(a1 + 4LL * (_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 4244), 1u) & 0x7F) + 4248) = 21;
      CmpReferenceHive(a1);
      ExQueueWorkItem(*(PWORK_QUEUE_ITEM *)(a1 + 4824), v2);
    }
  }
  return CmUnlockHive(a1);
}
