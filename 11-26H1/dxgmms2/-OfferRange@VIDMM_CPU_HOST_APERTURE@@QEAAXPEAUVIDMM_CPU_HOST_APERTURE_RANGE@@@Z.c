/*
 * XREFs of ?OfferRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x14011D334
 * Callers:
 *     MapInCpuHostAperture @ 0x140103194 (MapInCpuHostAperture.c)
 *     ?OfferCpuHostApertureRanges@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z @ 0x14011D2E0 (-OfferCpuHostApertureRanges@VIDMM_PHYSICAL_ADAPTER_LEGACY@@UEAAXPEAUVIDMM_PHYSICAL_ALLOC@@@Z.c)
 * Callees:
 *     McTemplateK0ppqq_EtwWriteTransfer @ 0x140043A8C (McTemplateK0ppqq_EtwWriteTransfer.c)
 */

void __fastcall VIDMM_CPU_HOST_APERTURE::OfferRange(
        VIDMM_CPU_HOST_APERTURE *this,
        struct VIDMM_CPU_HOST_APERTURE_RANGE ***a2,
        __int64 a3)
{
  struct VIDMM_CPU_HOST_APERTURE_RANGE **v4; // rcx
  struct VIDMM_CPU_HOST_APERTURE_RANGE **v5; // rax
  struct VIDMM_CPU_HOST_APERTURE_RANGE ****v6; // rax
  struct VIDMM_CPU_HOST_APERTURE_RANGE **v7; // rcx
  __int64 v8; // rcx
  int v9; // [rsp+28h] [rbp-20h]
  int v10; // [rsp+30h] [rbp-18h]

  v4 = *a2;
  if ( (*a2)[1] != (struct VIDMM_CPU_HOST_APERTURE_RANGE *)a2
    || (v5 = a2[1], *v5 != (struct VIDMM_CPU_HOST_APERTURE_RANGE *)a2)
    || (*v5 = (struct VIDMM_CPU_HOST_APERTURE_RANGE *)v4,
        v4[1] = (struct VIDMM_CPU_HOST_APERTURE_RANGE *)v5,
        v6 = (struct VIDMM_CPU_HOST_APERTURE_RANGE ****)((char *)this + 16),
        v7 = (struct VIDMM_CPU_HOST_APERTURE_RANGE **)*((_QWORD *)this + 2),
        v7[1] != (VIDMM_CPU_HOST_APERTURE *)((char *)this + 16)) )
  {
    __fastfail(3u);
  }
  *a2 = v7;
  a2[1] = (struct VIDMM_CPU_HOST_APERTURE_RANGE **)v6;
  v7[1] = (struct VIDMM_CPU_HOST_APERTURE_RANGE *)a2;
  *v6 = a2;
  if ( (byte_14008A201 & 0x10) != 0 )
  {
    v8 = *((unsigned int *)a2 + 8);
    v10 = *(_DWORD *)(*((_QWORD *)this + 5) + 4 * v8);
    v9 = 0;
    McTemplateK0ppqq_EtwWriteTransfer(v8, &EventCpuHostApertureOfferRange, a3, **((_QWORD **)this + 6), a2[2], v9, v10);
  }
}
