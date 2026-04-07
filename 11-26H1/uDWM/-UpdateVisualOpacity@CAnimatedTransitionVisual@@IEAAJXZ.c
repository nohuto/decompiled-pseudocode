/*
 * XREFs of ?UpdateVisualOpacity@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180077748
 * Callers:
 *     ?Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180089430 (-Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?UpdateOpacity@CVisual@@UEAAJXZ @ 0x180005470 (-UpdateOpacity@CVisual@@UEAAJXZ.c)
 *     ?SetOpacity@CVisual@@QEAAXN@Z @ 0x180013F00 (-SetOpacity@CVisual@@QEAAXN@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::UpdateVisualOpacity(
        CAnimatedTransitionVisual *this,
        __int64 a2,
        __int64 a3)
{
  float v3; // xmm0_4

  v3 = *((float *)this + 170);
  if ( v3 != *((float *)this + 171) )
  {
    CVisual::SetOpacity((CAnimatedTransitionVisual *)((char *)this + 8), v3, a3);
    CVisual::UpdateOpacity((CAnimatedTransitionVisual *)((char *)this + 8));
    *((_DWORD *)this + 171) = *((_DWORD *)this + 170);
  }
  return 0LL;
}
