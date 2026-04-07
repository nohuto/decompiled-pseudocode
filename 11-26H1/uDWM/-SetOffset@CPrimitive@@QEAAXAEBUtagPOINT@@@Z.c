/*
 * XREFs of ?SetOffset@CPrimitive@@QEAAXAEBUtagPOINT@@@Z @ 0x1800BD890
 * Callers:
 *     ?Rebuild@CPrimitiveGroupVisual@@IEAAJXZ @ 0x18005A67C (-Rebuild@CPrimitiveGroupVisual@@IEAAJXZ.c)
 *     ?InitializeClonedPrimitive@CPrimitive@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x1800BD74C (-InitializeClonedPrimitive@CPrimitive@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?SetBounds@CPrimitive@@QEAAXAEBUD2D_POINTANDSIZE_L@@@Z @ 0x1800BD834 (-SetBounds@CPrimitive@@QEAAXAEBUD2D_POINTANDSIZE_L@@@Z.c)
 * Callees:
 *     ?MarkGroupForRebuild@CPrimitive@@IEAAXXZ @ 0x180072D0C (-MarkGroupForRebuild@CPrimitive@@IEAAXXZ.c)
 */

void __fastcall CPrimitive::SetOffset(struct tagPOINT *this, const struct tagPOINT *a2)
{
  if ( a2->x != this[3].x || a2->y != this[3].y )
  {
    this[3] = *a2;
    CPrimitive::MarkGroupForRebuild((CPrimitive *)this);
  }
}
