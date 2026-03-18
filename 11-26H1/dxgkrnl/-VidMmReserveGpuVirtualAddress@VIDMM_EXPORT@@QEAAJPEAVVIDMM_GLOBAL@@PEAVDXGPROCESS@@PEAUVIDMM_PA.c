/*
 * XREFs of ?VidMmReserveGpuVirtualAddress@VIDMM_EXPORT@@QEAAJPEAVVIDMM_GLOBAL@@PEAVDXGPROCESS@@PEAUVIDMM_PAGING_QUEUE@@PEAUD3DDDI_RESERVEGPUVIRTUALADDRESS@@@Z @ 0x140058158
 * Callers:
 *     ?IommuReserveGpuVa@ADAPTER_RENDER@@CAJPEAUSYSMM_ADAPTER@@_KPEA_KPEAX@Z @ 0x1401A95F0 (-IommuReserveGpuVa@ADAPTER_RENDER@@CAJPEAUSYSMM_ADAPTER@@_KPEA_KPEAX@Z.c)
 *     DxgkReserveGpuVirtualAddress @ 0x1403C86B0 (DxgkReserveGpuVirtualAddress.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall VIDMM_EXPORT::VidMmReserveGpuVirtualAddress(
        VIDMM_EXPORT *this,
        struct VIDMM_GLOBAL *a2,
        struct DXGPROCESS *a3,
        struct VIDMM_PAGING_QUEUE *a4,
        struct D3DDDI_RESERVEGPUVIRTUALADDRESS *a5)
{
  return (*(__int64 (__fastcall **)(struct VIDMM_GLOBAL *, struct DXGPROCESS *, struct VIDMM_PAGING_QUEUE *, struct D3DDDI_RESERVEGPUVIRTUALADDRESS *))(*((_QWORD *)this + 1) + 744LL))(
           a2,
           a3,
           a4,
           a5);
}
