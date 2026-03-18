/*
 * XREFs of ?VidMmDestroyDirtyBitplane@VIDMM_EXPORT@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_DIRTY_BITPLANE@@@Z @ 0x14006D25C
 * Callers:
 *     ?LiveMigrationTransferDirtyContent@DXGK_VIRTUAL_GPU_GPUP@@UEAAJIW4_DXGK_GPUP_MIGRATIONTYPE@@PEA_K@Z @ 0x1403A86A0 (-LiveMigrationTransferDirtyContent@DXGK_VIRTUAL_GPU_GPUP@@UEAAJIW4_DXGK_GPUP_MIGRATIONTYPE@@PEA_.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall VIDMM_EXPORT::VidMmDestroyDirtyBitplane(
        VIDMM_EXPORT *this,
        struct VIDMM_GLOBAL *a2,
        struct VIDMM_DIRTY_BITPLANE *a3)
{
  (*(void (__fastcall **)(struct VIDMM_GLOBAL *, struct VIDMM_DIRTY_BITPLANE *))(*((_QWORD *)this + 1) + 1240LL))(
    a2,
    a3);
}
