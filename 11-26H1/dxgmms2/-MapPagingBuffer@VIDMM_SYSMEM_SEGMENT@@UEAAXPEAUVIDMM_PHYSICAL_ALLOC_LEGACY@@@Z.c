/*
 * XREFs of ?MapPagingBuffer@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z @ 0x140123D00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_SYSMEM_SEGMENT::MapPagingBuffer(
        VIDMM_SYSMEM_SEGMENT *this,
        struct VIDMM_PHYSICAL_ALLOC_LEGACY *a2)
{
  *(_DWORD *)(*(_QWORD *)a2 + 24LL) &= ~0x80000u;
}
