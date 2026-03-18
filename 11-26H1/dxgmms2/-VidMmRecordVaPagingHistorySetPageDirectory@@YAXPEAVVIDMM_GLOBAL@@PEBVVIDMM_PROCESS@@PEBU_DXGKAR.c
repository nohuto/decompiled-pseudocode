/*
 * XREFs of ?VidMmRecordVaPagingHistorySetPageDirectory@@YAXPEAVVIDMM_GLOBAL@@PEBVVIDMM_PROCESS@@PEBU_DXGKARG_SETROOTPAGETABLE@@PEBX@Z @ 0x140043EE0
 * Callers:
 *     VidSchiSetPagingHwContextPageDirectory @ 0x14009AE60 (VidSchiSetPagingHwContextPageDirectory.c)
 *     VidSchiSubmitRenderVirtualCommand @ 0x1400E9090 (VidSchiSubmitRenderVirtualCommand.c)
 *     VidSchiEnsureRootPageTableUpdated @ 0x140106870 (VidSchiEnsureRootPageTableUpdated.c)
 *     VidSchSetPagingNodePageDirectory @ 0x14011A5DC (VidSchSetPagingNodePageDirectory.c)
 * Callees:
 *     ?RecordVaPagingHistorySetPageDirectory@VIDMM_GLOBAL@@QEAAXPEBVVIDMM_PROCESS@@PEBU_DXGKARG_SETROOTPAGETABLE@@PEBX@Z @ 0x14011E77C (-RecordVaPagingHistorySetPageDirectory@VIDMM_GLOBAL@@QEAAXPEBVVIDMM_PROCESS@@PEBU_DXGKARG_SETROO.c)
 */

void __fastcall VidMmRecordVaPagingHistorySetPageDirectory(
        struct VIDMM_GLOBAL *a1,
        const struct VIDMM_PROCESS *a2,
        const struct _DXGKARG_SETROOTPAGETABLE *a3,
        const void *a4)
{
  VIDMM_GLOBAL::RecordVaPagingHistorySetPageDirectory(a1, a2, a3, a4);
}
