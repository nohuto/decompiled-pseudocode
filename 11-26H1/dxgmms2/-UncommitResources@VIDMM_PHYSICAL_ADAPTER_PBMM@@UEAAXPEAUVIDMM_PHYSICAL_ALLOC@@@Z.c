/*
 * XREFs of ?UncommitResources@VIDMM_PHYSICAL_ADAPTER_PBMM@@UEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x1401198E0
 * Callers:
 *     <none>
 * Callees:
 *     ?PbmmTrimResources@@YAXPEAUPBMM_ALLOCATOR@@PEAUPBMM_PHYSICAL_ALLOC@@@Z @ 0x14004C28C (-PbmmTrimResources@@YAXPEAUPBMM_ALLOCATOR@@PEAUPBMM_PHYSICAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_PHYSICAL_ADAPTER_PBMM::UncommitResources(
        struct PBMM_ALLOCATOR **this,
        struct PBMM_PHYSICAL_ALLOC **a2)
{
  PbmmTrimResources(this[233], a2[10]);
  *((_DWORD *)*a2 + 18) = 1;
}
