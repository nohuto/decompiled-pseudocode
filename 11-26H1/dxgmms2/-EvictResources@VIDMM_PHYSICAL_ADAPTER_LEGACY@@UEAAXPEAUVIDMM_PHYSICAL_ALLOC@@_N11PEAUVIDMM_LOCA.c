/*
 * XREFs of ?EvictResources@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAAXPEAUVIDMM_PHYSICAL_ALLOC@@_N11PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x1401172D0
 * Callers:
 *     <none>
 * Callees:
 *     EvictResources @ 0x1401172F8 (EvictResources.c)
 */

void __fastcall VIDMM_PHYSICAL_ADAPTER_LEGACY::EvictResources(
        VIDMM_PHYSICAL_ADAPTER_LEGACY *this,
        struct VIDMM_PHYSICAL_ALLOC *a2,
        bool a3,
        __int64 a4,
        char a5,
        struct VIDMM_LOCAL_ALLOC *a6)
{
  EvictResources(this, a2, a3, a5, (__int64)a6);
}
