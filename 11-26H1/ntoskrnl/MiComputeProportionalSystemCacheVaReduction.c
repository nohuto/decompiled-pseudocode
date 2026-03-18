/*
 * XREFs of MiComputeProportionalSystemCacheVaReduction @ 0x1405312F8
 * Callers:
 *     MiSegmentDereferenceWorker @ 0x1404A3320 (MiSegmentDereferenceWorker.c)
 *     MiReduceSystemCache @ 0x140531298 (MiReduceSystemCache.c)
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
