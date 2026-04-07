/*
 * XREFs of ?GetBorderStyle@CTopLevelWindow@@AEAA?AW4BorderStyle@CWindowBorder@@XZ @ 0x180069680
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18007DF14 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CTopLevelWindow::GetBorderStyle(__int64 a1)
{
  return (*(unsigned __int8 *)(*(_QWORD *)(a1 + 696) + 737LL) >> 2) & 1;
}
