/*
 * XREFs of ?bBeginFigure@WIDEPATHOBJ@pathwide@@QEAAHXZ @ 0x140109AD8
 * Callers:
 *     ?bWiden@WIDENER@pathwide@@IEAAHXZ @ 0x140108D94 (-bWiden@WIDENER@pathwide@@IEAAHXZ.c)
 *     ?bPolygonizePen@WIDEPENOBJ@pathwide@@QEAAHAEBVEXFORMOBJ@@J@Z @ 0x14010A140 (-bPolygonizePen@WIDEPENOBJ@pathwide@@QEAAHAEBVEXFORMOBJ@@J@Z.c)
 *     ?bThicken@WIDEPENOBJ@pathwide@@AEAAHPEAU_POINTFIX@@@Z @ 0x14010B334 (-bThicken@WIDEPENOBJ@pathwide@@AEAAHPEAU_POINTFIX@@@Z.c)
 * Callees:
 *     ?bGrowPath@WIDEPATHOBJ@pathwide@@IEAAHXZ @ 0x140109B28 (-bGrowPath@WIDEPATHOBJ@pathwide@@IEAAHXZ.c)
 */

__int64 __fastcall pathwide::WIDEPATHOBJ::bBeginFigure(pathwide::WIDEPATHOBJ *this)
{
  __int64 result; // rax

  if ( !*((_QWORD *)this + 1) || *((_DWORD *)this + 30) )
    return 0LL;
  if ( !(unsigned int)pathwide::WIDEPATHOBJ::bGrowPath(this) )
  {
    *((_DWORD *)this + 30) = 1;
    return 0LL;
  }
  result = 1LL;
  *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 40LL) + 16LL) = 1;
  return result;
}
