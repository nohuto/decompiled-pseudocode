/*
 * XREFs of ?OnRootVisualChanged@CThumbnailVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800C9F50
 * Callers:
 *     <none>
 * Callees:
 *     ??$ConvertDirtyEnumToFlag@$MW4ATVDirtyFlags@CAnimatedTransitionVisual@@0L@$00@@YA?AVDirtyFlags@@XZ @ 0x180015DD8 (--$ConvertDirtyEnumToFlag@$MW4ATVDirtyFlags@CAnimatedTransitionVisual@@0L@$00@@YA-AVDirtyFlags@@.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@MEAAXVDirtyFlags@@@Z @ 0x180059550 (-SetDirtyFlags@CThumbnailVisual@@MEAAXVDirtyFlags@@@Z.c)
 *     ?Release@CVisualBrush@@QEAAXXZ @ 0x180083FAC (-Release@CVisualBrush@@QEAAXXZ.c)
 */

void __fastcall CThumbnailVisual::OnRootVisualChanged(
        CThumbnailVisual *this,
        const struct CSecondaryWindowRepresentation *a2)
{
  int *v3; // rax
  int v4; // [rsp+30h] [rbp+8h] BYREF

  CVisualBrush::Release((CThumbnailVisual *)((char *)this + 24));
  v3 = ___ConvertDirtyEnumToFlag__MW4ATVDirtyFlags_CAnimatedTransitionVisual__0L__00__YA_AVDirtyFlags__XZ(&v4);
  CThumbnailVisual::SetDirtyFlags((CThumbnailVisual *)((char *)this - 344), *v3);
}
