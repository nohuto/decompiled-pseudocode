/*
 * XREFs of CcUnmapInactiveViews @ 0x14041480C
 * Callers:
 *     MiSegmentDereferenceWorker @ 0x1404A3320 (MiSegmentDereferenceWorker.c)
 *     MiReduceSystemCache @ 0x140531298 (MiReduceSystemCache.c)
 * Callees:
 *     CcUnmapInactiveViewsInternal @ 0x140414910 (CcUnmapInactiveViewsInternal.c)
 */

__int64 __fastcall CcUnmapInactiveViews(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx

  if ( CcInitializationComplete && CcNumberOfMappedVacbs && (v4 = *(_QWORD *)(a1 + 8)) != 0 )
    return CcUnmapInactiveViewsInternal(v4, a2, a3, a4);
  else
    return 0LL;
}
