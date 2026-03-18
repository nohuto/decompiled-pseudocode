/*
 * XREFs of ?ReclaimRange@VIDMM_CPU_HOST_APERTURE@@QEAA_NPEAUVIDMM_CPU_HOST_APERTURE_RANGE@@@Z @ 0x140103438
 * Callers:
 *     MapInCpuHostAperture @ 0x140103194 (MapInCpuHostAperture.c)
 * Callees:
 *     McTemplateK0ppqq_EtwWriteTransfer @ 0x140043A8C (McTemplateK0ppqq_EtwWriteTransfer.c)
 */

char __fastcall VIDMM_CPU_HOST_APERTURE::ReclaimRange(
        struct VIDMM_CPU_HOST_APERTURE_RANGE **this,
        struct VIDMM_CPU_HOST_APERTURE_RANGE ***a2)
{
  char v2; // bl
  struct VIDMM_CPU_HOST_APERTURE_RANGE **v4; // rax
  struct VIDMM_CPU_HOST_APERTURE_RANGE **v5; // rcx
  struct VIDMM_CPU_HOST_APERTURE_RANGE *v6; // rax
  int v8; // [rsp+28h] [rbp-20h]
  int v9; // [rsp+30h] [rbp-18h]

  v2 = 0;
  if ( *((_DWORD *)a2 + 9) != -1 )
  {
    v4 = *a2;
    if ( (*a2)[1] != (struct VIDMM_CPU_HOST_APERTURE_RANGE *)a2
      || (v5 = a2[1], *v5 != (struct VIDMM_CPU_HOST_APERTURE_RANGE *)a2)
      || (*v5 = (struct VIDMM_CPU_HOST_APERTURE_RANGE *)v4,
          v4[1] = (struct VIDMM_CPU_HOST_APERTURE_RANGE *)v5,
          v6 = *this,
          *((struct VIDMM_CPU_HOST_APERTURE_RANGE ***)*this + 1) != this) )
    {
      __fastfail(3u);
    }
    *a2 = (struct VIDMM_CPU_HOST_APERTURE_RANGE **)v6;
    v2 = 1;
    a2[1] = this;
    *((_QWORD *)v6 + 1) = a2;
    *this = (struct VIDMM_CPU_HOST_APERTURE_RANGE *)a2;
  }
  if ( (byte_14008A201 & 0x10) != 0 )
  {
    v9 = *((_DWORD *)this[5] + *((unsigned int *)a2 + 8));
    v8 = 0;
    McTemplateK0ppqq_EtwWriteTransfer(
      (__int64)a2[2],
      &EventCpuHostApertureReclaimRange,
      (__int64)a2,
      *(_QWORD *)this[6],
      a2[2],
      v8,
      v9);
  }
  return v2;
}
