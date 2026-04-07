/*
 * XREFs of ?GetCurrentBrush@CAnimatedTransitionVisual@@IEAAPEAVCSurfaceBrush@@XZ @ 0x180096304
 * Callers:
 *     ?UpdateGeometry2D@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180096EB8 (-UpdateGeometry2D@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?_Update3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800974E4 (-_Update3DResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

struct CSurfaceBrush *__fastcall CAnimatedTransitionVisual::GetCurrentBrush(CAnimatedTransitionVisual *this)
{
  struct CSurfaceBrush *result; // rax

  result = (CAnimatedTransitionVisual *)((char *)this + 536);
  if ( !*((_QWORD *)this + 67) )
    return (struct CSurfaceBrush *)(((unsigned __int64)this + 520) & -(__int64)(*((_QWORD *)this + 65) != 0LL));
  return result;
}
