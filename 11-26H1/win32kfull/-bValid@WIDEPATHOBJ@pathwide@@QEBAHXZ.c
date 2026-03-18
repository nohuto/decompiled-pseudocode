/*
 * XREFs of ?bValid@WIDEPATHOBJ@pathwide@@QEBAHXZ @ 0x14010B9CC
 * Callers:
 *     ?vGrowPathAndAddPoint@WIDEPATHOBJ@pathwide@@IEAAXPEBU_POINTFIX@@PEAVEVECTORFX@@H@Z @ 0x140107558 (-vGrowPathAndAddPoint@WIDEPATHOBJ@pathwide@@IEAAXPEBU_POINTFIX@@PEAVEVECTORFX@@H@Z.c)
 *     ?bPolygonizePen@WIDEPENOBJ@pathwide@@QEAAHAEBVEXFORMOBJ@@J@Z @ 0x14010A140 (-bPolygonizePen@WIDEPENOBJ@pathwide@@QEAAHAEBVEXFORMOBJ@@J@Z.c)
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
