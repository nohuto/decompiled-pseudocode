/*
 * XREFs of ?bValid@WIDEPATHOBJ@pathwide@@QEBAHXZ @ 0x1400A4E98
 * Callers:
 *     ?bWiden@pathwide@@YA_NAEAVEPATHOBJ@@0AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z @ 0x1400A4EB4 (-bWiden@pathwide@@YA_NAEAVEPATHOBJ@@0AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z.c)
 *     ?bPolygonizePen@WIDEPENOBJ@pathwide@@QEAAHAEBVEXFORMOBJ@@J@Z @ 0x1400A5464 (-bPolygonizePen@WIDEPENOBJ@pathwide@@QEAAHAEBVEXFORMOBJ@@J@Z.c)
 *     GreFrameRgn @ 0x1400E295C (GreFrameRgn.c)
 *     NtGdiWidenPath @ 0x1400E53B0 (NtGdiWidenPath.c)
 *     ?vGrowPathAndAddPoint@WIDEPATHOBJ@pathwide@@IEAAXPEBU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x140177B24 (-vGrowPathAndAddPoint@WIDEPATHOBJ@pathwide@@IEAAXPEBU_POINTFIX@@PEAVEVECTORFX@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall pathwide::WIDEPATHOBJ::bValid(pathwide::WIDEPATHOBJ *this)
{
  __int64 result; // rax

  result = 0LL;
  if ( *((_QWORD *)this + 1) )
  {
    if ( !*((_DWORD *)this + 30) )
      return 1LL;
  }
  return result;
}
