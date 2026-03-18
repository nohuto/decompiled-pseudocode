/*
 * XREFs of ?CapturePOINTL@@YAXPEAPEAU_POINTL@@PEAU1@@Z @ 0x1401F2D0C
 * Callers:
 *     NtGdiEngStretchBlt @ 0x140263F90 (NtGdiEngStretchBlt.c)
 *     NtGdiEngStretchBltROP @ 0x1402644B0 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngStrokePath @ 0x140264B40 (NtGdiEngStrokePath.c)
 *     NtGdiEngTextOut @ 0x140264F30 (NtGdiEngTextOut.c)
 *     NtGdiEngCopyBits @ 0x14033B220 (NtGdiEngCopyBits.c)
 *     NtGdiEngGradientFill @ 0x14033B610 (NtGdiEngGradientFill.c)
 *     NtGdiEngPaint @ 0x14033BD70 (NtGdiEngPaint.c)
 *     NtGdiEngPlgBlt @ 0x14033BF20 (NtGdiEngPlgBlt.c)
 *     NtGdiEngStrokeAndFillPath @ 0x14033C2E0 (NtGdiEngStrokeAndFillPath.c)
 * Callees:
 *     RtlCopyVolatileMemory @ 0x1403423E0 (RtlCopyVolatileMemory.c)
 */

void __fastcall CapturePOINTL(struct _POINTL **a1, struct _POINTL *a2)
{
  const void *v4; // rdx

  v4 = *a1;
  if ( *a1 )
  {
    if ( (unsigned __int64)v4 >= MmUserProbeAddress )
      v4 = (const void *)MmUserProbeAddress;
    RtlCopyVolatileMemory(a2, v4, 8uLL);
    *a1 = a2;
  }
}
