/*
 * XREFs of CcReleaseBcbLockAndVacbLock @ 0x1402E0ED0
 * Callers:
 *     CcPinFileData @ 0x1402DF720 (CcPinFileData.c)
 *     CcGetVacbMiss @ 0x1402E1EA0 (CcGetVacbMiss.c)
 *     CcUnmapVacbArray @ 0x14039AEF0 (CcUnmapVacbArray.c)
 *     CcExtendVacbArray @ 0x1403B68EC (CcExtendVacbArray.c)
 *     CcUnmapInactiveViewsInternal @ 0x140414910 (CcUnmapInactiveViewsInternal.c)
 *     CcDereferenceFileOffset @ 0x1404F3290 (CcDereferenceFileOffset.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140278D40 (KeReleaseGuardedMutex.c)
 *     KeAbPostRelease @ 0x140279A70 (KeAbPostRelease.c)
 *     ExfReleasePushLock @ 0x1402E3120 (ExfReleasePushLock.c)
 */

void __fastcall CcReleaseBcbLockAndVacbLock(int a1, __int64 a2)
{
  signed __int64 v4; // rax
  signed __int64 v5; // rdx

  _m_prefetchw((const void *)(a2 + 104));
  v4 = *(_QWORD *)(a2 + 104);
  v5 = v4 - 16;
  if ( (v4 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v5 = 0LL;
  if ( (v4 & 2) != 0 || v4 != _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 104), v5, v4) )
    ExfReleasePushLock(a2 + 104, v5);
  KeAbPostRelease(a2 + 104);
  if ( a1 )
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a2 + 288));
}
