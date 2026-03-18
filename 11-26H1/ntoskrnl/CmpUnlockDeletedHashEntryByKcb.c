/*
 * XREFs of CmpUnlockDeletedHashEntryByKcb @ 0x1408B9F4C
 * Callers:
 *     CmpDiscardKcb @ 0x1408B9D6C (CmpDiscardKcb.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1408C3970 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1408C4DC0 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1408C6670 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDereferenceKeyControlBlock @ 0x1408C8770 (CmpDereferenceKeyControlBlock.c)
 * Callees:
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
 *     CmpDereferenceHive @ 0x1408C6580 (CmpDereferenceHive.c)
 */

__int64 __fastcall CmpUnlockDeletedHashEntryByKcb(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rax
  __int64 *v3; // rbx
  signed __int64 v4; // rax
  signed __int64 v5; // rdx
  __int64 v6; // rtt

  v1 = *(_QWORD *)(a1 + 32);
  *(_QWORD *)(*(_QWORD *)(v1 + 1664)
            + 24
            * ((unsigned int)(*(_DWORD *)(v1 + 1672) - 1) & ((unsigned int)(101027
                                                                          * (*(_DWORD *)(a1 + 16) ^ (*(_DWORD *)(a1 + 16) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(a1 + 16) ^ (*(_DWORD *)(a1 + 16) >> 9))) >> 9)))
            + 8) = 0LL;
  v2 = (unsigned int)(101027 * (*(_DWORD *)(a1 + 16) ^ (*(_DWORD *)(a1 + 16) >> 9)));
  v3 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 1664LL)
                 + 24
                 * ((unsigned int)(*(_DWORD *)(*(_QWORD *)(a1 + 32) + 1672LL) - 1) & (v2 ^ ((unsigned __int64)(unsigned int)v2 >> 9))));
  _m_prefetchw(v3);
  v4 = *v3;
  v5 = *v3 - 16;
  if ( (*v3 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v5 = 0LL;
  if ( (v4 & 2) != 0 || (v6 = *v3, v6 != _InterlockedCompareExchange64(v3, v5, v4)) )
    ExfReleasePushLock(v3);
  KeAbPostRelease((unsigned __int64)v3);
  return CmpDereferenceHive((PVOID)v1);
}
