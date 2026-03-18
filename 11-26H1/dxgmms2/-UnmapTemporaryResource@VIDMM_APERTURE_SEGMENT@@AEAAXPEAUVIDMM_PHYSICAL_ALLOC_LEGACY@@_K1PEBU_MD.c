/*
 * XREFs of ?UnmapTemporaryResource@VIDMM_APERTURE_SEGMENT@@AEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_K1PEBU_MDL@@@Z @ 0x1400BDFD8
 * Callers:
 *     ?EndTemporaryResourceAccess@VIDMM_APERTURE_SEGMENT@@UEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEAUVIDMM_TEMPORARY_RESOURCE_LEGACY@@@Z @ 0x1400BD1C0 (-EndTemporaryResourceAccess@VIDMM_APERTURE_SEGMENT@@UEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@PEAUVI.c)
 * Callees:
 *     ?UnmapApertureRange@VIDMM_APERTURE_SEGMENT@@AEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_K11PEBU_MDL@@_N@Z @ 0x1400D969C (-UnmapApertureRange@VIDMM_APERTURE_SEGMENT@@AEAAXPEAUVIDMM_PHYSICAL_ALLOC_LEGACY@@_K11PEBU_MDL@@.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z @ 0x1400E71D0 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_GLOBAL_ALLOC@@@Z.c)
 */

void __fastcall VIDMM_APERTURE_SEGMENT::UnmapTemporaryResource(
        VIDMM_GLOBAL **this,
        struct VIDMM_PHYSICAL_ALLOC_LEGACY *a2,
        unsigned __int64 a3,
        unsigned __int64 a4)
{
  unsigned __int64 v4; // rbx
  _QWORD *v9; // rax
  _QWORD *v10; // r15
  unsigned __int64 i; // rbx
  unsigned __int64 v12; // [rsp+20h] [rbp-38h]
  unsigned __int64 v13; // [rsp+20h] [rbp-38h]
  const struct _MDL *v14; // [rsp+28h] [rbp-30h]
  const struct _MDL *v15; // [rsp+28h] [rbp-30h]

  v4 = 0LL;
  if ( g_IsInternalReleaseOrDbg )
  {
    v9 = (_QWORD *)WdLogNewEntry5_WdTrace(this);
    v9[3] = a2;
    v9[4] = a3;
    v9[5] = a4;
    WdLogGlobalForLineNumber = 1686;
  }
  v10 = (_QWORD *)((char *)a2 + 208);
  VIDMM_APERTURE_SEGMENT::UnmapApertureRange(
    (VIDMM_APERTURE_SEGMENT *)this,
    a2,
    a4 >> 12,
    (a3 + *((_QWORD *)a2 + 26)) >> 12,
    v12,
    v14,
    1);
  if ( a3 )
  {
    do
    {
      VIDMM_GLOBAL::WaitForAllPagingEngines(this[1], *(struct VIDMM_GLOBAL_ALLOC **)a2);
      VIDMM_APERTURE_SEGMENT::UnmapApertureRange(
        (VIDMM_APERTURE_SEGMENT *)this,
        a2,
        1uLL,
        (v4 + *v10) >> 12,
        v13,
        v15,
        1);
      v4 += 4096LL;
    }
    while ( v4 < a3 );
    v10 = (_QWORD *)((char *)a2 + 208);
  }
  for ( i = a4 + v4; i < *((_QWORD *)a2 + 2); i += 4096LL )
  {
    VIDMM_GLOBAL::WaitForAllPagingEngines(this[1], *(struct VIDMM_GLOBAL_ALLOC **)a2);
    VIDMM_APERTURE_SEGMENT::UnmapApertureRange((VIDMM_APERTURE_SEGMENT *)this, a2, 1uLL, (i + *v10) >> 12, v13, v15, 1);
  }
}
