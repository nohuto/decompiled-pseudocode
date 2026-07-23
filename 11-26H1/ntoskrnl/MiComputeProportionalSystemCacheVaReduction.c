/*
 * XREFs of MiComputeProportionalSystemCacheVaReduction @ 0x1405337F8
 * Callers:
 *     MiSegmentDereferenceWorker @ 0x14049CE30 (MiSegmentDereferenceWorker.c)
 *     MiReduceSystemCache @ 0x140533798 (MiReduceSystemCache.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiComputeProportionalSystemCacheVaReduction(__int64 a1)
{
  unsigned int v1; // eax

  v1 = *(_DWORD *)(a1 + 2768);
  if ( v1 > 0x10 )
    return v1 & 0xFFFFFFF8;
  else
    return 0LL;
}
