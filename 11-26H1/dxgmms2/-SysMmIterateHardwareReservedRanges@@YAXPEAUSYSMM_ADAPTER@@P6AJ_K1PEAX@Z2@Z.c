/*
 * XREFs of ?SysMmIterateHardwareReservedRanges@@YAXPEAUSYSMM_ADAPTER@@P6AJ_K1PEAX@Z2@Z @ 0x14004CF94
 * Callers:
 *     ?Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@KI@Z @ 0x14009E770 (-Init@VIDMM_GLOBAL@@QEAAJPEAVADAPTER_RENDER@@KI@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

void __fastcall SysMmIterateHardwareReservedRanges(
        struct SYSMM_ADAPTER *a1,
        int (*a2)(unsigned __int64, unsigned __int64, void *),
        void *a3)
{
  ((void (__fastcall *)(struct SYSMM_ADAPTER *, __int64 (__fastcall *)(unsigned __int64, unsigned __int64, void *), void *))DxgCoreInterface[100])(
    a1,
    IterateHwReservedRangesCallback,
    a3);
}
