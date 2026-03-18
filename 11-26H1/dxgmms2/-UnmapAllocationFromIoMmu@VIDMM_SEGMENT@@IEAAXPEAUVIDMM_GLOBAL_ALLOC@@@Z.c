/*
 * XREFs of ?UnmapAllocationFromIoMmu@VIDMM_SEGMENT@@IEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1401246A4
 * Callers:
 *     ?EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAA_NPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_N11PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x14012A730 (-EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAA_NPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_N11PEAUVIDMM_LOCAL_.c)
 *     ?EvictResource@VIDMM_APERTURE_SEGMENT@@UEAA_NPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_N11PEAUVIDMM_LOCAL_ALLOC@@@Z @ 0x14012ACD0 (-EvictResource@VIDMM_APERTURE_SEGMENT@@UEAA_NPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_N11PEAUVIDMM_LOCA.c)
 * Callees:
 *     ?VidMmGetFullPfnArray@@YAPEB_KPEBUVIDMM_GLOBAL_ALLOC@@@Z @ 0x14003E1A4 (-VidMmGetFullPfnArray@@YAPEB_KPEBUVIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?VidMmiGetLogicalAddress@@YA_KPEAX_K@Z @ 0x1400D8DB4 (-VidMmiGetLogicalAddress@@YA_KPEAX_K@Z.c)
 */

void __fastcall VIDMM_SEGMENT::UnmapAllocationFromIoMmu(VIDMM_SEGMENT *this, void **a2)
{
  const unsigned __int64 *FullPfnArray; // rsi
  int v5; // ebx
  __int64 v6; // rdi
  unsigned __int64 LogicalAddress; // rax

  if ( (*((_DWORD *)a2 + 7) & 2) == 0 )
  {
    FullPfnArray = VidMmGetFullPfnArray((const struct VIDMM_GLOBAL_ALLOC *)a2);
    v5 = *(_DWORD *)a2[46];
    v6 = *((_QWORD *)*a2 + 2) >> 12;
    LogicalAddress = VidMmiGetLogicalAddress(a2[43], 0LL);
    SysMmUnmapPagesFromIommu(
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 224LL),
      LogicalAddress,
      FullPfnArray,
      v6,
      (v5 & 0x10) != 0,
      2,
      a2);
  }
}
