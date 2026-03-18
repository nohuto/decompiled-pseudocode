/*
 * XREFs of ??1ECLIPOBJTMPBOUNDED@@QEAA@XZ @ 0x14033AA00
 * Callers:
 *     NtGdiEngStretchBlt @ 0x140263F90 (NtGdiEngStretchBlt.c)
 *     NtGdiEngStretchBltROP @ 0x1402644B0 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngStrokePath @ 0x140264B40 (NtGdiEngStrokePath.c)
 *     NtGdiEngTextOut @ 0x140264F30 (NtGdiEngTextOut.c)
 *     NtGdiEngGradientFill @ 0x14033B610 (NtGdiEngGradientFill.c)
 *     NtGdiEngLineTo @ 0x14033BA90 (NtGdiEngLineTo.c)
 *     NtGdiEngStrokeAndFillPath @ 0x14033C2E0 (NtGdiEngStrokeAndFillPath.c)
 * Callees:
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x14006D204 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 */

void __fastcall ECLIPOBJTMPBOUNDED::~ECLIPOBJTMPBOUNDED(ECLIPOBJTMPBOUNDED *this)
{
  RGNMEMOBJTMP::~RGNMEMOBJTMP((ECLIPOBJTMPBOUNDED *)((char *)this + 152));
}
