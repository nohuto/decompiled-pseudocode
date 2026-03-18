/*
 * XREFs of ?UnmapPagingBuffer@VIDMM_PHYSICAL_ADAPTER_PBMM@@UEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x140123E60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_PHYSICAL_ADAPTER_PBMM::UnmapPagingBuffer(
        VIDMM_PHYSICAL_ADAPTER_PBMM *this,
        struct VIDMM_PHYSICAL_ALLOC *a2)
{
  *(_DWORD *)(*(_QWORD *)a2 + 24LL) |= 0x80000u;
}
