/*
 * XREFs of VidMmQueryProcessStatistics @ 0x140043560
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryProcessStatistics@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCESS_INFORMATION@@@Z @ 0x140119700 (-QueryProcessStatistics@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAU_D3DKMT_QUERYSTATISTICS_PROCES.c)
 */

__int64 __fastcall VidMmQueryProcessStatistics(
        VIDMM_GLOBAL *a1,
        struct VIDMM_PROCESS *a2,
        struct _D3DKMT_QUERYSTATISTICS_PROCESS_INFORMATION *a3)
{
  return VIDMM_GLOBAL::QueryProcessStatistics(a1, a2, a3);
}
