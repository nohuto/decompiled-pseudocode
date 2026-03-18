/*
 * XREFs of VidMmMapGpuVA @ 0x140044680
 * Callers:
 *     <none>
 * Callees:
 *     ?MapGpuVA@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z @ 0x1400CB2CC (-MapGpuVA@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@PEA_KI_N@Z.c)
 */

__int64 __fastcall VidMmMapGpuVA(
        VIDMM_GLOBAL **a1,
        struct VIDMM_MONITORED_FENCE_STORAGE *a2,
        unsigned __int64 *a3,
        unsigned int a4)
{
  return VIDMM_GLOBAL::MapGpuVA(*a1, (struct VIDMM_DEVICE *)a1, a2, a3, a4, 0);
}
