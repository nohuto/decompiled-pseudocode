/*
 * XREFs of CcUnmapInactiveViews @ 0x140408E3C
 * Callers:
 *     MiSegmentDereferenceWorker @ 0x14049CE30 (MiSegmentDereferenceWorker.c)
 *     MiReduceSystemCache @ 0x140533798 (MiReduceSystemCache.c)
 * Callees:
 *     CcUnmapInactiveViewsInternal @ 0x140408F40 (CcUnmapInactiveViewsInternal.c)
 */

__int64 __fastcall CcUnmapInactiveViews(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rcx

  if ( CcInitializationComplete && CcNumberOfMappedVacbs && (v4 = *(_QWORD *)(a1 + 8)) != 0 )
    return CcUnmapInactiveViewsInternal(v4, a2, a3, a4);
  else
    return 0LL;
}
