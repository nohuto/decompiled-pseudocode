/*
 * XREFs of VidMmReportMultiGlobalAlloc @ 0x1400D7430
 * Callers:
 *     <none>
 * Callees:
 *     ?VidMmReportGlobalAlloc@@YAXPEBVDXGADAPTER@@PEBVDXGDEVICE@@PEBUVIDMM_GLOBAL_ALLOC@@PEBVDXGSHAREDRESOURCE@@@Z @ 0x1400D7458 (-VidMmReportGlobalAlloc@@YAXPEBVDXGADAPTER@@PEBVDXGDEVICE@@PEBUVIDMM_GLOBAL_ALLOC@@PEBVDXGSHARED.c)
 */

void __fastcall VidMmReportMultiGlobalAlloc(
        struct DXGDEVICE *a1,
        __int64 a2,
        __int64 a3,
        const struct DXGSHAREDRESOURCE *a4)
{
  VidMmReportGlobalAlloc(
    *(const struct DXGADAPTER **)(*((_QWORD *)a1 + 2) + 16LL),
    a1,
    *(const struct VIDMM_GLOBAL_ALLOC **)(a2 + 8),
    a4);
}
