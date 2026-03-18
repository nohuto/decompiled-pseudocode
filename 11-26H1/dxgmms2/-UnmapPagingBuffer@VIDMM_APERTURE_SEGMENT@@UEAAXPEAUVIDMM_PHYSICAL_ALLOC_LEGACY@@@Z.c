/*
 * XREFs of ?UnmapPagingBuffer@VIDMM_APERTURE_SEGMENT@@UEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z @ 0x1400BDF90
 * Callers:
 *     <none>
 * Callees:
 *     ?UnmapApertureRange@VIDMM_APERTURE_SEGMENT@@AEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_K11PEBU_MDL@@_N@Z @ 0x1400D969C (-UnmapApertureRange@VIDMM_APERTURE_SEGMENT@@AEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_K11PEBU_MDL@@.c)
 */

void __fastcall VIDMM_APERTURE_SEGMENT::UnmapPagingBuffer(
        VIDMM_APERTURE_SEGMENT *this,
        struct VIDMM_PHYSICAL_ALLOC_LEGACY *a2)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // [rsp+20h] [rbp-28h]
  const struct _MDL *v4; // [rsp+28h] [rbp-20h]

  v2 = *(_QWORD *)a2;
  VIDMM_APERTURE_SEGMENT::UnmapApertureRange(
    this,
    a2,
    *((_QWORD *)a2 + 2) >> 12,
    *((_QWORD *)a2 + 9) / 4096LL,
    v3,
    v4,
    0);
  *(_DWORD *)(v2 + 24) |= 0x80000u;
}
