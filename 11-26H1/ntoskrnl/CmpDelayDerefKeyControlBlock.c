/*
 * XREFs of CmpDelayDerefKeyControlBlock @ 0x1408C3890
 * Callers:
 *     CmpRemoveLayerLinkForDiscardedKcb @ 0x1408B8038 (CmpRemoveLayerLinkForDiscardedKcb.c)
 *     CmDeleteValueKey @ 0x1408BB780 (CmDeleteValueKey.c)
 *     CmpCleanUpKcbCachedSymlink @ 0x1408C20B4 (CmpCleanUpKcbCachedSymlink.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1408C3970 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1408C4DC0 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1408C6670 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDereferenceKeyControlBlock @ 0x1408C8770 (CmpDereferenceKeyControlBlock.c)
 *     CmpDoParseKey @ 0x1408CBC90 (CmpDoParseKey.c)
 *     CmSetValueKey @ 0x1408CEE30 (CmSetValueKey.c)
 *     CmRestoreKey @ 0x140986024 (CmRestoreKey.c)
 *     CmpCleanUpHigherLayerKcbCaches @ 0x140986E48 (CmpCleanUpHigherLayerKcbCaches.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x140A2E434 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x140A2EE88 (CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpKeyEnumStackFreeResumeContext @ 0x140AE3E28 (CmpKeyEnumStackFreeResumeContext.c)
 *     CmpFindSubKeyByNumberFromMergedView @ 0x140B40958 (CmpFindSubKeyByNumberFromMergedView.c)
 * Callees:
 *     KeBugCheckEx @ 0x1405339B0 (KeBugCheckEx.c)
 *     CmpDoQueueLateUnloadWorker @ 0x1408C52DC (CmpDoQueueLateUnloadWorker.c)
 */

_QWORD *__fastcall CmpDelayDerefKeyControlBlock(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  __int64 v2; // r10
  _QWORD *result; // rax
  _QWORD *v5; // r9
  unsigned __int64 v6; // r11
  bool v7; // cl
  _QWORD *v8; // rcx

  v2 = *(_QWORD *)(BugCheckParameter2 + 32);
  result = *(_QWORD **)BugCheckParameter2;
  while ( 1 )
  {
    v5 = result;
    if ( (unsigned __int64)result <= 1 )
      break;
    v6 = (unsigned __int64)result - 1;
    v7 = result == (_QWORD *)3 && (*(_DWORD *)(BugCheckParameter2 + 184) & 0x40000) != 0 && *(_BYTE *)(v2 + 2952) == 1;
    result = (_QWORD *)_InterlockedCompareExchange64(
                         (volatile signed __int64 *)BugCheckParameter2,
                         v6,
                         (signed __int64)result);
    if ( result == v5 )
    {
      if ( (unsigned __int64)result < v6 )
        KeBugCheckEx(0x51u, 0x25uLL, BugCheckParameter2, 0LL, 0LL);
      if ( v7 )
        return (_QWORD *)CmpDoQueueLateUnloadWorker(v2);
      return result;
    }
  }
  result = (_QWORD *)(BugCheckParameter2 + 224);
  if ( (_QWORD *)*result != result )
    KeBugCheckEx(0x51u, 0x34uLL, BugCheckParameter2, 1uLL, 0LL);
  v8 = *(_QWORD **)(a2 + 8);
  if ( *v8 != a2 )
    __fastfail(3u);
  *result = a2;
  *(_QWORD *)(BugCheckParameter2 + 232) = v8;
  *v8 = result;
  *(_QWORD *)(a2 + 8) = result;
  *(_BYTE *)(BugCheckParameter2 + 64) |= 1u;
  return result;
}
