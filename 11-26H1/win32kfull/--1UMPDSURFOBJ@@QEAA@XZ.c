/*
 * XREFs of ??1UMPDSURFOBJ@@QEAA@XZ @ 0x1400F666C
 * Callers:
 *     NtGdiEngEraseSurface @ 0x1400F48A0 (NtGdiEngEraseSurface.c)
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
 *     ?vUnguard@CAutoTGO@@QEAAXXZ @ 0x140114F5C (-vUnguard@CAutoTGO@@QEAAXXZ.c)
 *     ?Cleanup@UMPDSURFOBJ@@SAXPEAX@Z @ 0x140295CA0 (-Cleanup@UMPDSURFOBJ@@SAXPEAX@Z.c)
 */

void __fastcall UMPDSURFOBJ::~UMPDSURFOBJ(UMPDSURFOBJ *this)
{
  CAutoTGO::vUnguard((UMPDSURFOBJ *)((char *)this + 24));
  UMPDSURFOBJ::Cleanup(this);
  CAutoTGO::vUnguard((UMPDSURFOBJ *)((char *)this + 24));
}
