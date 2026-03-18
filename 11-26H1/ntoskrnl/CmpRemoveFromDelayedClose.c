/*
 * XREFs of CmpRemoveFromDelayedClose @ 0x1408C64F4
 * Callers:
 *     CmpCleanUpKCBCacheTable @ 0x1408AFB20 (CmpCleanUpKCBCacheTable.c)
 *     CmpReferenceKeyControlBlockLockNotHeld @ 0x1408C6420 (CmpReferenceKeyControlBlockLockNotHeld.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1408C6670 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1408CBC90 (CmpDoParseKey.c)
 *     CmpCommitDiscardReplacePost @ 0x140A2F58C (CmpCommitDiscardReplacePost.c)
 *     CmpReferenceKeyControlBlock @ 0x140A79B80 (CmpReferenceKeyControlBlock.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x140AE0D24 (CmpSearchKeyControlBlockTreeEx.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x140278070 (ExAcquireFastMutex.c)
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 */

void __fastcall CmpRemoveFromDelayedClose(__int64 a1)
{
  _QWORD *v2; // rdx
  __int64 v3; // rax
  _QWORD *v4; // rcx

  ExAcquireFastMutex((PKGUARDED_MUTEX)&CmpKeyLockTracker.StateSaveArea);
  if ( (*(_BYTE *)(a1 + 64) & 2) != 0 )
  {
    v2 = (_QWORD *)(a1 + 224);
    v3 = *(_QWORD *)(a1 + 224);
    if ( (*(_BYTE *)(a1 + 64) & 4) != 0 )
    {
      *(_BYTE *)v3 = 1;
      *(_BYTE *)(a1 + 64) &= ~4u;
    }
    else
    {
      if ( *(_QWORD **)(v3 + 8) != v2 || (v4 = *(_QWORD **)(a1 + 232), (_QWORD *)*v4 != v2) )
        __fastfail(3u);
      --LODWORD(WheapPfaLock.WaitListEntry.Flink);
      *v4 = v3;
      *(_QWORD *)(v3 + 8) = v4;
      --KiSystemServiceTraceCallbackLock.KernelShadowStackBase;
    }
    *(_QWORD *)(a1 + 232) = a1 + 224;
    *v2 = v2;
    _InterlockedAnd8((volatile signed __int8 *)(a1 + 64), 0xFDu);
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)&CmpKeyLockTracker.StateSaveArea);
}
