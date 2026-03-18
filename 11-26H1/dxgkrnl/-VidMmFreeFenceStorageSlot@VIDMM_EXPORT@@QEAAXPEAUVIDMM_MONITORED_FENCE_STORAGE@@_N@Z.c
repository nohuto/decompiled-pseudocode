/*
 * XREFs of ?VidMmFreeFenceStorageSlot@VIDMM_EXPORT@@QEAAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N@Z @ 0x14004B344
 * Callers:
 *     ??1DXGDOORBELL@@IEAA@XZ @ 0x1401E0CE0 (--1DXGDOORBELL@@IEAA@XZ.c)
 *     ?DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1403A7D80 (-DestroyCoreState@DXGHWQUEUE@@IEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall VIDMM_EXPORT::VidMmFreeFenceStorageSlot(
        VIDMM_EXPORT *this,
        struct VIDMM_MONITORED_FENCE_STORAGE *a2,
        char a3)
{
  struct VIDMM_MONITORED_FENCE_STORAGE *v3; // r9

  v3 = a2;
  LOBYTE(a2) = a3;
  (*(void (__fastcall **)(struct VIDMM_MONITORED_FENCE_STORAGE *, struct VIDMM_MONITORED_FENCE_STORAGE *))(*((_QWORD *)this + 1) + 880LL))(
    v3,
    a2);
}
