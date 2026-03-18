/*
 * XREFs of ?MapTemporaryResource@VIDMM_APERTURE_SEGMENT@@AEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_K1PEBU_MDL@@@Z @ 0x1400BD9CC
 * Callers:
 *     ?BeginTemporaryResourceAccess@VIDMM_APERTURE_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEAUVIDMM_TEMPORARY_RESOURCE_LEGACY@@@Z @ 0x1400BD090 (-BeginTemporaryResourceAccess@VIDMM_APERTURE_SEGMENT@@UEAAJPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEAU.c)
 * Callees:
 *     ?MapApertureRange@VIDMM_APERTURE_SEGMENT@@AEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_K11PEBU_MDL@@_N3@Z @ 0x1400D7D00 (-MapApertureRange@VIDMM_APERTURE_SEGMENT@@AEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_K11PEBU_MDL@@_N.c)
 */

void __fastcall VIDMM_APERTURE_SEGMENT::MapTemporaryResource(
        const struct _MDL **this,
        struct VIDMM_PHYSICAL_ALLOC_LEGACY *a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        const struct _MDL *a5)
{
  _QWORD *v9; // rax
  _QWORD *v10; // r15
  unsigned __int64 v11; // rbx
  unsigned __int64 i; // rbx
  unsigned __int64 v13; // [rsp+20h] [rbp-38h]
  unsigned __int64 v14; // [rsp+20h] [rbp-38h]

  if ( g_IsInternalReleaseOrDbg )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
    v9[3] = a2;
    v9[4] = a3;
    v9[5] = a4;
    WdLogGlobalForLineNumber = 1583;
  }
  v10 = (_QWORD *)((char *)a2 + 208);
  VIDMM_APERTURE_SEGMENT::MapApertureRange(
    (VIDMM_APERTURE_SEGMENT *)this,
    a2,
    a4 >> 12,
    (a3 + *((_QWORD *)a2 + 26)) >> 12,
    v13,
    a5,
    1,
    (**(_DWORD **)(*(_QWORD *)a2 + 368LL) & 0x800004) == 4);
  v11 = 0LL;
  if ( a3 )
  {
    do
    {
      VIDMM_APERTURE_SEGMENT::MapApertureRange(
        (VIDMM_APERTURE_SEGMENT *)this,
        a2,
        1uLL,
        (v11 + *v10) >> 12,
        v14,
        this[38],
        1,
        0);
      v11 += 4096LL;
    }
    while ( v11 < a3 );
    v10 = (_QWORD *)((char *)a2 + 208);
  }
  for ( i = a4 + v11; i < *((_QWORD *)a2 + 2); i += 4096LL )
    VIDMM_APERTURE_SEGMENT::MapApertureRange(
      (VIDMM_APERTURE_SEGMENT *)this,
      a2,
      1uLL,
      (i + *v10) >> 12,
      v14,
      this[38],
      1,
      0);
}
