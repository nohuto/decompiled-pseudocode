/*
 * XREFs of ?VidSchCancelDeferredVidPnSourceVisibility@VIDSCH_EXPORT@@QEAAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x14006020C
 * Callers:
 *     ?DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z @ 0x14025B780 (-DmmRemovePathsFromVidPnSource@@YAJPEAVDXGDEVICE@@IE@Z.c)
 *     ?SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJI_NPEBU_DXGK_DISPLAYMODE_INFO@@00@Z @ 0x1402CF610 (-SetVidPnSourceActive@ADAPTER_DISPLAY@@QEAAJI_NPEBU_DXGK_DISPLAYMODE_INFO@@00@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall VIDSCH_EXPORT::VidSchCancelDeferredVidPnSourceVisibility(
        VIDSCH_EXPORT *this,
        struct _VIDSCH_GLOBAL *a2,
        unsigned int a3)
{
  (*(void (__fastcall **)(struct _VIDSCH_GLOBAL *, _QWORD))(*((_QWORD *)this + 1) + 904LL))(a2, a3);
}
