/*
 * XREFs of ?DropLocationToArrangementAction@WindowArrangementView@@AEAA?AW4ARRANGEMENT_ACTION@@W4DropLocation@WindowArrangementViewDragData@@@Z @ 0x180506814
 * Callers:
 *     ?ProcessDrop@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z @ 0x180508460 (-ProcessDrop@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@@Z.c)
 *     ?QueryArrangeView@WindowArrangementView@@AEAAJPEAUIApplicationView@@W4DropLocation@WindowArrangementViewDragData@@PEAPEAUIAppLayoutOperation@@@Z @ 0x1805086D8 (-QueryArrangeView@WindowArrangementView@@AEAAJPEAUIApplicationView@@W4DropLocation@WindowArrange.c)
 *     ?UpdateDropFeedback@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@0@Z @ 0x180509E30 (-UpdateDropFeedback@WindowArrangementView@@AEAAJW4DropLocation@WindowArrangementViewDragData@@0@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WindowArrangementView::DropLocationToArrangementAction(__int64 a1, int a2)
{
  int v2; // edx
  int v3; // edx
  int v4; // edx

  if ( !a2 )
    return 1LL;
  v2 = a2 - 1;
  if ( !v2 )
    return 2LL;
  v3 = v2 - 1;
  if ( !v3 )
    return 3LL;
  v4 = v3 - 1;
  if ( !v4 )
    return 4LL;
  if ( v4 == 3 )
    return 6LL;
  return 5LL;
}
