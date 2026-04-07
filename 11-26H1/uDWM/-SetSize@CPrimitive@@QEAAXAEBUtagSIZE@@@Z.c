/*
 * XREFs of ?SetSize@CPrimitive@@QEAAXAEBUtagSIZE@@@Z @ 0x180072CDC
 * Callers:
 *     ?UpdatePinnedParts@CTopLevelWindow@@AEAAJXZ @ 0x1800106AC (-UpdatePinnedParts@CTopLevelWindow@@AEAAJXZ.c)
 *     ?Rebuild@CPrimitiveGroupVisual@@IEAAJXZ @ 0x18005A67C (-Rebuild@CPrimitiveGroupVisual@@IEAAJXZ.c)
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18007DF14 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ @ 0x1800946E0 (-_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ.c)
 *     ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x180094B30 (-_UpdateBorderShadowParts@CAccent@@IEAAJXZ.c)
 *     ?InitializeClonedPrimitive@CPrimitive@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x1800BD74C (-InitializeClonedPrimitive@CPrimitive@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?SetBounds@CPrimitive@@QEAAXAEBUD2D_POINTANDSIZE_L@@@Z @ 0x1800BD834 (-SetBounds@CPrimitive@@QEAAXAEBUD2D_POINTANDSIZE_L@@@Z.c)
 * Callees:
 *     ?MarkGroupForRebuild@CPrimitive@@IEAAXXZ @ 0x180072D0C (-MarkGroupForRebuild@CPrimitive@@IEAAXXZ.c)
 */

void __fastcall CPrimitive::SetSize(struct tagSIZE *this, const struct tagSIZE *a2)
{
  if ( this[4].cx != a2->cx || this[4].cy != a2->cy )
  {
    this[4] = *a2;
    CPrimitive::MarkGroupForRebuild((CPrimitive *)this);
  }
}
