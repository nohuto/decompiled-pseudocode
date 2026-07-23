/*
 * XREFs of MiReduceSystemCache @ 0x140533798
 * Callers:
 *     MiRemoveUnusedSegments @ 0x14049CD9C (MiRemoveUnusedSegments.c)
 * Callees:
 *     CcUnmapInactiveViews @ 0x140408E3C (CcUnmapInactiveViews.c)
 *     MiComputeProportionalSystemCacheVaReduction @ 0x1405337F8 (MiComputeProportionalSystemCacheVaReduction.c)
 *     MiDeleteUnmappedSystemCacheViews @ 0x1406FA688 (MiDeleteUnmappedSystemCacheViews.c)
 */

__int64 __fastcall MiReduceSystemCache(__int64 a1)
{
  unsigned int v2; // edi
  __int64 v3; // rax

  v2 = 0;
  if ( !MiComputeProportionalSystemCacheVaReduction(a1) )
    return 0LL;
  MiDeleteUnmappedSystemCacheViews();
  v3 = MiComputeProportionalSystemCacheVaReduction(a1);
  if ( !v3 )
    return 0LL;
  LOBYTE(v2) = (unsigned int)CcUnmapInactiveViews(*(_QWORD *)(a1 + 256), v3, 0LL, 0LL) != 0;
  return v2;
}
