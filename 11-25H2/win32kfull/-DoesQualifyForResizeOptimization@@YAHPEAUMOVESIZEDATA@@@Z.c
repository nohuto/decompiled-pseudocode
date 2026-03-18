/*
 * XREFs of ?DoesQualifyForResizeOptimization@@YAHPEAUMOVESIZEDATA@@@Z @ 0x1402295F0
 * Callers:
 *     ?xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z @ 0x140218274 (-xxxDrawDragRectEx@@YAXPEAUMOVESIZEDATA@@PEAUtagRECT@@I1@Z.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x140037CA0 (_IsTopLevelWindow.c)
 */

__int64 __fastcall DoesQualifyForResizeOptimization(struct MOVESIZEDATA *a1)
{
  __int64 v1; // r9
  __int64 v2; // r10
  __int64 v3; // r11
  _QWORD *v4; // r8
  __int64 v5; // rdx

  if ( IsTopLevelWindow(*((_QWORD *)a1 + 2)) && (*(_DWORD *)(v2 + 200) & 0x4000000) == 0 )
  {
    v4 = *(_QWORD **)(v3 + 40);
    v5 = v4[11] - v4[13];
    if ( !v5 )
      v5 = v4[12] - v4[14];
    if ( v5 && v4[21] == v1 )
      LODWORD(v1) = 1;
  }
  return (unsigned int)v1;
}
