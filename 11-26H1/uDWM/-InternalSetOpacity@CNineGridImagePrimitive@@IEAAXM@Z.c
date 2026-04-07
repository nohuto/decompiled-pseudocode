/*
 * XREFs of ?InternalSetOpacity@CNineGridImagePrimitive@@IEAAXM@Z @ 0x1800BD7F0
 * Callers:
 *     ?InitializeClonedPrimitive@CNineGridImagePrimitive@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x1800BD6D0 (-InitializeClonedPrimitive@CNineGridImagePrimitive@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?SetOpacity@CNineGridImagePrimitive@@QEAAXM@Z @ 0x1800BD8BC (-SetOpacity@CNineGridImagePrimitive@@QEAAXM@Z.c)
 * Callees:
 *     ?MarkGroupForRebuild@CPrimitive@@IEAAXXZ @ 0x180072D0C (-MarkGroupForRebuild@CPrimitive@@IEAAXXZ.c)
 */

void __fastcall CNineGridImagePrimitive::InternalSetOpacity(CNineGridImagePrimitive *this, float a2)
{
  if ( a2 != *((float *)this + 17) )
  {
    *((float *)this + 17) = a2;
    CPrimitive::MarkGroupForRebuild(this);
  }
}
