/*
 * XREFs of ??0UMPDReleaseAcquireRFONTSem@@QEAA@PEAVSURFACE@@PEAU_FONTOBJ@@H@Z @ 0x1400F9B88
 * Callers:
 *     EngTextOut @ 0x140012BD0 (EngTextOut.c)
 *     ?vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPEAU_BRUSHOBJ@@PEAU_POINTL@@@Z @ 0x1400F92A8 (-vExpandAndCopyText@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@PEAU_GLYPHPOS@@KPEAEKK00PEAU_RECTL@@4HHK44KPE.c)
 *     ??1FRINGERECT@@QEAA@XZ @ 0x140185190 (--1FRINGERECT@@QEAA@XZ.c)
 *     ?EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x14022EAF4 (-EngTextOutBitBlt@@YAXPEAVSURFACE@@PEAU_FONTOBJ@@KPEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PE.c)
 * Callees:
 *     ?UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z @ 0x1400DA83C (-UMPDReleaseRFONTSem@@YAHAEAVRFONTOBJ@@PEAVUMPDOBJ@@PEAK2PEAPEAH@Z.c)
 */

UMPDReleaseAcquireRFONTSem *__fastcall UMPDReleaseAcquireRFONTSem::UMPDReleaseAcquireRFONTSem(
        UMPDReleaseAcquireRFONTSem *this,
        struct SURFACE *a2,
        struct _FONTOBJ *a3,
        int a4)
{
  char *v4; // rax
  void **v5; // rdi
  struct RFONTOBJ *v7; // rcx
  __int64 v8; // rax

  *(_DWORD *)this = 0;
  v4 = (char *)this + 12;
  *((_DWORD *)this + 1) = 0;
  v5 = (void **)((char *)this + 56);
  *((_DWORD *)this + 2) = 0;
  v7 = (UMPDReleaseAcquireRFONTSem *)((char *)this + 64);
  *v5 = v4;
  *(_QWORD *)v7 = a3;
  v8 = *((_QWORD *)a2 + 6);
  if ( v8 && (*(_DWORD *)(v8 + 40) & 0x8000) != 0 && a4 )
    *(_DWORD *)this = UMPDReleaseRFONTSem(v7, 0LL, (unsigned int *)this + 1, (unsigned int *)this + 2, v5);
  return this;
}
