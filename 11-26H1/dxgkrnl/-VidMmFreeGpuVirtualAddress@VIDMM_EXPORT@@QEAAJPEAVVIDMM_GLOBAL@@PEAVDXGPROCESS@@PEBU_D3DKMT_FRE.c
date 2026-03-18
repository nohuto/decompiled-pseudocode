/*
 * XREFs of ?VidMmFreeGpuVirtualAddress@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVDXGPROCESS@@PEBU_D3DKMT_FREEGPUVIRTUALADDRESS@@@Z @ 0x140058FD8
 * Callers:
 *     ?IommuFreeGpuVa@ADAPTER_RENDER@@CAJPEAUSYSMM_ADAPTER@@_KPEAX@Z @ 0x1401A94B0 (-IommuFreeGpuVa@ADAPTER_RENDER@@CAJPEAUSYSMM_ADAPTER@@_KPEAX@Z.c)
 *     DxgkMapGpuVirtualAddress @ 0x14037FEC0 (DxgkMapGpuVirtualAddress.c)
 *     DxgkReserveGpuVirtualAddress @ 0x1403C86B0 (DxgkReserveGpuVirtualAddress.c)
 *     DxgkFreeGpuVirtualAddress @ 0x1403D1110 (DxgkFreeGpuVirtualAddress.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VIDMM_EXPORT::VidMmFreeGpuVirtualAddress(
        VIDMM_EXPORT *this,
        struct VIDMM_GLOBAL *a2,
        struct DXGPROCESS *a3,
        const struct _D3DKMT_FREEGPUVIRTUALADDRESS *a4)
{
  return (*(__int64 (__fastcall **)(struct VIDMM_GLOBAL *, struct DXGPROCESS *, const struct _D3DKMT_FREEGPUVIRTUALADDRESS *))(*((_QWORD *)this + 1) + 760LL))(
           a2,
           a3,
           a4);
}
