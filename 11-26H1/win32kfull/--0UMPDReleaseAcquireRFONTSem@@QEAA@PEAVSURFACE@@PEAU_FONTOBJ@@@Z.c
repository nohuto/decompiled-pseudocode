/*
 * XREFs of ??0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@@Z @ 0x1400DBDFC
 * Callers:
 *     ??1FRINGERECT@@QEAA@XZ @ 0x1400DB344 (--1FRINGERECT@@QEAA@XZ.c)
 *     ?vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPEAU_BRUSHOBJ@@PEAU_POINTL@@@Z @ 0x1400DB4AC (-vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPE.c)
 *     ?EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x14026BA50 (-EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PE.c)
 * Callees:
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1400D52F0 (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 */

UMPDReleaseAcquireRFONTSem *__fastcall UMPDReleaseAcquireRFONTSem::UMPDReleaseAcquireRFONTSem(
        UMPDReleaseAcquireRFONTSem *this,
        struct SURFACE *a2,
        struct _FONTOBJ *a3)
{
  char *v3; // rax
  unsigned int *v4; // r9
  void **v6; // r11
  struct RFONTOBJ *v7; // rcx
  __int64 v8; // rax

  *(_QWORD *)this = 0LL;
  v3 = (char *)this + 12;
  v4 = (unsigned int *)((char *)this + 8);
  v6 = (void **)((char *)this + 56);
  *((_DWORD *)this + 2) = 0;
  v7 = (UMPDReleaseAcquireRFONTSem *)((char *)this + 64);
  *v6 = v3;
  *(_QWORD *)v7 = a3;
  v8 = *((_QWORD *)a2 + 6);
  if ( v8 && (*(_DWORD *)(v8 + 40) & 0x8000) != 0 )
    *(_DWORD *)this = UMPDReleaseRFONTSem(v7, 0LL, (unsigned int *)this + 1, v4, v6);
  return this;
}
