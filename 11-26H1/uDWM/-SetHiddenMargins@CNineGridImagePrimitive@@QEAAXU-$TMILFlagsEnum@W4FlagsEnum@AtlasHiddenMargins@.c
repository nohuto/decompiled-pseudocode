/*
 * XREFs of ?SetHiddenMargins@CNineGridImagePrimitive@@QEAAXU?$TMILFlagsEnum@W4FlagsEnum@AtlasHiddenMargins@@@@@Z @ 0x18008DD88
 * Callers:
 *     ?UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ @ 0x18007DF14 (-UpdateWindowVisuals@CTopLevelWindow@@AEAAJXZ.c)
 *     ?_UpdateBorderShadowParts@CAccent@@IEAAJXZ @ 0x180094B30 (-_UpdateBorderShadowParts@CAccent@@IEAAJXZ.c)
 *     ?InitializeClonedPrimitive@CNineGridImagePrimitive@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x1800BD6D0 (-InitializeClonedPrimitive@CNineGridImagePrimitive@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 * Callees:
 *     ?MarkGroupForRebuild@CPrimitive@@IEAAXXZ @ 0x180072D0C (-MarkGroupForRebuild@CPrimitive@@IEAAXXZ.c)
 */

void __fastcall CNineGridImagePrimitive::SetHiddenMargins(CPrimitive *a1, int a2)
{
  if ( *((_DWORD *)a1 + 16) != a2 )
  {
    *((_DWORD *)a1 + 16) = a2;
    CPrimitive::MarkGroupForRebuild(a1);
  }
}
