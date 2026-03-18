/*
 * XREFs of ?EvictResources@VIDMM_PHYSICAL_ADAPTER_PBMM@@UEAAXPEAUVIDMM_PHYSICAL_ALLOC@@_N11PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x140119570
 * Callers:
 *     <none>
 * Callees:
 *     ?PbmmFreeResources@@YAXPEAUPBMM_ALLOCATOR@@PEAUPBMM_PHYSICAL_ALLOC@@_N@Z @ 0x14004BF48 (-PbmmFreeResources@@YAXPEAUPBMM_ALLOCATOR@@PEAUPBMM_PHYSICAL_ALLOC@@_N@Z.c)
 */

void __fastcall VIDMM_PHYSICAL_ADAPTER_PBMM::EvictResources(
        struct PBMM_ALLOCATOR **this,
        struct PBMM_PHYSICAL_ALLOC **a2,
        char a3)
{
  bool v3; // r9

  v3 = 0;
  if ( a3 )
    v3 = *((_BYTE *)*a2 + 42) != 0;
  PbmmFreeResources(this[233], a2[10], v3);
}
