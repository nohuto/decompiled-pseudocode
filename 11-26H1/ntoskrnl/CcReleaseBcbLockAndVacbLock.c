/*
 * XREFs of CcReleaseBcbLockAndVacbLock @ 0x1402C2CE0
 * Callers:
 *     CcPinFileData @ 0x1402C1530 (CcPinFileData.c)
 *     CcGetVacbMiss @ 0x1402C3F60 (CcGetVacbMiss.c)
 *     CcUnmapVacbArray @ 0x14039CC50 (CcUnmapVacbArray.c)
 *     CcExtendVacbArray @ 0x1403C07EC (CcExtendVacbArray.c)
 *     CcUnmapInactiveViewsInternal @ 0x140408F40 (CcUnmapInactiveViewsInternal.c)
 *     CcDereferenceFileOffset @ 0x1404EC870 (CcDereferenceFileOffset.c)
 * Callees:
 *     ExfReleasePushLock @ 0x14021B220 (ExfReleasePushLock.c)
 *     KeReleaseGuardedMutex @ 0x1402782B0 (KeReleaseGuardedMutex.c)
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
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
    ExfReleasePushLock((_QWORD *)(a2 + 104));
  KeAbPostRelease(a2 + 104);
  if ( a1 )
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a2 + 288));
}
