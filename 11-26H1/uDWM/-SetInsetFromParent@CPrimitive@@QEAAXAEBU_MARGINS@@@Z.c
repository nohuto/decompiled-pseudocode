/*
 * XREFs of ?SetInsetFromParent@CPrimitive@@QEAAXAEBU_MARGINS@@@Z @ 0x18008D658
 * Callers:
 *     ?UpdatePinnedParts@CTopLevelWindow@@AEAAJXZ @ 0x1800106AC (-UpdatePinnedParts@CTopLevelWindow@@AEAAJXZ.c)
 *     ?_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ @ 0x1800946E0 (-_UpdateBorderShadowForAccent@CAccent@@IEAAJXZ.c)
 *     ?InitializeClonedPrimitive@CPrimitive@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x1800BD74C (-InitializeClonedPrimitive@CPrimitive@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 * Callees:
 *     ??9@YA_NAEBU_MARGINS@@0@Z @ 0x180059334 (--9@YA_NAEBU_MARGINS@@0@Z.c)
 *     ?MarkGroupForRebuild@CPrimitive@@IEAAXXZ @ 0x180072D0C (-MarkGroupForRebuild@CPrimitive@@IEAAXXZ.c)
 */

void __fastcall CPrimitive::SetInsetFromParent(CPrimitive *this, struct _MARGINS *a2)
{
  _OWORD *v2; // rdx
  _OWORD *v3; // rcx
  CPrimitive *v4; // r8

  if ( operator!=((_DWORD *)this + 10, a2) )
  {
    *v3 = *v2;
    CPrimitive::MarkGroupForRebuild(v4);
  }
}
