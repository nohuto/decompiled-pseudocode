/*
 * XREFs of ?MapPagingBuffer@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x14011EA80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14005B850 (_guard_dispatch_icall.c)
 */

void __fastcall VIDMM_PHYSICAL_ADAPTER_LEGACY::MapPagingBuffer(
        VIDMM_PHYSICAL_ADAPTER_LEGACY *this,
        struct VIDMM_PHYSICAL_ALLOC *a2)
{
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 8) + 136LL))(*((_QWORD *)a2 + 8));
}
