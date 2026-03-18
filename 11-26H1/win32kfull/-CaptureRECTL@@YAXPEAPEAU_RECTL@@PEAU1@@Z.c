/*
 * XREFs of ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x140236F5C
 * Callers:
 *     NtGdiEngAlphaBlend @ 0x14032C760 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngCopyBits @ 0x14032CB40 (NtGdiEngCopyBits.c)
 *     NtGdiEngGradientFill @ 0x14032D080 (NtGdiEngGradientFill.c)
 *     NtGdiEngLineTo @ 0x14032D480 (NtGdiEngLineTo.c)
 *     NtGdiEngPlgBlt @ 0x14032D980 (NtGdiEngPlgBlt.c)
 *     NtGdiEngStretchBlt @ 0x14032DD50 (NtGdiEngStretchBlt.c)
 *     NtGdiEngStretchBltROP @ 0x14032E1F0 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngTextOut @ 0x14032EF00 (NtGdiEngTextOut.c)
 *     NtGdiEngTransparentBlt @ 0x14032F2F0 (NtGdiEngTransparentBlt.c)
 * Callees:
 *     <none>
 */

void __fastcall CaptureRECTL(struct _RECTL **a1, struct _RECTL *a2)
{
  if ( *a1 )
  {
    GreProbeAndReadFromUntrustedVa(a2, 0x10uLL, *a1, 0x10uLL, 1uLL);
    *a1 = a2;
  }
}
