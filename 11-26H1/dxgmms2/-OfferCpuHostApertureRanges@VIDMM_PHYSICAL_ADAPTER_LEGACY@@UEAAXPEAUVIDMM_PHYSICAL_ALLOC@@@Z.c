/*
 * XREFs of ?OfferCpuHostApertureRanges@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x14011D2E0
 * Callers:
 *     <none>
 * Callees:
 *     DiscardCpuHostApertureRange @ 0x1400B1B94 (DiscardCpuHostApertureRange.c)
 *     ?OfferRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x14011D334 (-OfferRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z.c)
 */

void __fastcall VIDMM_PHYSICAL_ADAPTER_LEGACY::OfferCpuHostApertureRanges(
        VIDMM_PHYSICAL_ADAPTER_LEGACY *this,
        struct VIDMM_PHYSICAL_ALLOC *a2)
{
  struct VIDMM_CPU_HOST_APERTURE_RANGE *v4; // rdx
  VIDMM_CPU_HOST_APERTURE *v5; // rcx

  v4 = (struct VIDMM_CPU_HOST_APERTURE_RANGE *)*((_QWORD *)a2 + 18);
  if ( v4 )
  {
    v5 = *(VIDMM_CPU_HOST_APERTURE **)(*((_QWORD *)a2 + 8) + 512LL);
    if ( (*(_DWORD *)(*((_QWORD *)this + 7) + 6984LL) & 0x1000000) != 0 )
      DiscardCpuHostApertureRange((__int64)this, v5, (__int64)v4);
    else
      VIDMM_CPU_HOST_APERTURE::OfferRange(v5, v4);
  }
}
