/*
 * XREFs of ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1400D6674
 * Callers:
 *     NtGdiEngBitBlt @ 0x1400D5EE0 (NtGdiEngBitBlt.c)
 *     NtGdiEngFillPath @ 0x14020DCC0 (NtGdiEngFillPath.c)
 *     NtGdiEngStretchBlt @ 0x140263F90 (NtGdiEngStretchBlt.c)
 *     NtGdiEngStretchBltROP @ 0x1402644B0 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngStrokePath @ 0x140264B40 (NtGdiEngStrokePath.c)
 *     NtGdiEngTextOut @ 0x140264F30 (NtGdiEngTextOut.c)
 *     NtGdiEngAlphaBlend @ 0x14033AF40 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngCopyBits @ 0x14033B220 (NtGdiEngCopyBits.c)
 *     NtGdiEngGradientFill @ 0x14033B610 (NtGdiEngGradientFill.c)
 *     NtGdiEngLineTo @ 0x14033BA90 (NtGdiEngLineTo.c)
 *     NtGdiEngPaint @ 0x14033BD70 (NtGdiEngPaint.c)
 *     NtGdiEngPlgBlt @ 0x14033BF20 (NtGdiEngPlgBlt.c)
 *     NtGdiEngStrokeAndFillPath @ 0x14033C2E0 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngTransparentBlt @ 0x14033C780 (NtGdiEngTransparentBlt.c)
 *     NtGdiPATHOBJ_vEnumStartClipLines @ 0x14033D130 (NtGdiPATHOBJ_vEnumStartClipLines.c)
 * Callees:
 *     ?CaptureAndMungeCLIPOBJ@@YAPEAU_CLIPOBJ@@PEAU1@0PEAUtagSIZE@@@Z @ 0x140204BF4 (-CaptureAndMungeCLIPOBJ@@YAPEAU_CLIPOBJ@@PEAU1@0PEAUtagSIZE@@@Z.c)
 */

struct _CLIPOBJ *__fastcall UMPDOBJ::GetDDIOBJ(UMPDOBJ *this, struct _CLIPOBJ *a2, struct tagSIZE *a3)
{
  struct _CLIPOBJ *v4; // rdx

  if ( a2 == *((struct _CLIPOBJ **)this + 17) )
  {
    v4 = (struct _CLIPOBJ *)*((_QWORD *)this + 16);
  }
  else if ( a2 == *((struct _CLIPOBJ **)this + 19) )
  {
    v4 = CaptureAndMungeCLIPOBJ(a2, *((struct _CLIPOBJ **)this + 18), a3);
  }
  else
  {
    v4 = 0LL;
  }
  if ( (*((_DWORD *)this + 111) & 0x100) != 0 && v4 && v4 < MmSystemRangeStart )
    return 0LL;
  return v4;
}
