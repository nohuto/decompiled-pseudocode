/*
 * XREFs of ?SetColor@CColorPrimitive@@QEAAXAEBU_D3DCOLORVALUE@@@Z @ 0x1800BD87C
 * Callers:
 *     ?InitializeClonedPrimitive@CColorPrimitive@@IEAAJPEAV1@W4CloneOptions@@@Z @ 0x1800BD66C (-InitializeClonedPrimitive@CColorPrimitive@@IEAAJPEAV1@W4CloneOptions@@@Z.c)
 *     ?UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ @ 0x1800C9F88 (-UpdateDestinationRect@CThumbnailVisual@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CColorPrimitive::SetColor(CColorPrimitive *this, const struct _D3DCOLORVALUE *a2)
{
  *(struct _D3DCOLORVALUE *)((char *)this + 56) = *(const struct _D3DCOLORVALUE *)&a2->r;
  CPrimitive::MarkGroupForRebuild(this);
}
