/*
 * XREFs of ?MapPagingBuffer@VIDMM_APERTURE_SEGMENT@@UEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@@Z @ 0x1400BD960
 * Callers:
 *     <none>
 * Callees:
 *     ?MapApertureRange@VIDMM_APERTURE_SEGMENT@@AEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_K11PEBU_MDL@@_N3@Z @ 0x1400D7D00 (-MapApertureRange@VIDMM_APERTURE_SEGMENT@@AEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_K11PEBU_MDL@@_N.c)
 */

void __fastcall VIDMM_APERTURE_SEGMENT::MapPagingBuffer(
        VIDMM_APERTURE_SEGMENT *this,
        struct VIDMM_PHYSICAL_ALLOC_LEGACY *a2)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // [rsp+20h] [rbp-28h]

  v2 = *(_QWORD *)a2;
  VIDMM_APERTURE_SEGMENT::MapApertureRange(
    this,
    a2,
    *((_QWORD *)a2 + 2) >> 12,
    *((_QWORD *)a2 + 9) / 4096LL,
    v3,
    *(const struct _MDL **)(*(_QWORD *)a2 + 56LL),
    0,
    (**(_DWORD **)(*(_QWORD *)a2 + 368LL) & 0x800004) == 4);
  *(_DWORD *)(v2 + 24) &= ~0x80000u;
}
