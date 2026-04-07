/*
 * XREFs of ?GetBorderStyle@CTopLevelWindow@@AEAA?AW4BorderStyle@CWindowBorder@@XZ @ 0x1800791BC
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18000D460 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTopLevelWindow::GetBorderStyle(__int64 a1)
{
  return (*(unsigned __int8 *)(*(_QWORD *)(a1 + 712) + 673LL) >> 2) & 1;
}
