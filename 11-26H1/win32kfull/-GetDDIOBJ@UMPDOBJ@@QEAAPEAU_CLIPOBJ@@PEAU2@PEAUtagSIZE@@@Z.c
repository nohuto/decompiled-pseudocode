/*
 * XREFs of ?GetDDIOBJ@UMPDOBJ@@QEAAPEAU_CLIPOBJ@@PEAU2@PEAUtagSIZE@@@Z @ 0x1400F67B8
 * Callers:
 *     NtGdiEngBitBlt @ 0x1400F4B10 (NtGdiEngBitBlt.c)
 *     NtGdiEngFillPath @ 0x1400F5100 (NtGdiEngFillPath.c)
 *     NtGdiEngAlphaBlend @ 0x14032C760 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngCopyBits @ 0x14032CB40 (NtGdiEngCopyBits.c)
 *     NtGdiEngGradientFill @ 0x14032D080 (NtGdiEngGradientFill.c)
 *     NtGdiEngLineTo @ 0x14032D480 (NtGdiEngLineTo.c)
 *     NtGdiEngPaint @ 0x14032D7D0 (NtGdiEngPaint.c)
 *     NtGdiEngPlgBlt @ 0x14032D980 (NtGdiEngPlgBlt.c)
 *     NtGdiEngStretchBlt @ 0x14032DD50 (NtGdiEngStretchBlt.c)
 *     NtGdiEngStretchBltROP @ 0x14032E1F0 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngStrokeAndFillPath @ 0x14032E7E0 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x14032EBB0 (NtGdiEngStrokePath.c)
 *     NtGdiEngTextOut @ 0x14032EF00 (NtGdiEngTextOut.c)
 *     NtGdiEngTransparentBlt @ 0x14032F2F0 (NtGdiEngTransparentBlt.c)
 *     NtGdiPATHOBJ_vEnumStartClipLines @ 0x14032FBB0 (NtGdiPATHOBJ_vEnumStartClipLines.c)
 * Callees:
 *     ?CaptureAndMungeCLIPOBJ@@YAPEAU_CLIPOBJ@@PEAU1@0PEAUtagSIZE@@@Z @ 0x14023A344 (-CaptureAndMungeCLIPOBJ@@YAPEAU_CLIPOBJ@@PEAU1@0PEAUtagSIZE@@@Z.c)
 */

struct _CLIPOBJ *__fastcall UMPDOBJ::GetDDIOBJ(UMPDOBJ *this, struct _CLIPOBJ *a2, struct tagSIZE *a3)
{
  unsigned __int64 v4; // rbx

  if ( a2 == *((struct _CLIPOBJ **)this + 15) )
  {
    v4 = *((_QWORD *)this + 14);
  }
  else if ( a2 == *((struct _CLIPOBJ **)this + 17) )
  {
    v4 = (unsigned __int64)CaptureAndMungeCLIPOBJ(a2, *((struct _CLIPOBJ **)this + 16), a3);
  }
  else
  {
    v4 = 0LL;
  }
  if ( (*((_DWORD *)this + 107) & 0x100) != 0 && v4 )
    v4 &= -(__int64)GrepIsEngineVa((void *)v4);
  return (struct _CLIPOBJ *)v4;
}
