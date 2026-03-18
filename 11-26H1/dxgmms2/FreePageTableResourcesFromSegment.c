/*
 * XREFs of FreePageTableResourcesFromSegment @ 0x1400AF6F8
 * Callers:
 *     ?FreePageTableResources@VIDMM_PHYSICAL_ADAPTER_PBMM@@UEAAXXZ @ 0x1400AF6A0 (-FreePageTableResources@VIDMM_PHYSICAL_ADAPTER_PBMM@@UEAAXXZ.c)
 * Callees:
 *     ?VidMmReleaseUpdatePageTableChaData@@YAXPEAVVIDMM_CPU_HOST_APERTURE@@PEAUVIDMM_UPDATEPAGETABLE_CHA_DATA@@@Z @ 0x1400BC5CC (-VidMmReleaseUpdatePageTableChaData@@YAXPEAVVIDMM_CPU_HOST_APERTURE@@PEAUVIDMM_UPDATEPAGETABLE_C.c)
 */

void __fastcall FreePageTableResourcesFromSegment(__int64 a1, unsigned __int16 a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 1752) + 8LL * a2);
  VidMmReleaseUpdatePageTableChaData(
    *(struct VIDMM_CPU_HOST_APERTURE **)(v2 + 136),
    (struct VIDMM_UPDATEPAGETABLE_CHA_DATA *)(v2 + 144));
}
