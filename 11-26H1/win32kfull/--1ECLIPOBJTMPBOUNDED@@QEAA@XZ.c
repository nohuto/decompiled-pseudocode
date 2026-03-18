/*
 * XREFs of ??1ECLIPOBJTMPBOUNDED@@QEAA@XZ @ 0x14032C0F4
 * Callers:
 *     NtGdiEngGradientFill @ 0x14032D080 (NtGdiEngGradientFill.c)
 *     NtGdiEngLineTo @ 0x14032D480 (NtGdiEngLineTo.c)
 *     NtGdiEngStretchBlt @ 0x14032DD50 (NtGdiEngStretchBlt.c)
 *     NtGdiEngStretchBltROP @ 0x14032E1F0 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngStrokeAndFillPath @ 0x14032E7E0 (NtGdiEngStrokeAndFillPath.c)
 *     NtGdiEngStrokePath @ 0x14032EBB0 (NtGdiEngStrokePath.c)
 *     NtGdiEngTextOut @ 0x14032EF00 (NtGdiEngTextOut.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x1400E65B0 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 */

void __fastcall ECLIPOBJTMPBOUNDED::~ECLIPOBJTMPBOUNDED(ECLIPOBJTMPBOUNDED *this)
{
  RGNMEMOBJTMP::~RGNMEMOBJTMP((ECLIPOBJTMPBOUNDED *)((char *)this + 152));
}
