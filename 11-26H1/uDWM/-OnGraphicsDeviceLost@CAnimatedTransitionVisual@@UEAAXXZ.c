/*
 * XREFs of ?OnGraphicsDeviceLost@CAnimatedTransitionVisual@@UEAAXXZ @ 0x1800963B0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z @ 0x180015F50 (-SetDirtyFlags@CVisual@@MEAAXVDirtyFlags@@@Z.c)
 *     ??$ConvertDirtyEnumToFlag@$MW4VisualDirtyFlags@CVisual@@04$00@@YA?AVDirtyFlags@@XZ @ 0x1800164EC (--$ConvertDirtyEnumToFlag@$MW4VisualDirtyFlags@CVisual@@04$00@@YA-AVDirtyFlags@@XZ.c)
 *     ?Release@CBitmapBrush@@QEAAXXZ @ 0x18009B690 (-Release@CBitmapBrush@@QEAAXXZ.c)
 */

void __fastcall CAnimatedTransitionVisual::OnGraphicsDeviceLost(CAnimatedTransitionVisual *this)
{
  CBitmapBrush *v2; // rcx
  int *v3; // rax
  int v4; // [rsp+30h] [rbp+8h] BYREF

  v2 = (CAnimatedTransitionVisual *)((char *)this + 320);
  if ( *(_QWORD *)v2 )
  {
    CBitmapBrush::Release(v2);
    v3 = ___ConvertDirtyEnumToFlag__MW4VisualDirtyFlags_CVisual__04_00__YA_AVDirtyFlags__XZ(&v4);
    CVisual::SetDirtyFlags((CAnimatedTransitionVisual *)((char *)this - 208), *v3);
  }
}
