/*
 * XREFs of ?bTurnLeftRandom@pathwide@@YAHPEAVEVECTORFX@@0@Z @ 0x1401086AC
 * Callers:
 *     ?vAddJoin@WIDENER@pathwide@@IEAAXH@Z @ 0x140108988 (-vAddJoin@WIDENER@pathwide@@IEAAXH@Z.c)
 *     ?bPolygonizePen@WIDEPENOBJ@pathwide@@QEAAHAEBVEXFORMOBJ@@J@Z @ 0x14010A140 (-bPolygonizePen@WIDEPENOBJ@pathwide@@QEAAHAEBVEXFORMOBJ@@J@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall pathwide::bTurnLeftRandom(pathwide *this, struct EVECTORFX *a2, struct EVECTORFX *a3)
{
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 v5; // r10

  v3 = *((int *)a2 + 1);
  v4 = *(int *)this;
  v5 = *(int *)a2;
  if ( (int)(v5 ^ v4 ^ v3 ^ *((_DWORD *)this + 1)) < 0 )
    return ((unsigned int)v4 ^ (unsigned int)v3) >> 31;
  else
    return v4 * v3 < v5 * *((int *)this + 1);
}
