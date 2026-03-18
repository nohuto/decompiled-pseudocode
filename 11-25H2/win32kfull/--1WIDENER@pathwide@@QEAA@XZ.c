/*
 * XREFs of ??1WIDENER@pathwide@@QEAA@XZ @ 0x1400A4F64
 * Callers:
 *     ?bWiden@pathwide@@YA_NAEAVEPATHOBJ@@0AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z @ 0x1400A4EB4 (-bWiden@pathwide@@YA_NAEAVEPATHOBJ@@0AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z.c)
 *     GreFrameRgn @ 0x1400E295C (GreFrameRgn.c)
 *     NtGdiWidenPath @ 0x1400E53B0 (NtGdiWidenPath.c)
 * Callees:
 *     <none>
 */

void __fastcall pathwide::WIDENER::~WIDENER(pathwide::WIDENER *this)
{
  PATHMEMOBJ::~PATHMEMOBJ((pathwide::WIDENER *)((char *)this + 1128));
  PATHMEMOBJ::~PATHMEMOBJ((pathwide::WIDENER *)((char *)this + 976));
  PATHMEMOBJ::~PATHMEMOBJ((pathwide::WIDENER *)((char *)this + 816));
}
