/*
 * XREFs of VidMmQuerySegmentUsageStatistics @ 0x14004D860
 * Callers:
 *     <none>
 * Callees:
 *     ?QuerySegmentUsageStatistics@VIDMM_GLOBAL@@QEAAJGIPEAU_D3DKMT_QUERYSTATISTICS_MEMORY_USAGE@@@Z @ 0x1400A91CC (-QuerySegmentUsageStatistics@VIDMM_GLOBAL@@QEAAJGIPEAU_D3DKMT_QUERYSTATISTICS_MEMORY_USAGE@@@Z.c)
 */

__int64 __fastcall VidMmQuerySegmentUsageStatistics(
        VIDMM_GLOBAL *a1,
        unsigned __int16 a2,
        unsigned int a3,
        struct _D3DKMT_QUERYSTATISTICS_MEMORY_USAGE *a4)
{
  return VIDMM_GLOBAL::QuerySegmentUsageStatistics(a1, a2, a3, a4);
}
