/*
 * XREFs of FlushDmaBufferProcessCacheCB @ 0x1400A4000
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmFlushAllocationRangeFromProcessorCache@@YAXPEAUVIDMM_GLOBAL_ALLOC@@_K1@Z @ 0x1400A2F6C (-VidMmFlushAllocationRangeFromProcessorCache@@YAXPEAUVIDMM_GLOBAL_ALLOC@@_K1@Z.c)
 */

__int64 __fastcall FlushDmaBufferProcessCacheCB(
        struct VIDMM_PHYSICAL_ADAPTER *a1,
        struct VIDMM_GLOBAL_ALLOC **a2,
        const struct VIDMM_ITERATE_PHYSICAL_MEMORY_RANGE_DESC *a3,
        void *a4)
{
  int v4; // eax

  v4 = *((_DWORD *)a1 + 25);
  if ( !_bittest(&v4, *((unsigned __int8 *)a3 + 16)) )
    VidMmFlushAllocationRangeFromProcessorCache(
      *a2,
      (unsigned __int64)*((unsigned int *)a3 + 2) << 12,
      *((_DWORD *)a3 + 3) << 12);
  return 0LL;
}
