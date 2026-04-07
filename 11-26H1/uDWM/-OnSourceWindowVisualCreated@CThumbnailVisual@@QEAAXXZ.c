/*
 * XREFs of ?OnSourceWindowVisualCreated@CThumbnailVisual@@QEAAXXZ @ 0x18008D408
 * Callers:
 *     ?UpdateThumbnailsForNewWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x180059450 (-UpdateThumbnailsForNewWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ??$ConvertDirtyEnumToFlag@$MW4ATVDirtyFlags@CAnimatedTransitionVisual@@0L@$00@@YA?AVDirtyFlags@@XZ @ 0x180015DD8 (--$ConvertDirtyEnumToFlag@$MW4ATVDirtyFlags@CAnimatedTransitionVisual@@0L@$00@@YA-AVDirtyFlags@@.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@MEAAXVDirtyFlags@@@Z @ 0x180059550 (-SetDirtyFlags@CThumbnailVisual@@MEAAXVDirtyFlags@@@Z.c)
 */

void __fastcall CThumbnailVisual::OnSourceWindowVisualCreated(CThumbnailVisual *this)
{
  int *v1; // rax
  CVisual *v2; // r8
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v1 = ___ConvertDirtyEnumToFlag__MW4ATVDirtyFlags_CAnimatedTransitionVisual__0L__00__YA_AVDirtyFlags__XZ(&v3);
  CThumbnailVisual::SetDirtyFlags(v2, *v1);
}
