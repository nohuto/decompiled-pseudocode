/*
 * XREFs of ?vVecDrawCompute@WIDENER@pathwide@@AEAAXAEAVLINEDATA@2@@Z @ 0x1400A6C70
 * Callers:
 *     ?vAddRoundJoin@WIDENER@pathwide@@IEAAXH@Z @ 0x1400A4884 (-vAddRoundJoin@WIDENER@pathwide@@IEAAXH@Z.c)
 *     ?vVecPerpCompute@WIDENER@pathwide@@AEAAXAEAVLINEDATA@2@@Z @ 0x1400A5728 (-vVecPerpCompute@WIDENER@pathwide@@AEAAXAEAVLINEDATA@2@@Z.c)
 *     ?vAddEndCap@WIDENER@pathwide@@IEAAXXZ @ 0x1400A590C (-vAddEndCap@WIDENER@pathwide@@IEAAXXZ.c)
 *     ?vAddStartCap@WIDENER@pathwide@@IEAAXXZ @ 0x1400A6614 (-vAddStartCap@WIDENER@pathwide@@IEAAXXZ.c)
 * Callees:
 *     ?vDetermineDrawVertex@WIDEPENOBJ@pathwide@@QEAAXAEAVEVECTORFX@@AEAVLINEDATA@2@@Z @ 0x1400A6CE0 (-vDetermineDrawVertex@WIDEPENOBJ@pathwide@@QEAAXAEAVEVECTORFX@@AEAVLINEDATA@2@@Z.c)
 */

void __fastcall pathwide::WIDENER::vVecDrawCompute(pathwide::WIDENER *this, struct pathwide::LINEDATA *a2)
{
  int *v3; // rdx
  int v4; // ecx
  int v5; // eax

  pathwide::WIDEPENOBJ::vDetermineDrawVertex(
    (pathwide::WIDENER *)((char *)this + 816),
    (struct pathwide::LINEDATA *)((char *)a2 + 48),
    a2);
  v3 = (int *)*((_QWORD *)a2 + 2);
  v4 = *v3;
  if ( (*(_DWORD *)a2 & 1) != 0 )
  {
    v4 = -v4;
    *((_DWORD *)a2 + 18) = v4;
    v5 = -v3[1];
  }
  else
  {
    *((_DWORD *)a2 + 18) = v4;
    v5 = v3[1];
  }
  *((_DWORD *)a2 + 19) = v5;
  *(_DWORD *)a2 |= 8u;
  *((_DWORD *)a2 + 18) = ((v4 >> 31) + 4 + v4) & 0xFFFFFFF8;
  *((_DWORD *)a2 + 19) = ((*((int *)a2 + 19) >> 31) + *((_DWORD *)a2 + 19) + 4) & 0xFFFFFFF8;
}
