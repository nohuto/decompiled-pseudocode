/*
 * XREFs of ?vEndFigure@WIDEPATHOBJ@pathwide@@QEAAXXZ @ 0x140109C18
 * Callers:
 *     ?bWiden@WIDENER@pathwide@@IEAAHXZ @ 0x140108D94 (-bWiden@WIDENER@pathwide@@IEAAHXZ.c)
 *     ?bPolygonizePen@WIDEPENOBJ@pathwide@@QEAAHAEBVEXFORMOBJ@@J@Z @ 0x14010A140 (-bPolygonizePen@WIDEPENOBJ@pathwide@@QEAAHAEBVEXFORMOBJ@@J@Z.c)
 *     ?bThicken@WIDEPENOBJ@pathwide@@AEAAHPEAU_POINTFIX@@@Z @ 0x14010B334 (-bThicken@WIDEPENOBJ@pathwide@@AEAAHPEAU_POINTFIX@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall pathwide::WIDEPATHOBJ::vEndFigure(pathwide::WIDEPATHOBJ *this)
{
  __int64 v1; // rdx
  __int64 v2; // r8

  v1 = *(_QWORD *)(*((_QWORD *)this + 1) + 40LL);
  v2 = (*((_QWORD *)this + 16) - v1 - 24) >> 3;
  *(_DWORD *)(v1 + 16) |= 2u;
  *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 40LL) + 20LL) = v2;
  *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 8LL) = *(_QWORD *)(*((_QWORD *)this + 1) + 40LL)
                                                               + 8
                                                               * (*(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 1)
                                                                                              + 40LL)
                                                                                  + 20LL)
                                                                + 3LL);
}
