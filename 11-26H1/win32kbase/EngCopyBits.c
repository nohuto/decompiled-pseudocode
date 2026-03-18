/*
 * XREFs of EngCopyBits @ 0x14015E230
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

BOOL __stdcall EngCopyBits(
        SURFOBJ *psoDest,
        SURFOBJ *psoSrc,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        RECTL *prclDest,
        POINTL *pptlSrc)
{
  __int64 (__fastcall *v10)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax

  v10 = *(__int64 (__fastcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(psoDest) + 24)
                                                                                                 + 632LL);
  if ( v10 )
    LODWORD(v10) = v10(psoDest, psoSrc, pco, pxlo, prclDest, pptlSrc);
  return (int)v10;
}
