/*
 * XREFs of ReservePageTableResourcesFromSegment @ 0x1400B020C
 * Callers:
 *     ?ReservePageTableResources@VIDMM_PHYSICAL_ADAPTER_PBMM@@UEAAJXZ @ 0x1400B01A0 (-ReservePageTableResources@VIDMM_PHYSICAL_ADAPTER_PBMM@@UEAAJXZ.c)
 * Callees:
 *     ?VidMmEnsureUpdatePageTableChaData@@YAJPEAVVIDMM_CPU_HOST_APERTURE@@IPEAUVIDMM_UPDATEPAGETABLE_CHA_DATA@@@Z @ 0x14009B818 (-VidMmEnsureUpdatePageTableChaData@@YAJPEAVVIDMM_CPU_HOST_APERTURE@@IPEAUVIDMM_UPDATEPAGETABLE_C.c)
 */

__int64 __fastcall ReservePageTableResourcesFromSegment(__int64 a1, unsigned __int16 a2)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 1752) + 8LL * a2);
  return VidMmEnsureUpdatePageTableChaData(
           *(struct VIDMM_CPU_HOST_APERTURE **)(v3 + 136),
           *(_DWORD *)(a1 + 1724),
           (struct VIDMM_UPDATEPAGETABLE_CHA_DATA *)(v3 + 144));
}
