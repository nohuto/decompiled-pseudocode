/*
 * XREFs of ?CaptureRECTL@@YAXPEAPEAU_RECTL@@PEAU1@@Z @ 0x140204FCC
 * Callers:
 *     NtGdiEngStretchBlt @ 0x140263F90 (NtGdiEngStretchBlt.c)
 *     NtGdiEngStretchBltROP @ 0x1402644B0 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngTextOut @ 0x140264F30 (NtGdiEngTextOut.c)
 *     NtGdiEngAlphaBlend @ 0x14033AF40 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngCopyBits @ 0x14033B220 (NtGdiEngCopyBits.c)
 *     NtGdiEngGradientFill @ 0x14033B610 (NtGdiEngGradientFill.c)
 *     NtGdiEngLineTo @ 0x14033BA90 (NtGdiEngLineTo.c)
 *     NtGdiEngPlgBlt @ 0x14033BF20 (NtGdiEngPlgBlt.c)
 *     NtGdiEngTransparentBlt @ 0x14033C780 (NtGdiEngTransparentBlt.c)
 * Callees:
 *     RtlCopyVolatileMemory @ 0x1403423E0 (RtlCopyVolatileMemory.c)
 */

void __fastcall CaptureRECTL(struct _RECTL **a1, struct _RECTL *a2)
{
  const void *v4; // rdx

  v4 = *a1;
  if ( *a1 )
  {
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (const void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(a2, v4, 0x10uLL);
    *a1 = a2;
  }
}
