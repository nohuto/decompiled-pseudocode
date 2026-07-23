/*
 * XREFs of CmpDelayDerefKeyControlBlock @ 0x1408C9E60
 * Callers:
 *     CmpRemoveLayerLinkForDiscardedKcb @ 0x1408BE608 (CmpRemoveLayerLinkForDiscardedKcb.c)
 *     CmDeleteValueKey @ 0x1408C1D50 (CmDeleteValueKey.c)
 *     CmpCleanUpKcbCachedSymlink @ 0x1408C8684 (CmpCleanUpKcbCachedSymlink.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1408C9F40 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1408CB390 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1408CCC40 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDereferenceKeyControlBlock @ 0x1408CED20 (CmpDereferenceKeyControlBlock.c)
 *     CmpDoParseKey @ 0x1408D2240 (CmpDoParseKey.c)
 *     CmSetValueKey @ 0x1408D53E0 (CmSetValueKey.c)
 *     CmRestoreKey @ 0x140947D24 (CmRestoreKey.c)
 *     CmpCleanUpHigherLayerKcbCaches @ 0x140948B48 (CmpCleanUpHigherLayerKcbCaches.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x140A402C0 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x140A40D14 (CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 *     CmpKeyEnumStackFreeResumeContext @ 0x140AE1930 (CmpKeyEnumStackFreeResumeContext.c)
 *     CmpFindSubKeyByNumberFromMergedView @ 0x140B42968 (CmpFindSubKeyByNumberFromMergedView.c)
 * Callees:
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     CmpDoQueueLateUnloadWorker @ 0x1408CB8AC (CmpDoQueueLateUnloadWorker.c)
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
